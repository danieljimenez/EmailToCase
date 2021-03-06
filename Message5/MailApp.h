/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSApplication.h"

#import "MFUserAgent-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "SyncableApp-Protocol.h"

@class ActivityViewer, ActivityViewerMailSound, DeliveryQueue, DockCountController, DynamicErrorWindowController, FlagsMenuItemView, MailboxesController, NSMenu, NSMenuItem, NSMutableArray, NSMutableSet, NSString, NSWindow;

@interface MailApp : NSApplication <MFUserAgent, MVTerminationHandler, NSApplicationDelegate, NSMenuDelegate, SyncableApp>
{
    id _selectionOwner;
    NSMenu *_mailboxesContextMenu;
    NSMenu *_addButtonMenu;
    NSMenu *_messageViewerContextMenu;
    NSMenu *_composeAttachmentContextMenu;
    NSMenu *_viewAttachmentContextMenu;
    NSMenuItem *_textEncodingMenuItem;
    FlagsMenuItemView *_flagsMenuItemView;
    MailboxesController *_mailboxesController;
    NSString *_noMailSoundPath;
    NSString *_fetchErrorSoundPath;
    DockCountController *_dockCountController;
    NSMutableArray *_stationeryBundlesToInstall;
    NSWindow *_errorDiagnosisWindow;
    DynamicErrorWindowController *_errorDiagnosisWindowController;
    long long *_errorDiagnosisResult;
    double _appDidFinishLaunchingTime;
    DeliveryQueue *_deliveryQueue;
    ActivityViewer *_activityViewer;
    ActivityViewerMailSound *_activityViewerMailSound;
    id _terminationHandlersLock;
    NSMutableArray *_terminationHandlers;
    NSMutableArray *_currentTerminationHandlers;
    unsigned long long _terminateReply;
    BOOL _isTerminating;
    BOOL _isExitingFullscreen;
    unsigned int _autoLaunchHidden:1;
    unsigned int _shouldPlayFetchErrorSound:1;
    unsigned int _appHasFinishedLaunching:1;
    unsigned int _synchronizingAllAccounts:1;
    unsigned int _groupingByThreadDefaultsToOn:1;
    unsigned int _updateEmailAliasesOnNextActivation:1;
    unsigned int _paused:1;
    unsigned int _shouldCleanUpHTTPMailAccounts:1;
    unsigned int _automaticTerminationDisabled:1;
    NSMutableSet *_accountsCurrentlySynchronizing;
    unsigned long long _numberOfAccountsEmptyingTrash;
    long long _currentPasswordPanelCount;
    id _syncer;
    BOOL _accountsAreNew;
    BOOL _useAddressAtoms;
    BOOL _runningEmptyTrashSheet;
    BOOL _childWindowVisible;
    BOOL _hasPerformedDelayedInitialization;
    NSMutableArray *_appleEventDescriptorQueue;
}

