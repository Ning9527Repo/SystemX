// SystemX companion: no vendor code, layout, title, animation or global layer hooks.
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <dlfcn.h>
#include <stdatomic.h>
#include <string.h>
#include "RadiusPolicy.h"

typedef void (*SXHookMessage)(Class, SEL, IMP, IMP *);
typedef NSString *(*SXJBRoot)(NSString *);
static _Atomic(bool) SXEnabled = false;
static _Atomic(double) SXRequested = 0.0;
static SXHookMessage SXHook = NULL;
static void *SXRootHideHandle = NULL;
static void *SXSubstrateHandle = NULL;
static void SXReloadPreferences(void);
static void SXInstallHooks(void);
static NSString *SXLocalLibraryPath(NSString *suffix);

static NSString *SXLocalLibraryPath(NSString *suffix) {
    Dl_info info = {0};
    if (!dladdr((const void *)&SXLocalLibraryPath, &info) || !info.dli_fname) return nil;
    NSString *directory = [[NSString stringWithUTF8String:info.dli_fname] stringByDeletingLastPathComponent];
    return [directory stringByAppendingPathComponent:suffix];
}

static void SXReloadPreferences(void) {
    // Original prefs controller writes jbroot(path), not an arbitrary NSUserDefaults suite.
    SXJBRoot root = (SXJBRoot)dlsym(RTLD_DEFAULT, "_Z6jbrootP8NSString");
    if (!root) {
        if (!SXRootHideHandle) {
            NSString *path = SXLocalLibraryPath(@".jbroot/usr/lib/libroothide.dylib");
            if (path) SXRootHideHandle = dlopen(path.fileSystemRepresentation, RTLD_LAZY | RTLD_LOCAL);
        }
        if (SXRootHideHandle) root = (SXJBRoot)dlsym(SXRootHideHandle, "_Z6jbrootP8NSString");
    }
    NSDictionary *prefs = nil;
    if (root) {
        NSString *path = root(@"/var/mobile/Library/Preferences/com.wkk.systembox.plist");
        if (path) prefs = [NSDictionary dictionaryWithContentsOfFile:path];
    }
    id enabled = prefs[@"iPadCardSwitcherEnabled"];
    id radius = prefs[@"iPadCardSwitcherCornerRadius"];
    bool on = [enabled respondsToSelector:@selector(boolValue)] && [enabled boolValue];
    double value = [radius respondsToSelector:@selector(doubleValue)] ? [radius doubleValue] : 0.0;
    atomic_store(&SXRequested, value);
    atomic_store(&SXEnabled, on);
}

static void SXPreferencesChanged(CFNotificationCenterRef center, void *observer,
                                 CFStringRef name, const void *object, CFDictionaryRef userInfo) {
    (void)center; (void)observer; (void)name; (void)object; (void)userInfo;
    dispatch_async(dispatch_get_main_queue(), ^{ SXReloadPreferences(); });
}

// Verified iOS 17 header: SBGridLayoutSwitcherModifier - (double)_cornerRadius.
// Change the grid endpoint parameter, not a shared card setter. The system remains
// responsible for transition interpolation; no full-screen setter is intercepted.
static Class SXGridLayoutClass = Nil;
static double (*SXOriginalGridRadius)(id, SEL) = NULL;
static double SXGridRadius(id self, SEL cmd) {
    double original = SXOriginalGridRadius(self, cmd);
    // Exact class only: unknown subclasses and non-grid modifiers remain untouched.
    if (object_getClass(self) != SXGridLayoutClass) return original;
    return SXRadiusValue(atomic_load(&SXEnabled), atomic_load(&SXRequested), original);
}

static void SXInstallHooks(void) {
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        Class cls = objc_getClass("SBGridLayoutSwitcherModifier");
        SEL sel = sel_registerName("_cornerRadius");
        Method method = cls ? class_getInstanceMethod(cls, sel) : NULL;
        if (!method || method_getNumberOfArguments(method) != 2) return;
        char type[128] = {0};
        method_getReturnType(method, type, sizeof(type));
        if (strcmp(type, "d") != 0) return;
        method_getArgumentType(method, 0, type, sizeof(type));
        if (strcmp(type, "@") != 0) return;
        method_getArgumentType(method, 1, type, sizeof(type));
        if (strcmp(type, ":") != 0) return;
        SXGridLayoutClass = cls;
        SXHook(cls, sel, (IMP)SXGridRadius, (IMP *)&SXOriginalGridRadius);
    });
}

__attribute__((constructor)) static void SXInitialize(void) {
    @autoreleasepool {
        if (![[NSBundle mainBundle].bundleIdentifier isEqualToString:@"com.apple.springboard"]) return;
        SXReloadPreferences();
        CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL,
            SXPreferencesChanged, CFSTR("com.wkk.systembox.prefschanged"), NULL,
            CFNotificationSuspensionBehaviorDeliverImmediately);
        dispatch_async(dispatch_get_main_queue(), ^{
            SXHook = (SXHookMessage)dlsym(RTLD_DEFAULT, "MSHookMessageEx");
            if (!SXHook) {
                NSString *path = SXLocalLibraryPath(@".jbroot/usr/lib/libsubstrate.dylib");
                if (path) SXSubstrateHandle = dlopen(path.fileSystemRepresentation, RTLD_LAZY | RTLD_LOCAL);
                if (SXSubstrateHandle) SXHook = (SXHookMessage)dlsym(SXSubstrateHandle, "MSHookMessageEx");
            }
            if (SXHook) SXInstallHooks();
        });
    }
}
