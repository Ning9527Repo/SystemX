//
//  SBWhitelistCell.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SBWhitelistCell : PSTableCell
{
    UISwitch * _whitelistSwitch; // offset 0x8, size 8
    NSString * _appBundleID; // offset 0x10, size 8
    NSString * _iconLoadToken; // offset 0x18, size 8
}
@property (strong, nonatomic) UISwitch * whitelistSwitch;
@property (copy, nonatomic) NSString * appBundleID;
@property (copy, nonatomic) NSString * iconLoadToken;
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier;
- (void)switchToggled:(id)switchToggled;
- (id)whitelistSwitch;
- (void)setWhitelistSwitch:(id)setWhitelistSwitch;
- (id)appBundleID;
- (void)setAppBundleID:(id)setAppBundleID;
- (id)iconLoadToken;
- (void)setIconLoadToken:(id)setIconLoadToken;
- (void).cxx_destruct;
@end
