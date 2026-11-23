// SystemX companion: grid-only corner radius; fail closed and never touches vendor hooks.
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#import <objc/runtime.h>
#import <dlfcn.h>
#include <stdatomic.h>
#include <string.h>
#include "RadiusPolicy.h"

typedef void (*SXHookMessage)(Class, SEL, IMP, IMP *);
static _Atomic(bool) SXEnabled = false;
static _Atomic(double) SXRequested = 0.0;
static Class SXGridLayoutClass = Nil;
static double (*SXOriginalGridRadius)(id, SEL) = NULL;
static void SXReloadPreferences(void);
static void SXInstallHooks(void);

static void SXReloadPreferences(void) {
    NSDictionary *prefs = nil;
    NSArray *paths = @[
        @"/var/mobile/Library/Preferences/com.wkk.systembox.plist",
        @"/var/jb/var/mobile/Library/Preferences/com.wkk.systembox.plist"
    ];
    for (NSString *path in paths) {
        NSDictionary *candidate = [NSDictionary dictionaryWithContentsOfFile:path];
        if (candidate) { prefs = candidate; break; }
    }
    id enabled = prefs[@"iPadCardSwitcherEnabled"];
    id radius = prefs[@"iPadCardSwitcherCornerRadius"];
    atomic_store(&SXEnabled, [enabled respondsToSelector:@selector(boolValue)] && [enabled boolValue]);
    atomic_store(&SXRequested, [radius respondsToSelector:@selector(doubleValue)] ? [radius doubleValue] : 0.0);
}

static void SXPreferencesChanged(CFNotificationCenterRef center, void *observer,
                                 CFStringRef name, const void *object, CFDictionaryRef userInfo) {
    (void)center; (void)observer; (void)name; (void)object; (void)userInfo;
    dispatch_async(dispatch_get_main_queue(), ^{ SXReloadPreferences(); });
}

static double SXGridRadius(id self, SEL cmd) {
    if (!SXOriginalGridRadius) return 0.0;
    double original = SXOriginalGridRadius(self, cmd);
    if (object_getClass(self) != SXGridLayoutClass) return original;
    return SXRadiusValue(atomic_load(&SXEnabled), atomic_load(&SXRequested), original);
}

static void SXInstallHooks(void) {
    Class cls = objc_getClass("SBGridLayoutSwitcherModifier");
    SEL sel = sel_registerName("_cornerRadius");
    Method method = cls ? class_getInstanceMethod(cls, sel) : NULL;
    if (!method || method_getNumberOfArguments(method) != 2) return;
    char type[32] = {0};
    method_getReturnType(method, type, sizeof(type));
    if (strcmp(type, "d") != 0) return;
    method_getArgumentType(method, 0, type, sizeof(type));
    if (strcmp(type, "@") != 0) return;
    method_getArgumentType(method, 1, type, sizeof(type));
    if (strcmp(type, ":") != 0) return;
    SXHookMessage hook = (SXHookMessage)dlsym(RTLD_DEFAULT, "MSHookMessageEx");
    if (!hook) return;
    SXGridLayoutClass = cls;
    hook(cls, sel, (IMP)SXGridRadius, (IMP *)&SXOriginalGridRadius);
    if (!SXOriginalGridRadius) SXGridLayoutClass = Nil;
}

__attribute__((constructor)) static void SXInitialize(void) {
    @autoreleasepool {
        NSString *bundleID = [NSBundle mainBundle].bundleIdentifier;
        if (![bundleID isEqualToString:@"com.apple.springboard"]) return;
        SXReloadPreferences();
        CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL,
            SXPreferencesChanged, CFSTR("com.wkk.systembox.prefschanged"), NULL,
            CFNotificationSuspensionBehaviorDeliverImmediately);
        // Delay until SpringBoard and Substrate have completed normal injection.
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{ SXInstallHooks(); });
    }
}
