//
//  LGClockMotionTracker.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LGClockMotionTracker : NSObject
{
    CADisplayLink * _displayLink; // offset 0x8, size 8
    double _deadline; // offset 0x10, size 8
}
@property (strong, nonatomic) CADisplayLink * displayLink;
@property (nonatomic) double deadline;
- (id)init;
- (void)trackMotion;
- (void)tick:(id)tick;
- (id)displayLink;
- (void)setDisplayLink:(id)setDisplayLink;
- (double)deadline;
- (void)setDeadline:(double)setDeadline;
- (void).cxx_destruct;
@end
