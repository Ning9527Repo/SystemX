//
//  SystemBoxClockListController.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SystemBoxClockListController : SystemBoxRootListController <UIColorPickerViewControllerDelegate>
{
    long long _pickerGradientIndex; // offset 0x10, size 8
}
- (id)sb_specifierPlistName;
- (void)setPreferenceValue:(id)setPreferenceValue specifier:(id)specifier;
- (void)presentClockColorPicker:(id)presentClockColorPicker title:(id)title alpha:(BOOL)alpha;
- (void)chooseGradientColor:(id)chooseGradientColor;
- (void)chooseCustomClockColor;
- (void)savePickerColor:(id)savePickerColor;
- (void)colorPickerViewControllerDidSelectColor:(id)colorPickerViewControllerDidSelectColor;
- (void)colorPickerViewControllerDidFinish:(id)colorPickerViewControllerDidFinish;
@end
