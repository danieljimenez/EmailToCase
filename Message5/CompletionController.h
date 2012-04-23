/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "AddressTextFieldDelegate-Protocol.h"
#import "NSControlTextEditingDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class ABAddressBook, CachingABRecord, NSArray, NSControl, NSMutableArray, NSOperationQueue, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSWindow, _AutocompletionResultsAccumulator;

@interface CompletionController : NSObject <AddressTextFieldDelegate, NSControlTextEditingDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSControl *_editingField;
    NSWindow *_editingWindow;
    NSString *_currentPartialString;
    NSString *_previousString;
    NSWindow *_completionWindow;
    NSTableView *_completionTableView;
    NSScrollView *_completionTableScrollView;
    CachingABRecord *_selectedRecord;
    NSString *_selectedAddress;
    NSString *_completedAddress;
    NSMutableArray *_matchingRecords;
    NSMutableArray *_matchingAddresses;
    NSMutableArray *_remoteMatches;
    NSProgressIndicator *_progressIndicator;
    BOOL _showListAsSoonAsPossible;
    BOOL _remoteSearchesAreComplete;
    BOOL _remoteSearchesArePending;
    BOOL _localSearchIsComplete;
    BOOL _showingPartialRemoteSearchResults;
    NSOperationQueue *_autocompletionOperationQueue;
    _AutocompletionResultsAccumulator *_autocompletionResultsAccumulator;
    ABAddressBook *_autocompletionAddressBook;
    NSString *_autocompletionSearchString;
    NSArray *_remoteSearchOperations;
    BOOL _autocompletionStringIsSingleWordPlusSpace;
}

+ (void)initialize;
+ (void)_doCompletionWindowPlacement:(id)arg1;
- (id)init;
- (void)_setProgressIndicatorVisible:(BOOL)arg1;
- (void)awakeFromNib;
- (void)_userDidSelectText:(id)arg1;
- (void)_reset:(id)arg1;
- (id)selectedRecord;
- (id)completedAddress;
- (void)_setCompletedAddress:(id)arg1;
- (void)textFieldDidAtomicizeAllAddresses:(id)arg1;
- (void)_purgeAddressBook;
- (void)prepareToCloseWindow;
- (void)_cancelAllCompletions;
- (void)cancelThisCompletion;
- (BOOL)_acceptCurrentCompletion;
- (void)_selectTableViewRow:(id)arg1;
- (void)setEditingField:(id)arg1;
- (id)_completionTableView;
- (id)_stringToComplete:(id)arg1;
- (void)_showSelectedLineInField;
- (void)_showSelectedLine;
- (void)_showCompletionListWindow:(unsigned long long)arg1;
- (void)_orderOutCompletionWindow:(id)arg1;
- (void)_placementViewFrameChanged:(id)arg1;
- (void)_displayFilteredResultsShowList:(BOOL)arg1 showSelectedLine:(BOOL)arg2;
- (void)_processPartialRemoteAutocompletionResults:(id)arg1;
- (void)_allRemoteAutocompletionSearchesHaveFinished:(id)arg1;
- (void)_appendRemoteResultsToMatchingRecords;
- (void)_mergeRemoteMatchesIntoMatchingRecords;
- (void)_completeString:(id)arg1;
- (void)_beginAutocompletionSearchesForString:(id)arg1;
- (void)_beginRemoteSearches;
- (void)_processLocalAutocompletionResults:(id)arg1;
- (BOOL)_addressBookPerson:(id)arg1 nameMatchesSearchWords:(id)arg2;
- (BOOL)_email:(id)arg1 matchesSearchWords:(id)arg2;
- (id)_betterRecordOfRecent:(id)arg1 addressBook:(id)arg2;
- (void)_addressBookSearchCompleted:(id)arg1;
- (void)forceListToPopup;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)shouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)dealloc;

@end
