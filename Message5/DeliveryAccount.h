/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/Account.h>

@interface DeliveryAccount : Account
{
}

+ (void)initialize;
+ (void)reloadDeliveryAccounts;
+ (id)_deliveryAccountsIncludingUnknownTypes;
+ (id)deliveryAccounts;
+ (id)syncableDeliveryAccounts;
+ (void)setDeliveryAccounts:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (void)addDeliveryAccountToMail:(id)arg1;
+ (void)insertObjectInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)sortDeliveryAccountsByUniqueID:(id)arg1;
+ (void)removeDeliveryAccount:(id)arg1;
+ (void)registerDynamicAccount:(id)arg1;
+ (void)unregisterDynamicAccount:(id)arg1;
+ (void)clearIsSyncableForHTTPMailAccounts;
+ (void)_postDeliveryAccountsHaveChanged;
+ (void)saveAccountInfoToDefaults;
+ (id)_identifierWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountFromMailWithIdentifier:(id)arg1;
+ (id)_accountFromCollection:(id)arg1 withIdentifier:(id)arg2;
+ (id)accountWithDomain:(id)arg1;
+ (id)accountWithWhichToSendMessage:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountFromMailWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 addToDeliveryAccountsIfNeeded:(BOOL)arg4;
- (Class)deliveryClass;
- (BOOL)isDynamic;
- (id)associatedAccount;
- (void)setAssociatedAccount:(id)arg1;
- (id)displayName;
- (id)identifier;
- (void)updateFromSyncedDictionary:(id)arg1;
- (BOOL)shouldUseAuthentication;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (unsigned long long)maximumMessageBytes;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (id)remoteMailAccountsEmployedBy;

@end
