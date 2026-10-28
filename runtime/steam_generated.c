/* Généré par tools/gen_steam.py depuis la libsteam_api.dylib officielle (SDK 1.60) et
 * Steamworks.NET 2024.8.0 (MIT). Ne pas modifier : relancer le générateur. */
#include "steam.h"

void steam_manual_client_warning_hook(CPU *c, void *self, uint32_t args, uint32_t sret);
void steam_manual_utils_warning_hook(CPU *c, void *self, uint32_t args, uint32_t sret);
/* STEAMAPPS_INTERFACE_VERSION008::BGetDLCDataByIndex */
static void m0(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, void *, void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BGetDLCDataByIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 1u);
    void *a3 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    int32_t a4 = (int32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsAppInstalled */
static void m1(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsAppInstalled"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsCybercafe */
static void m2(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsCybercafe"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsDlcInstalled */
static void m3(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsDlcInstalled"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsLowViolence */
static void m4(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsLowViolence"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsSubscribed */
static void m5(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsSubscribed"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedApp */
static void m6(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsSubscribedApp"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedFromFamilySharing */
static void m7(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedFromFreeWeekend */
static void m8(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsTimedTrial */
static void m9(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsTimedTrial"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::BIsVACBanned */
static void m10(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_BIsVACBanned"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetAppBuildId */
static void m11(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetAppBuildId"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetAppInstallDir */
static void m12(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetAppInstallDir"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetAppOwner */
static void m13(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetAppOwner"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret_sret(c, sret, r);
}
/* STEAMAPPS_INTERFACE_VERSION008::GetAvailableGameLanguages */
static void m14(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetAvailableGameLanguages"), __ATOMIC_RELAXED);
    const char * r = ((F)fn)(self);
    c->eax = steam_guest_string(c, r);
}
/* STEAMAPPS_INTERFACE_VERSION008::GetCurrentBetaName */
static void m15(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetCurrentBetaName"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetCurrentGameLanguage */
static void m16(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetCurrentGameLanguage"), __ATOMIC_RELAXED);
    const char * r = ((F)fn)(self);
    c->eax = steam_guest_string(c, r);
}
/* STEAMAPPS_INTERFACE_VERSION008::GetDLCCount */
static void m17(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetDLCCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetDlcDownloadProgress */
static void m18(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetDlcDownloadProgress"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    void *a2 = steam_out(c, R32(args + 8u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetEarliestPurchaseUnixTime */
static void m19(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetFileDetails */
static void m20(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetFileDetails"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMAPPS_INTERFACE_VERSION008::GetInstalledDepots */
static void m21(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetInstalledDepots"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetLaunchCommandLine */
static void m22(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetLaunchCommandLine"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMAPPS_INTERFACE_VERSION008::GetLaunchQueryParam */
static void m23(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_GetLaunchQueryParam"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* STEAMAPPS_INTERFACE_VERSION008::InstallDLC */
static void m25(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_InstallDLC"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMAPPS_INTERFACE_VERSION008::MarkContentCorrupt */
static void m26(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_MarkContentCorrupt"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::RequestAllProofOfPurchaseKeys */
static void m27(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMAPPS_INTERFACE_VERSION008::RequestAppProofOfPurchaseKey */
static void m28(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMAPPS_INTERFACE_VERSION008::SetDlcContext */
static void m30(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_SetDlcContext"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMAPPS_INTERFACE_VERSION008::UninstallDLC */
static void m31(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamApps_UninstallDLC"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::AddHeader */
static void m32(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_AddHeader"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::AllowStartRequest */
static void m33(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_AllowStartRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::CopyToClipboard */
static void m34(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_CopyToClipboard"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::CreateBrowser */
static void m35(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_CreateBrowser"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::ExecuteJavascript */
static void m36(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_ExecuteJavascript"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::Find */
static void m38(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, const char *, bool, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_Find"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool a2 = (R8(args + 8u) != 0);
    bool a3 = (R8(args + 12u) != 0);
    ((F)fn)(self, a0, a1, a2, a3);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::GetLinkAtPosition */
static void m39(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_GetLinkAtPosition"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::GoBack */
static void m40(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_GoBack"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::GoForward */
static void m41(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_GoForward"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::Init */
static void m42(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_Init"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::JSDialogResponse */
static void m43(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_JSDialogResponse"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyChar */
static void m44(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_KeyChar"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyDown */
static void m45(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t, int32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_KeyDown"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    bool a3 = (R8(args + 12u) != 0);
    ((F)fn)(self, a0, a1, a2, a3);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyUp */
static void m46(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_KeyUp"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::LoadURL */
static void m47(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_LoadURL"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseDoubleClick */
static void m48(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_MouseDoubleClick"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseDown */
static void m49(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_MouseDown"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseMove */
static void m50(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_MouseMove"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseUp */
static void m51(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_MouseUp"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseWheel */
static void m52(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_MouseWheel"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::OpenDeveloperTools */
static void m53(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_OpenDeveloperTools"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::PasteFromClipboard */
static void m54(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_PasteFromClipboard"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::Reload */
static void m55(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_Reload"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::RemoveBrowser */
static void m56(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_RemoveBrowser"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetBackgroundMode */
static void m57(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetBackgroundMode"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetCookie */
static void m58(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, const char *, const char *, const char *, uint32_t, bool, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetCookie"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    const char *a3 = steam_in_string(c, R32(args + 12u));
    uint32_t a4 = (uint32_t)R32(args + 16u);
    bool a5 = (R8(args + 20u) != 0);
    bool a6 = (R8(args + 24u) != 0);
    ((F)fn)(self, a0, a1, a2, a3, a4, a5, a6);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetDPIScalingFactor */
static void m59(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    float a1 = RF(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetHorizontalScroll */
static void m60(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetHorizontalScroll"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetKeyFocus */
static void m61(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetKeyFocus"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetPageScaleFactor */
static void m62(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, float, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetPageScaleFactor"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    float a1 = RF(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t a3 = (int32_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2, a3);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetSize */
static void m63(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetSize"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetVerticalScroll */
static void m64(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_SetVerticalScroll"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::Shutdown */
static void m65(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_Shutdown"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::StopFind */
static void m66(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_StopFind"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::StopLoad */
static void m67(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_StopLoad"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTMLSURFACE_INTERFACE_VERSION_005::ViewSource */
static void m68(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTMLSurface_ViewSource"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMHTTP_INTERFACE_VERSION003::CreateCookieContainer */
static void m69(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_CreateCookieContainer"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMHTTP_INTERFACE_VERSION003::CreateHTTPRequest */
static void m70(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_CreateHTTPRequest"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMHTTP_INTERFACE_VERSION003::DeferHTTPRequest */
static void m71(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_DeferHTTPRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPDownloadProgressPct */
static void m72(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPRequestWasTimedOut */
static void m73(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 1u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseBodyData */
static void m74(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPResponseBodyData"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseBodySize */
static void m75(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPResponseBodySize"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseHeaderSize */
static void m76(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseHeaderValue */
static void m77(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    void *a2 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::GetHTTPStreamingResponseBodyData */
static void m78(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    void *a2 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::PrioritizeHTTPRequest */
static void m79(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_PrioritizeHTTPRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::ReleaseCookieContainer */
static void m80(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_ReleaseCookieContainer"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::ReleaseHTTPRequest */
static void m81(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_ReleaseHTTPRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SendHTTPRequest */
static void m82(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SendHTTPRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SendHTTPRequestAndStreamResponse */
static void m83(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetCookie */
static void m84(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetCookie"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    const char *a3 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestAbsoluteTimeoutMS */
static void m85(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestContextValue */
static void m86(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestContextValue"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestCookieContainer */
static void m87(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestGetOrPostParameter */
static void m88(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestHeaderValue */
static void m89(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestNetworkActivityTimeout */
static void m90(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestRequiresVerifiedCertificate */
static void m92(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestUserAgentInfo */
static void m93(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::AddPromoItem */
static void m94(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_AddPromoItem"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::CheckResultSteamID */
static void m96(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_CheckResultSteamID"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::ConsumeItem */
static void m97(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_ConsumeItem"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::DeserializeResult */
static void m98(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_DeserializeResult"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    bool a3 = (R8(args + 12u) != 0);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::DestroyResult */
static void m99(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_DestroyResult"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMINVENTORY_INTERFACE_V003::GetAllItems */
static void m102(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetAllItems"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::GetItemPrice */
static void m106(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetItemPrice"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    void *a2 = steam_out(c, R32(args + 8u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::GetItemsByID */
static void m107(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetItemsByID"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 8u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::GetNumItemsWithPrices */
static void m109(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetNumItemsWithPrices"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMINVENTORY_INTERFACE_V003::GetResultStatus */
static void m112(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetResultStatus"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMINVENTORY_INTERFACE_V003::GetResultTimestamp */
static void m113(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GetResultTimestamp"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMINVENTORY_INTERFACE_V003::GrantPromoItems */
static void m114(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_GrantPromoItems"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::InspectItem */
static void m115(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_InspectItem"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::LoadItemDefinitions */
static void m116(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_LoadItemDefinitions"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::RemoveProperty */
static void m117(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_RemoveProperty"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::RequestEligiblePromoItemDefinitionsIDs */
static void m118(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMINVENTORY_INTERFACE_V003::RequestPrices */
static void m119(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_RequestPrices"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMINVENTORY_INTERFACE_V003::SendItemDropHeartbeat */
static void m120(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SendItemDropHeartbeat"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMINVENTORY_INTERFACE_V003::SetPropertyBool */
static void m122(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t, const char *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SetPropertyBool"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    bool a3 = (R8(args + 20u) != 0);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::SetPropertyFloat */
static void m123(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t, const char *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SetPropertyFloat"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    float a3 = RF(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::SetPropertyInt64 */
static void m124(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t, const char *, int64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SetPropertyInt64"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    int64_t a3 = (int64_t)R64(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::SetPropertyString */
static void m125(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SetPropertyString"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    const char *a3 = steam_in_string(c, R32(args + 20u));
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::StartUpdateProperties */
static void m127(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_StartUpdateProperties"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMINVENTORY_INTERFACE_V003::SubmitUpdateProperties */
static void m128(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_SubmitUpdateProperties"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::TransferItemQuantity */
static void m129(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint64_t, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_TransferItemQuantity"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    uint64_t a3 = (uint64_t)R64(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMINVENTORY_INTERFACE_V003::TriggerItemDrop */
static void m130(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInventory_TriggerItemDrop"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::BActivationSuccess */
static void m131(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_BActivationSuccess"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::BIsCurrentMusicRemote */
static void m132(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_BIsCurrentMusicRemote"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryDidChange */
static void m133(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_CurrentEntryDidChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryIsAvailable */
static void m134(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_CurrentEntryIsAvailable"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryWillChange */
static void m135(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_CurrentEntryWillChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::DeregisterSteamMusicRemote */
static void m136(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_DeregisterSteamMusicRemote"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableLooped */
static void m137(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnableLooped"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlayNext */
static void m138(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnablePlayNext"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlayPrevious */
static void m139(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnablePlayPrevious"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlaylists */
static void m140(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnablePlaylists"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableQueue */
static void m141(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnableQueue"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableShuffled */
static void m142(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_EnableShuffled"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::PlaylistDidChange */
static void m143(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_PlaylistDidChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::PlaylistWillChange */
static void m144(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_PlaylistWillChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::QueueDidChange */
static void m145(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_QueueDidChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::QueueWillChange */
static void m146(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_QueueWillChange"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::RegisterSteamMusicRemote */
static void m147(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_RegisterSteamMusicRemote"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::ResetPlaylistEntries */
static void m148(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_ResetPlaylistEntries"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::ResetQueueEntries */
static void m149(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_ResetQueueEntries"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetCurrentPlaylistEntry */
static void m150(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetCurrentPlaylistEntry"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetCurrentQueueEntry */
static void m151(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetCurrentQueueEntry"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetDisplayName */
static void m152(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetDisplayName"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetPNGIcon_64x64 */
static void m153(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetPNGIcon_64x64"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetPlaylistEntry */
static void m154(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetPlaylistEntry"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::SetQueueEntry */
static void m155(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_SetQueueEntry"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryCoverArt */
static void m156(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryCoverArt"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryElapsedSeconds */
static void m157(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryText */
static void m158(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateCurrentEntryText"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateLooped */
static void m159(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateLooped"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdatePlaybackStatus */
static void m160(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdatePlaybackStatus"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateShuffled */
static void m161(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateShuffled"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateVolume */
static void m162(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusicRemote_UpdateVolume"), __ATOMIC_RELAXED);
    float a0 = RF(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSIC_INTERFACE_VERSION001::BIsEnabled */
static void m163(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_BIsEnabled"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSIC_INTERFACE_VERSION001::BIsPlaying */
static void m164(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_BIsPlaying"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMMUSIC_INTERFACE_VERSION001::GetPlaybackStatus */
static void m165(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_GetPlaybackStatus"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMMUSIC_INTERFACE_VERSION001::GetVolume */
static void m166(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef float (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_GetVolume"), __ATOMIC_RELAXED);
    float r = ((F)fn)(self);
    rt_return_st0(c, r);
}
/* STEAMMUSIC_INTERFACE_VERSION001::Pause */
static void m167(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_Pause"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMMUSIC_INTERFACE_VERSION001::Play */
static void m168(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_Play"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMMUSIC_INTERFACE_VERSION001::PlayNext */
static void m169(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_PlayNext"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMMUSIC_INTERFACE_VERSION001::PlayPrevious */
static void m170(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_PlayPrevious"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMMUSIC_INTERFACE_VERSION001::SetVolume */
static void m171(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMusic_SetVolume"), __ATOMIC_RELAXED);
    float a0 = RF(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsAppBlocked */
static void m172(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsAppBlocked"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsAppInBlockList */
static void m173(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsAppInBlockList"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsFeatureBlocked */
static void m174(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsFeatureBlocked"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsFeatureInBlockList */
static void m175(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsParentalLockEnabled */
static void m176(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsParentalLockLocked */
static void m177(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParentalSettings_BIsParentalLockLocked"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::BGetSessionClientResolution */
static void m178(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_BGetSessionClientResolution"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::BSendRemotePlayTogetherInvite */
static void m179(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::BStartRemotePlayTogether */
static void m180(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_BStartRemotePlayTogether"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionClientFormFactor */
static void m181(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionClientName */
static void m182(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_GetSessionClientName"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionCount */
static void m183(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_GetSessionCount"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionID */
static void m184(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_GetSessionID"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionSteamID */
static void m185(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemotePlay_GetSessionSteamID"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::BeginFileWriteBatch */
static void m186(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::CommitPublishedFileUpdate */
static void m187(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::CreatePublishedFileUpdateRequest */
static void m188(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::DeletePublishedFile */
static void m189(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_DeletePublishedFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::EndFileWriteBatch */
static void m190(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_EndFileWriteBatch"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumeratePublishedFilesByUserAction */
static void m191(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumerateUserPublishedFiles */
static void m193(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumerateUserSubscribedFiles */
static void m195(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileDelete */
static void m196(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileDelete"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileExists */
static void m197(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileExists"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileForget */
static void m198(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileForget"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FilePersisted */
static void m199(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FilePersisted"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileRead */
static void m200(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileRead"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileReadAsync */
static void m201(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileReadAsync"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1, a2);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileReadAsyncComplete */
static void m202(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileShare */
static void m203(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileShare"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWrite */
static void m204(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWrite"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    int32_t a2 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteAsync */
static void m205(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWriteAsync"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1, a2);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamCancel */
static void m206(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamClose */
static void m207(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWriteStreamClose"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamOpen */
static void m208(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamWriteChunk */
static void m209(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    int32_t a2 = (int32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetCachedUGCCount */
static void m210(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetCachedUGCCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetCachedUGCHandle */
static void m211(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileCount */
static void m212(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetFileCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileNameAndSize */
static void m213(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetFileNameAndSize"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileSize */
static void m214(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetFileSize"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileTimestamp */
static void m215(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetFileTimestamp"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetLocalFileChange */
static void m216(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetLocalFileChange"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    const char * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_guest_string(c, r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetLocalFileChangeCount */
static void m217(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetPublishedFileDetails */
static void m218(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetPublishedItemVoteDetails */
static void m219(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetQuota */
static void m220(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetQuota"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 8u);
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetSyncPlatforms */
static void m221(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetSyncPlatforms"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUGCDetails */
static void m222(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, const char **, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetUGCDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2_slot = steam_out(c, R32(args + 12u), 4u); const char *a2_text = NULL;
    const char **a2 = a2_slot ? &a2_text : NULL;
    void *a3 = steam_out(c, R32(args + 16u), 4u);
    void *a4 = steam_out(c, R32(args + 20u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    if (a2_slot) { uint32_t a2_guest = steam_guest_string(c, a2_text); memcpy(a2_slot, &a2_guest, 4); }
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUGCDownloadProgress */
static void m223(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUserPublishedItemVoteDetails */
static void m224(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::IsCloudEnabledForAccount */
static void m225(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::IsCloudEnabledForApp */
static void m226(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetCloudEnabledForApp */
static void m227(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetSyncPlatforms */
static void m228(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_SetSyncPlatforms"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetUserPublishedFileAction */
static void m229(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::SubscribePublishedFile */
static void m230(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_SubscribePublishedFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCDownload */
static void m231(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UGCDownload"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCDownloadToLocation */
static void m232(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, const char *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    uint32_t a2 = (uint32_t)R32(args + 12u);
    uint64_t r = ((F)fn)(self, a0, a1, a2);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCRead */
static void m233(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, void *, int32_t, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UGCRead"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    int32_t a2 = (int32_t)R32(args + 12u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    int32_t a4 = (int32_t)R32(args + 20u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = (uint32_t)r;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UnsubscribePublishedFile */
static void m234(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileDescription */
static void m235(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileFile */
static void m236(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFilePreviewFile */
static void m237(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileSetChangeDescription */
static void m238(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileTitle */
static void m240(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileVisibility */
static void m241(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdateUserPublishedItemVote */
static void m242(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::AddScreenshotToLibrary */
static void m243(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, const char *, const char *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_AddScreenshotToLibrary"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t a3 = (int32_t)R32(args + 12u);
    uint32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::AddVRScreenshotToLibrary */
static void m244(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, int32_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    uint32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::HookScreenshots */
static void m245(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_HookScreenshots"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::IsScreenshotsHooked */
static void m246(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_IsScreenshotsHooked"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::SetLocation */
static void m247(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_SetLocation"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::TagPublishedFile */
static void m248(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_TagPublishedFile"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::TagUser */
static void m249(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_TagUser"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::TriggerScreenshot */
static void m250(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_TriggerScreenshot"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* STEAMSCREENSHOTS_INTERFACE_VERSION003::WriteScreenshot */
static void m251(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, void *, uint32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamScreenshots_WriteScreenshot"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t a3 = (int32_t)R32(args + 12u);
    uint32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* STEAMTIMELINE_INTERFACE_V001::AddTimelineEvent */
static void m252(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, const char *, const char *, uint32_t, float, float, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamTimeline_AddTimelineEvent"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char *a2 = steam_in_string(c, R32(args + 8u));
    uint32_t a3 = (uint32_t)R32(args + 12u);
    float a4 = RF(args + 16u);
    float a5 = RF(args + 20u);
    int32_t a6 = (int32_t)R32(args + 24u);
    ((F)fn)(self, a0, a1, a2, a3, a4, a5, a6);
}
/* STEAMTIMELINE_INTERFACE_V001::ClearTimelineStateDescription */
static void m253(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamTimeline_ClearTimelineStateDescription"), __ATOMIC_RELAXED);
    float a0 = RF(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMTIMELINE_INTERFACE_V001::SetTimelineGameMode */
static void m254(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamTimeline_SetTimelineGameMode"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMTIMELINE_INTERFACE_V001::SetTimelineStateDescription */
static void m255(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamTimeline_SetTimelineStateDescription"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    float a1 = RF(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* STEAMUGC_INTERFACE_VERSION020::AddAppDependency */
static void m256(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddAppDependency"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::AddContentDescriptor */
static void m257(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddContentDescriptor"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddDependency */
static void m258(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddDependency"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::AddExcludedTag */
static void m259(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddExcludedTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddItemKeyValueTag */
static void m260(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddItemKeyValueTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddItemPreviewFile */
static void m261(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddItemPreviewFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    int32_t a2 = (int32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddItemPreviewVideo */
static void m262(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddItemPreviewVideo"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddItemToFavorites */
static void m263(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddItemToFavorites"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::AddRequiredKeyValueTag */
static void m264(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddRequiredKeyValueTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::AddRequiredTag */
static void m265(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_AddRequiredTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::BInitWorkshopForGameServer */
static void m267(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_BInitWorkshopForGameServer"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::CreateItem */
static void m268(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_CreateItem"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::CreateQueryAllUGCRequestCursor */
static void m269(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t, int32_t, uint32_t, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint32_t a3 = (uint32_t)R32(args + 12u);
    const char *a4 = steam_in_string(c, R32(args + 16u));
    uint64_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::CreateQueryAllUGCRequestPage */
static void m270(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t, int32_t, uint32_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint32_t a3 = (uint32_t)R32(args + 12u);
    uint32_t a4 = (uint32_t)R32(args + 16u);
    uint64_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::CreateQueryUGCDetailsRequest */
static void m271(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 8u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::CreateQueryUserUGCRequest */
static void m272(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t, int32_t, int32_t, int32_t, uint32_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_CreateQueryUserUGCRequest"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t a3 = (int32_t)R32(args + 12u);
    uint32_t a4 = (uint32_t)R32(args + 16u);
    uint32_t a5 = (uint32_t)R32(args + 20u);
    uint32_t a6 = (uint32_t)R32(args + 24u);
    uint64_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5, a6);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::DeleteItem */
static void m273(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_DeleteItem"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::DownloadItem */
static void m274(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_DownloadItem"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetAppDependencies */
static void m275(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetAppDependencies"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::GetItemDownloadInfo */
static void m276(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetItemDownloadInfo"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 8u);
    void *a2 = steam_out(c, R32(args + 12u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetItemInstallInfo */
static void m277(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetItemInstallInfo"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    void *a4 = steam_out(c, R32(args + 20u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetItemState */
static void m278(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetItemState"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetItemUpdateProgress */
static void m279(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetItemUpdateProgress"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 8u);
    void *a2 = steam_out(c, R32(args + 12u), 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetNumSubscribedItems */
static void m280(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetNumSubscribedItems"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetNumSupportedGameVersions */
static void m281(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetNumSupportedGameVersions"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryFirstUGCKeyValueTag */
static void m282(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 12u));
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCChildren */
static void m283(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCChildren"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 8u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCContentDescriptors */
static void m284(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 4u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    uint32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCKeyValueTag */
static void m285(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, uint32_t, void *, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    void *a5 = steam_out_buffer(c, R32(args + 24u), (int64_t)(int32_t)R32(args + 28u), 1u);
    uint32_t a6 = (uint32_t)R32(args + 28u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4, a5, a6);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCMetadata */
static void m286(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCMetadata"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumAdditionalPreviews */
static void m287(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumKeyValueTags */
static void m288(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumTags */
static void m289(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCNumTags"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCPreviewURL */
static void m290(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCPreviewURL"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCStatistic */
static void m292(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCStatistic"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    void *a3 = steam_out(c, R32(args + 16u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCTag */
static void m293(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetQueryUGCTagDisplayName */
static void m294(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::GetSubscribedItems */
static void m295(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetSubscribedItems"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 8u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetUserContentDescriptorPreferences */
static void m297(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 4u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* STEAMUGC_INTERFACE_VERSION020::GetUserItemVote */
static void m298(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetUserItemVote"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::GetWorkshopEULAStatus */
static void m299(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_GetWorkshopEULAStatus"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::ReleaseQueryUGCRequest */
static void m300(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_ReleaseQueryUGCRequest"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveAllItemKeyValueTags */
static void m301(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveAppDependency */
static void m302(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveAppDependency"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveContentDescriptor */
static void m303(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveContentDescriptor"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveDependency */
static void m304(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveDependency"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveItemFromFavorites */
static void m305(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveItemFromFavorites"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveItemKeyValueTags */
static void m306(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveItemKeyValueTags"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::RemoveItemPreview */
static void m307(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RemoveItemPreview"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::RequestUGCDetails */
static void m308(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_RequestUGCDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::SendQueryUGCRequest */
static void m309(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SendQueryUGCRequest"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::SetAdminQuery */
static void m310(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetAdminQuery"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetAllowCachedResponse */
static void m311(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetAllowCachedResponse"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetAllowLegacyUpload */
static void m312(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetAllowLegacyUpload"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetCloudFileNameFilter */
static void m313(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetCloudFileNameFilter"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemContent */
static void m314(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemContent"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemDescription */
static void m315(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemDescription"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemMetadata */
static void m316(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemMetadata"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemPreview */
static void m317(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemPreview"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemTitle */
static void m319(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemTitle"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemUpdateLanguage */
static void m320(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemUpdateLanguage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetItemVisibility */
static void m321(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetItemVisibility"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetLanguage */
static void m322(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetLanguage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetMatchAnyTag */
static void m323(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetMatchAnyTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetRankedByTrendDays */
static void m324(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetRankedByTrendDays"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetRequiredGameVersions */
static void m325(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetRequiredGameVersions"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnAdditionalPreviews */
static void m326(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnAdditionalPreviews"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnChildren */
static void m327(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnChildren"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnKeyValueTags */
static void m328(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnKeyValueTags"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnLongDescription */
static void m329(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnLongDescription"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnMetadata */
static void m330(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnMetadata"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnOnlyIDs */
static void m331(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnOnlyIDs"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnPlaytimeStats */
static void m332(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnPlaytimeStats"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetReturnTotalOnly */
static void m333(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetReturnTotalOnly"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetSearchText */
static void m334(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetSearchText"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetTimeCreatedDateRange */
static void m335(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetTimeCreatedDateRange"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetTimeUpdatedDateRange */
static void m336(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetTimeUpdatedDateRange"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::SetUserItemVote */
static void m337(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SetUserItemVote"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::ShowWorkshopEULA */
static void m338(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_ShowWorkshopEULA"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::StartItemUpdate */
static void m339(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_StartItemUpdate"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::StartPlaytimeTracking */
static void m340(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_StartPlaytimeTracking"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 8u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::StopPlaytimeTracking */
static void m341(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_StopPlaytimeTracking"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 8u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::StopPlaytimeTrackingForAllItems */
static void m342(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::SubmitItemUpdate */
static void m343(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SubmitItemUpdate"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::SubscribeItem */
static void m344(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SubscribeItem"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::SuspendDownloads */
static void m345(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_SuspendDownloads"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* STEAMUGC_INTERFACE_VERSION020::UnsubscribeItem */
static void m346(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_UnsubscribeItem"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUGC_INTERFACE_VERSION020::UpdateItemPreviewFile */
static void m347(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_UpdateItemPreviewFile"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUGC_INTERFACE_VERSION020::UpdateItemPreviewVideo */
static void m348(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUGC_UpdateItemPreviewVideo"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::AttachLeaderboardUGC */
static void m349(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_AttachLeaderboardUGC"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::ClearAchievement */
static void m350(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_ClearAchievement"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::DownloadLeaderboardEntries */
static void m351(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntries"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    int32_t a3 = (int32_t)R32(args + 16u);
    uint64_t r = ((F)fn)(self, a0, a1, a2, a3);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::DownloadLeaderboardEntriesForUsers */
static void m352(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    uint64_t r = ((F)fn)(self, a0, a1, a2);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::FindLeaderboard */
static void m353(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_FindLeaderboard"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::FindOrCreateLeaderboard */
static void m354(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_FindOrCreateLeaderboard"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1, a2);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievement */
static void m355(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievement"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 1u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementAchievedPercent */
static void m356(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementAchievedPercent"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementAndUnlockTime */
static void m357(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 1u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementDisplayAttribute */
static void m358(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementIcon */
static void m359(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementIcon"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementName */
static void m360(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementName"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementProgressLimitsFloat */
static void m361(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementProgressLimitsInt32 */
static void m362(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetDownloadedLeaderboardEntry */
static void m363(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t, void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    void *a2 = steam_out(c, R32(args + 12u), 28u);
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 4u);
    int32_t a4 = (int32_t)R32(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatDouble */
static void m364(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetGlobalStatDouble"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatHistoryDouble */
static void m365(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 8u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatHistoryInt64 */
static void m366(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 8u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatInt64 */
static void m367(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetGlobalStatInt64"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardDisplayType */
static void m368(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetLeaderboardDisplayType"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardEntryCount */
static void m369(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetLeaderboardEntryCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardName */
static void m370(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetLeaderboardName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardSortMethod */
static void m371(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetLeaderboardSortMethod"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetNumAchievements */
static void m374(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetNumAchievements"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetNumberOfCurrentPlayers */
static void m375(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetStatFloat */
static void m376(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetStatFloat"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetStatInt32 */
static void m377(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetStatInt32"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetUserAchievement */
static void m378(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetUserAchievement"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 1u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetUserAchievementAndUnlockTime */
static void m379(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 1u);
    void *a3 = steam_out(c, R32(args + 16u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetUserStatFloat */
static void m380(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetUserStatFloat"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::GetUserStatInt32 */
static void m381(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_GetUserStatInt32"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::IndicateAchievementProgress */
static void m382(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_IndicateAchievementProgress"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::RequestCurrentStats */
static void m383(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_RequestCurrentStats"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::RequestGlobalAchievementPercentages */
static void m384(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::RequestGlobalStats */
static void m385(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_RequestGlobalStats"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::RequestUserStats */
static void m386(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_RequestUserStats"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::ResetAllStats */
static void m387(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_ResetAllStats"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::SetAchievement */
static void m388(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_SetAchievement"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::SetStatFloat */
static void m389(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_SetStatFloat"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    float a1 = RF(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::SetStatInt32 */
static void m390(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_SetStatInt32"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::StoreStats */
static void m391(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_StoreStats"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::UpdateAvgRateStat */
static void m392(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, float, double);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_UpdateAvgRateStat"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    float a1 = RF(args + 4u);
    double a2 = RD(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* STEAMUSERSTATS_INTERFACE_VERSION012::UploadLeaderboardScore */
static void m393(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t, int32_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUserStats_UploadLeaderboardScore"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    void *a3 = steam_in_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 4u);
    int32_t a4 = (int32_t)R32(args + 20u);
    uint64_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    steam_ret64(c, (uint64_t)r);
}
/* STEAMVIDEO_INTERFACE_V007::GetOPFSettings */
static void m394(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamVideo_GetOPFSettings"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMVIDEO_INTERFACE_V007::GetVideoURL */
static void m396(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamVideo_GetVideoURL"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* STEAMVIDEO_INTERFACE_V007::IsBroadcasting */
static void m397(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamVideo_IsBroadcasting"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamClient021::BReleaseSteamPipe */
static void m398(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_BReleaseSteamPipe"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamClient021::BShutdownIfAllPipesClosed */
static void m399(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_BShutdownIfAllPipesClosed"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamClient021::ConnectToGlobalUser */
static void m400(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_ConnectToGlobalUser"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamClient021::CreateLocalUser */
static void m401(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_CreateLocalUser"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamClient021::CreateSteamPipe */
static void m402(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_CreateSteamPipe"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamClient021::GetIPCCallCount */
static void m403(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetIPCCallCount"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamClient021::GetISteamApps */
static void m404(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamApps"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamController */
static void m405(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamController"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamFriends */
static void m406(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamFriends"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamGameSearch */
static void m407(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamGameSearch"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamGameServer */
static void m408(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamGameServer"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamGameServerStats */
static void m409(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamGameServerStats"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamGenericInterface */
static void m410(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamGenericInterface"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamHTMLSurface */
static void m411(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamHTMLSurface"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamHTTP */
static void m412(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamHTTP"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamInput */
static void m413(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamInput"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamInventory */
static void m414(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamInventory"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamMatchmaking */
static void m415(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamMatchmaking"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamMatchmakingServers */
static void m416(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamMatchmakingServers"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamMusic */
static void m417(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamMusic"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamMusicRemote */
static void m418(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamMusicRemote"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamNetworking */
static void m419(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamNetworking"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamParentalSettings */
static void m420(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamParentalSettings"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamParties */
static void m421(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamParties"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamRemotePlay */
static void m422(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamRemotePlay"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamRemoteStorage */
static void m423(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamRemoteStorage"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamScreenshots */
static void m424(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamScreenshots"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamUGC */
static void m425(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamUGC"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamUser */
static void m426(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamUser"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamUserStats */
static void m427(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamUserStats"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::GetISteamUtils */
static void m428(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamUtils"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 4u));
    void * r = ((F)fn)(self, a0, a1);
    c->eax = steam_proxy(c, r, a1);
}
/* SteamClient021::GetISteamVideo */
static void m429(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void * (*F)(void *, int32_t, int32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_GetISteamVideo"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    void * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_proxy(c, r, a2);
}
/* SteamClient021::ReleaseUser */
static void m430(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamClient_ReleaseUser"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamController008::ActivateActionSet */
static void m433(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_ActivateActionSet"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamController008::ActivateActionSetLayer */
static void m434(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_ActivateActionSetLayer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamController008::DeactivateActionSetLayer */
static void m435(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_DeactivateActionSetLayer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamController008::DeactivateAllActionSetLayers */
static void m436(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_DeactivateAllActionSetLayers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamController008::GetActionOriginFromXboxOrigin */
static void m437(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetActionOriginFromXboxOrigin"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetActionSetHandle */
static void m438(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetActionSetHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamController008::GetActiveActionSetLayers */
static void m439(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetActiveActionSetLayers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), 16, 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetAnalogActionHandle */
static void m440(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetAnalogActionHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamController008::GetAnalogActionOrigins */
static void m441(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint64_t, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetAnalogActionOrigins"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t a2 = (uint64_t)R64(args + 16u);
    void *a3 = steam_out_buffer(c, R32(args + 24u), 8, 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetConnectedControllers */
static void m442(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetConnectedControllers"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), 16, 8u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetControllerBindingRevision */
static void m443(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetControllerBindingRevision"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamController008::GetControllerForGamepadIndex */
static void m444(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetControllerForGamepadIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamController008::GetCurrentActionSet */
static void m445(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetCurrentActionSet"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamController008::GetDigitalActionHandle */
static void m447(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetDigitalActionHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamController008::GetDigitalActionOrigins */
static void m448(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint64_t, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetDigitalActionOrigins"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t a2 = (uint64_t)R64(args + 16u);
    void *a3 = steam_out_buffer(c, R32(args + 24u), 8, 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetGamepadIndexForController */
static void m449(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetGamepadIndexForController"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetGlyphForActionOrigin */
static void m450(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetGlyphForActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamController008::GetGlyphForXboxOrigin */
static void m451(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetGlyphForXboxOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamController008::GetInputTypeForHandle */
static void m452(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetInputTypeForHandle"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamController008::GetStringForActionOrigin */
static void m453(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetStringForActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamController008::GetStringForXboxOrigin */
static void m454(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_GetStringForXboxOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamController008::Init */
static void m455(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_Init"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamController008::RunFrame */
static void m456(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_RunFrame"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamController008::SetLEDColor */
static void m457(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint8_t, uint8_t, uint8_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_SetLEDColor"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint8_t a1 = (uint8_t)R32(args + 8u);
    uint8_t a2 = (uint8_t)R32(args + 12u);
    uint8_t a3 = (uint8_t)R32(args + 16u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    ((F)fn)(self, a0, a1, a2, a3, a4);
}
/* SteamController008::ShowBindingPanel */
static void m458(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_ShowBindingPanel"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamController008::Shutdown */
static void m459(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_Shutdown"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamController008::StopAnalogActionMomentum */
static void m460(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_StopAnalogActionMomentum"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamController008::TranslateActionOrigin */
static void m461(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_TranslateActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamController008::TriggerHapticPulse */
static void m462(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, int32_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_TriggerHapticPulse"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamController008::TriggerRepeatedHapticPulse */
static void m463(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, int32_t, uint16_t, uint16_t, uint16_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_TriggerRepeatedHapticPulse"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    uint16_t a3 = (uint16_t)R32(args + 16u);
    uint16_t a4 = (uint16_t)R32(args + 20u);
    uint32_t a5 = (uint32_t)R32(args + 24u);
    ((F)fn)(self, a0, a1, a2, a3, a4, a5);
}
/* SteamController008::TriggerVibration */
static void m464(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint16_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamController_TriggerVibration"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint16_t a1 = (uint16_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamFriends017::ActivateGameOverlay */
static void m465(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlay"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamFriends017::ActivateGameOverlayInviteDialog */
static void m466(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamFriends017::ActivateGameOverlayInviteDialogConnectString */
static void m467(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamFriends017::ActivateGameOverlayRemotePlayTogetherInviteDialog */
static void m468(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamFriends017::ActivateGameOverlayToStore */
static void m469(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayToStore"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamFriends017::ActivateGameOverlayToUser */
static void m470(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayToUser"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t a1 = (uint64_t)R64(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamFriends017::ActivateGameOverlayToWebPage */
static void m471(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamFriends017::BHasEquippedProfileItem */
static void m472(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_BHasEquippedProfileItem"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::ClearRichPresence */
static void m473(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ClearRichPresence"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamFriends017::CloseClanChatWindowInSteam */
static void m474(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_CloseClanChatWindowInSteam"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::DownloadClanActivityCounts */
static void m475(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_DownloadClanActivityCounts"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 8u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::EnumerateFollowingList */
static void m476(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_EnumerateFollowingList"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::GetChatMemberByIndex */
static void m477(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetChatMemberByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetClanActivityCounts */
static void m478(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanActivityCounts"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    void *a3 = steam_out(c, R32(args + 16u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::GetClanByIndex */
static void m479(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanByIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetClanChatMemberCount */
static void m480(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanChatMemberCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetClanChatMessage */
static void m481(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t, void *, int32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanChatMessage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    int32_t a3 = (int32_t)R32(args + 16u);
    void *a4 = steam_out(c, R32(args + 20u), 4u);
    void *a5 = steam_out(c, R32(args + 24u), 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetClanCount */
static void m482(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetClanName */
static void m483(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetClanOfficerByIndex */
static void m484(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanOfficerByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetClanOfficerCount */
static void m485(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanOfficerCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetClanOwner */
static void m486(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanOwner"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetClanTag */
static void m487(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetClanTag"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetCoplayFriend */
static void m488(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetCoplayFriend"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetCoplayFriendCount */
static void m489(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetCoplayFriendCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFollowerCount */
static void m490(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFollowerCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::GetFriendByIndex */
static void m491(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendByIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetFriendCoplayGame */
static void m492(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendCoplayGame"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendCoplayTime */
static void m493(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendCoplayTime"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendCount */
static void m494(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendCount"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendCountFromSource */
static void m495(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendCountFromSource"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendFromSourceByIndex */
static void m496(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendFromSourceByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret_sret(c, sret, r);
}
/* SteamFriends017::GetFriendGamePlayed */
static void m497(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendGamePlayed"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 24u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::GetFriendMessage */
static void m498(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t, void *, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendMessage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    int32_t a3 = (int32_t)R32(args + 16u);
    void *a4 = steam_out(c, R32(args + 20u), 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendPersonaName */
static void m499(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendPersonaName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetFriendPersonaNameHistory */
static void m500(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendPersonaNameHistory"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetFriendPersonaState */
static void m501(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendPersonaState"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendRelationship */
static void m502(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendRelationship"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendRichPresence */
static void m503(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendRichPresence"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetFriendRichPresenceKeyByIndex */
static void m504(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetFriendRichPresenceKeyCount */
static void m505(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendSteamLevel */
static void m506(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendSteamLevel"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendsGroupCount */
static void m507(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendsGroupCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendsGroupIDByIndex */
static void m508(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int16_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int16_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendsGroupMembersCount */
static void m509(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendsGroupMembersCount"), __ATOMIC_RELAXED);
    int16_t a0 = (int16_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetFriendsGroupMembersList */
static void m510(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int16_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendsGroupMembersList"), __ATOMIC_RELAXED);
    int16_t a0 = (int16_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 8u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamFriends017::GetFriendsGroupName */
static void m511(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetFriendsGroupName"), __ATOMIC_RELAXED);
    int16_t a0 = (int16_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetLargeFriendAvatar */
static void m512(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetLargeFriendAvatar"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetMediumFriendAvatar */
static void m513(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetMediumFriendAvatar"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetNumChatsWithUnreadPriorityMessages */
static void m514(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetPersonaName */
static void m515(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetPersonaName"), __ATOMIC_RELAXED);
    const char * r = ((F)fn)(self);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetPersonaState */
static void m516(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetPersonaState"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetPlayerNickname */
static void m517(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetPlayerNickname"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetProfileItemPropertyString */
static void m518(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetProfileItemPropertyString"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    const char * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_guest_string(c, r);
}
/* SteamFriends017::GetProfileItemPropertyUint */
static void m519(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetProfileItemPropertyUint"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    uint32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetSmallFriendAvatar */
static void m520(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetSmallFriendAvatar"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::GetUserRestrictions */
static void m521(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_GetUserRestrictions"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamFriends017::HasFriend */
static void m522(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_HasFriend"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::InviteUserToGame */
static void m523(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_InviteUserToGame"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::IsClanChatAdmin */
static void m524(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsClanChatAdmin"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::IsClanChatWindowOpenInSteam */
static void m525(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::IsClanOfficialGameGroup */
static void m526(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsClanOfficialGameGroup"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::IsClanPublic */
static void m527(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsClanPublic"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::IsFollowing */
static void m528(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsFollowing"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::IsUserInSource */
static void m529(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_IsUserInSource"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::JoinClanChatRoom */
static void m530(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_JoinClanChatRoom"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::LeaveClanChatRoom */
static void m531(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_LeaveClanChatRoom"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::OpenClanChatWindowInSteam */
static void m532(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_OpenClanChatWindowInSteam"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::RegisterProtocolInOverlayBrowser */
static void m533(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::ReplyToFriendMessage */
static void m534(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_ReplyToFriendMessage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::RequestClanOfficerList */
static void m535(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_RequestClanOfficerList"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::RequestEquippedProfileItems */
static void m536(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_RequestEquippedProfileItems"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::RequestFriendRichPresence */
static void m537(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_RequestFriendRichPresence"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamFriends017::RequestUserInformation */
static void m538(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_RequestUserInformation"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::SendClanChatMessage */
static void m539(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SendClanChatMessage"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::SetInGameVoiceSpeaking */
static void m540(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SetInGameVoiceSpeaking"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    ((F)fn)(self, a0, a1);
}
/* SteamFriends017::SetListenForFriendsMessages */
static void m541(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SetListenForFriendsMessages"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamFriends017::SetPersonaName */
static void m542(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SetPersonaName"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamFriends017::SetPlayedWith */
static void m543(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SetPlayedWith"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamFriends017::SetRichPresence */
static void m544(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamFriends_SetRichPresence"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::AssociateWithClan */
static void m545(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_AssociateWithClan"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamGameServer015::BLoggedOn */
static void m546(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_BLoggedOn"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::BSecure */
static void m547(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_BSecure"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::BUpdateUserData */
static void m548(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_BUpdateUserData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    uint32_t a2 = (uint32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::BeginAuthSession */
static void m549(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_BeginAuthSession"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t a2 = (uint64_t)R64(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamGameServer015::CancelAuthTicket */
static void m550(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_CancelAuthTicket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::ClearAllKeyValues */
static void m551(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_ClearAllKeyValues"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamGameServer015::ComputeNewPlayerCompatibility */
static void m552(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamGameServer015::CreateUnauthenticatedUserConnection */
static void m553(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret_sret(c, sret, r);
}
/* SteamGameServer015::EndAuthSession */
static void m554(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_EndAuthSession"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::GetGameplayStats */
static void m556(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_GetGameplayStats"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamGameServer015::GetNextOutgoingPacket */
static void m557(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_GetNextOutgoingPacket"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    void *a3 = steam_out(c, R32(args + 12u), 2u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamGameServer015::GetServerReputation */
static void m558(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_GetServerReputation"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* SteamGameServer015::GetSteamID */
static void m559(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_GetSteamID"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret_sret(c, sret, r);
}
/* SteamGameServer015::HandleIncomingPacket */
static void m560(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t, uint32_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_HandleIncomingPacket"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    uint16_t a3 = (uint16_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::LogOff */
static void m561(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_LogOff"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamGameServer015::LogOn */
static void m562(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_LogOn"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::LogOnAnonymous */
static void m563(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_LogOnAnonymous"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamGameServer015::RequestUserGroupStatus */
static void m564(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_RequestUserGroupStatus"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::SendUserConnectAndAuthenticate_DEPRECATED */
static void m565(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    void *a3 = steam_out(c, R32(args + 12u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServer015::SendUserDisconnect_DEPRECATED */
static void m566(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetAdvertiseServerActive */
static void m567(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetAdvertiseServerActive"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetBotPlayerCount */
static void m568(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetBotPlayerCount"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetDedicatedServer */
static void m569(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetDedicatedServer"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetGameData */
static void m570(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetGameData"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetGameDescription */
static void m571(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetGameDescription"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetGameTags */
static void m572(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetGameTags"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetKeyValue */
static void m573(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetKeyValue"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    ((F)fn)(self, a0, a1);
}
/* SteamGameServer015::SetMapName */
static void m574(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetMapName"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetMaxPlayerCount */
static void m575(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetMaxPlayerCount"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetModDir */
static void m576(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetModDir"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetPasswordProtected */
static void m577(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetPasswordProtected"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetProduct */
static void m578(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetProduct"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetRegion */
static void m579(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetRegion"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetServerName */
static void m580(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetServerName"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetSpectatorPort */
static void m581(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetSpectatorPort"), __ATOMIC_RELAXED);
    uint16_t a0 = (uint16_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamGameServer015::SetSpectatorServerName */
static void m582(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_SetSpectatorServerName"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    ((F)fn)(self, a0);
}
/* SteamGameServer015::UserHasLicenseForApp */
static void m583(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_UserHasLicenseForApp"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamGameServer015::WasRestartRequested */
static void m584(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServer_WasRestartRequested"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::ClearUserAchievement */
static void m585(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_ClearUserAchievement"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::GetUserAchievement */
static void m586(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_GetUserAchievement"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 1u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::GetUserStatFloat */
static void m587(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_GetUserStatFloat"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::GetUserStatInt32 */
static void m588(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_GetUserStatInt32"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::RequestUserStats */
static void m589(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_RequestUserStats"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamGameServerStats001::SetUserAchievement */
static void m590(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_SetUserAchievement"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::SetUserStatFloat */
static void m591(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, float);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_SetUserStatFloat"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    float a2 = RF(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::SetUserStatInt32 */
static void m592(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_SetUserStatInt32"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    int32_t a2 = (int32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamGameServerStats001::StoreUserStats */
static void m593(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_StoreUserStats"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamGameServerStats001::UpdateUserAvgRateStat */
static void m594(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, float, double);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    float a2 = RF(args + 12u);
    double a3 = RD(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::ActivateActionSet */
static void m595(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_ActivateActionSet"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamInput006::ActivateActionSetLayer */
static void m596(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_ActivateActionSetLayer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamInput006::BNewDataAvailable */
static void m597(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_BNewDataAvailable"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::BWaitForData */
static void m598(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_BWaitForData"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::DeactivateActionSetLayer */
static void m599(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_DeactivateActionSetLayer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamInput006::DeactivateAllActionSetLayers */
static void m600(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_DeactivateAllActionSetLayers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamInput006::EnableDeviceCallbacks */
static void m602(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_EnableDeviceCallbacks"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamInput006::GetActionOriginFromXboxOrigin */
static void m603(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetActionSetHandle */
static void m604(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetActionSetHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamInput006::GetActiveActionSetLayers */
static void m605(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetActiveActionSetLayers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), 16, 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetAnalogActionHandle */
static void m606(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetAnalogActionHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamInput006::GetAnalogActionOrigins */
static void m607(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint64_t, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetAnalogActionOrigins"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t a2 = (uint64_t)R64(args + 16u);
    void *a3 = steam_out_buffer(c, R32(args + 24u), 8, 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetConnectedControllers */
static void m608(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetConnectedControllers"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), 16, 8u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetControllerForGamepadIndex */
static void m609(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetControllerForGamepadIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamInput006::GetCurrentActionSet */
static void m610(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetCurrentActionSet"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamInput006::GetDeviceBindingRevision */
static void m611(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetDeviceBindingRevision"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::GetDigitalActionHandle */
static void m613(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetDigitalActionHandle"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamInput006::GetDigitalActionOrigins */
static void m614(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint64_t, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetDigitalActionOrigins"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    uint64_t a2 = (uint64_t)R64(args + 16u);
    void *a3 = steam_out_buffer(c, R32(args + 24u), 8, 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetGamepadIndexForController */
static void m615(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetGamepadIndexForController"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetGlyphForActionOrigin_Legacy */
static void m616(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetGlyphForXboxOrigin */
static void m617(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetGlyphForXboxOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetGlyphPNGForActionOrigin */
static void m618(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t, int32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    const char * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetGlyphSVGForActionOrigin */
static void m619(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetInputTypeForHandle */
static void m620(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetInputTypeForHandle"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetRemotePlaySessionID */
static void m621(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetRemotePlaySessionID"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetSessionInputConfigurationSettings */
static void m622(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint16_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetSessionInputConfigurationSettings"), __ATOMIC_RELAXED);
    uint16_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamInput006::GetStringForActionOrigin */
static void m623(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetStringForActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetStringForAnalogActionName */
static void m624(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetStringForAnalogActionName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetStringForDigitalActionName */
static void m625(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetStringForDigitalActionName"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::GetStringForXboxOrigin */
static void m626(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_GetStringForXboxOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    const char * r = ((F)fn)(self, a0);
    c->eax = steam_guest_string(c, r);
}
/* SteamInput006::Init */
static void m627(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_Init"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::Legacy_TriggerHapticPulse */
static void m628(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, int32_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_Legacy_TriggerHapticPulse"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamInput006::Legacy_TriggerRepeatedHapticPulse */
static void m629(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, int32_t, uint16_t, uint16_t, uint16_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    uint16_t a3 = (uint16_t)R32(args + 16u);
    uint16_t a4 = (uint16_t)R32(args + 20u);
    uint32_t a5 = (uint32_t)R32(args + 24u);
    ((F)fn)(self, a0, a1, a2, a3, a4, a5);
}
/* SteamInput006::RunFrame */
static void m630(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_RunFrame"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamInput006::SetInputActionManifestFilePath */
static void m632(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_SetInputActionManifestFilePath"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::SetLEDColor */
static void m633(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint8_t, uint8_t, uint8_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_SetLEDColor"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint8_t a1 = (uint8_t)R32(args + 8u);
    uint8_t a2 = (uint8_t)R32(args + 12u);
    uint8_t a3 = (uint8_t)R32(args + 16u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    ((F)fn)(self, a0, a1, a2, a3, a4);
}
/* SteamInput006::ShowBindingPanel */
static void m634(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_ShowBindingPanel"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::Shutdown */
static void m635(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_Shutdown"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamInput006::StopAnalogActionMomentum */
static void m636(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_StopAnalogActionMomentum"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamInput006::TranslateActionOrigin */
static void m637(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_TranslateActionOrigin"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamInput006::TriggerVibration */
static void m639(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint16_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_TriggerVibration"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint16_t a1 = (uint16_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamInput006::TriggerVibrationExtended */
static void m640(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint16_t, uint16_t, uint16_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamInput_TriggerVibrationExtended"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint16_t a1 = (uint16_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    uint16_t a3 = (uint16_t)R32(args + 16u);
    uint16_t a4 = (uint16_t)R32(args + 20u);
    ((F)fn)(self, a0, a1, a2, a3, a4);
}
/* SteamMatchGameSearch001::AcceptGame */
static void m641(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_AcceptGame"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::AddGameSearchParams */
static void m642(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_AddGameSearchParams"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::CancelRequestPlayersForGame */
static void m643(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_CancelRequestPlayersForGame"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::DeclineGame */
static void m644(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_DeclineGame"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::EndGame */
static void m645(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_EndGame"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::EndGameSearch */
static void m646(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_EndGameSearch"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::HostConfirmGameStart */
static void m647(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_HostConfirmGameStart"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::RequestPlayersForGame */
static void m648(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_RequestPlayersForGame"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::RetrieveConnectionDetails */
static void m649(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_RetrieveConnectionDetails"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    int32_t a2 = (int32_t)R32(args + 12u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::SearchForGameSolo */
static void m650(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_SearchForGameSolo"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::SearchForGameWithLobby */
static void m651(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_SearchForGameWithLobby"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::SetConnectionDetails */
static void m652(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_SetConnectionDetails"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::SetGameHostParams */
static void m653(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_SetGameHostParams"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamMatchGameSearch001::SubmitPlayerResult */
static void m654(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamGameSearch_SubmitPlayerResult"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    int32_t a2 = (int32_t)R32(args + 16u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::AddFavoriteGame */
static void m655(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint32_t, uint32_t, uint16_t, uint16_t, uint32_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddFavoriteGame"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint16_t a2 = (uint16_t)R32(args + 8u);
    uint16_t a3 = (uint16_t)R32(args + 12u);
    uint32_t a4 = (uint32_t)R32(args + 16u);
    uint32_t a5 = (uint32_t)R32(args + 20u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::AddRequestLobbyListCompatibleMembersFilter */
static void m656(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamMatchMaking009::AddRequestLobbyListDistanceFilter */
static void m657(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamMatchMaking009::AddRequestLobbyListFilterSlotsAvailable */
static void m658(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamMatchMaking009::AddRequestLobbyListNearValueFilter */
static void m659(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamMatchMaking009::AddRequestLobbyListNumericalFilter */
static void m660(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamMatchMaking009::AddRequestLobbyListResultCountFilter */
static void m661(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamMatchMaking009::AddRequestLobbyListStringFilter */
static void m662(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, const char *, const char *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    const char *a1 = steam_in_string(c, R32(args + 4u));
    int32_t a2 = (int32_t)R32(args + 8u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamMatchMaking009::CreateLobby */
static void m663(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_CreateLobby"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* SteamMatchMaking009::DeleteLobbyData */
static void m664(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_DeleteLobbyData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::GetFavoriteGame */
static void m665(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, void *, void *, void *, void *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetFavoriteGame"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    void *a3 = steam_out(c, R32(args + 12u), 2u);
    void *a4 = steam_out(c, R32(args + 16u), 2u);
    void *a5 = steam_out(c, R32(args + 20u), 4u);
    void *a6 = steam_out(c, R32(args + 24u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4, a5, a6);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::GetFavoriteGameCount */
static void m666(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetFavoriteGameCount"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::GetLobbyByIndex */
static void m667(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyByIndex"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* SteamMatchMaking009::GetLobbyChatEntry */
static void m668(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, int32_t, void *, void *, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyChatEntry"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    void *a2 = steam_out(c, R32(args + 12u), 8u);
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    int32_t a4 = (int32_t)R32(args + 20u);
    void *a5 = steam_out(c, R32(args + 24u), 4u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::GetLobbyData */
static void m669(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char * r = ((F)fn)(self, a0, a1);
    c->eax = steam_guest_string(c, r);
}
/* SteamMatchMaking009::GetLobbyDataByIndex */
static void m670(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t, void *, int32_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    void *a2 = steam_out_buffer(c, R32(args + 12u), (int64_t)(int32_t)R32(args + 16u), 1u);
    int32_t a3 = (int32_t)R32(args + 16u);
    void *a4 = steam_out_buffer(c, R32(args + 20u), (int64_t)(int32_t)R32(args + 24u), 1u);
    int32_t a5 = (int32_t)R32(args + 24u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::GetLobbyDataCount */
static void m671(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyDataCount"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::GetLobbyGameServer */
static void m672(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyGameServer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 4u);
    void *a2 = steam_out(c, R32(args + 12u), 2u);
    void *a3 = steam_out(c, R32(args + 16u), 8u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::GetLobbyMemberByIndex */
static void m673(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret_sret(c, sret, r);
}
/* SteamMatchMaking009::GetLobbyMemberData */
static void m674(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *, uint64_t, uint64_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyMemberData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    const char *a2 = steam_in_string(c, R32(args + 16u));
    const char * r = ((F)fn)(self, a0, a1, a2);
    c->eax = steam_guest_string(c, r);
}
/* SteamMatchMaking009::GetLobbyMemberLimit */
static void m675(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::GetLobbyOwner */
static void m676(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetLobbyOwner"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret_sret(c, sret, r);
}
/* SteamMatchMaking009::GetNumLobbyMembers */
static void m677(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_GetNumLobbyMembers"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamMatchMaking009::InviteUserToLobby */
static void m678(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_InviteUserToLobby"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::JoinLobby */
static void m679(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_JoinLobby"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamMatchMaking009::LeaveLobby */
static void m680(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_LeaveLobby"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamMatchMaking009::RemoveFavoriteGame */
static void m681(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, uint32_t, uint16_t, uint16_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_RemoveFavoriteGame"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    uint16_t a2 = (uint16_t)R32(args + 8u);
    uint16_t a3 = (uint16_t)R32(args + 12u);
    uint32_t a4 = (uint32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::RequestLobbyData */
static void m682(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_RequestLobbyData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::RequestLobbyList */
static void m683(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_RequestLobbyList"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* SteamMatchMaking009::SendLobbyChatMsg */
static void m684(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SendLobbyChatMsg"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    int32_t a2 = (int32_t)R32(args + 12u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLinkedLobby */
static void m685(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLinkedLobby"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLobbyData */
static void m686(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char *a2 = steam_in_string(c, R32(args + 12u));
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLobbyGameServer */
static void m687(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint32_t, uint16_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyGameServer"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    uint64_t a3 = (uint64_t)R64(args + 16u);
    ((F)fn)(self, a0, a1, a2, a3);
}
/* SteamMatchMaking009::SetLobbyJoinable */
static void m688(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyJoinable"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool a1 = (R8(args + 8u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLobbyMemberData */
static void m689(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, const char *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyMemberData"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    const char *a1 = steam_in_string(c, R32(args + 8u));
    const char *a2 = steam_in_string(c, R32(args + 12u));
    ((F)fn)(self, a0, a1, a2);
}
/* SteamMatchMaking009::SetLobbyMemberLimit */
static void m690(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLobbyOwner */
static void m691(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyOwner"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMaking009::SetLobbyType */
static void m692(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmaking_SetLobbyType"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamMatchMakingServers002::CancelServerQuery */
static void m694(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamMatchmakingServers_CancelServerQuery"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamNetworking006::AcceptP2PSessionWithUser */
static void m710(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::AllowP2PPacketRelay */
static void m711(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_AllowP2PPacketRelay"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::CloseP2PChannelWithUser */
static void m712(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_CloseP2PChannelWithUser"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::CloseP2PSessionWithUser */
static void m713(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_CloseP2PSessionWithUser"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::CreateP2PConnectionSocket */
static void m714(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, uint64_t, int32_t, int32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_CreateP2PConnectionSocket"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t a1 = (int32_t)R32(args + 8u);
    int32_t a2 = (int32_t)R32(args + 12u);
    bool a3 = (R8(args + 16u) != 0);
    uint32_t r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = (uint32_t)r;
}
/* SteamNetworking006::DestroyListenSocket */
static void m715(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_DestroyListenSocket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::DestroySocket */
static void m716(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_DestroySocket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::GetMaxPacketSize */
static void m718(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_GetMaxPacketSize"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamNetworking006::GetSocketConnectionType */
static void m720(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_GetSocketConnectionType"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamNetworking006::IsDataAvailable */
static void m722(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_IsDataAvailable"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::IsDataAvailableOnSocket */
static void m723(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_IsDataAvailableOnSocket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::IsP2PPacketAvailable */
static void m724(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_IsP2PPacketAvailable"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::ReadP2PPacket */
static void m725(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint32_t, void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_ReadP2PPacket"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    void *a3 = steam_out(c, R32(args + 12u), 8u);
    int32_t a4 = (int32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::RetrieveData */
static void m726(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, uint32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_RetrieveData"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    void *a3 = steam_out(c, R32(args + 12u), 4u);
    void *a4 = steam_out(c, R32(args + 16u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::RetrieveDataFromSocket */
static void m727(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, uint32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_RetrieveDataFromSocket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    void *a3 = steam_out(c, R32(args + 12u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::SendDataOnSocket */
static void m728(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t, void *, uint32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_SendDataOnSocket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 8u);
    bool a3 = (R8(args + 12u) != 0);
    bool r = ((F)fn)(self, a0, a1, a2, a3);
    c->eax = r ? 1u : 0u;
}
/* SteamNetworking006::SendP2PPacket */
static void m729(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, uint32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamNetworking_SendP2PPacket"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_in_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    uint32_t a2 = (uint32_t)R32(args + 12u);
    int32_t a3 = (int32_t)R32(args + 16u);
    int32_t a4 = (int32_t)R32(args + 20u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamParties002::CancelReservation */
static void m730(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_CancelReservation"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamParties002::ChangeNumOpenSlots */
static void m731(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_ChangeNumOpenSlots"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* SteamParties002::DestroyBeacon */
static void m733(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_DestroyBeacon"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamParties002::GetBeaconByIndex */
static void m735(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_GetBeaconByIndex"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamParties002::GetNumActiveBeacons */
static void m737(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_GetNumActiveBeacons"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamParties002::GetNumAvailableBeaconLocations */
static void m738(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_GetNumAvailableBeaconLocations"), __ATOMIC_RELAXED);
    void *a0 = steam_out(c, R32(args + 0u), 4u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamParties002::JoinParty */
static void m739(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_JoinParty"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamParties002::OnReservationCompleted */
static void m740(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamParties_OnReservationCompleted"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 8u);
    ((F)fn)(self, a0, a1);
}
/* SteamUser023::AdvertiseGame */
static void m741(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t, uint32_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_AdvertiseGame"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    uint16_t a2 = (uint16_t)R32(args + 12u);
    ((F)fn)(self, a0, a1, a2);
}
/* SteamUser023::BIsBehindNAT */
static void m742(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BIsBehindNAT"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BIsPhoneIdentifying */
static void m743(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BIsPhoneIdentifying"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BIsPhoneRequiringVerification */
static void m744(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BIsPhoneRequiringVerification"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BIsPhoneVerified */
static void m745(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BIsPhoneVerified"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BIsTwoFactorEnabled */
static void m746(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BIsTwoFactorEnabled"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BLoggedOn */
static void m747(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BLoggedOn"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BSetDurationControlOnlineState */
static void m748(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BSetDurationControlOnlineState"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::BeginAuthSession */
static void m749(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_BeginAuthSession"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t a2 = (uint64_t)R64(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1, a2);
    c->eax = (uint32_t)r;
}
/* SteamUser023::CancelAuthTicket */
static void m750(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_CancelAuthTicket"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamUser023::DecompressVoice */
static void m751(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, uint32_t, void *, uint32_t, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_DecompressVoice"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    void *a2 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    uint32_t a3 = (uint32_t)R32(args + 12u);
    void *a4 = steam_out(c, R32(args + 16u), 4u);
    uint32_t a5 = (uint32_t)R32(args + 20u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = (uint32_t)r;
}
/* SteamUser023::EndAuthSession */
static void m752(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_EndAuthSession"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamUser023::GetAuthTicketForWebApi */
static void m754(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetAuthTicketForWebApi"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamUser023::GetDurationControl */
static void m756(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetDurationControl"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* SteamUser023::GetEncryptedAppTicket */
static void m757(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetEncryptedAppTicket"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::GetGameBadgeLevel */
static void m758(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetGameBadgeLevel"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    bool a1 = (R8(args + 4u) != 0);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamUser023::GetHSteamUser */
static void m759(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetHSteamUser"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUser023::GetMarketEligibility */
static void m760(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetMarketEligibility"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret64(c, (uint64_t)r);
}
/* SteamUser023::GetPlayerSteamLevel */
static void m761(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetPlayerSteamLevel"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUser023::GetSteamID */
static void m762(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetSteamID"), __ATOMIC_RELAXED);
    uint64_t r = ((F)fn)(self);
    steam_ret_sret(c, sret, r);
}
/* SteamUser023::GetUserDataFolder */
static void m763(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetUserDataFolder"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamUser023::GetVoiceOptimalSampleRate */
static void m764(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUser023::InitiateGameConnection_DEPRECATED */
static void m765(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, void *, int32_t, uint64_t, uint32_t, uint16_t, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t a2 = (uint64_t)R64(args + 8u);
    uint32_t a3 = (uint32_t)R32(args + 16u);
    uint16_t a4 = (uint16_t)R32(args + 20u);
    bool a5 = (R8(args + 24u) != 0);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4, a5);
    c->eax = (uint32_t)r;
}
/* SteamUser023::RequestEncryptedAppTicket */
static void m766(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_RequestEncryptedAppTicket"), __ATOMIC_RELAXED);
    void *a0 = steam_in_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    int32_t a1 = (int32_t)R32(args + 4u);
    uint64_t r = ((F)fn)(self, a0, a1);
    steam_ret64(c, (uint64_t)r);
}
/* SteamUser023::RequestStoreAuthURL */
static void m767(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_RequestStoreAuthURL"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamUser023::StartVoiceRecording */
static void m768(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_StartVoiceRecording"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamUser023::StopVoiceRecording */
static void m769(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_StopVoiceRecording"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
/* SteamUser023::TerminateGameConnection_DEPRECATED */
static void m770(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, uint32_t, uint16_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    uint16_t a1 = (uint16_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamUser023::UserHasLicenseForApp */
static void m771(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUser_UserHasLicenseForApp"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    uint32_t a1 = (uint32_t)R32(args + 8u);
    int32_t r = ((F)fn)(self, a0, a1);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::BOverlayNeedsPresent */
static void m772(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_BOverlayNeedsPresent"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::CheckFileSignature */
static void m773(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint64_t (*F)(void *, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_CheckFileSignature"), __ATOMIC_RELAXED);
    const char *a0 = steam_in_string(c, R32(args + 0u));
    uint64_t r = ((F)fn)(self, a0);
    steam_ret64(c, (uint64_t)r);
}
/* SteamUtils010::DismissFloatingGamepadTextInput */
static void m774(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::DismissGamepadTextInput */
static void m775(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_DismissGamepadTextInput"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::FilterText */
static void m776(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t, uint64_t, const char *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_FilterText"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    uint64_t a1 = (uint64_t)R64(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 12u));
    void *a3 = steam_out_buffer(c, R32(args + 16u), (int64_t)(int32_t)R32(args + 20u), 1u);
    uint32_t a4 = (uint32_t)R32(args + 20u);
    int32_t r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetAPICallFailureReason */
static void m777(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, uint64_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetAPICallFailureReason"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetAPICallResult */
static void m778(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *, int32_t, int32_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetAPICallResult"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 8u), (int64_t)(int32_t)R32(args + 12u), 1u);
    int32_t a2 = (int32_t)R32(args + 12u);
    int32_t a3 = (int32_t)R32(args + 16u);
    void *a4 = steam_out(c, R32(args + 20u), 1u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::GetAppID */
static void m779(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetAppID"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetConnectedUniverse */
static void m780(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetConnectedUniverse"), __ATOMIC_RELAXED);
    int32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetCurrentBatteryPower */
static void m781(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint8_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetCurrentBatteryPower"), __ATOMIC_RELAXED);
    uint8_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetEnteredGamepadTextInput */
static void m782(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetEnteredGamepadTextInput"), __ATOMIC_RELAXED);
    void *a0 = steam_out_buffer(c, R32(args + 0u), (int64_t)(int32_t)R32(args + 4u), 1u);
    uint32_t a1 = (uint32_t)R32(args + 4u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::GetEnteredGamepadTextLength */
static void m783(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetEnteredGamepadTextLength"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetIPCCallCount */
static void m784(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetIPCCallCount"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetIPCountry */
static void m785(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetIPCountry"), __ATOMIC_RELAXED);
    const char * r = ((F)fn)(self);
    c->eax = steam_guest_string(c, r);
}
/* SteamUtils010::GetIPv6ConnectivityState */
static void m786(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef int32_t (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetIPv6ConnectivityState"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t r = ((F)fn)(self, a0);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetImageRGBA */
static void m787(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetImageRGBA"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out_buffer(c, R32(args + 4u), (int64_t)(int32_t)R32(args + 8u), 1u);
    int32_t a2 = (int32_t)R32(args + 8u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::GetImageSize */
static void m788(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, void *, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetImageSize"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    void *a1 = steam_out(c, R32(args + 4u), 4u);
    void *a2 = steam_out(c, R32(args + 8u), 4u);
    bool r = ((F)fn)(self, a0, a1, a2);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::GetSecondsSinceAppActive */
static void m789(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetSecondsSinceAppActive"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetSecondsSinceComputerActive */
static void m790(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetSecondsSinceComputerActive"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetServerRealTime */
static void m791(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef uint32_t (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetServerRealTime"), __ATOMIC_RELAXED);
    uint32_t r = ((F)fn)(self);
    c->eax = (uint32_t)r;
}
/* SteamUtils010::GetSteamUILanguage */
static void m792(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef const char * (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_GetSteamUILanguage"), __ATOMIC_RELAXED);
    const char * r = ((F)fn)(self);
    c->eax = steam_guest_string(c, r);
}
/* SteamUtils010::InitFilterText */
static void m793(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_InitFilterText"), __ATOMIC_RELAXED);
    uint32_t a0 = (uint32_t)R32(args + 0u);
    bool r = ((F)fn)(self, a0);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsAPICallCompleted */
static void m794(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, uint64_t, void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsAPICallCompleted"), __ATOMIC_RELAXED);
    uint64_t a0 = (uint64_t)R64(args + 0u);
    void *a1 = steam_out(c, R32(args + 8u), 1u);
    bool r = ((F)fn)(self, a0, a1);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsOverlayEnabled */
static void m795(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsOverlayEnabled"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsSteamChinaLauncher */
static void m796(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsSteamChinaLauncher"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsSteamInBigPictureMode */
static void m797(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsSteamInBigPictureMode"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsSteamRunningInVR */
static void m798(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsSteamRunningInVR"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsSteamRunningOnSteamDeck */
static void m799(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::IsVRHeadsetStreamingEnabled */
static void m800(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled"), __ATOMIC_RELAXED);
    bool r = ((F)fn)(self);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::SetGameLauncherMode */
static void m801(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_SetGameLauncherMode"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamUtils010::SetOverlayNotificationInset */
static void m802(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_SetOverlayNotificationInset"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    ((F)fn)(self, a0, a1);
}
/* SteamUtils010::SetOverlayNotificationPosition */
static void m803(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_SetOverlayNotificationPosition"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    ((F)fn)(self, a0);
}
/* SteamUtils010::SetVRHeadsetStreamingEnabled */
static void m804(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *, bool);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled"), __ATOMIC_RELAXED);
    bool a0 = (R8(args + 0u) != 0);
    ((F)fn)(self, a0);
}
/* SteamUtils010::ShowFloatingGamepadTextInput */
static void m806(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    int32_t a2 = (int32_t)R32(args + 8u);
    int32_t a3 = (int32_t)R32(args + 12u);
    int32_t a4 = (int32_t)R32(args + 16u);
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::ShowGamepadTextInput */
static void m807(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef bool (*F)(void *, int32_t, int32_t, const char *, uint32_t, const char *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_ShowGamepadTextInput"), __ATOMIC_RELAXED);
    int32_t a0 = (int32_t)R32(args + 0u);
    int32_t a1 = (int32_t)R32(args + 4u);
    const char *a2 = steam_in_string(c, R32(args + 8u));
    uint32_t a3 = (uint32_t)R32(args + 12u);
    const char *a4 = steam_in_string(c, R32(args + 16u));
    bool r = ((F)fn)(self, a0, a1, a2, a3, a4);
    c->eax = r ? 1u : 0u;
}
/* SteamUtils010::StartVRDashboard */
static void m808(CPU *c, void *self, uint32_t args, uint32_t sret) {
    (void)args; (void)sret;
    typedef void (*F)(void *);
    static void *cache;
    void *fn = __atomic_load_n(&cache, __ATOMIC_RELAXED);
    if (!fn) __atomic_store_n(&cache, fn = steam_flat(c, "SteamAPI_ISteamUtils_StartVRDashboard"), __ATOMIC_RELAXED);
    ((F)fn)(self);
}
const SteamInterfaceInfo steam_interfaces[] = {
    {"SteamClient021", "ISteamClient", 39u},
    {"SteamUser023", "ISteamUser", 33u},
    {"SteamFriends017", "ISteamFriends", 80u},
    {"SteamUtils010", "ISteamUtils", 39u},
    {"SteamMatchMaking009", "ISteamMatchmaking", 38u},
    {"SteamMatchGameSearch001", "ISteamGameSearch", 14u},
    {"SteamMatchMakingServers002", "ISteamMatchmakingServers", 17u},
    {"SteamParties002", "ISteamParties", 11u},
    {"STEAMUSERSTATS_INTERFACE_VERSION012", "ISteamUserStats", 45u},
    {"STEAMAPPS_INTERFACE_VERSION008", "ISteamApps", 33u},
    {"SteamNetworking006", "ISteamNetworking", 22u},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016", "ISteamRemoteStorage", 59u},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003", "ISteamScreenshots", 9u},
    {"STEAMHTTP_INTERFACE_VERSION003", "ISteamHTTP", 25u},
    {"SteamController008", "ISteamController", 34u},
    {"STEAMUGC_INTERFACE_VERSION020", "ISteamUGC", 94u},
    {"STEAMMUSIC_INTERFACE_VERSION001", "ISteamMusic", 9u},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001", "ISteamMusicRemote", 32u},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005", "ISteamHTMLSurface", 39u},
    {"STEAMINVENTORY_INTERFACE_V003", "ISteamInventory", 38u},
    {"STEAMVIDEO_INTERFACE_V007", "ISteamVideo", 4u},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001", "ISteamParentalSettings", 6u},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002", "ISteamRemotePlay", 8u},
    {"STEAMTIMELINE_INTERFACE_V001", "ISteamTimeline", 4u},
    {"SteamInput006", "ISteamInput", 48u},
    {"SteamGameServer015", "ISteamGameServer", 42u},
    {"SteamGameServerStats001", "ISteamGameServerStats", 10u},
};
const size_t steam_interface_count = 27;
const SteamMethodInfo steam_methods[] = {
    {"STEAMAPPS_INTERFACE_VERSION008::BGetDLCDataByIndex", 9u, 11u, 0, m0, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsAppInstalled", 9u, 19u, 0, m1, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsCybercafe", 9u, 2u, 0, m2, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsDlcInstalled", 9u, 7u, 0, m3, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsLowViolence", 9u, 1u, 0, m4, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsSubscribed", 9u, 0u, 0, m5, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedApp", 9u, 6u, 0, m6, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedFromFamilySharing", 9u, 27u, 0, m7, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsSubscribedFromFreeWeekend", 9u, 9u, 0, m8, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsTimedTrial", 9u, 28u, 0, m9, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::BIsVACBanned", 9u, 3u, 0, m10, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetAppBuildId", 9u, 23u, 0, m11, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetAppInstallDir", 9u, 18u, 0, m12, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetAppOwner", 9u, 20u, 1, m13, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetAvailableGameLanguages", 9u, 5u, 0, m14, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetCurrentBetaName", 9u, 15u, 0, m15, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetCurrentGameLanguage", 9u, 4u, 0, m16, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetDLCCount", 9u, 10u, 0, m17, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetDlcDownloadProgress", 9u, 22u, 0, m18, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetEarliestPurchaseUnixTime", 9u, 8u, 0, m19, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetFileDetails", 9u, 25u, 0, m20, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetInstalledDepots", 9u, 17u, 0, m21, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetLaunchCommandLine", 9u, 26u, 0, m22, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetLaunchQueryParam", 9u, 21u, 0, m23, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::GetNumBetas", 9u, 30u, 0, NULL, "signature C# (3 entiers) != dylib (4)"},
    {"STEAMAPPS_INTERFACE_VERSION008::InstallDLC", 9u, 12u, 0, m25, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::MarkContentCorrupt", 9u, 16u, 0, m26, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::RequestAllProofOfPurchaseKeys", 9u, 24u, 0, m27, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::RequestAppProofOfPurchaseKey", 9u, 14u, 0, m28, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::SetActiveBeta", 9u, 32u, 0, NULL, "signature C# (2 entiers) != dylib (3)"},
    {"STEAMAPPS_INTERFACE_VERSION008::SetDlcContext", 9u, 29u, 0, m30, NULL},
    {"STEAMAPPS_INTERFACE_VERSION008::UninstallDLC", 9u, 13u, 0, m31, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::AddHeader", 18u, 12u, 0, m32, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::AllowStartRequest", 18u, 36u, 0, m33, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::CopyToClipboard", 18u, 26u, 0, m34, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::CreateBrowser", 18u, 4u, 0, m35, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::ExecuteJavascript", 18u, 13u, 0, m36, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::FileLoadDialogResponse", 18u, 38u, 0, NULL, "tampon IntPtr pchSelectedFiles sans taille"},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::Find", 18u, 28u, 0, m38, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::GetLinkAtPosition", 18u, 30u, 0, m39, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::GoBack", 18u, 10u, 0, m40, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::GoForward", 18u, 11u, 0, m41, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::Init", 18u, 2u, 0, m42, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::JSDialogResponse", 18u, 37u, 0, m43, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyChar", 18u, 21u, 0, m44, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyDown", 18u, 19u, 0, m45, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::KeyUp", 18u, 20u, 0, m46, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::LoadURL", 18u, 6u, 0, m47, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseDoubleClick", 18u, 16u, 0, m48, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseDown", 18u, 15u, 0, m49, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseMove", 18u, 17u, 0, m50, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseUp", 18u, 14u, 0, m51, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::MouseWheel", 18u, 18u, 0, m52, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::OpenDeveloperTools", 18u, 35u, 0, m53, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::PasteFromClipboard", 18u, 27u, 0, m54, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::Reload", 18u, 9u, 0, m55, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::RemoveBrowser", 18u, 5u, 0, m56, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetBackgroundMode", 18u, 33u, 0, m57, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetCookie", 18u, 31u, 0, m58, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetDPIScalingFactor", 18u, 34u, 0, m59, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetHorizontalScroll", 18u, 22u, 0, m60, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetKeyFocus", 18u, 24u, 0, m61, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetPageScaleFactor", 18u, 32u, 0, m62, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetSize", 18u, 7u, 0, m63, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::SetVerticalScroll", 18u, 23u, 0, m64, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::Shutdown", 18u, 3u, 0, m65, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::StopFind", 18u, 29u, 0, m66, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::StopLoad", 18u, 8u, 0, m67, NULL},
    {"STEAMHTMLSURFACE_INTERFACE_VERSION_005::ViewSource", 18u, 25u, 0, m68, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::CreateCookieContainer", 13u, 17u, 0, m69, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::CreateHTTPRequest", 13u, 0u, 0, m70, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::DeferHTTPRequest", 13u, 7u, 0, m71, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPDownloadProgressPct", 13u, 15u, 0, m72, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPRequestWasTimedOut", 13u, 24u, 0, m73, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseBodyData", 13u, 12u, 0, m74, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseBodySize", 13u, 11u, 0, m75, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseHeaderSize", 13u, 9u, 0, m76, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPResponseHeaderValue", 13u, 10u, 0, m77, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::GetHTTPStreamingResponseBodyData", 13u, 13u, 0, m78, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::PrioritizeHTTPRequest", 13u, 8u, 0, m79, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::ReleaseCookieContainer", 13u, 18u, 0, m80, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::ReleaseHTTPRequest", 13u, 14u, 0, m81, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SendHTTPRequest", 13u, 5u, 0, m82, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SendHTTPRequestAndStreamResponse", 13u, 6u, 0, m83, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetCookie", 13u, 19u, 0, m84, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestAbsoluteTimeoutMS", 13u, 23u, 0, m85, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestContextValue", 13u, 1u, 0, m86, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestCookieContainer", 13u, 20u, 0, m87, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestGetOrPostParameter", 13u, 4u, 0, m88, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestHeaderValue", 13u, 3u, 0, m89, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestNetworkActivityTimeout", 13u, 2u, 0, m90, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestRawPostBody", 13u, 16u, 0, NULL, "tampon byte[] pubBody sans taille"},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestRequiresVerifiedCertificate", 13u, 22u, 0, m92, NULL},
    {"STEAMHTTP_INTERFACE_VERSION003::SetHTTPRequestUserAgentInfo", 13u, 21u, 0, m93, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::AddPromoItem", 19u, 12u, 0, m94, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::AddPromoItems", 19u, 13u, 0, NULL, "tampon inout SteamItemDef_t[] pArrayItemDefs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::CheckResultSteamID", 19u, 4u, 0, m96, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::ConsumeItem", 19u, 14u, 0, m97, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::DeserializeResult", 19u, 9u, 0, m98, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::DestroyResult", 19u, 5u, 0, m99, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::ExchangeItems", 19u, 15u, 0, NULL, "tampon inout SteamItemDef_t[] pArrayGenerate sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GenerateItems", 19u, 10u, 0, NULL, "tampon inout SteamItemDef_t[] pArrayItemDefs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetAllItems", 19u, 6u, 0, m102, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GetEligiblePromoItemDefinitionIDs", 19u, 24u, 0, NULL, "tampon inout SteamItemDef_t[] pItemDefIDs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetItemDefinitionIDs", 19u, 21u, 0, NULL, "tampon inout SteamItemDef_t[] pItemDefIDs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetItemDefinitionProperty", 19u, 22u, 0, NULL, "tampon IntPtr pchValueBuffer sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetItemPrice", 19u, 29u, 0, m106, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GetItemsByID", 19u, 7u, 0, m107, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GetItemsWithPrices", 19u, 28u, 0, NULL, "tampon inout SteamItemDef_t[] pArrayItemDefs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetNumItemsWithPrices", 19u, 27u, 0, m109, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GetResultItemProperty", 19u, 2u, 0, NULL, "tampon IntPtr pchValueBuffer sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::GetResultItems", 19u, 1u, 0, NULL, "tableau inout SteamItemDetails_t[] pOutItemsArray"},
    {"STEAMINVENTORY_INTERFACE_V003::GetResultStatus", 19u, 0u, 0, m112, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GetResultTimestamp", 19u, 3u, 0, m113, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::GrantPromoItems", 19u, 11u, 0, m114, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::InspectItem", 19u, 37u, 0, m115, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::LoadItemDefinitions", 19u, 20u, 0, m116, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::RemoveProperty", 19u, 31u, 0, m117, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::RequestEligiblePromoItemDefinitionsIDs", 19u, 23u, 0, m118, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::RequestPrices", 19u, 26u, 0, m119, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SendItemDropHeartbeat", 19u, 17u, 0, m120, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SerializeResult", 19u, 8u, 0, NULL, "tampon byte[] pOutBuffer sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::SetPropertyBool", 19u, 33u, 0, m122, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SetPropertyFloat", 19u, 35u, 0, m123, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SetPropertyInt64", 19u, 34u, 0, m124, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SetPropertyString", 19u, 32u, 0, m125, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::StartPurchase", 19u, 25u, 0, NULL, "tampon inout SteamItemDef_t[] pArrayItemDefs sans taille"},
    {"STEAMINVENTORY_INTERFACE_V003::StartUpdateProperties", 19u, 30u, 0, m127, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::SubmitUpdateProperties", 19u, 36u, 0, m128, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::TransferItemQuantity", 19u, 16u, 0, m129, NULL},
    {"STEAMINVENTORY_INTERFACE_V003::TriggerItemDrop", 19u, 18u, 0, m130, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::BActivationSuccess", 17u, 3u, 0, m131, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::BIsCurrentMusicRemote", 17u, 2u, 0, m132, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryDidChange", 17u, 21u, 0, m133, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryIsAvailable", 17u, 17u, 0, m134, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::CurrentEntryWillChange", 17u, 16u, 0, m135, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::DeregisterSteamMusicRemote", 17u, 1u, 0, m136, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableLooped", 17u, 9u, 0, m137, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlayNext", 17u, 7u, 0, m138, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlayPrevious", 17u, 6u, 0, m139, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnablePlaylists", 17u, 11u, 0, m140, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableQueue", 17u, 10u, 0, m141, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::EnableShuffled", 17u, 8u, 0, m142, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::PlaylistDidChange", 17u, 31u, 0, m143, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::PlaylistWillChange", 17u, 27u, 0, m144, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::QueueDidChange", 17u, 26u, 0, m145, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::QueueWillChange", 17u, 22u, 0, m146, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::RegisterSteamMusicRemote", 17u, 0u, 0, m147, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::ResetPlaylistEntries", 17u, 28u, 0, m148, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::ResetQueueEntries", 17u, 23u, 0, m149, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetCurrentPlaylistEntry", 17u, 30u, 0, m150, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetCurrentQueueEntry", 17u, 25u, 0, m151, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetDisplayName", 17u, 4u, 0, m152, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetPNGIcon_64x64", 17u, 5u, 0, m153, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetPlaylistEntry", 17u, 29u, 0, m154, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::SetQueueEntry", 17u, 24u, 0, m155, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryCoverArt", 17u, 20u, 0, m156, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryElapsedSeconds", 17u, 19u, 0, m157, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateCurrentEntryText", 17u, 18u, 0, m158, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateLooped", 17u, 14u, 0, m159, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdatePlaybackStatus", 17u, 12u, 0, m160, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateShuffled", 17u, 13u, 0, m161, NULL},
    {"STEAMMUSICREMOTE_INTERFACE_VERSION001::UpdateVolume", 17u, 15u, 0, m162, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::BIsEnabled", 16u, 0u, 0, m163, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::BIsPlaying", 16u, 1u, 0, m164, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::GetPlaybackStatus", 16u, 2u, 0, m165, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::GetVolume", 16u, 8u, 0, m166, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::Pause", 16u, 4u, 0, m167, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::Play", 16u, 3u, 0, m168, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::PlayNext", 16u, 6u, 0, m169, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::PlayPrevious", 16u, 5u, 0, m170, NULL},
    {"STEAMMUSIC_INTERFACE_VERSION001::SetVolume", 16u, 7u, 0, m171, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsAppBlocked", 21u, 2u, 0, m172, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsAppInBlockList", 21u, 3u, 0, m173, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsFeatureBlocked", 21u, 4u, 0, m174, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsFeatureInBlockList", 21u, 5u, 0, m175, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsParentalLockEnabled", 21u, 0u, 0, m176, NULL},
    {"STEAMPARENTALSETTINGS_INTERFACE_VERSION001::BIsParentalLockLocked", 21u, 1u, 0, m177, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::BGetSessionClientResolution", 22u, 5u, 0, m178, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::BSendRemotePlayTogetherInvite", 22u, 7u, 0, m179, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::BStartRemotePlayTogether", 22u, 6u, 0, m180, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionClientFormFactor", 22u, 4u, 0, m181, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionClientName", 22u, 3u, 0, m182, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionCount", 22u, 0u, 0, m183, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionID", 22u, 1u, 0, m184, NULL},
    {"STEAMREMOTEPLAY_INTERFACE_VERSION002::GetSessionSteamID", 22u, 2u, 1, m185, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::BeginFileWriteBatch", 11u, 57u, 0, m186, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::CommitPublishedFileUpdate", 11u, 38u, 0, m187, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::CreatePublishedFileUpdateRequest", 11u, 31u, 0, m188, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::DeletePublishedFile", 11u, 40u, 0, m189, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EndFileWriteBatch", 11u, 58u, 0, m190, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumeratePublishedFilesByUserAction", 11u, 52u, 0, m191, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumeratePublishedWorkshopFiles", 11u, 53u, 0, NULL, "tampon IntPtr pTags sans taille"},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumerateUserPublishedFiles", 11u, 41u, 0, m193, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumerateUserSharedWorkshopFiles", 11u, 49u, 0, NULL, "tampon IntPtr pRequiredTags sans taille"},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::EnumerateUserSubscribedFiles", 11u, 43u, 0, m195, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileDelete", 11u, 6u, 0, m196, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileExists", 11u, 13u, 0, m197, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileForget", 11u, 5u, 0, m198, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FilePersisted", 11u, 14u, 0, m199, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileRead", 11u, 1u, 0, m200, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileReadAsync", 11u, 3u, 0, m201, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileReadAsyncComplete", 11u, 4u, 0, m202, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileShare", 11u, 7u, 0, m203, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWrite", 11u, 0u, 0, m204, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteAsync", 11u, 2u, 0, m205, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamCancel", 11u, 12u, 0, m206, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamClose", 11u, 11u, 0, m207, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamOpen", 11u, 9u, 0, m208, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::FileWriteStreamWriteChunk", 11u, 10u, 0, m209, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetCachedUGCCount", 11u, 28u, 0, m210, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetCachedUGCHandle", 11u, 29u, 0, m211, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileCount", 11u, 18u, 0, m212, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileNameAndSize", 11u, 19u, 0, m213, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileSize", 11u, 15u, 0, m214, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetFileTimestamp", 11u, 16u, 0, m215, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetLocalFileChange", 11u, 56u, 0, m216, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetLocalFileChangeCount", 11u, 55u, 0, m217, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetPublishedFileDetails", 11u, 39u, 0, m218, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetPublishedItemVoteDetails", 11u, 46u, 0, m219, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetQuota", 11u, 20u, 0, m220, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetSyncPlatforms", 11u, 17u, 0, m221, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUGCDetails", 11u, 26u, 0, m222, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUGCDownloadProgress", 11u, 25u, 0, m223, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::GetUserPublishedItemVoteDetails", 11u, 48u, 0, m224, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::IsCloudEnabledForAccount", 11u, 21u, 0, m225, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::IsCloudEnabledForApp", 11u, 22u, 0, m226, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetCloudEnabledForApp", 11u, 23u, 0, m227, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetSyncPlatforms", 11u, 8u, 0, m228, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::SetUserPublishedFileAction", 11u, 51u, 0, m229, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::SubscribePublishedFile", 11u, 42u, 0, m230, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCDownload", 11u, 24u, 0, m231, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCDownloadToLocation", 11u, 54u, 0, m232, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UGCRead", 11u, 27u, 0, m233, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UnsubscribePublishedFile", 11u, 44u, 0, m234, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileDescription", 11u, 35u, 0, m235, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileFile", 11u, 32u, 0, m236, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFilePreviewFile", 11u, 33u, 0, m237, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileSetChangeDescription", 11u, 45u, 0, m238, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileTags", 11u, 37u, 0, NULL, "tampon IntPtr pTags sans taille"},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileTitle", 11u, 34u, 0, m240, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdatePublishedFileVisibility", 11u, 36u, 0, m241, NULL},
    {"STEAMREMOTESTORAGE_INTERFACE_VERSION016::UpdateUserPublishedItemVote", 11u, 47u, 0, m242, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::AddScreenshotToLibrary", 12u, 1u, 0, m243, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::AddVRScreenshotToLibrary", 12u, 8u, 0, m244, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::HookScreenshots", 12u, 3u, 0, m245, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::IsScreenshotsHooked", 12u, 7u, 0, m246, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::SetLocation", 12u, 4u, 0, m247, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::TagPublishedFile", 12u, 6u, 0, m248, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::TagUser", 12u, 5u, 0, m249, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::TriggerScreenshot", 12u, 2u, 0, m250, NULL},
    {"STEAMSCREENSHOTS_INTERFACE_VERSION003::WriteScreenshot", 12u, 0u, 0, m251, NULL},
    {"STEAMTIMELINE_INTERFACE_V001::AddTimelineEvent", 23u, 2u, 0, m252, NULL},
    {"STEAMTIMELINE_INTERFACE_V001::ClearTimelineStateDescription", 23u, 1u, 0, m253, NULL},
    {"STEAMTIMELINE_INTERFACE_V001::SetTimelineGameMode", 23u, 3u, 0, m254, NULL},
    {"STEAMTIMELINE_INTERFACE_V001::SetTimelineStateDescription", 23u, 0u, 0, m255, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddAppDependency", 15u, 87u, 0, m256, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddContentDescriptor", 15u, 63u, 0, m257, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddDependency", 15u, 85u, 0, m258, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddExcludedTag", 15u, 24u, 0, m259, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddItemKeyValueTag", 15u, 57u, 0, m260, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddItemPreviewFile", 15u, 58u, 0, m261, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddItemPreviewVideo", 15u, 59u, 0, m262, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddItemToFavorites", 15u, 70u, 0, m263, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddRequiredKeyValueTag", 15u, 42u, 0, m264, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddRequiredTag", 15u, 22u, 0, m265, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::AddRequiredTagGroup", 15u, 23u, 0, NULL, "tampon IntPtr pTagGroups sans taille"},
    {"STEAMUGC_INTERFACE_VERSION020::BInitWorkshopForGameServer", 15u, 80u, 0, m267, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::CreateItem", 15u, 44u, 0, m268, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::CreateQueryAllUGCRequestCursor", 15u, 2u, 0, m269, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::CreateQueryAllUGCRequestPage", 15u, 1u, 0, m270, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::CreateQueryUGCDetailsRequest", 15u, 3u, 0, m271, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::CreateQueryUserUGCRequest", 15u, 0u, 0, m272, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::DeleteItem", 15u, 90u, 0, m273, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::DownloadItem", 15u, 79u, 0, m274, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetAppDependencies", 15u, 89u, 0, m275, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetItemDownloadInfo", 15u, 78u, 0, m276, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetItemInstallInfo", 15u, 77u, 0, m277, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetItemState", 15u, 76u, 0, m278, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetItemUpdateProgress", 15u, 67u, 0, m279, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetNumSubscribedItems", 15u, 74u, 0, m280, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetNumSupportedGameVersions", 15u, 18u, 0, m281, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryFirstUGCKeyValueTag", 15u, 17u, 0, m282, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCChildren", 15u, 11u, 0, m283, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCContentDescriptors", 15u, 20u, 0, m284, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCKeyValueTag", 15u, 16u, 0, m285, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCMetadata", 15u, 10u, 0, m286, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumAdditionalPreviews", 15u, 13u, 0, m287, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumKeyValueTags", 15u, 15u, 0, m288, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCNumTags", 15u, 6u, 0, m289, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCPreviewURL", 15u, 9u, 0, m290, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCResult", 15u, 5u, 0, NULL, "param\u00e8tre out SteamUGCDetails_t pDetails"},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCStatistic", 15u, 12u, 0, m292, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCTag", 15u, 7u, 0, m293, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetQueryUGCTagDisplayName", 15u, 8u, 0, m294, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetSubscribedItems", 15u, 75u, 0, m295, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetSupportedGameVersionData", 15u, 19u, 0, NULL, "tampon IntPtr pchGameBranchMin sans taille"},
    {"STEAMUGC_INTERFACE_VERSION020::GetUserContentDescriptorPreferences", 15u, 93u, 0, m297, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetUserItemVote", 15u, 69u, 0, m298, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::GetWorkshopEULAStatus", 15u, 92u, 0, m299, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::ReleaseQueryUGCRequest", 15u, 21u, 0, m300, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveAllItemKeyValueTags", 15u, 55u, 0, m301, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveAppDependency", 15u, 88u, 0, m302, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveContentDescriptor", 15u, 64u, 0, m303, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveDependency", 15u, 86u, 0, m304, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveItemFromFavorites", 15u, 71u, 0, m305, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveItemKeyValueTags", 15u, 56u, 0, m306, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RemoveItemPreview", 15u, 62u, 0, m307, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::RequestUGCDetails", 15u, 43u, 0, m308, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SendQueryUGCRequest", 15u, 4u, 0, m309, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetAdminQuery", 15u, 35u, 0, m310, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetAllowCachedResponse", 15u, 34u, 0, m311, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetAllowLegacyUpload", 15u, 54u, 0, m312, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetCloudFileNameFilter", 15u, 36u, 0, m313, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemContent", 15u, 52u, 0, m314, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemDescription", 15u, 47u, 0, m315, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemMetadata", 15u, 49u, 0, m316, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemPreview", 15u, 53u, 0, m317, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemTags", 15u, 51u, 0, NULL, "tampon IntPtr pTags sans taille"},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemTitle", 15u, 46u, 0, m319, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemUpdateLanguage", 15u, 48u, 0, m320, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetItemVisibility", 15u, 50u, 0, m321, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetLanguage", 15u, 33u, 0, m322, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetMatchAnyTag", 15u, 37u, 0, m323, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetRankedByTrendDays", 15u, 39u, 0, m324, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetRequiredGameVersions", 15u, 65u, 0, m325, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnAdditionalPreviews", 15u, 30u, 0, m326, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnChildren", 15u, 29u, 0, m327, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnKeyValueTags", 15u, 26u, 0, m328, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnLongDescription", 15u, 27u, 0, m329, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnMetadata", 15u, 28u, 0, m330, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnOnlyIDs", 15u, 25u, 0, m331, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnPlaytimeStats", 15u, 32u, 0, m332, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetReturnTotalOnly", 15u, 31u, 0, m333, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetSearchText", 15u, 38u, 0, m334, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetTimeCreatedDateRange", 15u, 40u, 0, m335, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetTimeUpdatedDateRange", 15u, 41u, 0, m336, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SetUserItemVote", 15u, 68u, 0, m337, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::ShowWorkshopEULA", 15u, 91u, 0, m338, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::StartItemUpdate", 15u, 45u, 0, m339, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::StartPlaytimeTracking", 15u, 82u, 0, m340, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::StopPlaytimeTracking", 15u, 83u, 0, m341, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::StopPlaytimeTrackingForAllItems", 15u, 84u, 0, m342, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SubmitItemUpdate", 15u, 66u, 0, m343, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SubscribeItem", 15u, 72u, 0, m344, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::SuspendDownloads", 15u, 81u, 0, m345, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::UnsubscribeItem", 15u, 73u, 0, m346, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::UpdateItemPreviewFile", 15u, 60u, 0, m347, NULL},
    {"STEAMUGC_INTERFACE_VERSION020::UpdateItemPreviewVideo", 15u, 61u, 0, m348, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::AttachLeaderboardUGC", 8u, 32u, 0, m349, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::ClearAchievement", 8u, 8u, 0, m350, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::DownloadLeaderboardEntries", 8u, 28u, 0, m351, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::DownloadLeaderboardEntriesForUsers", 8u, 29u, 0, m352, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::FindLeaderboard", 8u, 23u, 0, m353, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::FindOrCreateLeaderboard", 8u, 22u, 0, m354, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievement", 8u, 6u, 0, m355, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementAchievedPercent", 8u, 37u, 0, m356, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementAndUnlockTime", 8u, 9u, 0, m357, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementDisplayAttribute", 8u, 12u, 0, m358, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementIcon", 8u, 11u, 0, m359, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementName", 8u, 15u, 0, m360, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementProgressLimitsFloat", 8u, 44u, 0, m361, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetAchievementProgressLimitsInt32", 8u, 43u, 0, m362, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetDownloadedLeaderboardEntry", 8u, 30u, 0, m363, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatDouble", 8u, 40u, 0, m364, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatHistoryDouble", 8u, 42u, 0, m365, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatHistoryInt64", 8u, 41u, 0, m366, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetGlobalStatInt64", 8u, 39u, 0, m367, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardDisplayType", 8u, 27u, 0, m368, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardEntryCount", 8u, 25u, 0, m369, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardName", 8u, 24u, 0, m370, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetLeaderboardSortMethod", 8u, 26u, 0, m371, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetMostAchievedAchievementInfo", 8u, 35u, 0, NULL, "tampon IntPtr pchName sans taille"},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetNextMostAchievedAchievementInfo", 8u, 36u, 0, NULL, "tampon IntPtr pchName sans taille"},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetNumAchievements", 8u, 14u, 0, m374, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetNumberOfCurrentPlayers", 8u, 33u, 0, m375, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetStatFloat", 8u, 2u, 0, m376, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetStatInt32", 8u, 1u, 0, m377, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetUserAchievement", 8u, 19u, 0, m378, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetUserAchievementAndUnlockTime", 8u, 20u, 0, m379, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetUserStatFloat", 8u, 18u, 0, m380, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::GetUserStatInt32", 8u, 17u, 0, m381, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::IndicateAchievementProgress", 8u, 13u, 0, m382, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::RequestCurrentStats", 8u, 0u, 0, m383, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::RequestGlobalAchievementPercentages", 8u, 34u, 0, m384, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::RequestGlobalStats", 8u, 38u, 0, m385, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::RequestUserStats", 8u, 16u, 0, m386, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::ResetAllStats", 8u, 21u, 0, m387, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::SetAchievement", 8u, 7u, 0, m388, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::SetStatFloat", 8u, 4u, 0, m389, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::SetStatInt32", 8u, 3u, 0, m390, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::StoreStats", 8u, 10u, 0, m391, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::UpdateAvgRateStat", 8u, 5u, 0, m392, NULL},
    {"STEAMUSERSTATS_INTERFACE_VERSION012::UploadLeaderboardScore", 8u, 31u, 0, m393, NULL},
    {"STEAMVIDEO_INTERFACE_V007::GetOPFSettings", 20u, 2u, 0, m394, NULL},
    {"STEAMVIDEO_INTERFACE_V007::GetOPFStringForApp", 20u, 3u, 0, NULL, "tampon IntPtr pchBuffer sans taille"},
    {"STEAMVIDEO_INTERFACE_V007::GetVideoURL", 20u, 0u, 0, m396, NULL},
    {"STEAMVIDEO_INTERFACE_V007::IsBroadcasting", 20u, 1u, 0, m397, NULL},
    {"SteamClient021::BReleaseSteamPipe", 0u, 1u, 0, m398, NULL},
    {"SteamClient021::BShutdownIfAllPipesClosed", 0u, 23u, 0, m399, NULL},
    {"SteamClient021::ConnectToGlobalUser", 0u, 2u, 0, m400, NULL},
    {"SteamClient021::CreateLocalUser", 0u, 3u, 0, m401, NULL},
    {"SteamClient021::CreateSteamPipe", 0u, 0u, 0, m402, NULL},
    {"SteamClient021::GetIPCCallCount", 0u, 21u, 0, m403, NULL},
    {"SteamClient021::GetISteamApps", 0u, 15u, 0, m404, NULL},
    {"SteamClient021::GetISteamController", 0u, 25u, 0, m405, NULL},
    {"SteamClient021::GetISteamFriends", 0u, 8u, 0, m406, NULL},
    {"SteamClient021::GetISteamGameSearch", 0u, 19u, 0, m407, NULL},
    {"SteamClient021::GetISteamGameServer", 0u, 6u, 0, m408, NULL},
    {"SteamClient021::GetISteamGameServerStats", 0u, 14u, 0, m409, NULL},
    {"SteamClient021::GetISteamGenericInterface", 0u, 12u, 0, m410, NULL},
    {"SteamClient021::GetISteamHTMLSurface", 0u, 29u, 0, m411, NULL},
    {"SteamClient021::GetISteamHTTP", 0u, 24u, 0, m412, NULL},
    {"SteamClient021::GetISteamInput", 0u, 36u, 0, m413, NULL},
    {"SteamClient021::GetISteamInventory", 0u, 33u, 0, m414, NULL},
    {"SteamClient021::GetISteamMatchmaking", 0u, 10u, 0, m415, NULL},
    {"SteamClient021::GetISteamMatchmakingServers", 0u, 11u, 0, m416, NULL},
    {"SteamClient021::GetISteamMusic", 0u, 27u, 0, m417, NULL},
    {"SteamClient021::GetISteamMusicRemote", 0u, 28u, 0, m418, NULL},
    {"SteamClient021::GetISteamNetworking", 0u, 16u, 0, m419, NULL},
    {"SteamClient021::GetISteamParentalSettings", 0u, 35u, 0, m420, NULL},
    {"SteamClient021::GetISteamParties", 0u, 37u, 0, m421, NULL},
    {"SteamClient021::GetISteamRemotePlay", 0u, 38u, 0, m422, NULL},
    {"SteamClient021::GetISteamRemoteStorage", 0u, 17u, 0, m423, NULL},
    {"SteamClient021::GetISteamScreenshots", 0u, 18u, 0, m424, NULL},
    {"SteamClient021::GetISteamUGC", 0u, 26u, 0, m425, NULL},
    {"SteamClient021::GetISteamUser", 0u, 5u, 0, m426, NULL},
    {"SteamClient021::GetISteamUserStats", 0u, 13u, 0, m427, NULL},
    {"SteamClient021::GetISteamUtils", 0u, 9u, 0, m428, NULL},
    {"SteamClient021::GetISteamVideo", 0u, 34u, 0, m429, NULL},
    {"SteamClient021::ReleaseUser", 0u, 4u, 0, m430, NULL},
    {"SteamClient021::SetLocalIPBinding", 0u, 7u, 0, NULL, "param\u00e8tre ref SteamIPAddress_t unIP"},
    {"SteamClient021::SetWarningMessageHook", 0u, 22u, 0, steam_manual_client_warning_hook, NULL},
    {"SteamController008::ActivateActionSet", 14u, 5u, 0, m433, NULL},
    {"SteamController008::ActivateActionSetLayer", 14u, 7u, 0, m434, NULL},
    {"SteamController008::DeactivateActionSetLayer", 14u, 8u, 0, m435, NULL},
    {"SteamController008::DeactivateAllActionSetLayers", 14u, 9u, 0, m436, NULL},
    {"SteamController008::GetActionOriginFromXboxOrigin", 14u, 31u, 0, m437, NULL},
    {"SteamController008::GetActionSetHandle", 14u, 4u, 0, m438, NULL},
    {"SteamController008::GetActiveActionSetLayers", 14u, 10u, 0, m439, NULL},
    {"SteamController008::GetAnalogActionHandle", 14u, 14u, 0, m440, NULL},
    {"SteamController008::GetAnalogActionOrigins", 14u, 16u, 0, m441, NULL},
    {"SteamController008::GetConnectedControllers", 14u, 3u, 0, m442, NULL},
    {"SteamController008::GetControllerBindingRevision", 14u, 33u, 0, m443, NULL},
    {"SteamController008::GetControllerForGamepadIndex", 14u, 27u, 0, m444, NULL},
    {"SteamController008::GetCurrentActionSet", 14u, 6u, 0, m445, NULL},
    {"SteamController008::GetDigitalActionData", 14u, 12u, 0, NULL, "retour InputDigitalActionData_t (InputDigitalActionData_t)"},
    {"SteamController008::GetDigitalActionHandle", 14u, 11u, 0, m447, NULL},
    {"SteamController008::GetDigitalActionOrigins", 14u, 13u, 0, m448, NULL},
    {"SteamController008::GetGamepadIndexForController", 14u, 28u, 0, m449, NULL},
    {"SteamController008::GetGlyphForActionOrigin", 14u, 17u, 0, m450, NULL},
    {"SteamController008::GetGlyphForXboxOrigin", 14u, 30u, 0, m451, NULL},
    {"SteamController008::GetInputTypeForHandle", 14u, 26u, 0, m452, NULL},
    {"SteamController008::GetStringForActionOrigin", 14u, 18u, 0, m453, NULL},
    {"SteamController008::GetStringForXboxOrigin", 14u, 29u, 0, m454, NULL},
    {"SteamController008::Init", 14u, 0u, 0, m455, NULL},
    {"SteamController008::RunFrame", 14u, 2u, 0, m456, NULL},
    {"SteamController008::SetLEDColor", 14u, 24u, 0, m457, NULL},
    {"SteamController008::ShowBindingPanel", 14u, 25u, 0, m458, NULL},
    {"SteamController008::Shutdown", 14u, 1u, 0, m459, NULL},
    {"SteamController008::StopAnalogActionMomentum", 14u, 19u, 0, m460, NULL},
    {"SteamController008::TranslateActionOrigin", 14u, 32u, 0, m461, NULL},
    {"SteamController008::TriggerHapticPulse", 14u, 21u, 0, m462, NULL},
    {"SteamController008::TriggerRepeatedHapticPulse", 14u, 22u, 0, m463, NULL},
    {"SteamController008::TriggerVibration", 14u, 23u, 0, m464, NULL},
    {"SteamFriends017::ActivateGameOverlay", 2u, 28u, 0, m465, NULL},
    {"SteamFriends017::ActivateGameOverlayInviteDialog", 2u, 33u, 0, m466, NULL},
    {"SteamFriends017::ActivateGameOverlayInviteDialogConnectString", 2u, 75u, 0, m467, NULL},
    {"SteamFriends017::ActivateGameOverlayRemotePlayTogetherInviteDialog", 2u, 73u, 0, m468, NULL},
    {"SteamFriends017::ActivateGameOverlayToStore", 2u, 31u, 0, m469, NULL},
    {"SteamFriends017::ActivateGameOverlayToUser", 2u, 29u, 0, m470, NULL},
    {"SteamFriends017::ActivateGameOverlayToWebPage", 2u, 30u, 0, m471, NULL},
    {"SteamFriends017::BHasEquippedProfileItem", 2u, 77u, 0, m472, NULL},
    {"SteamFriends017::ClearRichPresence", 2u, 44u, 0, m473, NULL},
    {"SteamFriends017::CloseClanChatWindowInSteam", 2u, 63u, 0, m474, NULL},
    {"SteamFriends017::DownloadClanActivityCounts", 2u, 23u, 0, m475, NULL},
    {"SteamFriends017::EnumerateFollowingList", 2u, 69u, 0, m476, NULL},
    {"SteamFriends017::GetChatMemberByIndex", 2u, 57u, 1, m477, NULL},
    {"SteamFriends017::GetClanActivityCounts", 2u, 22u, 0, m478, NULL},
    {"SteamFriends017::GetClanByIndex", 2u, 19u, 1, m479, NULL},
    {"SteamFriends017::GetClanChatMemberCount", 2u, 56u, 0, m480, NULL},
    {"SteamFriends017::GetClanChatMessage", 2u, 59u, 0, m481, NULL},
    {"SteamFriends017::GetClanCount", 2u, 18u, 0, m482, NULL},
    {"SteamFriends017::GetClanName", 2u, 20u, 0, m483, NULL},
    {"SteamFriends017::GetClanOfficerByIndex", 2u, 41u, 1, m484, NULL},
    {"SteamFriends017::GetClanOfficerCount", 2u, 40u, 0, m485, NULL},
    {"SteamFriends017::GetClanOwner", 2u, 39u, 1, m486, NULL},
    {"SteamFriends017::GetClanTag", 2u, 21u, 0, m487, NULL},
    {"SteamFriends017::GetCoplayFriend", 2u, 51u, 1, m488, NULL},
    {"SteamFriends017::GetCoplayFriendCount", 2u, 50u, 0, m489, NULL},
    {"SteamFriends017::GetFollowerCount", 2u, 67u, 0, m490, NULL},
    {"SteamFriends017::GetFriendByIndex", 2u, 4u, 1, m491, NULL},
    {"SteamFriends017::GetFriendCoplayGame", 2u, 53u, 0, m492, NULL},
    {"SteamFriends017::GetFriendCoplayTime", 2u, 52u, 0, m493, NULL},
    {"SteamFriends017::GetFriendCount", 2u, 3u, 0, m494, NULL},
    {"SteamFriends017::GetFriendCountFromSource", 2u, 24u, 0, m495, NULL},
    {"SteamFriends017::GetFriendFromSourceByIndex", 2u, 25u, 1, m496, NULL},
    {"SteamFriends017::GetFriendGamePlayed", 2u, 8u, 0, m497, NULL},
    {"SteamFriends017::GetFriendMessage", 2u, 66u, 0, m498, NULL},
    {"SteamFriends017::GetFriendPersonaName", 2u, 7u, 0, m499, NULL},
    {"SteamFriends017::GetFriendPersonaNameHistory", 2u, 9u, 0, m500, NULL},
    {"SteamFriends017::GetFriendPersonaState", 2u, 6u, 0, m501, NULL},
    {"SteamFriends017::GetFriendRelationship", 2u, 5u, 0, m502, NULL},
    {"SteamFriends017::GetFriendRichPresence", 2u, 45u, 0, m503, NULL},
    {"SteamFriends017::GetFriendRichPresenceKeyByIndex", 2u, 47u, 0, m504, NULL},
    {"SteamFriends017::GetFriendRichPresenceKeyCount", 2u, 46u, 0, m505, NULL},
    {"SteamFriends017::GetFriendSteamLevel", 2u, 10u, 0, m506, NULL},
    {"SteamFriends017::GetFriendsGroupCount", 2u, 12u, 0, m507, NULL},
    {"SteamFriends017::GetFriendsGroupIDByIndex", 2u, 13u, 0, m508, NULL},
    {"SteamFriends017::GetFriendsGroupMembersCount", 2u, 15u, 0, m509, NULL},
    {"SteamFriends017::GetFriendsGroupMembersList", 2u, 16u, 0, m510, NULL},
    {"SteamFriends017::GetFriendsGroupName", 2u, 14u, 0, m511, NULL},
    {"SteamFriends017::GetLargeFriendAvatar", 2u, 36u, 0, m512, NULL},
    {"SteamFriends017::GetMediumFriendAvatar", 2u, 35u, 0, m513, NULL},
    {"SteamFriends017::GetNumChatsWithUnreadPriorityMessages", 2u, 72u, 0, m514, NULL},
    {"SteamFriends017::GetPersonaName", 2u, 0u, 0, m515, NULL},
    {"SteamFriends017::GetPersonaState", 2u, 2u, 0, m516, NULL},
    {"SteamFriends017::GetPlayerNickname", 2u, 11u, 0, m517, NULL},
    {"SteamFriends017::GetProfileItemPropertyString", 2u, 78u, 0, m518, NULL},
    {"SteamFriends017::GetProfileItemPropertyUint", 2u, 79u, 0, m519, NULL},
    {"SteamFriends017::GetSmallFriendAvatar", 2u, 34u, 0, m520, NULL},
    {"SteamFriends017::GetUserRestrictions", 2u, 42u, 0, m521, NULL},
    {"SteamFriends017::HasFriend", 2u, 17u, 0, m522, NULL},
    {"SteamFriends017::InviteUserToGame", 2u, 49u, 0, m523, NULL},
    {"SteamFriends017::IsClanChatAdmin", 2u, 60u, 0, m524, NULL},
    {"SteamFriends017::IsClanChatWindowOpenInSteam", 2u, 61u, 0, m525, NULL},
    {"SteamFriends017::IsClanOfficialGameGroup", 2u, 71u, 0, m526, NULL},
    {"SteamFriends017::IsClanPublic", 2u, 70u, 0, m527, NULL},
    {"SteamFriends017::IsFollowing", 2u, 68u, 0, m528, NULL},
    {"SteamFriends017::IsUserInSource", 2u, 26u, 0, m529, NULL},
    {"SteamFriends017::JoinClanChatRoom", 2u, 54u, 0, m530, NULL},
    {"SteamFriends017::LeaveClanChatRoom", 2u, 55u, 0, m531, NULL},
    {"SteamFriends017::OpenClanChatWindowInSteam", 2u, 62u, 0, m532, NULL},
    {"SteamFriends017::RegisterProtocolInOverlayBrowser", 2u, 74u, 0, m533, NULL},
    {"SteamFriends017::ReplyToFriendMessage", 2u, 65u, 0, m534, NULL},
    {"SteamFriends017::RequestClanOfficerList", 2u, 38u, 0, m535, NULL},
    {"SteamFriends017::RequestEquippedProfileItems", 2u, 76u, 0, m536, NULL},
    {"SteamFriends017::RequestFriendRichPresence", 2u, 48u, 0, m537, NULL},
    {"SteamFriends017::RequestUserInformation", 2u, 37u, 0, m538, NULL},
    {"SteamFriends017::SendClanChatMessage", 2u, 58u, 0, m539, NULL},
    {"SteamFriends017::SetInGameVoiceSpeaking", 2u, 27u, 0, m540, NULL},
    {"SteamFriends017::SetListenForFriendsMessages", 2u, 64u, 0, m541, NULL},
    {"SteamFriends017::SetPersonaName", 2u, 1u, 0, m542, NULL},
    {"SteamFriends017::SetPlayedWith", 2u, 32u, 0, m543, NULL},
    {"SteamFriends017::SetRichPresence", 2u, 43u, 0, m544, NULL},
    {"SteamGameServer015::AssociateWithClan", 25u, 36u, 0, m545, NULL},
    {"SteamGameServer015::BLoggedOn", 25u, 8u, 0, m546, NULL},
    {"SteamGameServer015::BSecure", 25u, 9u, 0, m547, NULL},
    {"SteamGameServer015::BUpdateUserData", 25u, 41u, 0, m548, NULL},
    {"SteamGameServer015::BeginAuthSession", 25u, 26u, 0, m549, NULL},
    {"SteamGameServer015::CancelAuthTicket", 25u, 28u, 0, m550, NULL},
    {"SteamGameServer015::ClearAllKeyValues", 25u, 19u, 0, m551, NULL},
    {"SteamGameServer015::ComputeNewPlayerCompatibility", 25u, 37u, 0, m552, NULL},
    {"SteamGameServer015::CreateUnauthenticatedUserConnection", 25u, 39u, 1, m553, NULL},
    {"SteamGameServer015::EndAuthSession", 25u, 27u, 0, m554, NULL},
    {"SteamGameServer015::GetAuthSessionTicket", 25u, 25u, 0, NULL, "param\u00e8tre ref SteamNetworkingIdentity pSnid"},
    {"SteamGameServer015::GetGameplayStats", 25u, 31u, 0, m556, NULL},
    {"SteamGameServer015::GetNextOutgoingPacket", 25u, 35u, 0, m557, NULL},
    {"SteamGameServer015::GetServerReputation", 25u, 32u, 0, m558, NULL},
    {"SteamGameServer015::GetSteamID", 25u, 10u, 1, m559, NULL},
    {"SteamGameServer015::HandleIncomingPacket", 25u, 34u, 0, m560, NULL},
    {"SteamGameServer015::LogOff", 25u, 7u, 0, m561, NULL},
    {"SteamGameServer015::LogOn", 25u, 5u, 0, m562, NULL},
    {"SteamGameServer015::LogOnAnonymous", 25u, 6u, 0, m563, NULL},
    {"SteamGameServer015::RequestUserGroupStatus", 25u, 30u, 0, m564, NULL},
    {"SteamGameServer015::SendUserConnectAndAuthenticate_DEPRECATED", 25u, 38u, 0, m565, NULL},
    {"SteamGameServer015::SendUserDisconnect_DEPRECATED", 25u, 40u, 0, m566, NULL},
    {"SteamGameServer015::SetAdvertiseServerActive", 25u, 24u, 0, m567, NULL},
    {"SteamGameServer015::SetBotPlayerCount", 25u, 13u, 0, m568, NULL},
    {"SteamGameServer015::SetDedicatedServer", 25u, 4u, 0, m569, NULL},
    {"SteamGameServer015::SetGameData", 25u, 22u, 0, m570, NULL},
    {"SteamGameServer015::SetGameDescription", 25u, 2u, 0, m571, NULL},
    {"SteamGameServer015::SetGameTags", 25u, 21u, 0, m572, NULL},
    {"SteamGameServer015::SetKeyValue", 25u, 20u, 0, m573, NULL},
    {"SteamGameServer015::SetMapName", 25u, 15u, 0, m574, NULL},
    {"SteamGameServer015::SetMaxPlayerCount", 25u, 12u, 0, m575, NULL},
    {"SteamGameServer015::SetModDir", 25u, 3u, 0, m576, NULL},
    {"SteamGameServer015::SetPasswordProtected", 25u, 16u, 0, m577, NULL},
    {"SteamGameServer015::SetProduct", 25u, 1u, 0, m578, NULL},
    {"SteamGameServer015::SetRegion", 25u, 23u, 0, m579, NULL},
    {"SteamGameServer015::SetServerName", 25u, 14u, 0, m580, NULL},
    {"SteamGameServer015::SetSpectatorPort", 25u, 17u, 0, m581, NULL},
    {"SteamGameServer015::SetSpectatorServerName", 25u, 18u, 0, m582, NULL},
    {"SteamGameServer015::UserHasLicenseForApp", 25u, 29u, 0, m583, NULL},
    {"SteamGameServer015::WasRestartRequested", 25u, 11u, 0, m584, NULL},
    {"SteamGameServerStats001::ClearUserAchievement", 26u, 8u, 0, m585, NULL},
    {"SteamGameServerStats001::GetUserAchievement", 26u, 3u, 0, m586, NULL},
    {"SteamGameServerStats001::GetUserStatFloat", 26u, 2u, 0, m587, NULL},
    {"SteamGameServerStats001::GetUserStatInt32", 26u, 1u, 0, m588, NULL},
    {"SteamGameServerStats001::RequestUserStats", 26u, 0u, 0, m589, NULL},
    {"SteamGameServerStats001::SetUserAchievement", 26u, 7u, 0, m590, NULL},
    {"SteamGameServerStats001::SetUserStatFloat", 26u, 5u, 0, m591, NULL},
    {"SteamGameServerStats001::SetUserStatInt32", 26u, 4u, 0, m592, NULL},
    {"SteamGameServerStats001::StoreUserStats", 26u, 9u, 0, m593, NULL},
    {"SteamGameServerStats001::UpdateUserAvgRateStat", 26u, 6u, 0, m594, NULL},
    {"SteamInput006::ActivateActionSet", 24u, 10u, 0, m595, NULL},
    {"SteamInput006::ActivateActionSetLayer", 24u, 12u, 0, m596, NULL},
    {"SteamInput006::BNewDataAvailable", 24u, 5u, 0, m597, NULL},
    {"SteamInput006::BWaitForData", 24u, 4u, 0, m598, NULL},
    {"SteamInput006::DeactivateActionSetLayer", 24u, 13u, 0, m599, NULL},
    {"SteamInput006::DeactivateAllActionSetLayers", 24u, 14u, 0, m600, NULL},
    {"SteamInput006::EnableActionEventCallbacks", 24u, 8u, 0, NULL, "param\u00e8tre SteamInputActionEventCallbackPointer pCallback"},
    {"SteamInput006::EnableDeviceCallbacks", 24u, 7u, 0, m602, NULL},
    {"SteamInput006::GetActionOriginFromXboxOrigin", 24u, 42u, 0, m603, NULL},
    {"SteamInput006::GetActionSetHandle", 24u, 9u, 0, m604, NULL},
    {"SteamInput006::GetActiveActionSetLayers", 24u, 15u, 0, m605, NULL},
    {"SteamInput006::GetAnalogActionHandle", 24u, 20u, 0, m606, NULL},
    {"SteamInput006::GetAnalogActionOrigins", 24u, 22u, 0, m607, NULL},
    {"SteamInput006::GetConnectedControllers", 24u, 6u, 0, m608, NULL},
    {"SteamInput006::GetControllerForGamepadIndex", 24u, 38u, 0, m609, NULL},
    {"SteamInput006::GetCurrentActionSet", 24u, 11u, 0, m610, NULL},
    {"SteamInput006::GetDeviceBindingRevision", 24u, 44u, 0, m611, NULL},
    {"SteamInput006::GetDigitalActionData", 24u, 17u, 0, NULL, "retour InputDigitalActionData_t (InputDigitalActionData_t)"},
    {"SteamInput006::GetDigitalActionHandle", 24u, 16u, 0, m613, NULL},
    {"SteamInput006::GetDigitalActionOrigins", 24u, 18u, 0, m614, NULL},
    {"SteamInput006::GetGamepadIndexForController", 24u, 39u, 0, m615, NULL},
    {"SteamInput006::GetGlyphForActionOrigin_Legacy", 24u, 25u, 0, m616, NULL},
    {"SteamInput006::GetGlyphForXboxOrigin", 24u, 41u, 0, m617, NULL},
    {"SteamInput006::GetGlyphPNGForActionOrigin", 24u, 23u, 0, m618, NULL},
    {"SteamInput006::GetGlyphSVGForActionOrigin", 24u, 24u, 0, m619, NULL},
    {"SteamInput006::GetInputTypeForHandle", 24u, 37u, 0, m620, NULL},
    {"SteamInput006::GetRemotePlaySessionID", 24u, 45u, 0, m621, NULL},
    {"SteamInput006::GetSessionInputConfigurationSettings", 24u, 46u, 0, m622, NULL},
    {"SteamInput006::GetStringForActionOrigin", 24u, 26u, 0, m623, NULL},
    {"SteamInput006::GetStringForAnalogActionName", 24u, 27u, 0, m624, NULL},
    {"SteamInput006::GetStringForDigitalActionName", 24u, 19u, 0, m625, NULL},
    {"SteamInput006::GetStringForXboxOrigin", 24u, 40u, 0, m626, NULL},
    {"SteamInput006::Init", 24u, 0u, 0, m627, NULL},
    {"SteamInput006::Legacy_TriggerHapticPulse", 24u, 34u, 0, m628, NULL},
    {"SteamInput006::Legacy_TriggerRepeatedHapticPulse", 24u, 35u, 0, m629, NULL},
    {"SteamInput006::RunFrame", 24u, 3u, 0, m630, NULL},
    {"SteamInput006::SetDualSenseTriggerEffect", 24u, 47u, 0, NULL, "tampon IntPtr pParam sans taille"},
    {"SteamInput006::SetInputActionManifestFilePath", 24u, 2u, 0, m632, NULL},
    {"SteamInput006::SetLEDColor", 24u, 33u, 0, m633, NULL},
    {"SteamInput006::ShowBindingPanel", 24u, 36u, 0, m634, NULL},
    {"SteamInput006::Shutdown", 24u, 1u, 0, m635, NULL},
    {"SteamInput006::StopAnalogActionMomentum", 24u, 28u, 0, m636, NULL},
    {"SteamInput006::TranslateActionOrigin", 24u, 43u, 0, m637, NULL},
    {"SteamInput006::TriggerSimpleHapticEvent", 24u, 32u, 0, NULL, "param\u00e8tre char nGainDB"},
    {"SteamInput006::TriggerVibration", 24u, 30u, 0, m639, NULL},
    {"SteamInput006::TriggerVibrationExtended", 24u, 31u, 0, m640, NULL},
    {"SteamMatchGameSearch001::AcceptGame", 5u, 3u, 0, m641, NULL},
    {"SteamMatchGameSearch001::AddGameSearchParams", 5u, 0u, 0, m642, NULL},
    {"SteamMatchGameSearch001::CancelRequestPlayersForGame", 5u, 11u, 0, m643, NULL},
    {"SteamMatchGameSearch001::DeclineGame", 5u, 4u, 0, m644, NULL},
    {"SteamMatchGameSearch001::EndGame", 5u, 13u, 0, m645, NULL},
    {"SteamMatchGameSearch001::EndGameSearch", 5u, 6u, 0, m646, NULL},
    {"SteamMatchGameSearch001::HostConfirmGameStart", 5u, 10u, 0, m647, NULL},
    {"SteamMatchGameSearch001::RequestPlayersForGame", 5u, 9u, 0, m648, NULL},
    {"SteamMatchGameSearch001::RetrieveConnectionDetails", 5u, 5u, 0, m649, NULL},
    {"SteamMatchGameSearch001::SearchForGameSolo", 5u, 2u, 0, m650, NULL},
    {"SteamMatchGameSearch001::SearchForGameWithLobby", 5u, 1u, 0, m651, NULL},
    {"SteamMatchGameSearch001::SetConnectionDetails", 5u, 8u, 0, m652, NULL},
    {"SteamMatchGameSearch001::SetGameHostParams", 5u, 7u, 0, m653, NULL},
    {"SteamMatchGameSearch001::SubmitPlayerResult", 5u, 12u, 0, m654, NULL},
    {"SteamMatchMaking009::AddFavoriteGame", 4u, 2u, 0, m655, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListCompatibleMembersFilter", 4u, 11u, 0, m656, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListDistanceFilter", 4u, 9u, 0, m657, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListFilterSlotsAvailable", 4u, 8u, 0, m658, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListNearValueFilter", 4u, 7u, 0, m659, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListNumericalFilter", 4u, 6u, 0, m660, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListResultCountFilter", 4u, 10u, 0, m661, NULL},
    {"SteamMatchMaking009::AddRequestLobbyListStringFilter", 4u, 5u, 0, m662, NULL},
    {"SteamMatchMaking009::CreateLobby", 4u, 13u, 0, m663, NULL},
    {"SteamMatchMaking009::DeleteLobbyData", 4u, 23u, 0, m664, NULL},
    {"SteamMatchMaking009::GetFavoriteGame", 4u, 1u, 0, m665, NULL},
    {"SteamMatchMaking009::GetFavoriteGameCount", 4u, 0u, 0, m666, NULL},
    {"SteamMatchMaking009::GetLobbyByIndex", 4u, 12u, 1, m667, NULL},
    {"SteamMatchMaking009::GetLobbyChatEntry", 4u, 27u, 0, m668, NULL},
    {"SteamMatchMaking009::GetLobbyData", 4u, 19u, 0, m669, NULL},
    {"SteamMatchMaking009::GetLobbyDataByIndex", 4u, 22u, 0, m670, NULL},
    {"SteamMatchMaking009::GetLobbyDataCount", 4u, 21u, 0, m671, NULL},
    {"SteamMatchMaking009::GetLobbyGameServer", 4u, 30u, 0, m672, NULL},
    {"SteamMatchMaking009::GetLobbyMemberByIndex", 4u, 18u, 1, m673, NULL},
    {"SteamMatchMaking009::GetLobbyMemberData", 4u, 24u, 0, m674, NULL},
    {"SteamMatchMaking009::GetLobbyMemberLimit", 4u, 32u, 0, m675, NULL},
    {"SteamMatchMaking009::GetLobbyOwner", 4u, 35u, 1, m676, NULL},
    {"SteamMatchMaking009::GetNumLobbyMembers", 4u, 17u, 0, m677, NULL},
    {"SteamMatchMaking009::InviteUserToLobby", 4u, 16u, 0, m678, NULL},
    {"SteamMatchMaking009::JoinLobby", 4u, 14u, 0, m679, NULL},
    {"SteamMatchMaking009::LeaveLobby", 4u, 15u, 0, m680, NULL},
    {"SteamMatchMaking009::RemoveFavoriteGame", 4u, 3u, 0, m681, NULL},
    {"SteamMatchMaking009::RequestLobbyData", 4u, 28u, 0, m682, NULL},
    {"SteamMatchMaking009::RequestLobbyList", 4u, 4u, 0, m683, NULL},
    {"SteamMatchMaking009::SendLobbyChatMsg", 4u, 26u, 0, m684, NULL},
    {"SteamMatchMaking009::SetLinkedLobby", 4u, 37u, 0, m685, NULL},
    {"SteamMatchMaking009::SetLobbyData", 4u, 20u, 0, m686, NULL},
    {"SteamMatchMaking009::SetLobbyGameServer", 4u, 29u, 0, m687, NULL},
    {"SteamMatchMaking009::SetLobbyJoinable", 4u, 34u, 0, m688, NULL},
    {"SteamMatchMaking009::SetLobbyMemberData", 4u, 25u, 0, m689, NULL},
    {"SteamMatchMaking009::SetLobbyMemberLimit", 4u, 31u, 0, m690, NULL},
    {"SteamMatchMaking009::SetLobbyOwner", 4u, 36u, 0, m691, NULL},
    {"SteamMatchMaking009::SetLobbyType", 4u, 33u, 0, m692, NULL},
    {"SteamMatchMakingServers002::CancelQuery", 6u, 8u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::CancelServerQuery", 6u, 16u, 0, m694, NULL},
    {"SteamMatchMakingServers002::GetServerCount", 6u, 11u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::GetServerDetails", 6u, 7u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::IsRefreshing", 6u, 10u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::PingServer", 6u, 13u, 0, NULL, "tampon IntPtr pRequestServersResponse sans taille"},
    {"SteamMatchMakingServers002::PlayerDetails", 6u, 14u, 0, NULL, "tampon IntPtr pRequestServersResponse sans taille"},
    {"SteamMatchMakingServers002::RefreshQuery", 6u, 9u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::RefreshServer", 6u, 12u, 0, NULL, "param\u00e8tre HServerListRequest hRequest"},
    {"SteamMatchMakingServers002::ReleaseRequest", 6u, 6u, 0, NULL, "param\u00e8tre HServerListRequest hServerListRequest"},
    {"SteamMatchMakingServers002::RequestFavoritesServerList", 6u, 3u, 0, NULL, "tampon IntPtr ppchFilters sans taille"},
    {"SteamMatchMakingServers002::RequestFriendsServerList", 6u, 2u, 0, NULL, "tampon IntPtr ppchFilters sans taille"},
    {"SteamMatchMakingServers002::RequestHistoryServerList", 6u, 4u, 0, NULL, "tampon IntPtr ppchFilters sans taille"},
    {"SteamMatchMakingServers002::RequestInternetServerList", 6u, 0u, 0, NULL, "tampon IntPtr ppchFilters sans taille"},
    {"SteamMatchMakingServers002::RequestLANServerList", 6u, 1u, 0, NULL, "tampon IntPtr pRequestServersResponse sans taille"},
    {"SteamMatchMakingServers002::RequestSpectatorServerList", 6u, 5u, 0, NULL, "tampon IntPtr ppchFilters sans taille"},
    {"SteamMatchMakingServers002::ServerRules", 6u, 15u, 0, NULL, "tampon IntPtr pRequestServersResponse sans taille"},
    {"SteamNetworking006::AcceptP2PSessionWithUser", 10u, 3u, 0, m710, NULL},
    {"SteamNetworking006::AllowP2PPacketRelay", 10u, 7u, 0, m711, NULL},
    {"SteamNetworking006::CloseP2PChannelWithUser", 10u, 5u, 0, m712, NULL},
    {"SteamNetworking006::CloseP2PSessionWithUser", 10u, 4u, 0, m713, NULL},
    {"SteamNetworking006::CreateP2PConnectionSocket", 10u, 9u, 0, m714, NULL},
    {"SteamNetworking006::DestroyListenSocket", 10u, 12u, 0, m715, NULL},
    {"SteamNetworking006::DestroySocket", 10u, 11u, 0, m716, NULL},
    {"SteamNetworking006::GetListenSocketInfo", 10u, 19u, 0, NULL, "param\u00e8tre out SteamIPAddress_t pnIP"},
    {"SteamNetworking006::GetMaxPacketSize", 10u, 21u, 0, m718, NULL},
    {"SteamNetworking006::GetP2PSessionState", 10u, 6u, 0, NULL, "param\u00e8tre out P2PSessionState_t pConnectionState"},
    {"SteamNetworking006::GetSocketConnectionType", 10u, 20u, 0, m720, NULL},
    {"SteamNetworking006::GetSocketInfo", 10u, 18u, 0, NULL, "param\u00e8tre out SteamIPAddress_t punIPRemote"},
    {"SteamNetworking006::IsDataAvailable", 10u, 16u, 0, m722, NULL},
    {"SteamNetworking006::IsDataAvailableOnSocket", 10u, 14u, 0, m723, NULL},
    {"SteamNetworking006::IsP2PPacketAvailable", 10u, 1u, 0, m724, NULL},
    {"SteamNetworking006::ReadP2PPacket", 10u, 2u, 0, m725, NULL},
    {"SteamNetworking006::RetrieveData", 10u, 17u, 0, m726, NULL},
    {"SteamNetworking006::RetrieveDataFromSocket", 10u, 15u, 0, m727, NULL},
    {"SteamNetworking006::SendDataOnSocket", 10u, 13u, 0, m728, NULL},
    {"SteamNetworking006::SendP2PPacket", 10u, 0u, 0, m729, NULL},
    {"SteamParties002::CancelReservation", 7u, 8u, 0, m730, NULL},
    {"SteamParties002::ChangeNumOpenSlots", 7u, 9u, 0, m731, NULL},
    {"SteamParties002::CreateBeacon", 7u, 6u, 0, NULL, "param\u00e8tre ref SteamPartyBeaconLocation_t pBeaconLocation"},
    {"SteamParties002::DestroyBeacon", 7u, 10u, 0, m733, NULL},
    {"SteamParties002::GetAvailableBeaconLocations", 7u, 5u, 0, NULL, "tableau inout SteamPartyBeaconLocation_t[] pLocationList"},
    {"SteamParties002::GetBeaconByIndex", 7u, 1u, 0, m735, NULL},
    {"SteamParties002::GetBeaconDetails", 7u, 2u, 0, NULL, "param\u00e8tre out SteamPartyBeaconLocation_t pLocation"},
    {"SteamParties002::GetNumActiveBeacons", 7u, 0u, 0, m737, NULL},
    {"SteamParties002::GetNumAvailableBeaconLocations", 7u, 4u, 0, m738, NULL},
    {"SteamParties002::JoinParty", 7u, 3u, 0, m739, NULL},
    {"SteamParties002::OnReservationCompleted", 7u, 7u, 0, m740, NULL},
    {"SteamUser023::AdvertiseGame", 1u, 20u, 0, m741, NULL},
    {"SteamUser023::BIsBehindNAT", 1u, 19u, 0, m742, NULL},
    {"SteamUser023::BIsPhoneIdentifying", 1u, 28u, 0, m743, NULL},
    {"SteamUser023::BIsPhoneRequiringVerification", 1u, 29u, 0, m744, NULL},
    {"SteamUser023::BIsPhoneVerified", 1u, 26u, 0, m745, NULL},
    {"SteamUser023::BIsTwoFactorEnabled", 1u, 27u, 0, m746, NULL},
    {"SteamUser023::BLoggedOn", 1u, 1u, 0, m747, NULL},
    {"SteamUser023::BSetDurationControlOnlineState", 1u, 32u, 0, m748, NULL},
    {"SteamUser023::BeginAuthSession", 1u, 15u, 0, m749, NULL},
    {"SteamUser023::CancelAuthTicket", 1u, 17u, 0, m750, NULL},
    {"SteamUser023::DecompressVoice", 1u, 11u, 0, m751, NULL},
    {"SteamUser023::EndAuthSession", 1u, 16u, 0, m752, NULL},
    {"SteamUser023::GetAuthSessionTicket", 1u, 13u, 0, NULL, "param\u00e8tre ref SteamNetworkingIdentity pSteamNetworkingIdentity"},
    {"SteamUser023::GetAuthTicketForWebApi", 1u, 14u, 0, m754, NULL},
    {"SteamUser023::GetAvailableVoice", 1u, 9u, 0, NULL, "tampon IntPtr pcbUncompressed_Deprecated sans taille"},
    {"SteamUser023::GetDurationControl", 1u, 31u, 0, m756, NULL},
    {"SteamUser023::GetEncryptedAppTicket", 1u, 22u, 0, m757, NULL},
    {"SteamUser023::GetGameBadgeLevel", 1u, 23u, 0, m758, NULL},
    {"SteamUser023::GetHSteamUser", 1u, 0u, 0, m759, NULL},
    {"SteamUser023::GetMarketEligibility", 1u, 30u, 0, m760, NULL},
    {"SteamUser023::GetPlayerSteamLevel", 1u, 24u, 0, m761, NULL},
    {"SteamUser023::GetSteamID", 1u, 2u, 1, m762, NULL},
    {"SteamUser023::GetUserDataFolder", 1u, 6u, 0, m763, NULL},
    {"SteamUser023::GetVoiceOptimalSampleRate", 1u, 12u, 0, m764, NULL},
    {"SteamUser023::InitiateGameConnection_DEPRECATED", 1u, 3u, 0, m765, NULL},
    {"SteamUser023::RequestEncryptedAppTicket", 1u, 21u, 0, m766, NULL},
    {"SteamUser023::RequestStoreAuthURL", 1u, 25u, 0, m767, NULL},
    {"SteamUser023::StartVoiceRecording", 1u, 7u, 0, m768, NULL},
    {"SteamUser023::StopVoiceRecording", 1u, 8u, 0, m769, NULL},
    {"SteamUser023::TerminateGameConnection_DEPRECATED", 1u, 4u, 0, m770, NULL},
    {"SteamUser023::UserHasLicenseForApp", 1u, 18u, 0, m771, NULL},
    {"SteamUtils010::BOverlayNeedsPresent", 3u, 18u, 0, m772, NULL},
    {"SteamUtils010::CheckFileSignature", 3u, 19u, 0, m773, NULL},
    {"SteamUtils010::DismissFloatingGamepadTextInput", 3u, 37u, 0, m774, NULL},
    {"SteamUtils010::DismissGamepadTextInput", 3u, 38u, 0, m775, NULL},
    {"SteamUtils010::FilterText", 3u, 32u, 0, m776, NULL},
    {"SteamUtils010::GetAPICallFailureReason", 3u, 12u, 0, m777, NULL},
    {"SteamUtils010::GetAPICallResult", 3u, 13u, 0, m778, NULL},
    {"SteamUtils010::GetAppID", 3u, 9u, 0, m779, NULL},
    {"SteamUtils010::GetConnectedUniverse", 3u, 2u, 0, m780, NULL},
    {"SteamUtils010::GetCurrentBatteryPower", 3u, 8u, 0, m781, NULL},
    {"SteamUtils010::GetEnteredGamepadTextInput", 3u, 22u, 0, m782, NULL},
    {"SteamUtils010::GetEnteredGamepadTextLength", 3u, 21u, 0, m783, NULL},
    {"SteamUtils010::GetIPCCallCount", 3u, 15u, 0, m784, NULL},
    {"SteamUtils010::GetIPCountry", 3u, 4u, 0, m785, NULL},
    {"SteamUtils010::GetIPv6ConnectivityState", 3u, 33u, 0, m786, NULL},
    {"SteamUtils010::GetImageRGBA", 3u, 6u, 0, m787, NULL},
    {"SteamUtils010::GetImageSize", 3u, 5u, 0, m788, NULL},
    {"SteamUtils010::GetSecondsSinceAppActive", 3u, 0u, 0, m789, NULL},
    {"SteamUtils010::GetSecondsSinceComputerActive", 3u, 1u, 0, m790, NULL},
    {"SteamUtils010::GetServerRealTime", 3u, 3u, 0, m791, NULL},
    {"SteamUtils010::GetSteamUILanguage", 3u, 23u, 0, m792, NULL},
    {"SteamUtils010::InitFilterText", 3u, 31u, 0, m793, NULL},
    {"SteamUtils010::IsAPICallCompleted", 3u, 11u, 0, m794, NULL},
    {"SteamUtils010::IsOverlayEnabled", 3u, 17u, 0, m795, NULL},
    {"SteamUtils010::IsSteamChinaLauncher", 3u, 30u, 0, m796, NULL},
    {"SteamUtils010::IsSteamInBigPictureMode", 3u, 26u, 0, m797, NULL},
    {"SteamUtils010::IsSteamRunningInVR", 3u, 24u, 0, m798, NULL},
    {"SteamUtils010::IsSteamRunningOnSteamDeck", 3u, 34u, 0, m799, NULL},
    {"SteamUtils010::IsVRHeadsetStreamingEnabled", 3u, 28u, 0, m800, NULL},
    {"SteamUtils010::SetGameLauncherMode", 3u, 36u, 0, m801, NULL},
    {"SteamUtils010::SetOverlayNotificationInset", 3u, 25u, 0, m802, NULL},
    {"SteamUtils010::SetOverlayNotificationPosition", 3u, 10u, 0, m803, NULL},
    {"SteamUtils010::SetVRHeadsetStreamingEnabled", 3u, 29u, 0, m804, NULL},
    {"SteamUtils010::SetWarningMessageHook", 3u, 16u, 0, steam_manual_utils_warning_hook, NULL},
    {"SteamUtils010::ShowFloatingGamepadTextInput", 3u, 35u, 0, m806, NULL},
    {"SteamUtils010::ShowGamepadTextInput", 3u, 20u, 0, m807, NULL},
    {"SteamUtils010::StartVRDashboard", 3u, 27u, 0, m808, NULL},
};
const size_t steam_method_count = 809;
