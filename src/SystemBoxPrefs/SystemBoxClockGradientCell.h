//
//  SystemBoxClockGradientCell.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SystemBoxClockGradientCell : PSTableCell
{
    UIStackView * _colors; // offset 0x8, size 8
}
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier;
- (void)colorTapped:(id)colorTapped;
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier;
- (void).cxx_destruct;
@end
