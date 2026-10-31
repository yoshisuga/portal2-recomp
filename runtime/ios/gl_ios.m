// OpenGL hôte sur iOS : contexte ES 2 par SDL, gl4es par-dessus. Voir gl_ios.h.
#include <TargetConditionals.h>
#if TARGET_OS_IPHONE
#define GLES_SILENCE_DEPRECATION 1
#import <OpenGLES/EAGL.h>
#import <UIKit/UIKit.h>
#include <math.h>
#include <OpenGLES/ES3/gl.h>
#include <SDL.h>
#include <SDL_syswm.h>
#include <dlfcn.h>
#include <errno.h>
#include <sys/stat.h>
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include "gl4esinit.h"

void gl4es_pre_swap(void);
void gl4es_post_swap(void);

static void *gles;
static GLuint system_framebuffer;   // FBO de la vue SDL : le « 0 » d'iOS
static GLuint system_colorbuffer;   // son renderbuffer couleur, présenté par SDL
static int drawable_width, drawable_height;
static void (*real_bind_framebuffer)(GLenum, GLuint);
static void (*real_get_integerv)(GLenum, GLint *);

// Sur iOS il n'y a pas de framebuffer par défaut : SDL dessine dans son FBO.
// togl lie 0 pour le tampon arrière ; gl4es transmet tel quel, d'où cette
// traduction au niveau des fonctions ES qu'il appelle.
static void bind_framebuffer(GLenum target, GLuint framebuffer) {
    real_bind_framebuffer(target, framebuffer ? framebuffer : system_framebuffer);
}
static void get_integerv(GLenum name, GLint *values) {
    real_get_integerv(name, values);
    if (name == GL_FRAMEBUFFER_BINDING && (GLuint)values[0] == system_framebuffer) values[0] = 0;
}
// gl4es détecte les capacités par la liste d'extensions, à la manière d'ES 2.
// Dans un contexte ES 3, celles devenues standard n'y figurent plus : il les
// croit absentes (profondeur 16 bits, stencil séparé que iOS refuse, RGBA4,
// textures redimensionnées en puissances de deux). On les lui rend.
static const GLubyte *(*real_get_string)(GLenum);
static const GLubyte *es_get_string(GLenum name) {
    static char *extensions;
    const GLubyte *s = real_get_string(name);
    if (name != GL_EXTENSIONS || !s) return s;
    const char *version = (const char *)real_get_string(GL_VERSION);
    if (!version || !strstr(version, "OpenGL ES 3")) return s;
    if (!extensions && asprintf(&extensions, "%s GL_OES_packed_depth_stencil GL_OES_depth24 GL_OES_depth_texture "
            "GL_OES_rgb8_rgba8 GL_OES_element_index_uint GL_OES_texture_npot GL_EXT_blend_minmax GL_EXT_texture_rg "
            "GL_OES_texture_half_float GL_OES_texture_float GL_OES_fbo_render_mipmap", s) < 0) return s;
    return (const GLubyte *)extensions;
}
// P2_IOS_GL_TRACE=1 : échecs de compilation et d'édition de liens des shaders
// ES que gl4es produit à partir du GLSL de togl (journal + source, 20 premiers).
static void (*es_compile_shader)(GLuint);
static void (*es_link_program)(GLuint);
static void es_compile(GLuint shader) {
    es_compile_shader(shader);
    GLint ok = 1; glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (ok) return;
    char log[2048] = {0};
    glGetShaderInfoLog(shader, sizeof(log), NULL, log);
    // Clé : première ligne ERROR (sans numéro de ligne), comptée ; source
    // journalisée pour la première occurrence de chaque erreur distincte.
    const char *error = strstr(log, "ERROR:");
    char key[160] = "?";
    if (error) {
        const char *colon = strchr(error + 6, ':'); colon = colon ? strchr(colon + 1, ':') : NULL;
        snprintf(key, sizeof(key), "%s", colon ? colon + 1 : error);
        key[strcspn(key, "\n")] = 0;
    }
    static struct { char key[160]; int count; } seen[64];
    static int distinct, total;
    ++total;
    for (int i = 0; i < distinct; ++i)
        if (!strcmp(seen[i].key, key)) {
            if (++seen[i].count % 50 == 0) fprintf(stderr, "[gl-shader] %d× : %s (total %d)\n", seen[i].count, key, total);
            return;
        }
    if (distinct < 64) { snprintf(seen[distinct].key, sizeof(seen[0].key), "%s", key); seen[distinct++].count = 1; }
    char *source = malloc(65536);
    if (source) glGetShaderSource(shader, 65536, NULL, source);
    fprintf(stderr, "[gl-shader] nouvelle erreur (total %d) : %s\n%s\n--- source ---\n%s\n--- fin ---\n", total, key, log,
            source ? source : "");
    free(source);
}
static void es_link(GLuint program) {
    es_link_program(program);
    static int failures;
    GLint ok = 1; glGetProgramiv(program, GL_LINK_STATUS, &ok);
    if (ok || failures++ >= 20) return;
    char log[2048] = {0};
    glGetProgramInfoLog(program, sizeof(log), NULL, log);
    fprintf(stderr, "[gl-shader] échec d'édition de liens %u : %s\n", program, log);
}
// Contexte ES 3 : le GLSL ES 1.00 produit par gl4es est réécrit en 3.00
// (textures 3D, échantillonneurs d'ombre ; voir essl3.c).
char *rt_essl1_to_essl3(const char *source, int is_fragment, int srgb);
int rt_ios_srgb_enabled(void);
void rt_ios_srgb_bind_texture(GLenum target, GLuint name);
void rt_ios_srgb_tex_image(GLenum target, GLint level, GLint internal);
void rt_ios_srgb_decode(GLenum target, GLint value);
void rt_ios_srgb_wrap_mode(GLenum target, GLenum name, GLint value);
void *rt_ios_srgb_wrap(const char *name, void *fn);
static void (*es_shader_source)(GLuint, GLsizei, const GLchar *const *, const GLint *);
static void shader_source(GLuint shader, GLsizei count, const GLchar *const *strings, const GLint *lengths) {
    const char *version = (const char *)real_get_string(GL_VERSION);
    if (!version || !strstr(version, "OpenGL ES 3") || count <= 0) { es_shader_source(shader, count, strings, lengths); return; }
    size_t total = 0;
    for (GLsizei i = 0; i < count; ++i) total += lengths && lengths[i] >= 0 ? (size_t)lengths[i] : strlen(strings[i]);
    char *joined = malloc(total + 1), *at = joined;
    if (!joined) { es_shader_source(shader, count, strings, lengths); return; }
    for (GLsizei i = 0; i < count; ++i) {
        size_t n = lengths && lengths[i] >= 0 ? (size_t)lengths[i] : strlen(strings[i]);
        memcpy(at, strings[i], n); at += n;
    }
    *at = 0;
    GLint type = 0; glGetShaderiv(shader, GL_SHADER_TYPE, &type);
    char *converted = rt_essl1_to_essl3(joined, type == GL_FRAGMENT_SHADER, rt_ios_srgb_enabled());
    // P2_IOS_WHITE_COLOR=1 (essai) : couleur de sommet lue comme du blanc dans
    // les shaders de fragments.
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_WHITE_COLOR")) {
        const char *from = "_gl4es_FrontColor.", *to = "vec4(1.0).";
        size_t n = 0;
        for (const char *p = strstr(converted, from); p; p = strstr(p + 1, from)) ++n;
        char *out = n ? malloc(strlen(converted) + n * strlen(to) + 1) : NULL, *w = out;
        if (out) {
            for (const char *p = converted, *q; (q = strstr(p, from)); p = q + strlen(from)) {
                memcpy(w, p, (size_t)(q - p)); w += q - p;
                strcpy(w, to); w += strlen(to);
                if (!strstr(q + strlen(from), from)) { strcpy(w, q + strlen(from)); break; }
            }
            free(converted); converted = out;
        }
    }
    // P2_IOS_DEBUG_SHADOW=r (essai) : shadow2D compare à la profondeur r au lieu de
    // celle du shader (0 : toujours éclairé si la texture d'ombre est lisible).
    // « z » : renvoie la profondeur de référence du shader (c.z).
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_DEBUG_SHADOW")) {
        const char *from = "{ return vec4(texture(s, c)); }", *p = strstr(converted, from);
        if (p) {
            char to[96];
            const char *r = getenv("P2_IOS_DEBUG_SHADOW");
            if (*r == 'z') snprintf(to, sizeof(to), "{ return vec4(c.z); }");
            else snprintf(to, sizeof(to), "{ return vec4(texture(s, vec3(c.xy, %s))); }", r);
            char *out = malloc(strlen(converted) + strlen(to) + 1);
            memcpy(out, converted, (size_t)(p - converted));
            strcpy(out + (p - converted), to);
            strcat(out, p + strlen(from));
            free(converted); converted = out;
        }
    }
    // P2_IOS_DEBUG_ENV=1 : les shaders qui lisent une cubemap en unité 2 (reflets)
    // affichent l'échantillon brut de la cubemap (valeur/2, pour voir au-delà de 1).
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_DEBUG_ENV") && strstr(converted, "uniform samplerCube sampler2;")) {
        char *hit = strstr(converted, " = p2_texture(2,  sampler2,"), *line = hit;
        while (line && line > converted && line[-1] != '\n') --line;
        char *eol = hit ? strchr(hit, '\n') : NULL, *main_at = strstr(converted, "void p2_main()");
        char *last = strrchr(converted, '}');
        const char *output = strstr(converted, "out vec4 gl4es_FragColor;") ? "gl4es_FragColor" :
                             strstr(converted, "gl4es_FragData[4];") ? "gl4es_FragData[0]" : NULL;
        if (hit && eol && main_at && last && output && hit - line < 8 && main_at < line) {
            char reg[8] = {0}; memcpy(reg, line, (size_t)(hit - line));
            char *debug = malloc(strlen(converted) + 400);
            if (debug) {
                size_t a = (size_t)(main_at - converted), b = (size_t)(eol + 1 - converted), c = (size_t)(last - converted);
                char *w = debug;
                memcpy(w, converted, a); w += a;
                w += sprintf(w, "vec4 p2_envdbg;\n");
                memcpy(w, converted + a, b - a); w += b - a;
                w += sprintf(w, "p2_envdbg = %s;\n", reg);
                memcpy(w, converted + b, c - b); w += c - b;
                sprintf(w, "%s = vec4(p2_envdbg.rgb * 0.5, 1.0) + 0.0001 * %s;\n}\n", output, output);
                free(converted); converted = debug;
            }
        }
    }
    // P2_IOS_DEBUG_ID=1 : chaque shader de fragments s'affiche d'une couleur unie
    // tirée de l'empreinte de son source (64 teintes, 4 niveaux par canal) ;
    // source enregistré dans Documents/ids/<teinte>_<empreinte>.glsl.
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_DEBUG_ID") && strstr(converted, "in vec4 oT2;")) {
        const char *output = strstr(converted, "out vec4 gl4es_FragColor;") ? "gl4es_FragColor" :
                             strstr(converted, "gl4es_FragData[4];") ? "gl4es_FragData[0]" : NULL;
        char *last = output ? strrchr(converted, '}') : NULL;
        uint32_t hash = 2166136261u;
        for (const char *p = joined; *p; ++p) hash = (hash ^ (uint8_t)*p) * 16777619u;
        unsigned tint = hash % 64;
        if (last && getenv("HOME")) {
            char path[1024];
            snprintf(path, sizeof(path), "%s/Documents/ids", getenv("HOME")); mkdir(path, 0755);
            snprintf(path, sizeof(path), "%s/Documents/ids/%02u_%08x.glsl", getenv("HOME"), tint, hash);
            FILE *f = fopen(path, "w"); if (f) { fputs(converted, f); fclose(f); }
            size_t head = (size_t)(last - converted);
            char *debug = malloc(strlen(converted) + 200);
            if (debug) {
                memcpy(debug, converted, head);
                sprintf(debug + head, "%s = vec4(%.3f, %.3f, %.3f, 1.0) + 0.0001 * %s;\n}\n", output,
                        ((tint >> 4) & 3) / 3.0, ((tint >> 2) & 3) / 3.0, (tint & 3) / 3.0, output);
                free(converted); converted = debug;
            }
        }
    }
    // P2_IOS_DEBUG_UV=1 : chaque shader de fragments qui reçoit oT0 affiche
    // fract(oT0.xy) (diagnostic des coordonnées de texture).
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_DEBUG_UV") && strstr(converted, "in vec4 oT0;")) {
        const char *output = strstr(converted, "out vec4 gl4es_FragColor;") ? "gl4es_FragColor" :
                             strstr(converted, "gl4es_FragData[4];") ? "gl4es_FragData[0]" : NULL;
        char *last = output ? strrchr(converted, '}') : NULL;
        if (last) {
            size_t head = (size_t)(last - converted);
            char *debug = malloc(strlen(converted) + 160);
            if (debug) {
                memcpy(debug, converted, head);
                sprintf(debug + head, "%s = vec4(fract(oT0.xy), 0.0, 1.0) + 0.0001 * %s;\n}\n", output, output);
                free(converted); converted = debug;
            }
        }
    }
    // P2_IOS_NO_LIGHT4=1 (essai) : couleur de la 4e lumière (pc[20..22].w) lue à 0.
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_NO_LIGHT4")) {
        static const char *reads[] = {"pc[20].w", "pc[21].w", "pc[22].w"};
        for (int k = 0; k < 3; ++k)
            for (char *at = strstr(converted, reads[k]); at; at = strstr(at, reads[k])) memcpy(at, "0.000000", 8), at += 8;
    }
    // P2_IOS_DEBUG_SPLIT=1 : les shaders de fragments à lightmap (unités 0, 1 et
    // 12) affichent en bandes verticales répétées tous les 600 pixels la texture
    // de base, la lightmap (x4) et la texture de détail, lues telles quelles.
    if (converted && type == GL_FRAGMENT_SHADER && getenv("P2_IOS_DEBUG_SPLIT")) {
        char regs[3][8] = {{0}};
        static const int units[3] = {0, 1, 12};
        for (int k = 0; k < 3; ++k) {
            char pattern[64];
            snprintf(pattern, sizeof(pattern), " = p2_texture(%d,  sampler%d,", units[k], units[k]);
            const char *hit = strstr(converted, pattern), *line = hit;
            while (line && line > converted && line[-1] != '\n') --line;
            if (hit && hit - line < 8) memcpy(regs[k], line, (size_t)(hit - line));
        }
        char *end = strstr(converted, "\nvoid main()");
        while (end && end > converted && *end != '}') --end;
        if (regs[0][0] && regs[1][0] && regs[2][0] && end && *end == '}') {
            size_t head = (size_t)(end - converted);
            char *debug = malloc(strlen(converted) + 512);
            if (debug) {
                memcpy(debug, converted, head);
                if (getenv("P2_IOS_DEBUG_SPLIT")[0] == '2')   // 2 : texture de base brute, UV, mip 4, taille liée
                    sprintf(debug + head, "{ float b = fract(gl_FragCoord.x / 800.0);\n"
                            "gl4es_FragData[0] = vec4(b < 0.25 ? texture(sampler0, oT0.xy).rgb : b < 0.5 ? vec3(fract(oT0.xy), 0.0) :"
                            " b < 0.75 ? textureLod(sampler0, oT0.xy, 4.0).rgb : vec3(vec2(textureSize(sampler0, 0)) / 1024.0, 0.0), 1.0); }\n%s",
                            end);
                else
                sprintf(debug + head, "{ float b = fract(gl_FragCoord.x / 600.0);\n"
                        "gl4es_FragData[0] = vec4(b < 0.333 ? %s.rgb : b < 0.667 ? 4.0 * %s.rgb : %s.rgb, 1.0); }\n%s",
                        regs[0], regs[1], regs[2], end);
                free(converted); converted = debug;
            }
        }
    }
    const GLchar *one = converted ? converted : joined;
    const char *dump = getenv("P2_IOS_SHADER_DUMP");   // dossier : un fichier par source
    if (dump && *dump) {
        static int counter;
        char path[1024];
        const char *home = *dump != '/' && getenv("HOME") ? getenv("HOME") : "";   // relatif : au conteneur (HOME)
        snprintf(path, sizeof(path), "%s%s%s/%05d_%s.glsl", home, *home ? "/" : "", dump, counter++,
                 type == GL_FRAGMENT_SHADER ? "fs" : "vs");
        FILE *f = fopen(path, "w");
        if (f) { fputs(one, f); fclose(f); }
        else if (counter == 1) fprintf(stderr, "[gl-shader] %s : %s\n", path, strerror(errno));
    }
    es_shader_source(shader, 1, &one, NULL);
    free(converted); free(joined);
}
// gl4es (pensé pour ES 2) envoie des formats internes non dimensionnés, valides
// avec les extensions d'ES 2 (OES_depth_texture, OES_packed_depth_stencil,
// OES_texture_half_float) mais refusés par un contexte ES 3 (INVALID_OPERATION) :
// tampons de profondeur/stencil des cibles de rendu, cubemaps HDR RGBA16F.
// Formats dimensionnés équivalents d'ES 3.
#define HALF_FLOAT_OES 0x8D61
static GLenum es3_type(GLenum type) { return type == HALF_FLOAT_OES ? GL_HALF_FLOAT : type; }
static GLint es3_internal(GLint internal, GLenum format, GLenum type) {
    switch (internal) {
    case GL_DEPTH_COMPONENT:
        return type == GL_UNSIGNED_INT ? GL_DEPTH_COMPONENT24 : type == GL_FLOAT ? GL_DEPTH_COMPONENT32F : GL_DEPTH_COMPONENT16;
    case GL_DEPTH_STENCIL: return type == GL_FLOAT_32_UNSIGNED_INT_24_8_REV ? GL_DEPTH32F_STENCIL8 : GL_DEPTH24_STENCIL8;
    case GL_RGBA: case GL_RGB: case GL_RG: case GL_RED:
        if (type != HALF_FLOAT_OES && type != GL_HALF_FLOAT && type != GL_FLOAT) return internal;
        return internal == GL_RGBA ? GL_RGBA16F : internal == GL_RGB ? GL_RGB16F : internal == GL_RG ? GL_RG16F : GL_R16F;
    default: (void)format; return internal;
    }
}
static void (*es_tex_image_2d)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
static void (*es_tex_sub_image_2d)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
static void half_stats(const char *what, GLsizei w, GLsizei h, GLenum f, GLenum ty, const void *d);
static GLint depth_textures[64];   // P2_IOS_SHADOW_TRACE : noms des textures de profondeur
static int ndepth_textures;
static void es3_tex_image_2d(GLenum t, GLint l, GLint i, GLsizei w, GLsizei h, GLint b, GLenum f, GLenum ty, const void *d) {
    es_tex_image_2d(t, l, es3_internal(i, f, ty), w, h, b, f, es3_type(ty), d);
    if (f == GL_DEPTH_COMPONENT && t == GL_TEXTURE_2D && ndepth_textures < 64 && getenv("P2_IOS_SHADOW_TRACE")) {
        GLint name = 0; real_get_integerv(GL_TEXTURE_BINDING_2D, &name);
        depth_textures[ndepth_textures++] = name;
        fprintf(stderr, "[ombre] texture de profondeur %d (%dx%d, interne %#x type %#x)\n", name, w, h, es3_internal(i, f, ty), ty);
    }
    { const char *e = getenv("P2_IOS_GL_TRACE"); if (e && *e == '2') half_stats(t == GL_TEXTURE_2D ? "image" : "cube", w, h, f, ty, d); }
    static int all = -1;   // P2_IOS_GL_TRACE=2 : ce qu'OpenGL ES reçoit vraiment, niveau par niveau
    if (all < 0) { const char *e = getenv("P2_IOS_GL_TRACE"); all = e && *e == '2'; }
    if (all && (t == GL_TEXTURE_2D || (t >= 0x8515 && t <= 0x851A))) {   // 2D et faces de cubemap
        GLint name = 0; real_get_integerv(t == GL_TEXTURE_2D ? GL_TEXTURE_BINDING_2D : 0x8514 /* BINDING_CUBE_MAP */, &name);
        const unsigned char *p = d;
        fprintf(stderr, "[es-up] cible %#x tex %d niveau %d interne %#x -> %#x %dx%d format %#x type %#x err %#x data %p %u,%u,%u,%u\n", t, name, l, i,
                es3_internal(i, f, ty), w, h, f, es3_type(ty), glGetError(), d, p ? p[0] : 0, p ? p[1] : 0, p ? p[2] : 0, p ? p[3] : 0);
    }
}
// P2_IOS_GL_TRACE=2 : valeurs d'un envoi RGBA en demi-flottants (lightmaps HDR) :
// maximum, part au-dessus de 1 et de 16, infinis et NaN, premier texel.
static void half_stats(const char *what, GLsizei w, GLsizei h, GLenum f, GLenum ty, const void *d) {
    if (!d || f != GL_RGBA || (ty != GL_HALF_FLOAT && ty != HALF_FLOAT_OES)) return;
    const __fp16 *p = d;
    size_t n = (size_t)w * h * 4, over1 = 0, over16 = 0, bad = 0;
    float max = 0;
    for (size_t i = 0; i < n; ++i) {
        if ((i & 3) == 3) continue;   // alpha
        float v = (float)p[i];
        if (v != v || __builtin_isinf(v)) { ++bad; continue; }
        if (v > max) max = v;
        over1 += v > 1, over16 += v > 16;
    }
    fprintf(stderr, "[half] %s %dx%d max %.3g >1 %zu >16 %zu inf/nan %zu sur %zu, texel0 %.3g %.3g %.3g %.3g\n", what, w, h,
            max, over1, over16, bad, n / 4 * 3, (float)p[0], (float)p[1], (float)p[2], (float)p[3]);
}
static void es3_tex_sub_image_2d(GLenum t, GLint l, GLint x, GLint y, GLsizei w, GLsizei h, GLenum f, GLenum ty, const void *d) {
    es_tex_sub_image_2d(t, l, x, y, w, h, f, es3_type(ty), d);
    { const char *e = getenv("P2_IOS_GL_TRACE"); if (e && *e == '2') half_stats("sub", w, h, f, ty, d); }
    { const char *e = getenv("P2_IOS_GL_TRACE"); if (e && *e == '2' && t == GL_TEXTURE_2D) {
        GLint name = 0; real_get_integerv(GL_TEXTURE_BINDING_2D, &name);
        fprintf(stderr, "[es-sub] tex %d niveau %d %dx%d+%d+%d format %#x type %#x err %#x data %p\n", name, l, w, h, x, y,
                f, es3_type(ty), glGetError(), d); } }
}
// Écriture sans synchronisation (runtime/gl.c, stream_subdata) : le pilote ES
// d'Apple attend que le GPU ait fini avec le tampon avant un glBufferSubData
// (gldFinishObject, ~30 % du thread principal en jeu). gl.c ne la demande que
// pour un ajout au-delà de tout ce qui a été écrit dans le stockage courant :
// aucune commande en attente ne peut lire cette plage.
_Thread_local int rt_ios_gl_unsync_next;
static void (*es_buffer_sub_data)(GLenum, GLintptr, GLsizeiptr, const void *);
static void *(*es_map_buffer_range)(GLenum, GLintptr, GLsizeiptr, GLbitfield);
static GLboolean (*es_unmap_buffer)(GLenum);
static void es3_buffer_sub_data(GLenum t, GLintptr offset, GLsizeiptr size, const void *data) {
    if (rt_ios_gl_unsync_next && size > 0) {
        rt_ios_gl_unsync_next = 0;
        void *p = es_map_buffer_range(t, offset, size, GL_MAP_WRITE_BIT | GL_MAP_UNSYNCHRONIZED_BIT | GL_MAP_INVALIDATE_RANGE_BIT);
        if (p) {
            memcpy(p, data, (size_t)size);
            if (es_unmap_buffer(t)) return;
        }
        // Projection refusée ou contenu perdu : chemin synchronisé (réécrit la plage).
    }
    es_buffer_sub_data(t, offset, size, data);
}
// Couleurs BGRA lues dans le tampon (correctif de gl4es, realize_glenv) : le
// nuanceur de sommets les permute selon l'uniforme p2_bgra (essl3.c). Par
// programme ES : emplacement de l'uniforme et dernière valeur envoyée, oubliés
// à chaque édition de liens.
typedef struct { GLuint program; GLint location; unsigned value; unsigned generation; } BgraEntry;
static BgraEntry bgra_cache[1024];
static unsigned bgra_generation = 1;
static GLint (*es_get_uniform_location)(GLuint, const GLchar *);
static void (*es_uniform1i)(GLint, GLint);
static void (*es_link_program_always)(GLuint);
static void link_program_always(GLuint program) { ++bgra_generation; es_link_program_always(program); }
static BgraEntry *bgra_entry(GLuint program) {
    if (!program || !es_get_uniform_location) return NULL;
    BgraEntry *e = &bgra_cache[(program * 2654435761u) % 1024];
    if (e->program != program || e->generation != bgra_generation) {
        *e = (BgraEntry){program, es_get_uniform_location(program, "p2_bgra"), ~0u, bgra_generation};
    }
    return e;
}
int gl4es_p2_bgra_program(GLuint program) { BgraEntry *e = bgra_entry(program); return e && e->location >= 0; }
void gl4es_p2_bgra_mask(GLuint program, unsigned mask) {
    BgraEntry *e = bgra_entry(program);
    if (!e || e->location < 0 || e->value == mask) return;
    e->value = mask;
    es_uniform1i(e->location, (GLint)mask);   // programme courant : celui du dessin
}
// P2_IOS_UNIFORM_TRACE=1 (ou =N, seuil) : envois glUniform4fv contenant une valeur
// hors de ±64 (ou ±N ; NaN/infini), avec l'indice dans pc[]/vc[] du programme courant
// (constantes absurdes : voir vector_constant_copy, runtime/shims.c).
static void (*es_uniform4fv)(GLint, GLsizei, const GLfloat *);
static void uniform4fv_traced(GLint location, GLsizei count, const GLfloat *v) {
    es_uniform4fv(location, count, v);
    static int reported;
    if (reported > 3000 || !v) return;
    static GLint (*location_of)(GLuint, const GLchar *);
    if (!location_of) location_of = dlsym(gles, "glGetUniformLocation");
    for (GLsizei i = 0; i < count; ++i) {
        int odd = 0;
        static float limit;
        if (!limit) { limit = (float)atof(getenv("P2_IOS_UNIFORM_TRACE")); if (limit <= 1) limit = 64; }
        for (int c = 0; c < 4; ++c) { float x = v[i * 4 + c]; odd |= x != x || x > limit || x < -limit; }
        if (!odd) continue;
        GLint program = 0; real_get_integerv(0x8B8D /* CURRENT_PROGRAM */, &program);
        GLint pc = location_of(program, "pc"), vc = location_of(program, "vc"), at = location + i;
        int in_pc = pc >= 0 && at >= pc && (vc < pc || at < vc || vc < 0);
        {   // une fois par (registre, valeurs)
            static struct { int pc, index; float v[4]; } seen[2048]; static int nseen;
            int index = in_pc ? at - pc : at - vc, known = 0;
            for (int k = 0; k < nseen && !known; ++k)
                known = seen[k].pc == in_pc && seen[k].index == index && !memcmp(seen[k].v, v + i * 4, 16);
            if (known) continue;
            if (nseen < 2048) { seen[nseen].pc = in_pc; seen[nseen].index = index; memcpy(seen[nseen].v, v + i * 4, 16); ++nseen; }
        }
        fprintf(stderr, "[uniform] programme %d emplacement %d (%s[%d]) : %g %g %g %g\n", program, at,
                in_pc ? "pc" : vc >= 0 && at >= vc ? "vc" : "?", in_pc ? at - pc : vc >= 0 && at >= vc ? at - vc : at,
                v[i * 4], v[i * 4 + 1], v[i * 4 + 2], v[i * 4 + 3]);
        if (++reported > 3000) return;
    }
}
// P2_IOS_SHADOW_TRACE=1 : état réel de l'unité 7 (texture d'ombre de la lampe)
// aux tracés des programmes qui ont un sampler7, une ligne par état distinct.
static void (*es_draw_elements)(GLenum, GLsizei, GLenum, const void *);
static void (*es_draw_range_elements)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *);
static void shadow_state(void) {
    static void (*gi)(GLenum, GLint *), (*gtp)(GLenum, GLenum, GLint *), (*at)(GLenum);
    static GLint (*loc)(GLuint, const GLchar *);
    static GLenum (*status)(GLenum);
    static int seen[64][8], nseen;
    if (!gi) gi = dlsym(gles, "glGetIntegerv"), gtp = dlsym(gles, "glGetTexParameteriv"), at = dlsym(gles, "glActiveTexture"),
             loc = dlsym(gles, "glGetUniformLocation"), status = dlsym(gles, "glCheckFramebufferStatus");
    GLint program = 0, active = 0;
    gi(GL_CURRENT_PROGRAM, &program);
    if (!program || loc(program, "sampler7") < 0) return;
    int s[8] = {0};
    gi(GL_ACTIVE_TEXTURE, &active);
    at(GL_TEXTURE7);
    gi(GL_TEXTURE_BINDING_2D, &s[0]);
    gi(GL_SAMPLER_BINDING, &s[1]);
    if (s[0]) {
        gtp(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_MODE, &s[2]); gtp(GL_TEXTURE_2D, GL_TEXTURE_COMPARE_FUNC, &s[3]);
        gtp(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, &s[4]); gtp(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, &s[5]);
        gtp(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, &s[6]);
    }
    at(active);
    s[7] = glGetError();
    for (int k = 0; k < nseen; ++k) if (!memcmp(seen[k], s, sizeof(s))) return;
    if (nseen < 64) memcpy(seen[nseen++], s, sizeof(s));
    int depth = 0;
    for (int k = 0; k < ndepth_textures; ++k) depth |= depth_textures[k] == s[0];
    fprintf(stderr, "[ombre] programme %d unité 7 : texture %d%s sampler %d comparaison %#x %#x min %#x mag %#x max_level %d err %#x\n",
            program, s[0], depth ? " (profondeur)" : "", s[1], s[2], s[3], s[4], s[5], s[6], s[7]);
}
// Erreur d'un tracé : programme, puis ses samplers (unité et type), une fois par programme.
static void draw_error(void) {
    GLenum err = glGetError();
    if (!err) return;
    static void (*gi)(GLenum, GLint *), (*gpi)(GLuint, GLenum, GLint *), (*gu)(GLuint, GLint, GLint *);
    static void (*gau)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
    static GLint (*loc)(GLuint, const GLchar *);
    static GLint reported[256]; static int nreported;
    if (!gi) gi = dlsym(gles, "glGetIntegerv"), gpi = dlsym(gles, "glGetProgramiv"), gu = dlsym(gles, "glGetUniformiv"),
             gau = dlsym(gles, "glGetActiveUniform"), loc = dlsym(gles, "glGetUniformLocation");
    GLint program = 0, count = 0;
    gi(GL_CURRENT_PROGRAM, &program);
    for (int k = 0; k < nreported; ++k) if (reported[k] == program) return;
    if (nreported < 256) reported[nreported++] = program;
    gpi(program, GL_ACTIVE_UNIFORMS, &count);
    char line[1024]; int at = snprintf(line, sizeof(line), "[ombre] erreur %#x au tracé, programme %d :", err, program);
    for (GLint u = 0; u < count && at < (int)sizeof(line) - 64; ++u) {
        char name[64]; GLint size; GLenum type; GLsizei len;
        gau(program, u, sizeof(name), &len, &size, &type, name);
        if (type != GL_SAMPLER_2D && type != GL_SAMPLER_CUBE && type != GL_SAMPLER_3D && type != GL_SAMPLER_2D_SHADOW) continue;
        GLint unit = -1; gu(program, loc(program, name), &unit);
        at += snprintf(line + at, sizeof(line) - at, " %s=%d(%s)", name, unit,
                       type == GL_SAMPLER_2D ? "2D" : type == GL_SAMPLER_CUBE ? "cube" : type == GL_SAMPLER_3D ? "3D" : "ombre");
    }
    fprintf(stderr, "%s\n", line);
}
static void draw_elements_traced(GLenum m, GLsizei n, GLenum t, const void *i) {
    shadow_state(); glGetError(); es_draw_elements(m, n, t, i); draw_error();
}
static void draw_range_elements_traced(GLenum m, GLuint a, GLuint b, GLsizei n, GLenum t, const void *i) {
    shadow_state(); glGetError(); es_draw_range_elements(m, a, b, n, t, i); draw_error();
}
static void *gles_function(const char *name) {
    if (getenv("P2_IOS_SHADOW_TRACE")) {
        if (!strcmp(name, "glDrawElements")) { es_draw_elements = dlsym(gles, name); return (void *)draw_elements_traced; }
        if (!strcmp(name, "glDrawRangeElements")) { es_draw_range_elements = dlsym(gles, name); return (void *)draw_range_elements_traced; }
    }
    if (!strcmp(name, "glUniform4fv") && getenv("P2_IOS_UNIFORM_TRACE")) {
        es_uniform4fv = dlsym(gles, name);
        return (void *)uniform4fv_traced;
    }
    if (!strcmp(name, "glBufferSubData")) {
        es_buffer_sub_data = dlsym(gles, name);
        es_map_buffer_range = dlsym(gles, "glMapBufferRange");
        es_unmap_buffer = dlsym(gles, "glUnmapBuffer");
        return (void *)es3_buffer_sub_data;
    }
    if (!strcmp(name, "glTexImage2D")) { es_tex_image_2d = dlsym(gles, name); return (void *)es3_tex_image_2d; }
    if (!strcmp(name, "glTexSubImage2D")) { es_tex_sub_image_2d = dlsym(gles, name); return (void *)es3_tex_sub_image_2d; }
    if (!strcmp(name, "glGetString")) return (void *)es_get_string;
    if (!strcmp(name, "glShaderSource")) { es_shader_source = dlsym(gles, name); return (void *)shader_source; }
    if (getenv("P2_IOS_GL_TRACE")) {
        if (!strcmp(name, "glCompileShader")) { es_compile_shader = dlsym(gles, name); return (void *)es_compile; }
        if (!strcmp(name, "glLinkProgram")) { es_link_program = dlsym(gles, name); return (void *)es_link; }
    }
    if (!strcmp(name, "glLinkProgram")) {
        es_link_program_always = dlsym(gles, name);
        es_get_uniform_location = dlsym(gles, "glGetUniformLocation");
        es_uniform1i = dlsym(gles, "glUniform1i");
        return (void *)link_program_always;
    }
    if (!strcmp(name, "glBindFramebuffer")) return (void *)bind_framebuffer;
    if (!strcmp(name, "glGetIntegerv")) return (void *)get_integerv;
    return dlsym(gles, name);
}
static void main_framebuffer_size(int *width, int *height) { *width = drawable_width; *height = drawable_height; }

