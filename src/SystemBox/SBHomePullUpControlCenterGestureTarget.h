//
//  SBHomePullUpControlCenterGestureTarget.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBHomePullUpControlCenterGestureTarget : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _didPresent; // offset 0x8, size 1
}
@property (nonatomic) BOOL didPresent;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)shouldRecognizeSimultaneouslyWithGestureRecognizer;
- (void)handleHomePullUpCC:(id)handleHomePullUpCC;
- (BOOL)didPresent;
- (void)setDidPresent:(BOOL)setDidPresent;
@end
