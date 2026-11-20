//
//  LGSettingsLowBlurView.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LGSettingsLowBlurView : UIView
{
    double _lgBlurRadius; // offset 0x8, size 8
}
@property (nonatomic) double lgBlurRadius;
- (id)initWithFrame:(id)initWithFrame;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setLgBlurRadius:(double)setLgBlurRadius;
- (void)lg_configure;
- (double)lgBlurRadius;
@end