static void load_extras(void);
static pthread_once_t once = PTHREAD_ONCE_INIT;
static void start_gl4es(void) {
    gles = dlopen("/System/Library/Frameworks/OpenGLES.framework/OpenGLES", RTLD_NOW | RTLD_LOCAL);
    real_bind_framebuffer = dlsym(gles, "glBindFramebuffer");
    real_get_integerv = dlsym(gles, "glGetIntegerv");
    real_get_string = dlsym(gles, "glGetString");
    // Surcharges int/float de clamp/min/max/pow/mod ajoutées par gl4es pour
    // GLSL ES 1.00 : interdites en 3.00 (surcharge d'une fonction intégrée) et
    // inutiles pour togl, qui écrit ses littéraux en flottants.
    setenv("LIBGL_NOINTOVLHACK", "1", 0);
    // La réduction de moitié des textures DXT décompressées (défaut de gl4es)
    // produit des données corrompues sur les textures du jeu (bruit de blocs).
    // Coût : textures décompressées en pleine taille (mémoire sur l'appareil).
    setenv("LIBGL_NODOWNSAMPLING", "1", 0);
    set_getprocaddress(gles_function);
    set_getmainfbsize(main_framebuffer_size);
    initialize_gl4es();
    load_extras();
}

// ---- ajouts à gl4es pour togl ----
// togl exige des fences (NV, ARB ou APPLE), S3TC et EXT_texture_sRGB_decode.
// gl4es n'a ni fences ni sRGB_decode : ARB_sync est servi par APPLE_sync
// d'OpenGL ES (mêmes constantes), après vidage des commandes que gl4es tient
// encore en tampon ; sRGB_decode est annoncé seulement (le paramètre de
// texture est ignoré : gamma approximatif, rendu correct par ailleurs).
typedef struct __GLsync *SyncObject;
static SyncObject (*es_fence_sync)(GLenum, GLbitfield);
static GLenum (*es_client_wait_sync)(SyncObject, GLbitfield, uint64_t);
static void (*es_wait_sync)(SyncObject, GLbitfield, uint64_t);
static void (*es_delete_sync)(SyncObject);
static void (*es_get_synciv)(SyncObject, GLenum, GLsizei, GLsizei *, GLint *);
static void (*gl4es_flush_fn)(void);
static const GLubyte *(*gl4es_get_string)(GLenum);
static GLenum (*gl4es_check_status)(GLenum);
static void (*gl4es_bind_texture)(GLenum, GLuint);
static void (*gl4es_tex_parameterf)(GLenum, GLenum, GLfloat);
static void (*gl4es_tex_parameterfv)(GLenum, GLenum, const GLfloat *);
static void (*gl4es_get_integerv)(GLenum, GLint *);
static void (*gl4es_tex_parameteri)(GLenum, GLenum, GLint);
static void (*gl4es_tex_parameteriv)(GLenum, GLenum, const GLint *);
static void *es_symbol(const char *name) {
    char apple[96];
    snprintf(apple, sizeof(apple), "%sAPPLE", name);
    void *fn = dlsym(gles, apple);
    return fn ? fn : dlsym(gles, name);
}
static void load_extras(void) {
    es_fence_sync = es_symbol("glFenceSync");
    es_client_wait_sync = es_symbol("glClientWaitSync");
    es_wait_sync = es_symbol("glWaitSync");
    es_delete_sync = es_symbol("glDeleteSync");
    es_get_synciv = es_symbol("glGetSynciv");
    gl4es_flush_fn = gl4es_GetProcAddress("glFlush");
    gl4es_get_string = gl4es_GetProcAddress("glGetString");
    gl4es_check_status = gl4es_GetProcAddress("glCheckFramebufferStatus");
    gl4es_tex_parameteri = gl4es_GetProcAddress("glTexParameteri");
    gl4es_tex_parameteriv = gl4es_GetProcAddress("glTexParameteriv");
    gl4es_tex_parameterf = gl4es_GetProcAddress("glTexParameterf");
    gl4es_tex_parameterfv = gl4es_GetProcAddress("glTexParameterfv");
    gl4es_bind_texture = gl4es_GetProcAddress("glBindTexture");
    gl4es_get_integerv = gl4es_GetProcAddress("glGetIntegerv");
    if (!es_fence_sync) fprintf(stderr, "[gl-ios] OpenGL ES sans APPLE_sync : fences indisponibles\n");
}
static SyncObject fence_sync(GLenum condition, GLbitfield flags) {
    gl4es_flush_fn();   // la fence doit suivre les tracés que gl4es diffère
    return es_fence_sync(condition, flags);
}
static GLenum client_wait_sync(SyncObject sync, GLbitfield flags, uint64_t timeout) {
    return es_client_wait_sync(sync, flags, timeout);
}
static void wait_sync(SyncObject sync, GLbitfield flags, uint64_t timeout) { es_wait_sync(sync, flags, timeout); }
static void delete_sync(SyncObject sync) { if (sync) es_delete_sync(sync); }
static void get_synciv(SyncObject sync, GLenum name, GLsizei size, GLsizei *length, GLint *values) {
    es_get_synciv(sync, name, size, length, values);
}
static const GLubyte *get_string(GLenum name) {
    static char *extensions;
    const GLubyte *s = gl4es_get_string(name);
    if (name != GL_EXTENSIONS || !s) return s;
    if (!extensions) {
        // EXT_direct_state_access de gl4es : togl en prendrait un chemin de liaison
        // des textures que l'OpenGL d'Apple (référence du portage Mac) n'a jamais
        // emprunté ; retiré, togl garde le même chemin que sur Mac.
        char *copy = strdup((const char *)s), *hit;
        while (copy && (hit = strstr(copy, "GL_EXT_direct_state_access")))
            memset(hit, ' ', strlen("GL_EXT_direct_state_access"));
        if (!copy || asprintf(&extensions, "%s%s%s", copy, es_fence_sync ? " GL_ARB_sync" : "",
                              " GL_EXT_texture_sRGB_decode") < 0) { free(copy); return s; }
        free(copy);
    }
    return (const GLubyte *)extensions;
}
// Diagnostic : un FBO refusé par OpenGL ES est décrit attachement par attachement.
static GLenum check_framebuffer_status(GLenum target) {
    GLenum status = gl4es_check_status(target);
    if (status == GL_FRAMEBUFFER_COMPLETE) return status;
    static int reported;
    if (reported++ < 8) {
        void (*attachment)(GLenum, GLenum, GLenum, GLint *) = dlsym(gles, "glGetFramebufferAttachmentParameteriv");
        void (*rb)(GLenum, GLenum, GLint *) = dlsym(gles, "glGetRenderbufferParameteriv");
        void (*bind_rb)(GLenum, GLuint) = dlsym(gles, "glBindRenderbuffer");
        GLint fbo = 0, previous_rb = 0;
        real_get_integerv(GL_FRAMEBUFFER_BINDING, &fbo);
        real_get_integerv(GL_RENDERBUFFER_BINDING, &previous_rb);
        fprintf(stderr, "[gl-ios] FBO %d incomplet : %#x\n", fbo, status);
        const struct { GLenum point; const char *name; } points[] = {
            {GL_COLOR_ATTACHMENT0, "couleur0"}, {GL_DEPTH_ATTACHMENT, "profondeur"}, {GL_STENCIL_ATTACHMENT, "stencil"}};
        for (size_t i = 0; i < 3; ++i) {
            GLint type = 0, name = 0, format = 0, width = 0, height = 0;
            attachment(GL_FRAMEBUFFER, points[i].point, GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE, &type);
            attachment(GL_FRAMEBUFFER, points[i].point, GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME, &name);
            if (type == GL_RENDERBUFFER) {
                bind_rb(GL_RENDERBUFFER, (GLuint)name);
                rb(GL_RENDERBUFFER, GL_RENDERBUFFER_INTERNAL_FORMAT, &format);
                rb(GL_RENDERBUFFER, GL_RENDERBUFFER_WIDTH, &width);
                rb(GL_RENDERBUFFER, GL_RENDERBUFFER_HEIGHT, &height);
            }
            fprintf(stderr, "[gl-ios]   %s : %s %d format %#x %dx%d\n", points[i].name,
                    type == GL_TEXTURE ? "texture" : type == GL_RENDERBUFFER ? "renderbuffer" : type ? "?" : "aucun",
                    name, format, width, height);
        }
        bind_rb(GL_RENDERBUFFER, (GLuint)previous_rb);
    }
    return status;
}

