/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAPClientOperationQueue, IMAPConnection, IMAPConnectionPool, NSCondition, NSLock, NSOperationQueue;

@interface IMAPGateway : NSObject
{
    IMAPConnectionPool *_connectionPool;
    IMAPConnection *_connection;
    IMAPClientOperationQueue *_operationQueue;
    NSOperationQueue *_checkInQueue;
    NSCondition *_connectionAvailabilityCondition;
    BOOL _primaryClientAllowsYielding;
    unsigned long long _clientCount;
    NSLock *_clientCountLock;
    BOOL _canYield;
    BOOL _remainedDeserted;
    BOOL _needsSelect;
    BOOL _isSealedShut;
    BOOL _operationQueueCanCheckInConnection;
}

+ (void)initialize;
+ (unsigned long long)IMAPIdleRefreshDelay;
+ (void)_addIdleGateway:(id)arg1;
+ (void)_removeIdleGateway:(id)arg1;
+ (void)_checkIdleGateways;
- (id)initWithIMAPConnection:(id)arg1 mailbox:(id)arg2 pool:(id)arg3;
- (id)init;
- (void)dealloc;
@property IMAPConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(retain) IMAPConnection *connection; // @synthesize connection=_connection;
- (void)operationQueueDidIdle;
- (void)checkIn;
- (void)_tryToCheckInConnectionAndTryToIdle:(BOOL)arg1;
- (BOOL)checkOut;
- (BOOL)okToYield;
- (void)yield;
- (void)suspend;
- (void)resumeWithConnection:(id)arg1 reselect:(BOOL)arg2;
- (void)sealShutAndCompact:(BOOL)arg1 allowNetworking:(BOOL)arg2;
- (void)_finishQueueIdlingAndSuspend:(BOOL)arg1;
- (BOOL)isDeserted;
- (void)allowClientOperationThrough:(id)arg1;
- (void)_allowClientOperationThrough:(id)arg1;
- (void)_executeSuspend:(id)arg1;
- (BOOL)addClientOperation:(id)arg1 toQueueAndWaitUntilFinished:(BOOL)arg2;
- (void)waitUntilClientOperationIsFinished:(id)arg1;
- (void)waitUntilAllOperationsAreFinished;
- (id)mailboxName;
- (void)configureForMailboxName:(id)arg1;
- (BOOL)supportsCapability:(unsigned long long)arg1;
- (id)mailboxNameIfSelected:(BOOL)arg1;
- (void)_setError:(id *)arg1 fromOperation:(id)arg2;
- (void)_setErrorFromOperation:(id)arg1 overwriteExistingError:(BOOL)arg2;
- (void)noop;
- (void)fetchAllFlags;
- (void)fetchFlagsForMaxRecentMessages:(unsigned long long)arg1;
- (void)setServerPathPrefixOnAccount:(id)arg1 withSeparatorChar:(id)arg2;
- (id)namespacesWithSeparatorChar:(id)arg1;
- (BOOL)listingForMailbox:(id)arg1 options:(int)arg2 listingInfo:(id)arg3;
- (BOOL)subscribedListingForMailbox:(id)arg1 options:(int)arg2 listingInfo:(id)arg3;
- (void)fetchStatusForMailboxes:(id)arg1 dataItems:(unsigned long long)arg2;
- (id)statusForMailbox:(id)arg1 dataItems:(unsigned long long)arg2;
- (BOOL)examineMailbox:(id)arg1;
- (BOOL)selectMailbox:(id)arg1;
- (BOOL)_addSelectOperationForMailbox:(id)arg1 type:(int)arg2;
- (void)_waitForDelayedSelectOperation:(id)arg1;
- (BOOL)_completeSelectOperation:(id)arg1;
- (BOOL)createMailbox:(id)arg1;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 toMailbox:(id)arg2;
- (BOOL)subscribeMailbox:(id)arg1;
- (BOOL)unsubscribeMailbox:(id)arg1;
- (void)fetchQuotaRootNamesForMailboxes:(id)arg1;
- (BOOL)getQuotaForRootName:(id)arg1;
- (BOOL)check:(id *)arg1;
- (BOOL)expunge;
- (BOOL)expungeUids:(id)arg1;
- (BOOL)_expungeUids:(id)arg1 mailboxName:(id)arg2;
- (void)close;
- (void)logout;
- (void)closeAndLogout;
- (void)unselect;
- (void)fetchTotalSizeAndMessageCount;
- (BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3;
- (BOOL)_expunge:(BOOL)arg1 orStoreFlags:(id)arg2 state:(BOOL)arg3 forUids:(id)arg4;
- (BOOL)_storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3 mailboxName:(id)arg4;
- (BOOL)deleteMessagesOlderThanNumberOfDays:(long long)arg1 settingFlags:(id)arg2;
- (BOOL)copyUids:(id)arg1 toMailboxNamed:(id)arg2 messageInfo:(id)arg3 error:(id *)arg4;
- (BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 messageInfo:(id)arg5 error:(id *)arg6;
- (id)searchUidRange:(CDStruct_f792af56)arg1 forTerms:(id)arg2;
- (id)searchUidRange:(CDStruct_f792af56)arg1 forNewMessageIDs:(id)arg2;
- (unsigned int)searchedUidNextForMessageNumber:(unsigned long long)arg1;
- (BOOL)synchronouslyExecuteSelect:(id)arg1;
- (BOOL)synchronouslyExecuteDoneWithSequence:(unsigned long long)arg1 session:(unsigned long long)arg2;
- (void)refreshDone:(BOOL)arg1 withOperation:(id)arg2;
- (BOOL)startIdle;
- (void)refreshIdle;
- (id)description;
@property BOOL primaryClientAllowsYielding; // @synthesize primaryClientAllowsYielding=_primaryClientAllowsYielding;
@property BOOL needsSelect; // @synthesize needsSelect=_needsSelect;
@property BOOL isSealedShut; // @synthesize isSealedShut=_isSealedShut;
@property unsigned long long clientCount; // @synthesize clientCount=_clientCount;
@property BOOL remainedDeserted; // @synthesize remainedDeserted=_remainedDeserted;
@property BOOL canYield; // @synthesize canYield=_canYield;
@property(retain) IMAPClientOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

@end
