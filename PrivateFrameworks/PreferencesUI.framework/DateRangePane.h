/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface DateRangePane : PSEditingPane <UITableViewDataSource, UITableViewDelegate> {
    UIDatePicker * _datePicker;
    PSTableCell * _fromCell;
    int  _selectedIndex;
    UITableView * _table;
    struct __CFDateFormatter { } * _timeFormatter;
    PSTableCell * _toCell;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int selectedIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)datePicker;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)selectedIndex;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)update;

@end
