//
//  SBLongPressLockGestureTarget.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBLongPressLockGestureTarget : NSObject <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch;
- (void)handleLongPressToLock:(id)handleLongPressToLock;
@end