// EXT_texture_sRGB_decode est annoncé à togl : son paramètre de texture est
// absorbé ici au lieu d'atteindre gl4es/OpenGL ES (GL_INVALID_ENUM).
#define TEXTURE_SRGB_DECODE 0x8A48
static void tex_parameter_3d_i(GLenum target, GLenum name, GLint value);
// Niveaux et LOD de mipmaps : gl4es (pensé pour ES 2) les garde pour lui sans
// les transmettre ; en ES 3 ils existent. Sans eux, une chaîne de mipmaps
// partielle (MAX_LEVEL réglé par togl) rend la texture incomplète : noire.
static int level_parameter(GLenum name) { return name >= 0x813A && name <= 0x813D; }
static int trace_enabled(void);
static void es_level_parameter(GLenum target, GLenum name, GLfloat value) {
    if (target != GL_TEXTURE_2D && target != GL_TEXTURE_CUBE_MAP) return;
    GLint unit = GL_TEXTURE0, name_bound = 0, real_unit = GL_TEXTURE0, real_bound = 0;
    gl4es_get_integerv(GL_ACTIVE_TEXTURE, &unit);
    gl4es_get_integerv(target == GL_TEXTURE_2D ? GL_TEXTURE_BINDING_2D : GL_TEXTURE_BINDING_CUBE_MAP, &name_bound);
    if (!name_bound) return;
    real_get_integerv(GL_ACTIVE_TEXTURE, &real_unit);
    if (real_unit != unit) glActiveTexture((GLenum)unit);
    real_get_integerv(target == GL_TEXTURE_2D ? GL_TEXTURE_BINDING_2D : GL_TEXTURE_BINDING_CUBE_MAP, &real_bound);
    if (real_bound != name_bound) glBindTexture(target, (GLuint)name_bound);
    if (name == 0x813C || name == 0x813D) glTexParameteri(target, name, (GLint)value);
    else glTexParameterf(target, name, value);
    if (trace_enabled()) {   // une ligne par combinaison (paramètre, valeur)
        static struct { GLenum name; GLfloat value; } seen[64]; static int count;
        int known = 0;
        for (int i = 0; i < count; ++i) known |= seen[i].name == name && seen[i].value == value;
        if (!known && count < 64) {
            seen[count].name = name; seen[count++].value = value;
            fprintf(stderr, "[gl-trace] niveau %#x = %g (texture %d, cible %#x)\n", name, value, name_bound, target);
        }
    }
    if (real_bound != name_bound) glBindTexture(target, (GLuint)real_bound);
    if (real_unit != unit) glActiveTexture((GLenum)real_unit);
}
static int trace_enabled(void);
static void trace_parameter(GLenum target, GLenum name, GLfloat v0, const GLfloat *v) {
    int border = name == 0x1004 && v && (v[0] || v[1] || v[2] || v[3]);
    if (!trace_enabled() || (v0 != 0x812D && !border)) return;
    static int count;
    if (count++ > 60) return;
    GLint bound = 0; gl4es_get_integerv(GL_TEXTURE_BINDING_2D, &bound);
    fprintf(stderr, "[gl-trace] paramètre %#x cible %#x texture %d = %g %g %g %g\n", name, target, bound, v0,
            v ? v[1] : 0, v ? v[2] : 0, v ? v[3] : 0);
}
static void tex_parameteri(GLenum target, GLenum name, GLint value) {
    trace_parameter(target, name, (GLfloat)value, NULL);
    rt_ios_srgb_wrap_mode(target, name, value);
    if (name == TEXTURE_SRGB_DECODE) { rt_ios_srgb_decode(target, value); return; }
    if (target == 0x806F) { tex_parameter_3d_i(target, name, value); return; }
    gl4es_tex_parameteri(target, name, value);
    if (level_parameter(name)) es_level_parameter(target, name, (GLfloat)value);
}
static void tex_parameteriv(GLenum target, GLenum name, const GLint *values) {
    rt_ios_srgb_wrap_mode(target, name, values[0]);
    if (name == TEXTURE_SRGB_DECODE) { rt_ios_srgb_decode(target, values[0]); return; }
    if (target == 0x806F) { tex_parameter_3d_i(target, name, values[0]); return; }
    gl4es_tex_parameteriv(target, name, values);
    if (level_parameter(name)) es_level_parameter(target, name, (GLfloat)values[0]);
}

