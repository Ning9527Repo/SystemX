//
//  SBHomeHalfPullGestureTarget.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBHomeHalfPullGestureTarget : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _rightHalf; // offset 0x8, size 1
    BOOL _downward; // offset 0x9, size 1
    BOOL _didPresent; // offset 0xa, size 1
    unsigned long long _action; // offset 0x10, size 8
}
@property (nonatomic) BOOL rightHalf;
@property (nonatomic) BOOL downward;
@property (nonatomic) BOOL didPresent;
@property (nonatomic) unsigned long long action;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch;
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)shouldRecognizeSimultaneouslyWithGestureRecognizer;
- (void)handleHomeHalfPull:(id)handleHomeHalfPull;
- (BOOL)rightHalf;
- (void)setRightHalf:(BOOL)setRightHalf;
- (BOOL)downward;
- (void)setDownward:(BOOL)setDownward;
- (BOOL)didPresent;
- (void)setDidPresent:(BOOL)setDidPresent;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)setAction;
@end
