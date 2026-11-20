//
//  SBXLiveBackdropView.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBXLiveBackdropView : UIView
{
    NSNumber * _lgSpecularEnabledOverride; // offset 0x8, size 8
    NSString * _lgGroupName; // offset 0x10, size 8
    CAGradientLayer * _specular; // offset 0x18, size 8
    CAGradientLayer * _specularBoost; // offset 0x20, size 8
    CALayer * _specularMask; // offset 0x28, size 8
    CALayer * _specularBoostMask; // offset 0x30, size 8
    CALayer * _nativeBlurLayer; // offset 0x38, size 8
    double _nativeBlurRadius; // offset 0x40, size 8
    double _desiredNativeBlurRadius; // offset 0x48, size 8
    double _appliedScale; // offset 0x50, size 8
    double _appliedSpecularAngle; // offset 0x58, size 8
    CGSize _scaleInputSize; // offset 0x60, size 16
    BOOL _backdropConfigured; // offset 0x70, size 1
    BOOL _filterAttached; // offset 0x71, size 1
    BOOL _waitingForFilterRegistration; // offset 0x72, size 1
    BOOL _hasScaleInputSize; // offset 0x73, size 1
    BOOL _usesDynamicRadius; // offset 0x74, size 1
    BOOL _defaultSpecularEnabled; // offset 0x75, size 1
    unsigned int _lgId; // offset 0x78, size 4
    NSString * _cachedEffectiveFilterType; // offset 0x80, size 8
    NSString * _appliedFilterType; // offset 0x88, size 8
    long long _cachedRadiusStep; // offset 0x90, size 8
    long long _cachedInterfaceStyle; // offset 0x98, size 8
    BOOL _hasEffectiveFilterCache; // offset 0xa0, size 1
}
@property (copy, nonatomic) NSNumber * lgSpecularEnabledOverride;
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName;
- (void)dealloc;
- (id)lgSpecularEnabledOverride;
- (void)setLgSpecularEnabledOverride:(id)setLgSpecularEnabledOverride;
- (void)invalidateEffectiveFilterType;
- (id)effectiveFilterType;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)setHidden;
- (void)setAlpha:(double)setAlpha;
- (void)traitCollectionDidChange:(id)traitCollectionDidChange;
- (void)layoutSubviews;
- (BOOL)lgMotionHighlightsVisible;
- (void)updateNativeBlurOverlayWithRadius:(double)updateNativeBlurOverlayWithRadius filterClass:(Class)filterClass;
- (void)updateSpecular;
- (void)applySpecularAngle:(double)applySpecularAngle;
- (void)applyFilters;
- (void)reapplyFilterForParameterReload;
- (void).cxx_destruct;
@end
