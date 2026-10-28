// Imports de glibc et de libstdc++ que Half-Life 2 utilise et que Portal 2
// n'utilisait pas : new[]/delete, variantes internes de glibc (__strtok_r,
// __xpg_*, fortify), setjmp avec masque, fcntl et signal minimaux, résolution
// réseau absente (le jeu solo n'en a pas besoin) et OpenVR absent.
// SHIMS: _Znaj _ZdlPv _ZdaPv __strtok_r __rawmemchr __xpg_basename __xpg_strerror_r
// SHIMS: rand_r valloc getegid geteuid getgid __fdelt_chk __printf_chk signal fcntl dladdr
// SHIMS: __sigsetjmp siglongjmp __longjmp_chk
// SHIMS: getaddrinfo freeaddrinfo getifaddrs freeifaddrs getpeername getsockopt shutdown inet_pton inet_ntop
// SHIMS: VR_Init VR_IsHmdPresent VR_Shutdown memalign posix_memalign aligned_alloc
// SHIMS: __stpcpy_chk __fread_chk __swprintf_chk __vswprintf_chk __vfprintf_chk __wcscat_chk
// SHIMS: __wcsncpy_chk __wcstombs_chk __acos_finite __acosf_finite __asin_finite __atan2_finite
// SHIMS: __atan2f_finite __log_finite sqrt exp2f fmaxf fminf fscanf swscanf wcstoll
// SHIMS: __assert_fail __cxa_pure_virtual __dynamic_cast __gxx_personality_v0
// SHIMS: ctermid isatty tcgetattr tcsetattr freopen64 nanosleep sleep pthread_setname_np raise
// SHIMS: setbuf shm_open times SDL_GetWindowWMInfo SDL_HapticRumbleStop SDL_ShowMessageBox
// SHIMS: SDL_ShowSimpleMessageBox SDL_setenv
#include "rt.h"
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <math.h>
#include <sys/times.h>
#include <time.h>
#include <unistd.h>
#include <wchar.h>

static uint32_t arg(CPU *c, unsigned i) { return R32(c->esp + 4 + 4 * i); }
static void fail(CPU *c, int linux_errno) { rt_set_errno(c, linux_errno); c->eax = UINT32_MAX; }

// Appelle le shim `name` avec les arguments décalés de `skip` mots (variantes
// fortifiées ou internes dont les premiers arguments sont en plus).
static int forward(CPU *c, const char *name, unsigned skip) {
    c->esp += 4 * skip;
    int handled = rt_shim(c, name);
    c->esp -= 4 * skip;
    if (!handled) rt_trap(c, c->eip, "missing shim for forwarded import");
    return 1;
}

// Appelle le shim `name` sans les arguments [first, first + count) : variantes
// fortifiées dont les arguments de contrôle sont au milieu de la liste.
static int forward_without(CPU *c, const char *name, unsigned first, unsigned count) {
    uint32_t saved[8];
    for (unsigned i = 0; i < first + count; ++i) saved[i] = R32(c->esp + 4 + 4 * i);
    for (unsigned i = 0; i < first; ++i) W32(c->esp + 4 + 4 * (i + count), saved[i]);
    c->esp += 4 * count;
    int handled = rt_shim(c, name);
    c->esp -= 4 * count;
    for (unsigned i = 0; i < first + count; ++i) W32(c->esp + 4 + 4 * i, saved[i]);
    if (!handled) rt_trap(c, c->eip, "missing shim for forwarded import");
    return 1;
}

static const struct { const char *name, *target; } same_arguments[] = {
    {"__stpcpy_chk", "stpcpy"}, {"__wcscat_chk", "wcscat"}, {"__wcsncpy_chk", "wcsncpy"},
    {"__wcstombs_chk", "wcstombs"}, {"__acos_finite", "acos"}, {"__acosf_finite", "acosf"},
    {"__asin_finite", "asin"}, {"__atan2_finite", "atan2"}, {"__atan2f_finite", "atan2f"},
    {"__log_finite", "log"}, {"fscanf", "__isoc99_fscanf"}, {"swscanf", "__isoc99_swscanf"},
    {"setbuf", NULL},
};

