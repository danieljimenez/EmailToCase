/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class InvocationQueue, NSDate, NSMutableArray, NSMutableSet;

@interface ParentalControlManager : NSObject
{
    NSMutableSet *_pcStores;
    InvocationQueue *_tasks;
    NSDate *_lastCleanupDate;
    NSMutableArray *_recentRequests;
    BOOL _isDirty;
    BOOL _recentRequestsDirty;
    NSMutableSet *_pendingRequests;
}

+ (id)sharedManager;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)parentalControlDirectory;
- (BOOL)isInSpamProtectionMode;
- (id)headersRequiredForParentalControl;
- (void)deleteAccount:(id)arg1;
- (void)_cleanupPCStoresAfterDelay:(double)arg1;
- (void)_approveSenders:(id)arg1 sourcePCMailbox:(id)arg2 destinationAccount:(id)arg3;
- (void)_rejectSenders:(id)arg1 sourcePCMailbox:(id)arg2;
- (id)_openStoreForPCMailbox:(id)arg1 keepOpen:(BOOL)arg2;
- (id)_openStoreForPCMailbox:(id)arg1;
- (id)_openPCStoreForAccount:(id)arg1;
- (id)_makeRequestMessageForMessage:(id)arg1 isOutgoingMessage:(BOOL)arg2;
- (id)_deliverMessage:(id)arg1;
- (id)_recentRequestsFilePath;
- (id)_recentRequestsNoLock;
- (BOOL)_hasRecentlySentPermissionRequestForSender:(id)arg1;
- (void)_removeSendersFromRecentRequests:(id)arg1;
- (BOOL)_hasPendingRequestForSender:(id)arg1;
- (void)_requestApprovalForIncomingMessage:(id)arg1 srcStore:(id)arg2 pcStore:(id)arg3 messageInPCStore:(id)arg4;
- (void)_reallyRequestApprovalForIncomingMessage:(id)arg1 srcStore:(id)arg2 pcStore:(id)arg3 messageInPCStore:(id)arg4;
- (void)_approveAddresses:(id)arg1 responseFromAccount:(id)arg2;
- (void)_rejectAddresses:(id)arg1 responseFromAccount:(id)arg2;
- (void)_cleanupPCStore:(id)arg1;
- (void)_reallyCleanupPCStores;
- (void)_cleanupPCStores;
- (BOOL)processIncomingMessage:(id)arg1 messageIsParentResponse:(char *)arg2;
- (BOOL)haveEmailsBeenApproved:(id)arg1 unapprovedOnes:(id)arg2;
- (void)_deliverApprovalRequestMessage:(id)arg1 forOutgoingMessage:(id)arg2;
- (void)_requestApprovalForOutgoingMessage:(id)arg1 srcStore:(id)arg2;
- (BOOL)requestApprovalForOutgoingMessage:(id)arg1;
- (void)saveChanges;
- (id)_makeResponseMessageToRequest:(id)arg1 approve:(BOOL)arg2;
- (void)_deliverResponseMessage:(id)arg1 requestMessage:(id)arg2;
- (BOOL)_respondToRequest:(id)arg1 approve:(BOOL)arg2;
- (BOOL)approveRequest:(id)arg1;
- (BOOL)rejectRequest:(id)arg1;
- (BOOL)isEmail:(id)arg1 inEmailList:(id)arg2;
- (void)_approveEmailListChanged:(id)arg1;
@property BOOL isDirty;
- (void)_saveChangesWithDelay;

@end

