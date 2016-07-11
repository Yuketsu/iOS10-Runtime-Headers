/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPasswordPicker : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating> {
    NSArray * _matchingPasswords;
    _UINavigationControllerPalette * _palette;
    WBUPasswordPickerViewController * _pickerViewController;
    NSArray * _savedPasswords;
    UISearchController * _searchController;
    NSString * _searchPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSearchPattern:(id)arg1;
- (id)initWithPasswordPickerViewController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end