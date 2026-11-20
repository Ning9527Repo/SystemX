//
//  SystemBoxClockSliderCell.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SystemBoxClockSliderCell : PSTableCell
{
    UISlider * _slider; // offset 0x8, size 8
    UILabel * _valueLabel; // offset 0x10, size 8
}
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier;
- (void)setSpecifier:(id)setSpecifier;
- (void)syncWithSpecifier:(id)syncWithSpecifier;
- (void)sliderChanged:(id)sliderChanged;
- (void)updateValueLabel;
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier;
- (void).cxx_destruct;
@end