// P2_IOS_GL_TRACE=1 : chaque combinaison distincte d'envoi de texture
// (fonction, cible, niveau, formats) est journalisée une fois, avec l'erreur GL.
static int trace_enabled(void) {
    static int enabled = -1;
    if (enabled < 0) { const char *e = getenv("P2_IOS_GL_TRACE"); enabled = e && (*e == '1' || *e == '2'); }
    return enabled;
}
static void trace_upload(const char *fn, GLenum target, GLint level, GLenum internal, GLsizei w, GLsizei h,
                         GLenum format, GLenum type, const void *data) {
    static struct { const char *fn; GLenum target, internal, format, type; GLint level; int data; } seen[256];
    static int count;
    GLenum (*error)(void) = gl4es_GetProcAddress("glGetError");
    GLenum e = error();
    static int all = -1;   // P2_IOS_GL_TRACE=2 : chaque envoi, avec la texture liée
    if (all < 0) { const char *t = getenv("P2_IOS_GL_TRACE"); all = t && *t == '2'; }
    if (all) {
        GLint name = 0;
        gl4es_get_integerv(target == GL_TEXTURE_2D ? GL_TEXTURE_BINDING_2D : GL_TEXTURE_BINDING_CUBE_MAP, &name);
        fprintf(stderr, "[gl-up] tex %d %s niveau %d interne %#x %dx%d type %#x data %d err %#x\n", name, fn, level,
                internal, w, h, type, data != NULL, e);
        return;
    }
    for (int i = 0; i < count; ++i)
        if (seen[i].fn == fn && seen[i].target == target && seen[i].internal == internal && seen[i].format == format &&
            seen[i].type == type && seen[i].level == (level > 0) && seen[i].data == (data != NULL) && !e) return;
    if (count < 256) seen[count++] = (typeof(seen[0])){fn, target, internal, format, type, level > 0, data != NULL};
    GLint unpack = 0, length = 0, skip_rows = 0, skip_pixels = 0;
    gl4es_get_integerv(0x88EF /* PIXEL_UNPACK_BUFFER_BINDING */, &unpack);
    gl4es_get_integerv(GL_UNPACK_ROW_LENGTH, &length);
    gl4es_get_integerv(GL_UNPACK_SKIP_ROWS, &skip_rows);
    gl4es_get_integerv(GL_UNPACK_SKIP_PIXELS, &skip_pixels);
    fprintf(stderr, "[gl-trace] %s cible %#x niveau %d interne %#x %dx%d format %#x type %#x données %p PBO %d "
            "ligne %d saut %d,%d -> erreur %#x\n", fn, target, level, internal, w, h, format, type, data, unpack,
            length, skip_pixels, skip_rows, e);
}
static void clear_errors(void) {
    GLenum (*error)(void) = gl4es_GetProcAddress("glGetError");
    for (int i = 0; i < 8 && error(); ++i) {}
}
static void (*g4_tex_image_2d)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
static void (*g4_tex_sub_image_2d)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
static void (*g4_compressed_tex_image_2d)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
static void (*g4_compressed_tex_sub_image_2d)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
static void tr_tex_image_2d(GLenum t, GLint l, GLint i, GLsizei w, GLsizei h, GLint b, GLenum f, GLenum ty, const void *d) { clear_errors();
    g4_tex_image_2d(t, l, i, w, h, b, f, ty, d); trace_upload("glTexImage2D", t, l, (GLenum)i, w, h, f, ty, d);
}
static void tr_tex_sub_image_2d(GLenum t, GLint l, GLint x, GLint y, GLsizei w, GLsizei h, GLenum f, GLenum ty, const void *d) { clear_errors();
    g4_tex_sub_image_2d(t, l, x, y, w, h, f, ty, d); trace_upload("glTexSubImage2D", t, l, 0, w, h, f, ty, d);
}
static void tr_compressed_tex_image_2d(GLenum t, GLint l, GLenum i, GLsizei w, GLsizei h, GLint b, GLsizei n, const void *d) { clear_errors();
    g4_compressed_tex_image_2d(t, l, i, w, h, b, n, d); trace_upload("glCompressedTexImage2D", t, l, i, w, h, 0, (GLenum)n, d);
}
static void tr_compressed_tex_sub_image_2d(GLenum t, GLint l, GLint x, GLint y, GLsizei w, GLsizei h, GLenum f, GLsizei n, const void *d) { clear_errors();
    g4_compressed_tex_sub_image_2d(t, l, x, y, w, h, f, n, d); trace_upload("glCompressedTexSubImage2D", t, l, 0, w, h, f, (GLenum)n, d);
}
static void *traced(const char *name) {
    if (!trace_enabled()) return NULL;
    static const struct { const char *name; void **real; void *wrapper; } table[] = {
        {"glTexImage2D", (void **)&g4_tex_image_2d, (void *)tr_tex_image_2d},
        {"glTexSubImage2D", (void **)&g4_tex_sub_image_2d, (void *)tr_tex_sub_image_2d},
        {"glCompressedTexImage2D", (void **)&g4_compressed_tex_image_2d, (void *)tr_compressed_tex_image_2d},
        {"glCompressedTexImage2DARB", (void **)&g4_compressed_tex_image_2d, (void *)tr_compressed_tex_image_2d},
        {"glCompressedTexSubImage2D", (void **)&g4_compressed_tex_sub_image_2d, (void *)tr_compressed_tex_sub_image_2d},
        {"glCompressedTexSubImage2DARB", (void **)&g4_compressed_tex_sub_image_2d, (void *)tr_compressed_tex_sub_image_2d},
    };
    for (size_t i = 0; i < sizeof(table) / sizeof(*table); ++i)
        if (!strcmp(name, table[i].name)) {
            if (!*table[i].real) *table[i].real = gl4es_GetProcAddress(name);
            return *table[i].real ? table[i].wrapper : NULL;
        }
    return NULL;
}