static int hl2_shim(CPU *c, const char *name) {
    for (size_t i = 0; i < sizeof(same_arguments) / sizeof(*same_arguments); ++i)
        if (!strcmp(name, same_arguments[i].name)) {
            if (!same_arguments[i].target) { c->eax = 0; return 1; }   // setbuf : tampon ignoré
            return forward(c, same_arguments[i].target, 0);
        }
    if (!strcmp(name, "__fread_chk")) return forward_without(c, "fread", 1, 1);        // (ptr, ptrlen, size, n, f)
    if (!strcmp(name, "__vfprintf_chk")) return forward_without(c, "vfprintf", 1, 1);  // (f, flag, fmt, ap)
    if (!strcmp(name, "__swprintf_chk")) return forward_without(c, "swprintf", 2, 2);  // (s, n, flag, slen, fmt, ...)
    if (!strcmp(name, "__vswprintf_chk")) return forward_without(c, "vswprintf", 2, 2);
    if (!strcmp(name, "sqrt")) { rt_return_st0(c, sqrt(RD(c->esp + 4))); return 1; }
    if (!strcmp(name, "exp2f")) { rt_return_st0(c, exp2f(RF(c->esp + 4))); return 1; }
    if (!strcmp(name, "fmaxf")) { rt_return_st0(c, fmaxf(RF(c->esp + 4), RF(c->esp + 8))); return 1; }
    if (!strcmp(name, "fminf")) { rt_return_st0(c, fminf(RF(c->esp + 4), RF(c->esp + 8))); return 1; }
    if (!strcmp(name, "__assert_fail")) {
        char message[512];
        snprintf(message, sizeof(message), "guest assertion failed: %s (%s:%u, %s)",
                 arg(c, 0) ? (rt_string_length(c, arg(c, 0)), (const char *)GPTR(arg(c, 0))) : "?",
                 arg(c, 1) ? (rt_string_length(c, arg(c, 1)), (const char *)GPTR(arg(c, 1))) : "?", arg(c, 2),
                 arg(c, 3) ? (rt_string_length(c, arg(c, 3)), (const char *)GPTR(arg(c, 3))) : "?");
        rt_trap(c, c->eip, message);
    }
    if (!strcmp(name, "__cxa_pure_virtual")) rt_trap(c, c->eip, "pure virtual method called");
    if (!strcmp(name, "__dynamic_cast") || !strcmp(name, "__gxx_personality_v0"))
        rt_trap(c, c->eip, "libstdc++ RTTI/exceptions are not implemented (sourcevr only)");
    if (!strcmp(name, "wcstoll")) {
        uint32_t text = arg(c, 0), end = arg(c, 1);
        rt_span(c, text, 4);
        wchar_t *stop = NULL;
        long long value = wcstoll((const wchar_t *)GPTR(text), &stop, (int32_t)arg(c, 2));
        if (end) { rt_write_span(c, end, 4); W32(end, text + (uint32_t)((uint8_t *)stop - (uint8_t *)GPTR(text))); }
        c->eax = (uint32_t)value; c->edx = (uint32_t)((unsigned long long)value >> 32);
        return 1;
    }
    if (!strcmp(name, "ctermid")) {
        static uint32_t own;
        uint32_t out = arg(c, 0);
        if (!out) { if (!own) own = rt_alloc(16); out = own; }
        memcpy(rt_write_span(c, out, 9), "/dev/tty", 9);
        c->eax = out;
        return 1;
    }
    if (!strcmp(name, "isatty")) { c->eax = (uint32_t)isatty((int32_t)arg(c, 0)); if (!c->eax) rt_set_errno(c, 25); return 1; }
    if (!strcmp(name, "tcgetattr") || !strcmp(name, "tcsetattr")) { fail(c, 25); return 1; }   // ENOTTY
    if (!strcmp(name, "freopen64") || !strcmp(name, "shm_open")) { rt_set_errno(c, 38); c->eax = !strcmp(name, "shm_open") ? UINT32_MAX : 0; return 1; }
    if (!strcmp(name, "nanosleep") || !strcmp(name, "sleep")) {
        struct timespec delay;
        if (!strcmp(name, "sleep")) delay = (struct timespec){arg(c, 0), 0};
        else { rt_span(c, arg(c, 0), 8); delay = (struct timespec){(int32_t)R32(arg(c, 0)), (long)(int32_t)R32(arg(c, 0) + 4)}; }
        unsigned saved = rt_guest_suspend();
        int result = nanosleep(&delay, NULL), saved_errno = errno;
        rt_guest_resume(saved); errno = saved_errno;
        if (result) { rt_save_errno(c); c->eax = !strcmp(name, "sleep") ? 0 : UINT32_MAX; } else c->eax = 0;
        return 1;
    }
    if (!strcmp(name, "pthread_setname_np")) { c->eax = 0; return 1; }
    if (!strcmp(name, "raise")) {
        if (arg(c, 0) == 6) rt_trap(c, c->eip, "guest raise(SIGABRT)");
        c->eax = 0; return 1;
    }
    if (!strcmp(name, "times")) {
        struct tms t; clock_t ticks = times(&t);
        if (arg(c, 0)) {
            rt_write_span(c, arg(c, 0), 16);
            W32(arg(c, 0), (uint32_t)t.tms_utime); W32(arg(c, 0) + 4, (uint32_t)t.tms_stime);
            W32(arg(c, 0) + 8, (uint32_t)t.tms_cutime); W32(arg(c, 0) + 12, (uint32_t)t.tms_cstime);
        }
        c->eax = (uint32_t)ticks; return 1;
    }
    if (!strcmp(name, "SDL_GetWindowWMInfo")) { c->eax = 0; return 1; }   // SDL_FALSE : pas de X11
    if (!strcmp(name, "SDL_HapticRumbleStop")) { c->eax = 0; return 1; }
    if (!strcmp(name, "SDL_ShowSimpleMessageBox") || !strcmp(name, "SDL_ShowMessageBox")) {
        // Boîte d'erreur du moteur : texte dans le journal, pas de fenêtre modale.
        if (!strcmp(name, "SDL_ShowSimpleMessageBox")) {
            uint32_t title = arg(c, 1), text = arg(c, 2);
            fprintf(stderr, "[message box] %s: %s\n", title ? (rt_string_length(c, title), (const char *)GPTR(title)) : "",
                    text ? (rt_string_length(c, text), (const char *)GPTR(text)) : "");
        } else fprintf(stderr, "[message box]\n");
        c->eax = 0; return 1;
    }
    if (!strcmp(name, "SDL_setenv")) return forward(c, "setenv", 0);   // environnement partagé avec l'invité
    if (!strcmp(name, "_Znaj")) {
        c->eax = rt_alloc(arg(c, 0) ? arg(c, 0) : 1);
        if (!c->eax) rt_trap(c, c->eip, "operator new[]: out of guest memory");
    } else if (!strcmp(name, "_ZdlPv") || !strcmp(name, "_ZdaPv")) {
        if (arg(c, 0) && rt_free(arg(c, 0))) rt_trap(c, c->eip, "operator delete: invalid guest pointer");
    } else if (!strcmp(name, "__strtok_r")) {
        return forward(c, "strtok_r", 0);
    } else if (!strcmp(name, "__printf_chk")) {
        return forward(c, "printf", 1);   // __printf_chk(flag, fmt, ...)
    } else if (!strcmp(name, "__rawmemchr")) {
        uint32_t s = arg(c, 0); uint8_t ch = (uint8_t)arg(c, 1);
        for (;; ++s) { rt_span(c, s, 1); if (R8(s) == ch) break; }
        c->eax = s;
    } else if (!strcmp(name, "__xpg_basename")) {
        // POSIX : « / » final retiré en place, « . » pour une chaîne vide.
        uint32_t path = arg(c, 0);
        if (!path || !R8(path)) { static uint32_t dot; if (!dot) { dot = rt_alloc(2); W8(dot, '.'); W8(dot + 1, 0); } c->eax = dot; return 1; }
        uint32_t n = rt_string_length(c, path);
        while (n > 1 && R8(path + n - 1) == '/') { rt_write_span(c, path + n - 1, 1); W8(path + n - 1, 0); --n; }
        uint32_t base = path + n;
        while (base > path && R8(base - 1) != '/') --base;
        c->eax = (n == 1 && R8(path) == '/') ? path : base;
    } else if (!strcmp(name, "__xpg_strerror_r")) {
        // Version XSI : rend 0 et écrit le message dans le tampon (texte de la
        // variante GNU, qui peut rendre une chaîne statique).
        uint32_t buffer = arg(c, 1), size = arg(c, 2);
        forward(c, "strerror_r", 0);
        uint32_t message = c->eax, length = rt_string_length(c, message) + 1;
        if (!size) { c->eax = 34; return 1; }
        uint32_t copy = length < size ? length : size;
        if (message != buffer) memmove(rt_write_span(c, buffer, copy), GPTR(message), copy);
        W8(buffer + copy - 1, 0);
        c->eax = length > size ? 34 : 0;   // ERANGE
    } else if (!strcmp(name, "rand_r")) {
        uint32_t seed = arg(c, 0); rt_write_span(c, seed, 4);
        unsigned value = R32(seed); c->eax = (uint32_t)rand_r(&value); W32(seed, value);
    } else if (!strcmp(name, "memalign") || !strcmp(name, "aligned_alloc")) {
        c->eax = rt_alloc_aligned(arg(c, 0), arg(c, 1));
        if (!c->eax) rt_set_errno(c, 12);   // ENOMEM (EINVAL si alignement invalide, sans importance ici)
    } else if (!strcmp(name, "posix_memalign")) {
        uint32_t out = arg(c, 0), alignment = arg(c, 1);
        if (alignment < 4 || (alignment & (alignment - 1))) { c->eax = 22; return 1; }
        uint32_t block = rt_alloc_aligned(alignment, arg(c, 2));
        if (!block) { c->eax = 12; return 1; }
        rt_write_span(c, out, 4); W32(out, block); c->eax = 0;
    } else if (!strcmp(name, "valloc")) {
        c->eax = rt_alloc(arg(c, 0) ? arg(c, 0) : 1);   // le tas invité aligne déjà largement
    } else if (!strcmp(name, "getegid")) {
        c->eax = (uint32_t)getegid();
    } else if (!strcmp(name, "geteuid")) {
        c->eax = (uint32_t)geteuid();
    } else if (!strcmp(name, "getgid")) {
        c->eax = (uint32_t)getgid();
    } else if (!strcmp(name, "__fdelt_chk")) {
        uint32_t fd = arg(c, 0);
        if (fd >= 1024) rt_trap(c, c->eip, "*** buffer overflow detected ***: terminated (__fdelt_chk)");
        c->eax = fd / 32;
    } else if (!strcmp(name, "signal")) {
        c->eax = 0;   // SIG_DFL : les signaux hôtes restent gérés par le runtime
    } else if (!strcmp(name, "fcntl")) {
        int fd = (int32_t)arg(c, 0), command = (int32_t)arg(c, 1), value = (int32_t)arg(c, 2), result;
        if (command == 1) {                      // F_GETFD
            result = fcntl(fd, F_GETFD); if (result >= 0) result = (result & FD_CLOEXEC) ? 1 : 0;
        } else if (command == 2) {               // F_SETFD
            result = fcntl(fd, F_SETFD, (value & 1) ? FD_CLOEXEC : 0);
        } else if (command == 3) {               // F_GETFL : O_ACCMODE, O_APPEND, O_NONBLOCK
            result = fcntl(fd, F_GETFL);
            if (result >= 0) result = (result & O_ACCMODE) | ((result & O_APPEND) ? 0x400 : 0) | ((result & O_NONBLOCK) ? 0x800 : 0);
        } else if (command == 4) {               // F_SETFL
            int flags = fcntl(fd, F_GETFL);
            result = flags < 0 ? flags : fcntl(fd, F_SETFL, (flags & ~(O_APPEND | O_NONBLOCK)) |
                                               ((value & 0x400) ? O_APPEND : 0) | ((value & 0x800) ? O_NONBLOCK : 0));
        } else if ((command >= 5 && command <= 7) || (command >= 12 && command <= 14)) {
            // Verrous d'enregistrement : struct flock i386 (short type, short whence,
            // long start, long len, pid) ou flock64 (start/len sur 64 bits).
            int wide = command >= 12;
            uint32_t lock = (uint32_t)value, size = wide ? 24 : 16;
            rt_write_span(c, lock, size);
            static const short host_types[] = {F_RDLCK, F_WRLCK, F_UNLCK};
            uint16_t type = R16(lock);
            if (type > 2) { fail(c, 22); return 1; }
            struct flock native = {
                .l_type = host_types[type], .l_whence = (short)R16(lock + 2),
                .l_start = wide ? (off_t)(int64_t)R64(lock + 4) : (off_t)(int32_t)R32(lock + 4),
                .l_len = wide ? (off_t)(int64_t)R64(lock + 12) : (off_t)(int32_t)R32(lock + 8),
            };
            int host = (command == 5 || command == 12) ? F_GETLK : (command == 6 || command == 13) ? F_SETLK : F_SETLKW;
            unsigned saved = host == F_SETLKW ? rt_guest_suspend() : 0;
            result = fcntl(fd, host, &native);
            int saved_errno = errno;
            if (host == F_SETLKW) rt_guest_resume(saved);
            errno = saved_errno;
            if (result >= 0 && host == F_GETLK) {
                W16(lock, native.l_type == F_RDLCK ? 0 : native.l_type == F_WRLCK ? 1 : 2);
                W16(lock + 2, (uint16_t)native.l_whence);
                if (wide) { W64(lock + 4, (uint64_t)native.l_start); W64(lock + 12, (uint64_t)native.l_len); W32(lock + 20, (uint32_t)native.l_pid); }
                else { W32(lock + 4, (uint32_t)native.l_start); W32(lock + 8, (uint32_t)native.l_len); W32(lock + 12, (uint32_t)native.l_pid); }
            }
        } else { fail(c, 22); return 1; }
        if (result < 0) { rt_save_errno(c); c->eax = UINT32_MAX; } else c->eax = (uint32_t)result;
    } else if (!strcmp(name, "dladdr")) {
        c->eax = 0;   // aucune information de symbole
    } else if (!strcmp(name, "__sigsetjmp")) {
        // Le masque de signaux n'est jamais restauré (signaux gérés par l'hôte).
        return forward(c, "_setjmp", 0);
    } else if (!strcmp(name, "siglongjmp") || !strcmp(name, "__longjmp_chk")) {
        uint32_t env = arg(c, 0);
        rt_span(c, env, 28); rt_write_span(c, env + 24, 4); W32(env + 24, 0);
        return forward(c, "longjmp", 0);
    } else if (!strcmp(name, "getaddrinfo")) {
        c->eax = (uint32_t)-4;   // EAI_FAIL : pas de résolution réseau
    } else if (!strcmp(name, "freeaddrinfo") || !strcmp(name, "freeifaddrs")) {
        c->eax = 0;
    } else if (!strcmp(name, "getifaddrs")) {
        fail(c, 38);              // ENOSYS
    } else if (!strcmp(name, "getpeername")) {
        fail(c, 107);             // ENOTCONN
    } else if (!strcmp(name, "getsockopt")) {
        fail(c, 92);              // ENOPROTOOPT
    } else if (!strcmp(name, "shutdown")) {
        int result = shutdown((int32_t)arg(c, 0), (int32_t)arg(c, 1));
        if (result) { rt_save_errno(c); c->eax = UINT32_MAX; } else c->eax = 0;
    } else if (!strcmp(name, "inet_pton")) {
        int family = (int32_t)arg(c, 0);
        if (family != 2) { fail(c, 97); return 1; }   // AF_INET seulement (EAFNOSUPPORT)
        rt_string_length(c, arg(c, 1));
        struct in_addr address;
        int result = inet_pton(AF_INET, GPTR(arg(c, 1)), &address);
        if (result == 1) memcpy(rt_write_span(c, arg(c, 2), 4), &address, 4);
        c->eax = (uint32_t)result;
    } else if (!strcmp(name, "inet_ntop")) {
        int family = (int32_t)arg(c, 0); uint32_t out = arg(c, 2), size = arg(c, 3);
        if (family != 2) { fail(c, 97); return 1; }
        rt_span(c, arg(c, 1), 4);
        char text[INET_ADDRSTRLEN];
        if (!inet_ntop(AF_INET, GPTR(arg(c, 1)), text, sizeof(text))) { fail(c, 28); return 1; }
        size_t length = strlen(text) + 1;
        if (length > size) { fail(c, 28); return 1; }   // ENOSPC
        memcpy(rt_write_span(c, out, length), text, length);
        c->eax = out;
    } else if (!strcmp(name, "VR_IsHmdPresent") || !strcmp(name, "VR_Init")) {
        // OpenVR absent : pas de casque, VR_Init échoue (code d'erreur 0 non écrit).
        if (!strcmp(name, "VR_Init") && arg(c, 0)) { rt_write_span(c, arg(c, 0), 4); W32(arg(c, 0), 100); }
        c->eax = 0;
    } else if (!strcmp(name, "VR_Shutdown")) {
        c->eax = 0;
    } else return 0;
    return 1;
}
RT_SHIM_PROVIDER(hl2_shim)
