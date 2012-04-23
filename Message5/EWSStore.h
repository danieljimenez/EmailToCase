/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/RemoteStore.h>

#import "EWSErrorHandler-Protocol.h"

@class NSLock, NSMutableSet, NSString;

@interface EWSStore : RemoteStore <EWSErrorHandler>
{
    NSString *_folderId;
    NSString *_syncState;
    NSLock *_syncLock;
    NSMutableSet *_flagsToSetDuringSync;
}

- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)dealloc;
- (BOOL)canRebuild;
- (BOOL)allowsOverwrite;
- (BOOL)allowsDeleteInPlace;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)openSynchronouslyIfWaitingToOpen;
- (void)fetchSynchronously;
- (void)startSynchronization;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (void)messagesWereAdded:(id)arg1 conversationsMembers:(id)arg2 duringOpen:(BOOL)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (int)undoAppendOfMessageIDs:(id)arg1;
- (void)forceResync;
- (BOOL)_copyMessagesByID:(id)arg1 toStore:(id)arg2 settingFlags:(id)arg3 newMessages:(id)arg4 error:(id *)arg5;
- (int)_appendToServerWithContext:(CDStruct_9f3328ff *)arg1 error:(id *)arg2;
- (void)_deleteMessagesOnServerSynchronouslyWithEWSItemIds:(id)arg1 fromFolderWithEWSIdString:(id)arg2;
- (void)deleteMessageWithEWSItemIdString:(id)arg1;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2;
- (void)_fetchChangesFromServer;
- (id)_EWSAccount;
- (id)_EWSConnection;
- (id)_gateway;
@property(copy) NSString *syncState;
- (void)_setSyncState:(id)arg1 persistToLibrary:(BOOL)arg2;
- (BOOL)_loadFolderId;
- (void)handleEWSError:(id)arg1;
@property(copy) NSString *folderId; // @synthesize folderId=_folderId;

@end

