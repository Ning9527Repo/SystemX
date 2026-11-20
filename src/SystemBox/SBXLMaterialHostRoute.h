//
//  SBXLMaterialHostRoute.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBXLMaterialHostRoute : NSObject
{
    id /* block */ _matcher; // offset 0x8, size 8
    id /* block */ _cornerRadiusProvider; // offset 0x10, size 8
    NSString * _groupName; // offset 0x18, size 8
    id /* block */ _postInstall; // offset 0x20, size 8
    UIEdgeInsets _outset; // offset 0x28, size 32
}
@property (copy, nonatomic) id /* block */ matcher;
@property (nonatomic) UIEdgeInsets outset;
@property (copy, nonatomic) id /* block */ cornerRadiusProvider;
@property (copy, nonatomic) NSString * groupName;
@property (copy, nonatomic) id /* block */ postInstall;
- (id)matcher;
- (void)setMatcher:(id)setMatcher;
- (id)outset;
- (void)setOutset:(id)setOutset;
- (id)cornerRadiusProvider;
- (void)setCornerRadiusProvider:(id)setCornerRadiusProvider;
- (id)groupName;
- (void)setGroupName:(id)setGroupName;
- (id)postInstall;
- (void)setPostInstall:(id)setPostInstall;
- (void).cxx_destruct;
@end
