//
//  LGClockFontStore.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LGClockFontStore : NSObject
{
    CGFont * _graphicsFont; // offset 0x8, size 8
    NSString * _postScriptName; // offset 0x10, size 8
    NSDictionary * _axisIDs; // offset 0x18, size 8
    NSDictionary * _axisRanges; // offset 0x20, size 8
    NSCache * _cache; // offset 0x28, size 8
}
@property (nonatomic) CGFont * graphicsFont;
@property (copy, nonatomic) NSString * postScriptName;
@property (copy, nonatomic) NSDictionary * axisIDs;
@property (copy, nonatomic) NSDictionary * axisRanges;
@property (strong, nonatomic) NSCache * cache;
- (id)init;
- (void)dealloc;
- (void)loadFont;
- (double)clampedValueForAxis:(id)clampedValueForAxis;
- (id)fontAtPointSize:(double)fontAtPointSize;
- (double)minimumHeightAxis;
- (id)fontAtPointSize:(double)fontAtPointSize heightAxis:(double)heightAxis;
- (CGFont *)graphicsFont;
- (void)setGraphicsFont:(CGFont *)setGraphicsFont;
- (id)postScriptName;
- (void)setPostScriptName:(id)setPostScriptName;
- (id)axisIDs;
- (void)setAxisIDs:(id)setAxisIDs;
- (id)axisRanges;
- (void)setAxisRanges:(id)setAxisRanges;
- (id)cache;
- (void)setCache:(id)setCache;
- (void).cxx_destruct;
@end