// ---- textures 3D : directement en OpenGL ES 3 ----
// gl4es simule GL_TEXTURE_3D par une texture 2D (première tranche). Les
// shaders en GLSL ES 3.00 (essl3.c) échantillonnent un vrai sampler3D : la
// table de correction colorimétrique de togl (sampler15) donnait du noir. Les
// noms de textures de gl4es sont ceux d'OpenGL ES ; seule l'unité active est
// à reprendre de gl4es (il en diffère l'envoi), puis à rétablir.
#define TARGET_3D 0x806F
#define BGRA 0x80E1
#define UNSIGNED_INT_8_8_8_8_REV 0x8367
static GLint with_unit_begin(void) {
    GLint unit = GL_TEXTURE0, previous = GL_TEXTURE0;
    gl4es_get_integerv(GL_ACTIVE_TEXTURE, &unit);
    real_get_integerv(GL_ACTIVE_TEXTURE, &previous);
    if (unit != previous) glActiveTexture((GLenum)unit);
    return previous;
}
static void with_unit_end(GLint previous) {
    GLint current = 0; real_get_integerv(GL_ACTIVE_TEXTURE, &current);
    if (current != previous) glActiveTexture((GLenum)previous);
}
static void bind_texture(GLenum target, GLuint name) {
    rt_ios_srgb_bind_texture(target, name);
    if (target != TARGET_3D) { gl4es_bind_texture(target, name); return; }
    GLint previous = with_unit_begin();
    glBindTexture(TARGET_3D, name);
    with_unit_end(previous);
}
// BGRA (et 8_8_8_8_REV, le même ordre d'octets) n'existe pas pour les textures
// 3D en ES : recopie en RGBA.
static const void *rgba_copy(GLenum *format, GLenum *type, const void *data, size_t texels, void **owned) {
    *owned = NULL;
    if (*format != BGRA || (*type != GL_UNSIGNED_BYTE && *type != UNSIGNED_INT_8_8_8_8_REV)) return data;
    *format = GL_RGBA; *type = GL_UNSIGNED_BYTE;
    if (!data) return NULL;
    unsigned char *copy = malloc(texels * 4);
    if (!copy) return data;
    const unsigned char *src = data;
    for (size_t i = 0; i < texels; ++i) {
        copy[4 * i] = src[4 * i + 2]; copy[4 * i + 1] = src[4 * i + 1];
        copy[4 * i + 2] = src[4 * i]; copy[4 * i + 3] = src[4 * i + 3];
    }
    *owned = copy;
    return copy;
}
static GLint sized_rgba(GLint internal) {
    switch (internal) { case GL_RGBA: case 4: case 0x8058 /* RGBA8 */: return 0x8058; default: return internal; }
}
static void tex_image_3d(GLenum target, GLint level, GLint internal, GLsizei w, GLsizei h, GLsizei d, GLint border,
                         GLenum format, GLenum type, const void *data) {
    rt_ios_srgb_tex_image(target, level, internal);
    void *owned; const void *pixels = rgba_copy(&format, &type, data, (size_t)w * h * d, &owned);
    GLint previous = with_unit_begin();
    glTexImage3D(target, level, sized_rgba(internal), w, h, d, border, format, type, pixels);
    with_unit_end(previous);
    free(owned);
}
static void tex_sub_image_3d(GLenum target, GLint level, GLint x, GLint y, GLint z, GLsizei w, GLsizei h, GLsizei d,
                             GLenum format, GLenum type, const void *data) {
    void *owned; const void *pixels = rgba_copy(&format, &type, data, (size_t)w * h * d, &owned);
    GLint previous = with_unit_begin();
    glTexSubImage3D(target, level, x, y, z, w, h, d, format, type, pixels);
    with_unit_end(previous);
    free(owned);
}
static void tex_parameter_3d_i(GLenum target, GLenum name, GLint value) {
    GLint previous = with_unit_begin(); glTexParameteri(target, name, value); with_unit_end(previous);
}
static void tex_parameterf(GLenum target, GLenum name, GLfloat value) {
    rt_ios_srgb_wrap_mode(target, name, (GLint)value);
    if (name == TEXTURE_SRGB_DECODE) { rt_ios_srgb_decode(target, (GLint)value); return; }
    if (target != TARGET_3D) {
        gl4es_tex_parameterf(target, name, value);
        if (level_parameter(name)) es_level_parameter(target, name, value);
        return;
    }
    GLint previous = with_unit_begin(); glTexParameterf(target, name, value); with_unit_end(previous);
}
static void tex_parameterfv(GLenum target, GLenum name, const GLfloat *values) {
    trace_parameter(target, name, values[0], name == 0x1004 ? values : NULL);
    rt_ios_srgb_wrap_mode(target, name, (GLint)values[0]);
    if (name == TEXTURE_SRGB_DECODE) { rt_ios_srgb_decode(target, (GLint)values[0]); return; }
    if (target != TARGET_3D) { gl4es_tex_parameterfv(target, name, values); return; }
    GLint previous = with_unit_begin(); glTexParameterfv(target, name, values); with_unit_end(previous);
}

