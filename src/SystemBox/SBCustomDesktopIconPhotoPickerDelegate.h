//
//  SBCustomDesktopIconPhotoPickerDelegate.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBCustomDesktopIconPhotoPickerDelegate : NSObject <PHPickerViewControllerDelegate>
{
    NSString * _bundleIdentifier; // offset 0x8, size 8
}
@property (copy, nonatomic) NSString * bundleIdentifier;
- (void)picker:(id)picker didFinishPicking:(id)didFinishPicking;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:(id)setBundleIdentifier;
- (void).cxx_destruct;
@end
