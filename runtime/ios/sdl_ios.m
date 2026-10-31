// SDL sur iOS : tailles en pixels pour le jeu (voir sdl_ios.h).
#include <TargetConditionals.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#include <SDL.h>
#include <SDL_syswm.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "settings.h"

// Écran du jeu (thread principal) : celui de sa scène. UIScreen.mainScreen peut
// être un autre écran, d'une autre taille (iPhone Duo : 678×466 points au lieu
// de 951×669) : menus et touchers décalés.
UIScreen *rt_ios_screen(void) {
    for (UIScene *scene in UIApplication.sharedApplication.connectedScenes)
        if ([scene isKindOfClass:UIWindowScene.class]) return ((UIWindowScene *)scene).screen;
    return UIScreen.mainScreen;
}

// Échelle points -> pixels : celle de l'écran sur appareil. Sur simulateur
// (rendu OpenGL ES logiciel, 0,5 image/s en 2622×1206), 1 par défaut.
// Sur appareil, 2 par défaut (voir plus bas). P2_IOS_RENDER_SCALE=1, =native
// ou une valeur entre les deux (1,5…) : moins de pixels, agrandis par l'écran
// (la vue GL prend cette échelle : rt_ios_gl_create_context, gl_ios.m).
float rt_ios_render_scale(void) {
    static float scale;
    if (scale > 0) return scale;
    const char *e = getenv("P2_IOS_RENDER_SCALE");
    int native_requested = e && !strcmp(e, "native");
    float requested = e && *e && !native_requested ? (float)atof(e) : 0;
    if (e && *e && !native_requested && requested <= 1.0f) return scale = 1.0f;
#if TARGET_OS_SIMULATOR
    if (!native_requested && requested <= 1.0f) return scale = 1.0f;
#endif
    __block CGFloat native = 1;
    if ([NSThread isMainThread]) native = rt_ios_screen().nativeScale;
    else dispatch_sync(dispatch_get_main_queue(), ^{ native = rt_ios_screen().nativeScale; });
    if (native <= 1) return scale = 1.0f;
    // Par défaut 2 (iPhone 15 Pro Max : 1864×860 au lieu de 2796×1290) : sans
    // plafond d'écran, 154 i/s contre 90 en natif dans sp_a2_laser_stairs ; le
    // GPU limite (mesuré par tools/ios_bench.py).
    if (!requested && !native_requested) requested = 2.0f;
    return scale = requested > 1.0f && requested < native ? requested : (float)native;
}
static int up(int v) { return (int)lroundf((float)v * rt_ios_render_scale()); }
// Taille de rendu en paysage : écran en points × échelle (résolution du jeu, ios/main_ios.c).
void rt_ios_render_size(int *w, int *h) {
    __block CGSize size = CGSizeZero;
    if ([NSThread isMainThread]) size = rt_ios_screen().bounds.size;
    else dispatch_sync(dispatch_get_main_queue(), ^{ size = rt_ios_screen().bounds.size; });
    *w = up((int)fmax(size.width, size.height));
    *h = up((int)fmin(size.width, size.height));
}
static int down(int v) { return (int)lroundf((float)v / rt_ios_render_scale()); }

