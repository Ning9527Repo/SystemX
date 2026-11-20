//
//  SystemBoxWhitelistController.h
//  Reconstructed from SystemBox arm64
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SystemBoxWhitelistController : PSListController <UISearchResultsUpdating>
{
    NSMutableSet * _selectedBundleIDs; // offset 0x10, size 8
    NSSet * _pinnedBundleIDs; // offset 0x18, size 8
    NSArray * _allApps; // offset 0x20, size 8
    NSArray * _filteredApps; // offset 0x28, size 8
    UISearchController * _searchController; // offset 0x30, size 8
}
@property (strong, nonatomic) NSMutableSet * selectedBundleIDs;
@property (strong, nonatomic) NSSet * pinnedBundleIDs;
@property (strong, nonatomic) NSArray * allApps;
@property (strong, nonatomic) NSArray * filteredApps;
@property (strong, nonatomic) UISearchController * searchController;
- (id)allApps;
- (id)whitelistPreferenceKey;
- (id)filteredApps;
- (id)appsWithSelectedFirst:(id)appsWithSelectedFirst;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)viewWillAppear;
- (void)updateSearchResultsForSearchController:(id)updateSearchResultsForSearchController;
- (id)specifiers;
- (id)whitelistValue:(id)whitelistValue;
- (void)setWhitelistValue:(id)setWhitelistValue specifier:(id)specifier;
- (id)selectedBundleIDs;
- (void)setSelectedBundleIDs:(id)setSelectedBundleIDs;
- (id)pinnedBundleIDs;
- (void)setPinnedBundleIDs:(id)setPinnedBundleIDs;
- (void)setAllApps:(id)setAllApps;
- (void)setFilteredApps:(id)setFilteredApps;
- (id)searchController;
- (void)setSearchController:(id)setSearchController;
- (void).cxx_destruct;
@end