+ (BOOL)checkMessageFrameworkCompatibility;
+ (void)_testMachPorts;
- (id)init;
- (BOOL)appHasFinishedLaunching;
- (BOOL)isChildWindowVisible;
- (void)setChildWindowVisible:(BOOL)arg1;
- (void)sendEvent:(id)arg1;
- (void)presencePreferenceChanged:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)showViewerWindow:(id)arg1;
- (BOOL)_showViewerWindow:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)_systemTimeChanged;
- (void)_midnightPassed;
- (void)_setupMidnightTimer;
- (void)_checkTimerAndFireDate:(id)arg1;
- (void)checkTimersAfterSleeping;
- (void)_updateEmailAliases;
- (void)_updateRSSUnreadCountsAndFetchNewFeeds;
- (void)_tryToPerformDelayedInitialization;
- (void)_performDelayedInitialization;
- (void)_fetchBrandingInfo;
- (void)_tellSyncServicesToRegisterAndSync;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_initializeAddressBookSources;
- (BOOL)_needToCreateLibraryUpgradingIfNecessary;
- (BOOL)accountsAreNew;
- (void)_restoreMessagesFromDefaults;
- (void)_setupInitialState;
- (void)_loadBundles;
- (void)_loadBundlesFromPath:(id)arg1 failedBundleInfos:(id)arg2;
- (id)_failureInfoForBundle:(id)arg1 path:(id)arg2;
- (id)_mailboxBeingViewed;
- (BOOL)_isMailboxBeingViewedSpecial;
- (id)_accountBeingViewed;
- (void)runPageLayout:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_moreThanOneAccountCanGoOffline;
- (void)disconnectAllAccounts:(id)arg1;
- (void)connectAllAccounts:(id)arg1;
- (void)connectThisAccount:(id)arg1;
- (void)disconnectThisAccount:(id)arg1;
- (void)disconnectAllAccountsFromContextMenu:(id)arg1;
- (void)connectAllAccountsFromContextMenu:(id)arg1;
- (void)connectThisAccountFromContextMenu:(id)arg1;
- (void)disconnectThisAccountFromContextMenu:(id)arg1;
- (void)toggleAccountOnlineStatus:(id)arg1;
- (void)_addToAccountsCurrentlySynchronizing:(id)arg1;
- (void)_removeFromAccountsCurrentlySynchronizing:(id)arg1;
- (BOOL)_isAccountCurrentlySynchronizing:(id)arg1;
- (void)_clearAccountsCurrentlySynchronizing;
- (void)performSynchronizationForAccounts:(id)arg1;
- (void)synchronizeAccount:(id)arg1;
- (void)_networkConfigurationChanged:(id)arg1;
- (void)_handleNetworkConfigurationChange;
- (void)_emailAddressesApproved:(id)arg1;
- (void)_emailsRejected:(id)arg1;
- (void)closeAll:(id)arg1;
- (void)showConnectionDoctor:(id)arg1;
- (void)showInfoPanel:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (void)showNoteEditor:(id)arg1;
- (void)orderFrontStylesPanel:(id)arg1;
- (void)addFontTrait:(id)arg1;
- (void)newViewerWindow:(id)arg1;
- (void)selectMailbox:(id)arg1;
- (void)showMediaBrowser:(id)arg1;
- (void)showAddressPanel:(id)arg1;
- (void)showAddressHistoryPanel:(id)arg1;
- (void)showSearchPanel:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)showActivityViewer:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (void)collectFeedback:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)importMailboxes:(id)arg1;
- (void)showReleaseNotes:(id)arg1;
- (void)showAccountInfo:(id)arg1;
- (void)alwaysSendWindowsFriendlyAttachments:(id)arg1;
- (void)sendWindowsFriendlyAttachments:(id)arg1;
- (void)alwaysAttachFilesAtEnd:(id)arg1;
- (void)attachFilesAtEnd:(id)arg1;
- (void)insertOriginalAttachments:(id)arg1;
- (void)_resetMenuItemWithTag:(long long)arg1;
- (id)_mailboxMenu;
- (id)_getMenuItemInMessageMenuWithTag:(long long)arg1;
- (void)_getActiveAccountsThatCanGoOffline:(id)arg1 fetch:(id)arg2 sync:(id)arg3 deleteToTrash:(id)arg4 doesNotDeleteToTrash:(id)arg5;
- (void)_synchronizeAccountListMenuWithTagIfNeeded:(long long)arg1;
- (void)bringUpOnlineOfflineMenu:(id)arg1;
- (void)bringUpSynchronizeAccountMenu:(id)arg1;
- (void)bringUpEmptyTrashMenu:(id)arg1;
- (void)bringUpGetNewMailMenu:(id)arg1;
- (void)_removeExtraSeparatorsInMailboxMenu;
- (void)_removeAllItemsInAccountMenuWithTag:(long long)arg1;
- (void)_setupAccountMenuItems;
- (void)_setupCheckSpellingSubMenu;
- (void)_accountsChanged:(id)arg1;
- (void)_deliveryAccountsChangedExternally:(id)arg1;
- (void)_mailAccountsChangedExternally:(id)arg1;
- (void)_aosAccountMigratedExternally:(id)arg1;
- (void)editAccount:(id)arg1;
- (void)_emptyTrashAndCompact:(id)arg1;
- (void)_confirmEmptyTrashSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_emptyTrashInAccounts:(id)arg1 storeToCompact:(id)arg2;
- (id)_accountsToEmptyTrashIn:(id)arg1;
- (void)emptyTrashInAccount:(id)arg1;
- (void)compactSelectedMailboxes:(id)arg1;
- (void)_evaluateUsersJunkMailNeeds;
- (void)showToolbarItemForJunkMail:(BOOL)arg1;
- (void)eraseJunkMail:(id)arg1;
- (void)_eraseJunkMailSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)toggleThreadedMode:(id)arg1;
- (void)toggleViewRelatedMessages:(id)arg1;
- (BOOL)groupingByThreadDefaultsToOn;
- (void)setGroupingByThreadDefaultsToOn:(BOOL)arg1;
- (BOOL)shouldAutoFetchForMessageType:(BOOL)arg1;
- (void)_setShouldAutoFetch:(BOOL)arg1 forMessageType:(BOOL)arg2;
- (long long)autoFetchFrequencyForMessageType:(BOOL)arg1;
- (void)setAutoFetchFrequency:(long long)arg1 forMessageType:(BOOL)arg2;
- (void)_checkNewMail:(BOOL)arg1;
- (void)_doBackgroundFetch:(BOOL)arg1;
- (void)checkNewMailInAccount:(id)arg1 isAutocheck:(BOOL)arg2;
- (void)checkNewMailInAccount:(id)arg1;
- (void)checkNewMail:(id)arg1;
- (void)_checkNewMailInAccountRepresentedByMailbox:(id)arg1;
- (void)checkNewMailInSelectedAccounts:(id)arg1;
- (void)updateAllFeeds:(id)arg1;
- (void)_autoFetchMail:(id)arg1;
- (void)_backgroundFetchCompleted:(id)arg1;
- (void)resetAutoFetchTimer;
- (void)fetchErrorHasOccurred;
- (void)_mailAccountNeedsChecking:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (BOOL)_handleOpenMessage:(id)arg1;
- (void)handleStationeryBundles;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)applicationDidUnhide:(id)arg1;
- (void)updateEmailAliasesOnNextActivation;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)openStoreWithMailboxUid:(id)arg1;
- (id)openStoreWithMailboxUid:(id)arg1 andMakeKey:(BOOL)arg2;
- (id)openMessageEditorWithParsedMessage:(id)arg1 headers:(id)arg2;
- (id)_messageEditorWithSettings:(id)arg1;
- (void)_addressManagerLoaded;
- (id)activityViewer;
- (id)textEncodingMenuItem;
- (void)loadMailboxesContextMenuNib;
- (id)addButtonMenu;
- (id)mailboxesContextMenu;
- (id)messageViewerContextMenu;
- (id)viewAttachmentContextMenu;
- (id)composeAttachmentContextMenu;
- (id)toolbarItemMoveMenu;
- (id)toolbarItemCopyMenu;
- (BOOL)useAddressAtoms;
- (void)willPresentContextualMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)mailboxesController;
- (void)_preferencesChanged:(id)arg1;
- (BOOL)handleMailToURL:(id)arg1;
- (BOOL)handleMessageURL:(id)arg1;
- (BOOL)handleClickOnURL:(id)arg1 visibleText:(id)arg2 message:(id)arg3 window:(id)arg4 dontSwitch:(BOOL)arg5;
- (id)applicationVersion;
- (id)frameworkVersion;
- (void)_mailDocuments:(id)arg1;
- (id)messageEditor;
- (void)makeNoteFromSelection:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)mailSelection:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)mailDocument:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)mailTo:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (id)deliveryQueue;
- (void)setSelectionFrom:(id)arg1;
- (void)resignSelectionFor:(id)arg1;
- (id)selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (id)selectionOwner;
- (id)preferredAccountBasedOnSelection;
- (id)preferredReplyAddressBasedOnCurrentSelection;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (id)mailSyncBundle;
- (Class)notesSyncClass;
- (id)syncer;
- (id)syncerForDataType:(long long)arg1;
- (id)interestedPartiesForDataType:(long long)arg1;
- (BOOL)tellInterestedPartiesDataWillBeSyncedForDataType:(long long)arg1;
- (void)tellInterestedPartiesDataWasSyncedForDataType:(long long)arg1;
- (id)ownerForDataType:(long long)arg1;
- (void)client:(id)arg1 mightWantToSyncEntityNames:(id)arg2;
- (void)_timeMachineSendEvent:(id)arg1;
- (void)timeMachineDismiss:(id)arg1;
- (BOOL)_isAnyActiveAccountWillingToGoOnline;
- (void)_updateAutomaticTerminationState;
- (void)_disableAutomaticTermination:(BOOL)arg1 reason:(id)arg2;
- (void)quitNoMatterWhat;
- (void)_terminateNoConfirm;
- (void)_approveQuitIfFinished;
- (void)_cleanupFinished;
- (void)_cleanUpAccount:(id)arg1;
- (void)_cleanOldDatabases:(id)arg1;
- (void)_nowWouldBeAGoodTimeForHandler:(id)arg1 toTerminateFromSelector:(SEL)arg2;
- (id)_currentTerminationHandler;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)addTerminationHandler:(id)arg1;
- (void)removeTerminationHandler:(id)arg1;
- (void)handler:(id)arg1 approvedQuit:(BOOL)arg2;
- (void)replyToApplicationShouldTerminate:(BOOL)arg1;
@property BOOL hasPerformedDelayedInitialization; // @synthesize hasPerformedDelayedInitialization=_hasPerformedDelayedInitialization;
@property BOOL isExitingFullscreen; // @synthesize isExitingFullscreen=_isExitingFullscreen;
@property BOOL isCurrentlyTerminating; // @synthesize isCurrentlyTerminating=_isTerminating;
- (void)_insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAccounts:(id)arg1;
- (void)insertInAosImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAosImapAccounts:(id)arg1;
- (void)insertInImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInImapAccounts:(id)arg1;
- (void)insertInPopAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInPopAccounts:(id)arg1;
- (void)removeFromAccountsAtIndex:(unsigned long long)arg1;
- (id)deliveryAccounts;
- (long long)backgroundThreadCount;
- (int)defaultMessageFormat;
- (void)setDefaultMessageFormat:(int)arg1;
- (BOOL)autosaveComposeWindows;
- (void)setAutosaveComposeWindows:(BOOL)arg1;
- (long long)spellCheckingBehavior;
- (void)setSpellCheckingBehavior:(long long)arg1;
- (BOOL)checkGrammarWithSpelling;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (BOOL)expandGroupAddresses;
- (void)setExpandGroupAddresses:(BOOL)arg1;
- (BOOL)useAddressCompletion;
- (void)setUseAddressCompletion:(BOOL)arg1;
- (id)ldapServerNamed:(id)arg1;
- (id)ldapServers;
- (void)insertInLdapServers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInLdapServers:(id)arg1;
- (void)removeFromLdapServersAtIndex:(unsigned long long)arg1;
- (BOOL)replyInSameFormat;
- (void)setReplyInSameFormat:(BOOL)arg1;
- (BOOL)alwaysCCMyself;
- (void)setAlwaysCCMyself:(BOOL)arg1;
- (BOOL)alwaysBCCMyself;
- (void)setAlwaysBCCMyself:(BOOL)arg1;
- (BOOL)includeOriginalMessage;
- (void)setIncludeOriginalMessage:(BOOL)arg1;
- (BOOL)includeAllOfOriginalMessage;
- (void)setIncludeAllOfOriginalMessage:(BOOL)arg1;
- (BOOL)shouldCheckIntranetDomains;
- (BOOL)signOutgoingMessages;
- (void)setSignOutgoingMessages:(BOOL)arg1;
- (BOOL)encryptOutgoingMessages;
- (void)setEncryptOutgoingMessages:(BOOL)arg1;
- (BOOL)inlineSpellCheckingEnabled;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (id)intranetDomains;
- (void)setShouldCheckIntranetDomains:(BOOL)arg1 withString:(id)arg2;
- (void)fontsAndColorsPreferencesDidChange:(BOOL)arg1;
- (void)fontsAndColorsPreferencesDidChange;
- (void)setMessageFont:(id)arg1 size:(double)arg2;
- (void)setFixedPitchFont:(id)arg1 size:(double)arg2;
- (BOOL)colorQuotedText;
- (void)setColorQuotedText:(BOOL)arg1;
- (id)messageListFont;
- (void)setMessageListFont:(id)arg1;
- (double)messageListFontSize;
- (void)setMessageListFontSize:(double)arg1;
- (id)messageFont;
- (void)setMessageFont:(id)arg1;
- (double)messageFontSize;
- (void)setMessageFontSize:(double)arg1;
- (BOOL)useFixedWidthFont;
- (void)setUseFixedWidthFont:(BOOL)arg1;
- (id)fixedWidthFont;
- (void)setFixedWidthFont:(id)arg1;
- (double)fixedWidthFontSize;
- (void)setFixedWidthFontSize:(double)arg1;
- (void)setQuotingColor:(int)arg1 forLevel:(long long)arg2;
- (int)quotingColorForLevel:(long long)arg1;
- (int)quotingColorValue:(id)arg1;
- (int)levelOneQuotingColor;
- (void)setLevelOneQuotingColor:(int)arg1;
- (int)levelTwoQuotingColor;
- (void)setLevelTwoQuotingColor:(int)arg1;
- (int)levelThreeQuotingColor;
- (void)setLevelThreeQuotingColor:(int)arg1;
- (BOOL)playOtherMailSounds;
- (void)setPlayOtherMailSounds:(BOOL)arg1;
- (id)soundPathForNewMail;
- (void)setSoundPathForNewMail:(id)arg1;
- (id)mailSoundForNewMail;
- (void)setMailSoundForNewMail:(id)arg1;
- (id)downloadFolderPath;
- (void)setDownloadFolderPath:(id)arg1;
- (BOOL)indexDecryptedMessages;
- (void)setIndexDecryptedMessages:(BOOL)arg1;
- (void)_runTestNamed:(id)arg1 iteration:(unsigned long long)arg2;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)openSelectedFolder:(id)arg1;
- (id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)arg1;
- (id)applescriptSelection;
- (id)accounts;
- (id)_accountsOfClass:(Class)arg1;
- (id)popAccounts;
- (id)imapAccounts;
- (id)aosImapAccounts;
- (void)insertInDeliveryAccounts:(id)arg1 atIndex:(long long)arg2;
- (void)insertInDeliveryAccounts:(id)arg1;
- (void)removeFromDeliveryAccountsAtIndex:(unsigned long long)arg1;
- (id)messageViewers;
- (id)valueInMessageViewersWithUniqueID:(id)arg1;
- (void)insertInMessageViewers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMessageViewers:(id)arg1;
- (void)removeFromMessageViewersAtIndex:(unsigned long long)arg1;
- (id)inbox;
- (id)outbox;
- (id)draftsMailbox;
- (id)sentMailbox;
- (id)trashMailbox;
- (id)junkMailbox;
- (id)mailboxes;
- (id)valueInMailboxesWithName:(id)arg1;
- (void)removeFromMailboxesAtIndex:(unsigned long long)arg1;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMailboxes:(id)arg1;
- (void)replaceInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)messageEditors;
- (void)insertInMessageEditors:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMessageEditors:(id)arg1;
- (void)removeFromMessageEditorsAtIndex:(unsigned long long)arg1;
- (id)composeMessages;
- (void)insertInComposeMessages:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInComposeMessages:(id)arg1;
- (void)removeFromComposeMessagesAtIndex:(unsigned long long)arg1;
- (id)valueInComposeMessagesWithUniqueID:(id)arg1;
- (id)_objectSpecifierForObject:(id)arg1 inArray:(id)arg2 withKey:(id)arg3;
- (BOOL)shouldAutoFetch;
- (void)setShouldAutoFetch:(BOOL)arg1;
- (long long)autoFetchFrequency;
- (void)setAutoFetchFrequency:(long long)arg1;
- (BOOL)useKeychain;
- (void)setUseKeychain:(BOOL)arg1;
- (BOOL)logAllSocketActivity;
- (void)setLogAllSocketActivity:(BOOL)arg1;
- (id)logActivityOnPorts;
- (void)setLogActivityOnPorts:(id)arg1;
- (id)logActivityOnHosts;
- (void)setLogActivityOnHosts:(id)arg1;
- (id)logMessages;
- (id)handleCheckMailCommand:(id)arg1;
- (id)handleSynchronizeAccountCommand:(id)arg1;
- (id)handleImportMboxCommand:(id)arg1;
- (void)_registerAppleEventQueue;
- (void)_registerAppleEventHandlers;
- (void)_unregisterAppleEventHandlers;
- (void)queueAppleEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleGURLAppleEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleMailWebPageEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleMailWebLinkEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleShowAccountPreferencesEvent:(id)arg1 replyEvent:(id)arg2;
- (void)continueAccountSetupEvent:(id)arg1 replyEvent:(id)arg2;
- (void)openHelpTopic:(id)arg1;
- (void)_turnOnConversationView;
- (void)_upgradeNoteTodoFlagToolbarItems;
- (void)_switchToolbarsToIconOnly;
- (void)_preserveSignatureAboveQuotedTextPreference;
- (void)_adoptNewToolbarDefaultConfigurations;
- (id)_convertSLToLionKey:(id)arg1;
- (void)_upgradeExpandedMailboxesPreference;
- (void)performMailUpgrade;
- (void)_runPasswordPanelInMainThreadWithInfo:(struct MailPasswordInfo *)arg1;
- (id)queryUserForPasswordWithMessage:(id)arg1 title:(id)arg2 remember:(char *)arg3;
- (void)_runAlertPanelInMainThreadWithInfo:(struct MailAlertInfo *)arg1;
- (long long)runAlertPanelWithTitle:(id)arg1 defaultTitle:(id)arg2 alternateTitle:(id)arg3 otherTitle:(id)arg4 message:(id)arg5;
- (long long)informUserOfError:(id)arg1;
- (BOOL)queryUserWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (BOOL)showCertificateTrustPanelForError:(id)arg1 host:(id)arg2;
- (void)_informUserOfDatabaseError:(id)arg1;
- (void)informUserOfIOErrorWithStateIn:(long long *)arg1;
- (void)informUserOfBusyDatabaseWithRecoverer:(id)arg1 diagnosis:(long long *)arg2;
- (long long)queryUserForBigMessageAction:(id)arg1;
- (void)downloadBigMessage:(id)arg1;
- (void)storeBeingInvalidated:(id)arg1;
- (BOOL)shouldInvalidateMailbox:(id)arg1;
- (id)sharedAttachmentContextMenu;
- (BOOL)isTerminating;
- (void)relaunchAndQuit;
- (void)relaunchAndQuitWithAdditionalArguments:(id)arg1;
- (BOOL)wakingFromSleep;
- (BOOL)personWithEmailIsOnline:(id)arg1;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2;
- (BOOL)isInTimeMachineMode;
- (void)setIsInTimeMachineMode:(BOOL)arg1;
- (id)rules;
- (void)insertInRules:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInRules:(id)arg1;
- (void)removeFromRulesAtIndex:(unsigned long long)arg1;
- (void)insertInSignatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInSignatures:(id)arg1;
- (void)removeFromSignaturesAtIndex:(unsigned long long)arg1;
- (id)signatures;
- (BOOL)chooseSignatureWhenComposing;
- (void)setChooseSignatureWhenComposing:(BOOL)arg1;
- (id)selectedSignature;
- (void)setSelectedSignature:(id)arg1;
- (BOOL)downloadHTMLAttachments;
- (void)setDownloadHTMLAttachments:(BOOL)arg1;
- (int)headerDetail;
- (void)setHeaderDetail:(int)arg1;
- (BOOL)shouldShowPresence;
- (void)setShouldShowPresence:(BOOL)arg1;
- (BOOL)shouldHighlightThreads;
- (void)setShouldHighlightThreads:(BOOL)arg1;
- (BOOL)shouldShowMailboxesAtLeft;
- (void)setShouldShowUnreadMessagesInBold:(BOOL)arg1;
- (BOOL)shouldShowUnreadMessagesInBold;

@end

