//
//  SBGracefulCloseFolderTapTarget.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBGracefulCloseFolderTapTarget : NSObject <UIGestureRecognizerDelegate>
{
    SBFolderContainerView * _containerView; // offset 0x8, size 8
}
@property (weak, nonatomic) SBFolderContainerView * containerView;
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch;
- (void)handleGracefulCloseFolderTap:(id)handleGracefulCloseFolderTap;
- (id)containerView;
- (void)setContainerView:(id)setContainerView;
- (void).cxx_destruct;
@end