// ---- textures 16 bits normalisées (UNSIGNED_SHORT) ----
// OpenGL ES n'a pas de RGBA16 normalisé et gl4es le rend noir (mesuré) : c'est
// le format des pages de lightmaps HDR de Source, d'où des murs noirs. Les
// envois RGBA16/RGB16 deviennent des demi-flottants (RGBA16F/RGB16F, même
// valeur v / 65535, filtrables en ES 3) ; en 8 bits, les lightmaps sombres
// n'avaient que quelques niveaux par canal, d'où des aplats irisés sur les
// murs. Autres formats 16 bits : réduits à 8 bits (octet de poids fort).
static void (*g4_tex_image_2d_plain)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
static void (*g4_tex_sub_image_2d_plain)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
static void (*g4_pixel_storei)(GLenum, GLint);
static int channels(GLenum format) {
    switch (format) {
    case GL_RGBA: case 0x80E1 /* BGRA */: return 4;
    case GL_RGB: case 0x80E0 /* BGR */: return 3;
    case GL_LUMINANCE_ALPHA: return 2;
    case GL_LUMINANCE: case GL_ALPHA: case 0x1903 /* RED */: return 1;
    default: return 0;
    }
}
// Disposition des pixels source selon l'état UNPACK : un rectangle partiel
// (lightmap retouchée par une lumière dynamique : flash des scanners) est lu
// dans la page entière via ROW_LENGTH et SKIP_ROWS/SKIP_PIXELS. Les données
// converties sont serrées : unpack_packed() neutralise cet état le temps de
// l'envoi, unpack_restore() le remet.
typedef struct { GLint alignment, row_length, skip_rows, skip_pixels; } Unpack;
static Unpack unpack_state(void) {
    Unpack u = {4, 0, 0, 0};
    gl4es_get_integerv(GL_UNPACK_ALIGNMENT, &u.alignment);
    gl4es_get_integerv(GL_UNPACK_ROW_LENGTH, &u.row_length);
    gl4es_get_integerv(GL_UNPACK_SKIP_ROWS, &u.skip_rows);
    gl4es_get_integerv(GL_UNPACK_SKIP_PIXELS, &u.skip_pixels);
    if (u.alignment < 1) u.alignment = 1;
    return u;
}
// Premier texel de la ligne y (texels de n canaux de 16 bits).
static const unsigned short *unpack_row(const void *data, const Unpack *u, GLsizei w, int n, GLsizei y) {
    size_t length = u->row_length > 0 ? (size_t)u->row_length : (size_t)w;
    size_t row = length * n * 2, stride = (row + (size_t)u->alignment - 1) / (size_t)u->alignment * (size_t)u->alignment;
    return (const unsigned short *)((const unsigned char *)data + (size_t)(u->skip_rows + y) * stride) + (size_t)u->skip_pixels * n;
}
static void unpack_packed(GLint alignment) {
    g4_pixel_storei(GL_UNPACK_ALIGNMENT, alignment);
    g4_pixel_storei(GL_UNPACK_ROW_LENGTH, 0);
    g4_pixel_storei(GL_UNPACK_SKIP_ROWS, 0);
    g4_pixel_storei(GL_UNPACK_SKIP_PIXELS, 0);
}
static void unpack_restore(const Unpack *u) {
    g4_pixel_storei(GL_UNPACK_ALIGNMENT, u->alignment);
    g4_pixel_storei(GL_UNPACK_ROW_LENGTH, u->row_length);
    g4_pixel_storei(GL_UNPACK_SKIP_ROWS, u->skip_rows);
    g4_pixel_storei(GL_UNPACK_SKIP_PIXELS, u->skip_pixels);
}
static unsigned char *narrow_u16(const void *data, GLsizei w, GLsizei h, int n) {
    if (!data || w <= 0 || h <= 0) return NULL;
    Unpack u = unpack_state();
    unsigned char *out = malloc((size_t)w * h * n);
    if (!out) return NULL;
    for (GLsizei y = 0; y < h; ++y) {
        const unsigned short *src = unpack_row(data, &u, w, n, y);
        unsigned char *dst = out + (size_t)y * w * n;
        for (size_t i = 0; i < (size_t)w * n; ++i) dst[i] = (unsigned char)(src[i] >> 8);
    }
    return out;
}
// v / 65535 en demi-flottant, BGRA remis en RGBA (format à passer : *format).
static unsigned short *half_u16(const void *data, GLsizei w, GLsizei h, int n, GLenum *format) {
    if (!data || w <= 0 || h <= 0) return NULL;
    Unpack u = unpack_state();
    __fp16 *out = malloc((size_t)w * h * n * sizeof(*out));
    if (!out) return NULL;
    int swap = *format == 0x80E1 /* BGRA */ || *format == 0x80E0 /* BGR */;
    if (swap) *format = *format == 0x80E1 ? GL_RGBA : GL_RGB;
    for (GLsizei y = 0; y < h; ++y) {
        const unsigned short *src = unpack_row(data, &u, w, n, y);
        __fp16 *dst = out + (size_t)y * w * n;
        for (GLsizei x = 0; x < w; ++x)
            for (int c = 0; c < n; ++c) {
                int from = swap && c < 3 ? 2 - c : c;
                dst[(size_t)x * n + c] = (__fp16)(src[(size_t)x * n + from] / 65535.0f);
            }
    }
    return (unsigned short *)out;
}
static GLint half_internal(GLint internal) {
    switch (internal) { case 0x805B /* RGBA16 */: return 0x881A; case 0x8054 /* RGB16 */: return 0x881B; default: return 0; }
}
// Format interne de chaque texture 2D convertie en demi-flottants : les mises à
// jour partielles (glTexSubImage2D) doivent suivre la même conversion.
static unsigned char *half_textures; static size_t half_size;
static GLuint bound_2d(void) { GLint t = 0; gl4es_get_integerv(GL_TEXTURE_BINDING_2D, &t); return (GLuint)t; }
static void mark_half(GLuint texture, int on) {
    if (texture >= half_size) {
        size_t size = half_size ? half_size : 1024;
        while (size <= texture) size *= 2;
        unsigned char *grown = realloc(half_textures, size);
        if (!grown) return;
        memset(grown + half_size, 0, size - half_size); half_textures = grown; half_size = size;
    }
    half_textures[texture] = (unsigned char)on;
}
static void *traced(const char *name);
static void narrow_init(void) {
    if (g4_tex_image_2d_plain) return;
    void *t = traced("glTexImage2D"), *u = traced("glTexSubImage2D");   // traces si P2_IOS_GL_TRACE
    g4_tex_image_2d_plain = t ? t : gl4es_GetProcAddress("glTexImage2D");
    g4_tex_sub_image_2d_plain = u ? u : gl4es_GetProcAddress("glTexSubImage2D");
    g4_pixel_storei = gl4es_GetProcAddress("glPixelStorei");
}
static GLint narrow_internal(GLint internal) {
    switch (internal) { case 0x805B /* RGBA16 */: return 0x8058; case 0x8054 /* RGB16 */: return 0x8051; default: return internal; }
}
// Taille d'un texel pour les formats couleur courants ; 0 si inconnue.
static size_t texel_bytes(GLenum format, GLenum type) {
    int n = channels(format);
    if (!n) return 0;
    switch (type) {
    case GL_UNSIGNED_BYTE: return (size_t)n;
    case 0x8367 /* 8_8_8_8_REV */: case 0x8035 /* 8_8_8_8 */: return 4;
    case GL_UNSIGNED_SHORT_5_6_5: case GL_UNSIGNED_SHORT_4_4_4_4: case GL_UNSIGNED_SHORT_5_5_5_1: return 2;
    case 0x140B /* HALF_FLOAT */: case 0x8D61 /* HALF_FLOAT_OES */: return (size_t)n * 2;
    case GL_FLOAT: return (size_t)n * 4;
    default: return 0;
    }
}
static void tex_image_2d(GLenum t, GLint l, GLint i, GLsizei w, GLsizei h, GLint b, GLenum f, GLenum ty, const void *d) {
    narrow_init();
    rt_ios_srgb_tex_image(t, l, i);
    int n = channels(f);
    // Cible de rendu créée sans données : OpenGL de bureau (Mac) la donne à
    // zéro, OpenGL ES/gl4es laissent son contenu indéfini, que les passes
    // plein écran (bloom, HDR) relisaient : voile de bruit. Remise à zéro.
    void *zeros = NULL;
    GLint unpack_buffer = 0;
    if (!d) gl4es_get_integerv(0x88EF /* PIXEL_UNPACK_BUFFER_BINDING */, &unpack_buffer);
    if (!d && !unpack_buffer && w > 0 && h > 0 && ty != GL_UNSIGNED_SHORT) {
        size_t bytes = texel_bytes(f, ty);
        size_t row = ((size_t)w * bytes + 7) & ~(size_t)7;   // marge pour tout alignement de lignes
        if (bytes && (zeros = calloc(row, (size_t)h))) d = zeros;
    }
    GLint half = ty == GL_UNSIGNED_SHORT && n >= 3 ? half_internal(i) : 0;
    if (t == GL_TEXTURE_2D) mark_half(bound_2d(), half != 0);
    if (ty != GL_UNSIGNED_SHORT || !n) { g4_tex_image_2d_plain(t, l, i, w, h, b, f, ty, d); free(zeros); return; }
    if (half) {
        unsigned short *data = half_u16(d, w, h, n, &f);
        Unpack u = unpack_state();
        unpack_packed(2);
        g4_tex_image_2d_plain(t, l, half, w, h, b, f, GL_HALF_FLOAT, d ? data : NULL);
        unpack_restore(&u);
        free(data);
        return;
    }
    unsigned char *narrow = narrow_u16(d, w, h, n);
    Unpack u = unpack_state();
    unpack_packed(1);
    g4_tex_image_2d_plain(t, l, narrow_internal(i), w, h, b, f, GL_UNSIGNED_BYTE, d ? narrow : NULL);
    unpack_restore(&u);
    free(narrow);
}
static void tex_sub_image_2d(GLenum t, GLint l, GLint x, GLint y, GLsizei w, GLsizei h, GLenum f, GLenum ty, const void *d) {
    narrow_init();
    int n = channels(f);
    if (ty != GL_UNSIGNED_SHORT || !n) { g4_tex_sub_image_2d_plain(t, l, x, y, w, h, f, ty, d); return; }
    GLuint texture = t == GL_TEXTURE_2D ? bound_2d() : 0;
    if (texture && texture < half_size && half_textures[texture]) {
        unsigned short *data = half_u16(d, w, h, n, &f);
        if (!data) return;
        Unpack u = unpack_state();
        unpack_packed(2);
        g4_tex_sub_image_2d_plain(t, l, x, y, w, h, f, GL_HALF_FLOAT, data);
        unpack_restore(&u);
        free(data);
        return;
    }
    unsigned char *narrow = narrow_u16(d, w, h, n);
    if (!narrow) return;
    Unpack u = unpack_state();
    unpack_packed(1);
    g4_tex_sub_image_2d_plain(t, l, x, y, w, h, f, GL_UNSIGNED_BYTE, narrow);
    unpack_restore(&u);
    free(narrow);
}

