//
//  SystemBoxRootListController.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SystemBoxRootListController : PSListController <UIColorPickerViewControllerDelegate>
{
    long long _colorPickerTarget; // offset 0x10, size 8
}
@property (nonatomic) long long colorPickerTarget;
- (id)sb_specifierPlistName;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)viewDidAppear;
- (void)sb_installRootHeader;
- (id)tableView:(id)tableView cellForRowAtIndexPath:(id)cellForRowAtIndexPath;
- (double)tableView:(id)tableView heightForRowAtIndexPath:(id)heightForRowAtIndexPath;
- (id)sb_developerProfileCellForTableView:(id)sb_developerProfileCellForTableView;
- (void)tableView:(id)tableView didSelectRowAtIndexPath:(id)didSelectRowAtIndexPath;
- (void)sb_openDeveloperSileoSource;
- (void)tableView:(id)tableView willDisplayFooterView:(id)willDisplayFooterView forSection:(long long)forSection;
- (id)sb_specifierForPreferenceKey:(id)sb_specifierForPreferenceKey;
- (id)sb_specifierForAction:(id)sb_specifierForAction;
- (void)sb_updateVisibleSwitchForKey:(id)sb_updateVisibleSwitchForKey value:(BOOL)value;
- (void)sb_updateVisibleColorAccessoryForAction:(id)sb_updateVisibleColorAccessoryForAction tag:(long long)tag color:(id)color;
- (id)readPreferenceValue:(id)readPreferenceValue;
- (void)setPreferenceValue:(id)setPreferenceValue specifier:(id)specifier;
- (void)sb_openIconDirectory:(id)sb_openIconDirectory;
- (void)openBatchIconDirectory;
- (void)openIrregularIconDirectory;
- (void)chooseVPNStatusBarColor;
- (void)sb_saveColorFromActivePicker:(id)sb_saveColorFromActivePicker;
- (void)colorPickerViewControllerDidSelectColor:(id)colorPickerViewControllerDidSelectColor;
- (void)colorPickerViewControllerDidFinish:(id)colorPickerViewControllerDidFinish;
- (void)sb_saveVPNStatusBarColor:(id)sb_saveVPNStatusBarColor;
- (void)chooseRunIndicatorColor;
- (void)sb_saveRunIndicatorColor:(id)sb_saveRunIndicatorColor;
- (void)chooseDesktopTextColor;
- (void)sb_saveDesktopTextColor:(id)sb_saveDesktopTextColor;
- (void)respring;
- (long long)colorPickerTarget;
- (void)setColorPickerTarget:(long long)setColorPickerTarget;
@end
