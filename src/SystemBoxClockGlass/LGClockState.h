//
//  LGClockState.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface LGClockState : NSObject
{
    BOOL _originalLabelHidden; // offset 0x8, size 1
    BOOL _originalVisibleSourceHidden; // offset 0x9, size 1
    BOOL _hasRenderedGlyph; // offset 0xa, size 1
    BOOL _applying; // offset 0xb, size 1
    BOOL _scheduled; // offset 0xc, size 1
    BOOL _pullBlurActive; // offset 0xd, size 1
    BOOL _pullBlurKnown; // offset 0xe, size 1
    float _originalVisibleSourceLayerOpacity; // offset 0x10, size 4
    UIView * _host; // offset 0x18, size 8
    UILabel * _sourceLabel; // offset 0x20, size 8
    UIView * _visibleSourceView; // offset 0x28, size 8
    UIFont * _originalFont; // offset 0x30, size 8
    double _originalLabelAlpha; // offset 0x38, size 8
    double _originalVisibleSourceAlpha; // offset 0x40, size 8
    LGLiveBackdropView * _glassView; // offset 0x48, size 8
    UIView * _pullBlurView; // offset 0x50, size 8
    UIView * _glyphMaskView; // offset 0x58, size 8
    CAShapeLayer * _glyphMaskLayer; // offset 0x60, size 8
    UIView * _colorOverlayView; // offset 0x68, size 8
    CAGradientLayer * _colorGradientLayer; // offset 0x70, size 8
    UIView * _colorMaskView; // offset 0x78, size 8
    CAShapeLayer * _colorMaskLayer; // offset 0x80, size 8
    UIView * _renderContainer; // offset 0x88, size 8
    double _renderedGlyphBottom; // offset 0x90, size 8
    double _complicationLayoutShift; // offset 0x98, size 8
    double _complicationLastTop; // offset 0xa0, size 8
    UIView * _complicationRow; // offset 0xa8, size 8
    unsigned long long _layoutCalls; // offset 0xb0, size 8
    unsigned long long _appliedChanges; // offset 0xb8, size 8
    unsigned long long _skippedChanges; // offset 0xc0, size 8
    double _sampleStart; // offset 0xc8, size 8
    UIView * _lastNearestObstacle; // offset 0xd0, size 8
    double _lastNearestTop; // offset 0xd8, size 8
    NSString * _lastRetractionPhase; // offset 0xe0, size 8
    double _totalApplyTime; // offset 0xe8, size 8
    double _peakApplyTime; // offset 0xf0, size 8
    NSString * _lastSignature; // offset 0xf8, size 8
    NSString * _lastFontDiagnostic; // offset 0x100, size 8
    CGSize _renderCanvasSize; // offset 0x108, size 16
    CGRect _originalLabelFrame; // offset 0x118, size 32
}
@property (weak, nonatomic) UIView * host;
@property (weak, nonatomic) UILabel * sourceLabel;
@property (weak, nonatomic) UIView * visibleSourceView;
@property (strong, nonatomic) UIFont * originalFont;
@property (nonatomic) double originalLabelAlpha;
@property (nonatomic) BOOL originalLabelHidden;
@property (nonatomic) double originalVisibleSourceAlpha;
@property (nonatomic) float originalVisibleSourceLayerOpacity;
@property (nonatomic) BOOL originalVisibleSourceHidden;
@property (strong, nonatomic) LGLiveBackdropView * glassView;
@property (strong, nonatomic) UIView * pullBlurView;
@property (strong, nonatomic) UIView * glyphMaskView;
@property (strong, nonatomic) CAShapeLayer * glyphMaskLayer;
@property (strong, nonatomic) UIView * colorOverlayView;
@property (strong, nonatomic) CAGradientLayer * colorGradientLayer;
@property (strong, nonatomic) UIView * colorMaskView;
@property (strong, nonatomic) CAShapeLayer * colorMaskLayer;
@property (weak, nonatomic) UIView * renderContainer;
@property (nonatomic) CGRect originalLabelFrame;
@property (nonatomic) CGSize renderCanvasSize;
@property (nonatomic) double renderedGlyphBottom;
@property (nonatomic) BOOL hasRenderedGlyph;
@property (nonatomic) double complicationLayoutShift;
@property (nonatomic) double complicationLastTop;
@property (weak, nonatomic) UIView * complicationRow;
@property (nonatomic) BOOL applying;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) unsigned long long layoutCalls;
@property (nonatomic) unsigned long long appliedChanges;
@property (nonatomic) unsigned long long skippedChanges;
@property (nonatomic) double sampleStart;
@property (weak, nonatomic) UIView * lastNearestObstacle;
@property (nonatomic) double lastNearestTop;
@property (copy, nonatomic) NSString * lastRetractionPhase;
@property (nonatomic) double totalApplyTime;
@property (nonatomic) double peakApplyTime;
@property (copy, nonatomic) NSString * lastSignature;
@property (copy, nonatomic) NSString * lastFontDiagnostic;
@property (nonatomic) BOOL pullBlurActive;
@property (nonatomic) BOOL pullBlurKnown;
- (id)init;
- (void)scheduleApply:(id)scheduleApply;
- (void)updatePullBlur;
- (BOOL)nativeTimeNeedsHiding;
- (void)reassertNativeTimeHidden;
- (void)applyReason:(id)applyReason;
- (void)emitSummaryIfNeeded;
- (void)restore;
- (id)host;
- (void)setHost:(id)setHost;
- (id)sourceLabel;
- (void)setSourceLabel:(id)setSourceLabel;
- (id)visibleSourceView;
- (void)setVisibleSourceView:(id)setVisibleSourceView;
- (id)originalFont;
- (void)setOriginalFont:(id)setOriginalFont;
- (double)originalLabelAlpha;
- (void)setOriginalLabelAlpha:(double)setOriginalLabelAlpha;
- (BOOL)originalLabelHidden;
- (void)setOriginalLabelHidden:(BOOL)setOriginalLabelHidden;
- (double)originalVisibleSourceAlpha;
- (void)setOriginalVisibleSourceAlpha:(double)setOriginalVisibleSourceAlpha;
- (float)originalVisibleSourceLayerOpacity;
- (void)setOriginalVisibleSourceLayerOpacity:(float)setOriginalVisibleSourceLayerOpacity;
- (BOOL)originalVisibleSourceHidden;
- (void)setOriginalVisibleSourceHidden:(BOOL)setOriginalVisibleSourceHidden;
- (id)glassView;
- (void)setGlassView:(id)setGlassView;
- (id)pullBlurView;
- (void)setPullBlurView:(id)setPullBlurView;
- (id)glyphMaskView;
- (void)setGlyphMaskView:(id)setGlyphMaskView;
- (id)glyphMaskLayer;
- (void)setGlyphMaskLayer:(id)setGlyphMaskLayer;
- (id)colorOverlayView;
- (void)setColorOverlayView:(id)setColorOverlayView;
- (id)colorGradientLayer;
- (void)setColorGradientLayer:(id)setColorGradientLayer;
- (id)colorMaskView;
- (void)setColorMaskView:(id)setColorMaskView;
- (id)colorMaskLayer;
- (void)setColorMaskLayer:(id)setColorMaskLayer;
- (id)renderContainer;
- (void)setRenderContainer:(id)setRenderContainer;
- (id)originalLabelFrame;
- (void)setOriginalLabelFrame:(id)setOriginalLabelFrame;
- (id)renderCanvasSize;
- (void)setRenderCanvasSize:(id)setRenderCanvasSize;
- (double)renderedGlyphBottom;
- (void)setRenderedGlyphBottom:(double)setRenderedGlyphBottom;
- (BOOL)hasRenderedGlyph;
- (void)setHasRenderedGlyph:(BOOL)setHasRenderedGlyph;
- (double)complicationLayoutShift;
- (void)setComplicationLayoutShift:(double)setComplicationLayoutShift;
- (double)complicationLastTop;
- (void)setComplicationLastTop:(double)setComplicationLastTop;
- (id)complicationRow;
- (void)setComplicationRow:(id)setComplicationRow;
- (BOOL)applying;
- (void)setApplying:(BOOL)setApplying;
- (BOOL)scheduled;
- (void)setScheduled:(BOOL)setScheduled;
- (unsigned long long)layoutCalls;
- (void)setLayoutCalls:(unsigned long long)setLayoutCalls;
- (unsigned long long)appliedChanges;
- (void)setAppliedChanges:(unsigned long long)setAppliedChanges;
- (unsigned long long)skippedChanges;
- (void)setSkippedChanges:(unsigned long long)setSkippedChanges;
- (double)sampleStart;
- (void)setSampleStart:(double)setSampleStart;
- (id)lastNearestObstacle;
- (void)setLastNearestObstacle:(id)setLastNearestObstacle;
- (double)lastNearestTop;
- (void)setLastNearestTop:(double)setLastNearestTop;
- (id)lastRetractionPhase;
- (void)setLastRetractionPhase:(id)setLastRetractionPhase;
- (double)totalApplyTime;
- (void)setTotalApplyTime:(double)setTotalApplyTime;
- (double)peakApplyTime;
- (void)setPeakApplyTime:(double)setPeakApplyTime;
- (id)lastSignature;
- (void)setLastSignature:(id)setLastSignature;
- (id)lastFontDiagnostic;
- (void)setLastFontDiagnostic:(id)setLastFontDiagnostic;
- (BOOL)pullBlurActive;
- (void)setPullBlurActive:(BOOL)setPullBlurActive;
- (BOOL)pullBlurKnown;
- (void)setPullBlurKnown:(BOOL)setPullBlurKnown;
- (void).cxx_destruct;
@end