// Références directes de gl.c, que gl4es n'exporte pas sous ces noms.
void gl4es_glDeleteSync(SyncObject sync) { delete_sync(sync); }
GLboolean gl4es_glUnmapBuffer(GLenum target);
GLboolean gl4es_glUnmapBufferARB(GLenum target) { return gl4es_glUnmapBuffer(target); }

void *rt_host_gl_open(void) { return (void *)1; }   // gl4es est lié statiquement
void *rt_host_gl_symbol(void *library, const char *name) {
    (void)library;
    static const struct { const char *name; void *fn; } extras[] = {
        {"glFenceSync", (void *)fence_sync}, {"glClientWaitSync", (void *)client_wait_sync},
        {"glWaitSync", (void *)wait_sync}, {"glDeleteSync", (void *)delete_sync},
        {"glGetSynciv", (void *)get_synciv}, {"glGetString", (void *)get_string},
        {"glCheckFramebufferStatus", (void *)check_framebuffer_status},
        {"glTexParameteri", (void *)tex_parameteri}, {"glTexParameteriv", (void *)tex_parameteriv},
        {"glTexParameterf", (void *)tex_parameterf}, {"glTexParameterfv", (void *)tex_parameterfv},
        {"glBindTexture", (void *)bind_texture}, {"glBindTextureEXT", (void *)bind_texture},
        {"glTexImage3D", (void *)tex_image_3d}, {"glTexImage3DEXT", (void *)tex_image_3d},
        {"glTexImage2D", (void *)tex_image_2d}, {"glTexSubImage2D", (void *)tex_sub_image_2d},
        {"glTexSubImage3D", (void *)tex_sub_image_3d}, {"glTexSubImage3DEXT", (void *)tex_sub_image_3d},
        {"glCheckFramebufferStatusEXT", (void *)check_framebuffer_status},
    };
    for (size_t i = 0; i < sizeof(extras) / sizeof(*extras); ++i) {
        if (strcmp(name, extras[i].name)) continue;
        if (!gl4es_get_string) return NULL;   // avant le premier contexte : rien
        int sync = strstr(name, "Sync") != NULL;
        return sync && !es_fence_sync ? NULL : rt_ios_srgb_wrap(name, extras[i].fn);
    }
    void *wrapper = gl4es_get_string ? traced(name) : NULL;
    if (wrapper) return rt_ios_srgb_wrap(name, wrapper);
    return gl4es_get_string ? rt_ios_srgb_wrap(name, gl4es_GetProcAddress(name)) : gl4es_GetProcAddress(name);
}

