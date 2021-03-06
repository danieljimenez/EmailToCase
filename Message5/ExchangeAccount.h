/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
{
}

+ (void)initialize;
+ (id)accountTypeString;
+ (id)defaultPathNameForAccount;
+ (BOOL)usingActiveDirectory;
+ (id)outlookWebAccessServer;
+ (void)setOutlookWebAccessServer:(id)arg1;
+ (id)exchangeServer;
+ (void)setExchangeServer:(id)arg1;
+ (id)activeDirectoryUser;
+ (void)setActiveDirectoryUser:(id)arg1;
+ (id)activeDirectoryPassword;
+ (void)setActiveDirectoryPassword:(id)arg1;
+ (id)activeDirectoryFullName;
+ (id)activeDirectoryEmailAddress;
- (Class)connectionClass;
- (BOOL)storeJunkOnServerDefault;
- (void)updateFromSyncedDictionary:(id)arg1;
- (BOOL)storeDraftsOnServer;
- (BOOL)storeSentMessagesOnServer;
- (BOOL)storeJunkOnServer;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;
- (id)_nonMailboxChildrenOfMailboxWithPath:(id)arg1 iisServer:(id)arg2;
- (void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3;
- (id)additionalHeaderFields;
- (id)hostname;
- (void)setHostname:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)permanentPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)defaultsDictionary;
- (BOOL)isSyncable;
- (void)handleOpenMailboxError:(id)arg1;

@end

