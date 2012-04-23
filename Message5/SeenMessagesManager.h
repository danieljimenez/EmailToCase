/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext;

@interface SeenMessagesManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    id _account;
}

- (id)initWithAccountID:(id)arg1 createAccount:(BOOL)arg2;
- (void)dealloc;
- (id)_accountForAccountID:(id)arg1;
- (id)_addAccountWithID:(id)arg1;
- (id)seenMessageForMessageID:(id)arg1;
- (unsigned long long)countOfSeenMessages;
- (id)addMessageID:(id)arg1 dateSeen:(id)arg2;
- (void)removeMessageIDs:(id)arg1;
- (id)seenMessages;
- (id)messagesToBeDeletedFromServer;
- (void)removeServerDeletedMessages;
- (void)removeMessagesNotOnServer:(id)arg1;
- (void)saveChanges;
- (void)_configureManagedObjectContext;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain) id account; // @synthesize account=_account;

@end

