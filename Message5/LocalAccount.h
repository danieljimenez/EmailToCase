/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@interface LocalAccount : MailAccount
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)localAccount;
+ (id)defaultPathNameForAccount;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountTypeString;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (id)rootMailboxUid;
- (BOOL)isSyncable;
- (id)uniqueId;
- (Class)storeClass;
- (id)mailboxPathExtension;
- (id)primaryMailboxUid;
- (id)displayName;
- (void)setHostname:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (BOOL)canFetch;
- (BOOL)shouldAutoFetch;
- (BOOL)shouldShowNotesInInbox;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)isWillingToGoOnline;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (long long)emptyTrashFrequency;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailboxUid:(id)arg5;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (BOOL)supportsNormalContainerOnlyMailboxes;
- (BOOL)deleteConvertsStoreToFolder;
- (id)pathForMailboxWithParent:(id)arg1 name:(id)arg2;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2 displayName:(id)arg3;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rootlessMailboxUidForFileSystemPath:(id)arg1;
- (id)_URLPersistenceScheme;
- (id)_infoForMatchingURL:(id)arg1;
- (BOOL)synchronizesDataWithServer;
- (id)_specialMailboxNameForType:(int)arg1;
- (id)todosMailboxUid;
- (BOOL)isEditableByUser;
- (BOOL)canParticipateInRules;
- (BOOL)providesAccountInformation;
- (BOOL)isZeroConfiguration;
- (BOOL)isRemoteAccount;
- (BOOL)hasTrashMailbox;
- (BOOL)supportsAppleScript;

@end