void rt_ios_touch_controls_attach(SDL_Window *window);
void rt_ios_game_state_poll(void);
SDL_Window *rt_ios_create_window(const char *title, int x, int y, int w, int h, Uint32 flags) {
    if (rt_ios_render_scale() > 1) flags |= SDL_WINDOW_ALLOW_HIGHDPI;
    SDL_Window *window = SDL_CreateWindow(title, x, y, down(w), down(h), flags);
    rt_ios_touch_controls_attach(window);   // commandes tactiles (touch_controls.m)
    return window;
}
// Taille actuelle de la vue SDL, en points. Au retour d'arrière-plan, iOS
// dispose un instant la vue en portrait (669×951 au lieu de 951×669) : SDL
// envoie ce redimensionnement, que le jeu lit une fois la vue revenue en
// paysage, et ne rendait plus que 1338 des 1902 pixels de large. SDL garde
// aussi cette taille passée (SDL_GetWindowSize) : on lit la vue.
static int view_size(SDL_Window *window, int *w, int *h) {
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    if (!window || !SDL_GetWindowWMInfo(window, &info) || info.subsystem != SDL_SYSWM_UIKIT) return 0;
    UIView *view = info.info.uikit.window.rootViewController.view;
    __block CGSize size = CGSizeZero;
    if ([NSThread isMainThread]) size = view.bounds.size;
    else dispatch_sync(dispatch_get_main_queue(), ^{ size = view.bounds.size; });
    if (size.width < 1 || size.height < 1) return 0;
    *w = (int)size.width, *h = (int)size.height;
    return 1;
}
void rt_ios_get_window_size(SDL_Window *window, int *w, int *h) {
    int pw = 0, ph = 0;
    if (!view_size(window, &pw, &ph)) SDL_GetWindowSize(window, &pw, &ph);
    if (w) *w = up(pw);
    if (h) *h = up(ph);
}
void rt_ios_set_window_size(SDL_Window *window, int w, int h) { SDL_SetWindowSize(window, down(w), down(h)); }
static void mode_up(SDL_DisplayMode *mode) { mode->w = up(mode->w); mode->h = up(mode->h); }
int rt_ios_set_window_display_mode(SDL_Window *window, const SDL_DisplayMode *mode) {
    if (!mode) return SDL_SetWindowDisplayMode(window, NULL);
    SDL_DisplayMode m = *mode; m.w = down(m.w); m.h = down(m.h);
    return SDL_SetWindowDisplayMode(window, &m);
}
int rt_ios_get_window_display_mode(SDL_Window *window, SDL_DisplayMode *mode) {
    int r = SDL_GetWindowDisplayMode(window, mode); if (!r && mode) mode_up(mode); return r;
}
int rt_ios_get_current_display_mode(int display, SDL_DisplayMode *mode) {
    int r = SDL_GetCurrentDisplayMode(display, mode); if (!r && mode) mode_up(mode); return r;
}
int rt_ios_get_desktop_display_mode(int display, SDL_DisplayMode *mode) {
    int r = SDL_GetDesktopDisplayMode(display, mode); if (!r && mode) mode_up(mode); return r;
}
int rt_ios_get_display_bounds(int display, SDL_Rect *rect) {
    int r = SDL_GetDisplayBounds(display, rect);
    if (!r && rect) { rect->x = up(rect->x); rect->y = up(rect->y); rect->w = up(rect->w); rect->h = up(rect->h); }
    return r;
}
Uint32 rt_ios_get_mouse_state(int *x, int *y) {
    int px = 0, py = 0;
    Uint32 buttons = SDL_GetMouseState(&px, &py);
    if (x) *x = up(px);
    if (y) *y = up(py);
    return buttons;
}
// Dans les menus, le jeu recentre le curseur juste après l'appui d'un toucher :
// le relâchement tombait au centre de l'écran, hors de l'élément (« Charger une
// partie » sélectionné puis abandonné). Le curseur y suit le doigt : pas de
// recentrage tant que l'interface du jeu est affichée.
int rt_ios_game_ui_visible(void);   // game_state.c
void rt_ios_warp_mouse_in_window(SDL_Window *window, int x, int y) {
    if (rt_ios_game_ui_visible()) return;
    SDL_WarpMouseInWindow(window, down(x), down(y));
}

// Toucher dans les menus : SDL envoie déplacement, appui et souvent relâchement
// dans la même image, et les listes du jeu (menu pause : « Reprendre la partie »…)
// n'activent que l'élément déjà survolé à une image précédente. Les événements
// souris issus d'un toucher sont donc étalés comme P2_TOUCH_TEST_CLICK : un
// changement de bouton par image, jamais dans l'image d'un déplacement.
// Une image = les appels jusqu'à ce que la file soit vide.
static int is_button(const SDL_Event *e) { return e->type == SDL_MOUSEBUTTONDOWN || e->type == SDL_MOUSEBUTTONUP; }
static int is_touch_mouse(const SDL_Event *e) {
    if (e->type == SDL_MOUSEMOTION) return e->motion.which == SDL_TOUCH_MOUSEID;
    return is_button(e) && e->button.which == SDL_TOUCH_MOUSEID;
}
static int poll_paced(SDL_Event *event) {
    static SDL_Event held[32];
    static int count, new_frame = 1, moved, pressed;
    if (!event) return count > 0 || SDL_PollEvent(NULL);
    if (new_frame) new_frame = 0, moved = pressed = 0;
    if (count && !(is_button(&held[0]) && (moved || pressed))) {
        *event = held[0];
        memmove(held, held + 1, (size_t)--count * sizeof(*held));
        if (is_button(event)) pressed = 1; else moved = 1;
        return 1;
    }
    for (SDL_Event e;;) {
        if (!SDL_PollEvent(&e)) { new_frame = 1; return 0; }
        if (!is_touch_mouse(&e)) { *event = e; return 1; }
        if (count || (is_button(&e) && (moved || pressed))) {
            if (count < (int)SDL_arraysize(held)) held[count++] = e;
            continue;
        }
        if (is_button(&e)) pressed = 1; else moved = 1;
        *event = e;
        return 1;
    }
}

