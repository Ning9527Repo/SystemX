# SystemX 1.5-8  —  逆向重建工程
#
# 五个组件、一个设置面板，全部由原始包反编译重建。
# 原始包结构：5 个 Mach-O（每个都含 arm64 + arm64e 两个切片）+ 1 个 PreferenceBundle。
#
#   SystemBox                             SpringBoard / Preferences / Photos / Phone / Messages
#   SystemBoxClockGlass                   UIKit 进程（时钟玻璃渲染）
#   SystemBoxClockGlassBackboardd         backboardd（QuartzCore 渲染管线钩子）
#   SystemBoxLiquidGlassDockBackboardd    backboardd（Dock 玻璃材质）
#   SystemBoxPrefs                        设置面板 bundle
#
# 用法：  THEOS=/opt/theos make package
# ---------------------------------------------------------------------------

ARCHS = arm64 arm64e
TARGET = iphone:clang:16.5:14.0
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SystemBox SystemBoxClockGlass SystemBoxClockGlassBackboardd SystemBoxLiquidGlassDockBackboardd

SystemBox_FILES = $(wildcard src/SystemBox/*.m) src/SystemBox/Hooks.xmi
SystemBox_CFLAGS = -fobjc-arc -Isrc/Common -Wno-everything
SystemBox_FRAMEWORKS = UIKit Foundation QuartzCore CoreGraphics CoreImage CoreMotion Photos PhotosUI AudioToolbox
SystemBox_LIBRARIES = substrate

SystemBoxClockGlass_FILES = $(wildcard src/SystemBoxClockGlass/*.m) src/SystemBoxClockGlass/Hooks.xmi
SystemBoxClockGlass_CFLAGS = -fobjc-arc -Isrc/Common -Wno-everything
SystemBoxClockGlass_FRAMEWORKS = UIKit Foundation QuartzCore CoreText CoreGraphics CoreMotion
SystemBoxClockGlass_LIBRARIES = substrate

SystemBoxClockGlassBackboardd_FILES = src/SystemBoxClockGlassBackboardd/SystemBoxClockGlassBackboardd.c
SystemBoxClockGlassBackboardd_CFLAGS = -Isrc/Common -Wno-everything
SystemBoxClockGlassBackboardd_FRAMEWORKS = Foundation CoreFoundation Metal QuartzCore
SystemBoxClockGlassBackboardd_LIBRARIES = substrate

SystemBoxLiquidGlassDockBackboardd_FILES = src/SystemBoxLiquidGlassDockBackboardd/SystemBoxLiquidGlassDockBackboardd.c
SystemBoxLiquidGlassDockBackboardd_CFLAGS = -Isrc/Common -Wno-everything
SystemBoxLiquidGlassDockBackboardd_FRAMEWORKS = Foundation CoreFoundation Metal QuartzCore
SystemBoxLiquidGlassDockBackboardd_LIBRARIES = substrate

include $(THEOS_MAKE_PATH)/tweak.mk

BUNDLE_NAME = SystemBoxPrefs
SystemBoxPrefs_FILES = $(wildcard src/SystemBoxPrefs/*.m)
SystemBoxPrefs_CFLAGS = -fobjc-arc -Isrc/Common -Wno-everything
SystemBoxPrefs_FRAMEWORKS = UIKit Foundation Preferences
SystemBoxPrefs_INSTALL_PATH = /Library/PreferenceBundles
include $(THEOS_MAKE_PATH)/bundle.mk
