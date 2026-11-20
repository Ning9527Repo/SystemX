//
//  LGLiveBackdropView.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LGLiveBackdropView : UIView
{
    NSString * _lgGroupName; // offset 0x8, size 8
    CAGradientLayer * _specularLayer; // offset 0x10, size 8
    CAShapeLayer * _specularMask; // offset 0x18, size 8
    CAShapeLayer * _edge; // offset 0x20, size 8
    UIView * _nativeBlurView; // offset 0x28, size 8
    double _nativeBlurRadius; // offset 0x30, size 8
    BOOL _backdropConfigured; // offset 0x38, size 1
    BOOL _filterAttached; // offset 0x39, size 1
    unsigned int _lgId; // offset 0x3c, size 4
    double _appliedScale; // offset 0x40, size 8
    double _appliedBackdropZoom; // offset 0x48, size 8
    BOOL _parameterRefreshVariant; // offset 0x50, size 1
    long long _lastRadiusStep; // offset 0x58, size 8
    double _appliedSpecularOpacity; // offset 0x60, size 8
    NSString * _lgFilterType; // offset 0x68, size 8
    double _lgShapeCornerRadius; // offset 0x70, size 8
    double _lgBackdropZoom; // offset 0x78, size 8
    CGRect _lgShapeRect; // offset 0x80, size 32
}
@property (copy, nonatomic) NSString * lgFilterType;
@property (copy, nonatomic) NSNumber * lgSpecularEnabledOverride;
@property (nonatomic) CGRect lgShapeRect;
@property (nonatomic) double lgShapeCornerRadius;
@property (nonatomic) double lgBackdropZoom;
- (id)lgEffectiveFilterType;
- (id)initWithFrame:(id)initWithFrame;
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName;
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName filterType:(id)filterType;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)traitCollectionDidChange;
- (id)lgSpecularEnabledOverride;
- (void)setLgSpecularEnabledOverride:(id)setLgSpecularEnabledOverride;
- (void)layoutSubviews;
- (void)updateNativeBlurOverlayWithRadius:(double)updateNativeBlurOverlayWithRadius;
- (void)setLgShapeRect:(id)setLgShapeRect;
- (void)setLgShapeCornerRadius:(double)setLgShapeCornerRadius;
- (void)updateSpecular;
- (void)applySpecularAngle:(double)applySpecularAngle;
- (void)applyFilters;
- (void)reapplyFilterForParameterReload;
- (void)lgInvalidateFilterContents;
- (BOOL)lgFilterAttached;
- (id)lgFilterType;
- (void)setLgFilterType:(id)setLgFilterType;
- (id)lgShapeRect;
- (double)lgShapeCornerRadius;
- (double)lgBackdropZoom;
- (void)setLgBackdropZoom:(double)setLgBackdropZoom;
- (void).cxx_destruct;
@end