// Événements de fenêtre et d'application (rares) : journal de la taille de la
// vue, de son échelle et du drawable, pour le retour d'arrière-plan.
// P2_IOS_WINDOW_TRACE=1.
static void trace_window_event(const SDL_Event *e) {
    static int enabled = -1;
    if (enabled < 0) enabled = getenv("P2_IOS_WINDOW_TRACE") != NULL;
    if (!enabled) return;
    const char *name = NULL;
    switch (e->type) {
    case SDL_APP_WILLENTERBACKGROUND: name = "app-will-bg"; break;
    case SDL_APP_DIDENTERBACKGROUND: name = "app-did-bg"; break;
    case SDL_APP_WILLENTERFOREGROUND: name = "app-will-fg"; break;
    case SDL_APP_DIDENTERFOREGROUND: name = "app-did-fg"; break;
    case SDL_WINDOWEVENT: name = "window"; break;
    default: return;
    }
    SDL_Window *window = SDL_GetWindowFromID(e->type == SDL_WINDOWEVENT ? e->window.windowID : 1);
    int dw = 0, dh = 0;
    CGSize bounds = CGSizeZero, screen = rt_ios_screen().bounds.size;
    CGFloat scale = 0;
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    if (window) {
        SDL_GL_GetDrawableSize(window, &dw, &dh);
        if (SDL_GetWindowWMInfo(window, &info) && info.subsystem == SDL_SYSWM_UIKIT) {
            UIView *view = info.info.uikit.window.rootViewController.view;
            bounds = view.bounds.size, scale = view.contentScaleFactor;
        }
    }
    fprintf(stderr, "[sdl-ios] %s %d (%d, %d) : vue %.0fx%.0f ×%.2f, drawable %dx%d, écran %.0fx%.0f\n", name,
            e->type == SDL_WINDOWEVENT ? e->window.event : 0, e->type == SDL_WINDOWEVENT ? e->window.data1 : 0,
            e->type == SDL_WINDOWEVENT ? e->window.data2 : 0, bounds.width, bounds.height, scale, dw, dh,
            screen.width, screen.height);
}

// Positions absolues et tailles de fenêtre en pixels ; les déplacements
// relatifs (visée) gardent leur échelle, pour ne pas tripler la sensibilité.
int rt_ios_poll_event(SDL_Event *event) {
    rt_ios_game_state_poll();   // menus/chargement ou partie (game_state.c), pour les commandes tactiles
    int got = poll_paced(event);
    if (got && event) trace_window_event(event);
    // P2_IOS_MOUSE_TRACE=1 : événements souris et doigts livrés au jeu, avec l'image.
    static int mouse_trace = -1;
    if (mouse_trace < 0) mouse_trace = getenv("P2_IOS_MOUSE_TRACE") != NULL;
    if (mouse_trace && got && event) {
        extern unsigned long rt_ios_frames;
        const SDL_Event *e = event;
        if (e->type == SDL_MOUSEMOTION)
            fprintf(stderr, "[souris] image %lu déplacement %d,%d (%+d,%+d) de %u\n", rt_ios_frames, e->motion.x, e->motion.y,
                    e->motion.xrel, e->motion.yrel, e->motion.which);
        else if (is_button(e))
            fprintf(stderr, "[souris] image %lu bouton %d %s %d,%d de %u\n", rt_ios_frames, e->button.button,
                    e->type == SDL_MOUSEBUTTONDOWN ? "appui" : "relâché", e->button.x, e->button.y, e->button.which);
        else if (e->type == SDL_FINGERDOWN || e->type == SDL_FINGERUP || e->type == SDL_FINGERMOTION)
            fprintf(stderr, "[souris] image %lu doigt %s %.3f,%.3f\n", rt_ios_frames,
                    e->type == SDL_FINGERDOWN ? "posé" : e->type == SDL_FINGERUP ? "levé" : "glissé", e->tfinger.x, e->tfinger.y);
        else if (e->type == SDL_CONTROLLERAXISMOTION || e->type == SDL_JOYAXISMOTION || e->type == SDL_CONTROLLERBUTTONDOWN)
            fprintf(stderr, "[souris] image %lu manette type %#x\n", rt_ios_frames, e->type);
    }
    if (got && event && event->type == SDL_WINDOWEVENT &&
        (event->window.event == SDL_WINDOWEVENT_RESIZED || event->window.event == SDL_WINDOWEVENT_SIZE_CHANGED))
        view_size(SDL_GetWindowFromID(event->window.windowID), &event->window.data1, &event->window.data2);
    if (!got || !event || rt_ios_render_scale() <= 1) return got;
    switch (event->type) {
    case SDL_MOUSEMOTION: event->motion.x = up(event->motion.x); event->motion.y = up(event->motion.y); break;
    case SDL_MOUSEBUTTONDOWN: case SDL_MOUSEBUTTONUP:
        event->button.x = up(event->button.x); event->button.y = up(event->button.y); break;
    case SDL_WINDOWEVENT:
        if (event->window.event == SDL_WINDOWEVENT_RESIZED || event->window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
            event->window.data1 = up(event->window.data1); event->window.data2 = up(event->window.data2);
        }
        break;
    default: break;
    }
    return got;
}
#endif
