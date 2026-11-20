//
//  SBKillBackgroundGestureTarget.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBKillBackgroundGestureTarget : NSObject <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch;
- (void)handleKillBackground:(id)handleKillBackground;
@end