void *rt_ios_gl_current_context(void) { return (__bridge void *)[EAGLContext currentContext]; }
void *rt_ios_gl_share_group(void *context) {
    return context ? (__bridge void *)((__bridge EAGLContext *)context).sharegroup : NULL;
}

// Écran ProMotion : sans demande explicite, iOS laisse l'écran à 60 Hz et la
// présentation du renderbuffer y est cadencée (mesuré : 60,0 i/s quels que
// soient l'antialiasing, l'échelle et la synchro du jeu). Un CADisplayLink
// qui demande jusqu'à 120 Hz fait monter la fréquence de l'écran ; il ne fait
// rien d'autre. Avec CADisableMinimumFrameDurationOnPhone (Info.plist).
// Désactivé par défaut : pour jouer, 60 i/s réguliers (avec MSAA) valent mieux
// que des sauts entre 60 et 120 ; P2_IOS_MAX_FPS=120 le réactive.
@interface P2FrameRate : NSObject
- (void)tick:(CADisplayLink *)link;
@end
@implementation P2FrameRate
- (void)tick:(CADisplayLink *)link {
    // Diagnostic : fréquence réelle des rappels (donc de l'écran), une fois.
    static CFTimeInterval first; static int count, reported;
    if (reported) return;
    if (!first) first = link.timestamp;
    if (++count == 600) {
        reported = 1;
        fprintf(stderr, "[gl-ios] écran : %.0f Hz mesurés, économie d'énergie %s\n", (count - 1) / (link.timestamp - first),
                NSProcessInfo.processInfo.lowPowerModeEnabled ? "active" : "inactive");
    }
}
@end
UIScreen *rt_ios_screen(void);   // sdl_ios.m
static void request_frame_rate(void) {
    static CADisplayLink *link;
    if (link) return;
    const char *e = getenv("P2_IOS_MAX_FPS");
    float wanted = e && atof(e) > 0 ? fminf((float)atof(e), (float)rt_ios_screen().maximumFramesPerSecond) : 60;
    if (wanted <= 60) return;
    link = [CADisplayLink displayLinkWithTarget:[P2FrameRate new] selector:@selector(tick:)];
    link.preferredFrameRateRange = CAFrameRateRangeMake(wanted, wanted, wanted);   // avec un minimum de 60, iOS restait à 60
    // Sur son propre thread : la boucle du thread principal n'est servie que
    // quand le jeu lit ses événements (~20 fois/s mesuré), et iOS ignore une
    // demande dont les rappels ne suivent pas (écran resté à 60 Hz hors toucher).
    NSThread *thread = [[NSThread alloc] initWithBlock:^{
        [link addToRunLoop:NSRunLoop.currentRunLoop forMode:NSRunLoopCommonModes];
        for (;;) [NSRunLoop.currentRunLoop runMode:NSDefaultRunLoopMode beforeDate:NSDate.distantFuture];
    }];
    thread.name = @"P2FrameRate";
    thread.qualityOfService = NSQualityOfServiceUserInteractive;
    [thread start];
    fprintf(stderr, "[gl-ios] fréquence d'affichage demandée : jusqu'à %.0f Hz\n", wanted);
}

float rt_ios_render_scale(void);   // sdl_ios.m
SDL_GLContext rt_ios_gl_create_context(SDL_Window *window) {
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);   // ES 3 : 16 unités de texture (togl en utilise 16)
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GLContext context = SDL_GL_CreateContext(window);
    if (!context) return NULL;
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    if (SDL_GetWindowWMInfo(window, &info) && info.subsystem == SDL_SYSWM_UIKIT) {
        system_framebuffer = info.info.uikit.framebuffer, system_colorbuffer = info.info.uikit.colorbuffer;
        // Échelle de rendu inférieure à celle de l'écran (P2_IOS_RENDER_SCALE=2…) :
        // SDL crée sa vue GL à l'échelle native ; la vue reprend la nôtre et
        // SDL recrée ses renderbuffers à la taille voulue (layoutSubviews).
        UIView *view = info.info.uikit.window.rootViewController.view;
        CGFloat wanted = rt_ios_render_scale();
        if (view && wanted > 1 && fabs(view.contentScaleFactor - wanted) > 0.01) {
            view.contentScaleFactor = wanted;
            [view setNeedsLayout];
            [view layoutIfNeeded];
        }
    }
    SDL_GL_GetDrawableSize(window, &drawable_width, &drawable_height);
    request_frame_rate();
    pthread_once(&once, start_gl4es);
    fprintf(stderr, "[gl-ios] contexte ES 3, FBO système %u, %dx%d\n", system_framebuffer,
            drawable_width, drawable_height);
    return context;
}

// P2_IOS_PROBE_FRAMES=1 : toutes les 120 images, quelques pixels du FBO
// système juste avant la présentation (noir partout = rien n'y est dessiné).
static void probe_frame(void) {
    static int enabled = -1, frame;
    if (enabled < 0) { const char *e = getenv("P2_IOS_PROBE_FRAMES"); enabled = e && *e == '1'; }
    if (!enabled || ++frame % 120) return;
    void (*read)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *) = dlsym(gles, "glReadPixels");
    GLint bound = 0; real_get_integerv(GL_FRAMEBUFFER_BINDING, &bound);
    real_bind_framebuffer(GL_FRAMEBUFFER, system_framebuffer);
    unsigned char p[5][4] = {{0}};
    int xs[5] = {drawable_width / 2, drawable_width / 4, 3 * drawable_width / 4, drawable_width / 2, drawable_width / 2};
    int ys[5] = {drawable_height / 2, drawable_height / 2, drawable_height / 2, drawable_height / 4, 3 * drawable_height / 4};
    for (int i = 0; i < 5; ++i) read(xs[i], ys[i], 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, p[i]);
    real_bind_framebuffer(GL_FRAMEBUFFER, (GLuint)bound);
    fprintf(stderr, "[gl-ios] image %d, FBO lié %d : pixels %02x%02x%02x %02x%02x%02x %02x%02x%02x %02x%02x%02x %02x%02x%02x\n",
            frame, bound, p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2], p[2][0], p[2][1], p[2][2],
            p[3][0], p[3][1], p[3][2], p[4][0], p[4][1], p[4][2]);
}

// P2_IOS_SNAPSHOT=1 : toutes les 600 images, l'image présentée dans
// Documents/snap_<n>.ppm (n de 0 à 9, en boucle) : pour voir l'écran sans
// capture faite à la main.
static void snapshot(void) {
    static int enabled = -1, frame, index;
    if (enabled < 0) enabled = getenv("P2_IOS_SNAPSHOT") != NULL;
    if (!enabled || ++frame % 600 || drawable_width <= 0 || !getenv("HOME")) return;
    void (*read)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *) = dlsym(gles, "glReadPixels");
    int w = drawable_width, h = drawable_height;
    unsigned char *rgba = malloc((size_t)w * h * 4);
    if (!rgba) return;
    GLint bound = 0; real_get_integerv(GL_FRAMEBUFFER_BINDING, &bound);
    real_bind_framebuffer(GL_FRAMEBUFFER, system_framebuffer);
    read(0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
    real_bind_framebuffer(GL_FRAMEBUFFER, (GLuint)bound);
    char path[1024];
    snprintf(path, sizeof(path), "%s/Documents/snap_%d.ppm", getenv("HOME"), index);
    index = (index + 1) % 10;
    FILE *f = fopen(path, "wb");
    if (f) {
        fprintf(f, "P6\n%d %d\n255\n", w, h);
        unsigned char *row = malloc((size_t)w * 3);
        for (int y = h - 1; row && y >= 0; --y) {
            for (int x = 0; x < w; ++x) memcpy(row + x * 3, rgba + ((size_t)y * w + x) * 4, 3);
            fwrite(row, 3, (size_t)w, f);
        }
        free(row); fclose(f);
        fprintf(stderr, "[gl-ios] image %d enregistrée : %s\n", frame, path);
    }
    free(rgba);
}

void rt_ios_draws_frame_end(void);
unsigned long rt_ios_frames;   // images présentées (compteur affiché par touch_controls.m)
void rt_ios_gl_swap_window(SDL_Window *window) {
    ++rt_ios_frames;
    rt_ios_draws_frame_end();
    gl4es_pre_swap();
    probe_frame();
    snapshot();
    // SDL présente le renderbuffer lié à GL_RENDERBUFFER en supposant que c'est
    // le sien ; le jeu y laisse souvent un renderbuffer de profondeur (image noire).
    static void (*bind_rb)(GLenum, GLuint);
    if (!bind_rb) bind_rb = dlsym(gles, "glBindRenderbuffer");
    GLint renderbuffer = 0;
    real_get_integerv(GL_RENDERBUFFER_BINDING, &renderbuffer);
    // P2_IOS_NO_PRESENT=1 (banc) : images rendues mais jamais présentées, donc
    // sans plafond de l'écran (qui arrondit à 120, 60, 40… i/s) ; l'écran reste
    // figé, la cadence du journal (P2_FRAME_LOG) est la vraie.
    static int present = -1;
    if (present < 0) present = !getenv("P2_IOS_NO_PRESENT");
    if (!present) {
        static void (*flush)(void);
        if (!flush) flush = dlsym(gles, "glFlush");
        flush();
        gl4es_post_swap();
        return;
    }
    bind_rb(GL_RENDERBUFFER, system_colorbuffer);
    SDL_GL_SwapWindow(window);
    bind_rb(GL_RENDERBUFFER, (GLuint)renderbuffer);
    gl4es_post_swap();
}
#endif
