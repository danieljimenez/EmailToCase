/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSTableViewDataSource-Protocol.h"

@class CriterionView, NSButton, NSMutableArray, NSPanel, NSPopUpButton, NSScrollView, NSString, NSTableView, NSTextField, NSWindow;

@interface CriteriaUIHelper : NSObject <NSTableViewDataSource>
{
    NSMutableArray *_criteriaViews;
    NSTextField *_nameField;
    NSScrollView *_criteriaContainer;
    NSPopUpButton *_allCriteriaMustBeMetPopUp;
    NSButton *_includeTrashCheckbox;
    NSButton *_includeSentCheckbox;
    NSTextField *_performActionLabel;
    NSScrollView *_actionContainer;
    CriterionView *_criterionView;
    NSPanel *_headerListPanel;
    NSTableView *_headerListTable;
    NSButton *_addHeaderButton;
    BOOL _isEditingHeader;
    BOOL _criteriaWillBeUsedForMailboxes;
    BOOL _includeNoJunkCriterion;
    id _objectWithCriteria;
    NSString *_previousTitle;
    NSWindow *_parentWindow;
}

+ (id)packageUserCriteria:(id)arg1 withNoJunk:(BOOL)arg2 noTrash:(BOOL)arg3 noSent:(BOOL)arg4 allUserCriteriaMustBeSatisfied:(BOOL)arg5;
+ (void)unpackUserCriteria:(id *)arg1 noJunkCriterion:(id *)arg2 noTrashCriterion:(id *)arg3 noSentCriterion:(id *)arg4 allCriteriaMustBeSatisfield:(char *)arg5 fromCriteria:(id)arg6;
+ (id)headerList;
@property BOOL criteriaWillBeUsedForMailboxes;
- (void)dealloc;
- (void)awakeFromNib;
- (id)newCriterion;
- (void)putCriteriaFromUIIntoObject:(id)arg1;
- (void)sentMessagesMailboxCriterionAdded;
- (void)trashMailboxCriterionAdded;
- (void)configureCriteriaForObject:(id)arg1;
- (void)addCriterion:(id)arg1;
- (id)_createNewCriterionViewForSender:(id)arg1;
- (void)removeCriterion:(id)arg1;
- (void)removeView:(id)arg1 fromViews:(id)arg2 inContainer:(id)arg3;
- (void)userHasSelectedSenderInAddressBook:(char *)arg1 senderInAddressHistory:(char *)arg2;
- (void)editHeaderList;
- (void)_configureAllCriterionMenus;
- (void)resetHeaderListForObjectsWithCriteria:(id)arg1;
- (void)_endEditingHeader;
- (void)headerListOkClicked:(id)arg1;
- (void)headerListCancelClicked:(id)arg1;
- (void)_updateHeaderListUI;
- (void)_headerTableBeganEditing:(id)arg1;
- (void)_headerTableEndedEditing:(id)arg1;
- (void)addHeaderClicked:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_removeInvalidHeaders;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tileViews:(id)arg1 inContainer:(id)arg2 withChangeAtRow:(long long)arg3 removeIsEnabled:(BOOL)arg4;
- (void)connectNextKeyViewChain;
@property NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;

@end
