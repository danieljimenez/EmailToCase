/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/RemoteStoreAccount.h>

@class EWSConnection, EWSDeliveryAccount, EWSGateway, InvocationQueue, MFUUID, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL;

@interface EWSAccount : RemoteStoreAccount
{
    double _lastFullFetchDuration;
    double _lastFullFetchTime;
    EWSConnection *_connection;
    EWSGateway *_gateway;
    EWSDeliveryAccount *_ewsDeliveryAccount;
    NSMutableDictionary *_folderIdsToMailboxUids;
    NSDictionary *_distinguishedFolderIdsAndMailboxUidTypes;
    NSString *_syncIssuesEntryID;
    InvocationQueue *_networkChangeQueue;
    id _connectionLock;
    id _folderHierarchySyncLock;
    MFUUID *_messageTracerUUID;
    NSOperationQueue *_ewsQueue;
    long long _externalAudienceType;
    BOOL _useExternalURL;
}

+ (id)accountTypeString;
+ (id)defaultPathNameForAccount;
+ (id)keyPathsForValuesAffecting_URLInternalConnectionScheme;
+ (id)keyPathsForValuesAffecting_URLExternalConnectionScheme;
+ (id)keyPathsForValuesAffectingInternalConnectionURL;
+ (id)keyPathsForValuesAffectingExternalConnectionURL;
+ (id)_iCalAccountForHostname:(id)arg1 username:(id)arg2;
+ (BOOL)iCalAccountExistsForHostname:(id)arg1 username:(id)arg2;
+ (BOOL)iCalAccountExistsWithRootFolderId:(id)arg1;
+ (id)_iCalAccountWithRootFolderId:(id)arg1;
+ (id)_addressBookAccountForHostname:(id)arg1 username:(id)arg2;
+ (BOOL)addressBookAccountExistsForHostname:(id)arg1 username:(id)arg2;
+ (BOOL)addressBookAccountExistsWithRootFolderId:(id)arg1;
+ (id)_addressBookAccountWithRootFolderId:(id)arg1;
+ (id)existingAccountFromMailWithRootFolderId:(id)arg1;
+ (BOOL)setInternalURL:(id)arg1 externalURL:(id)arg2 forAccountWithRootFolderId:(id)arg3;
+ (void)resetAllFolderHierarchySyncStates;
- (id)initWithAccountInfo:(id)arg1;
- (void)dealloc;
- (id)iaServiceType;
- (Class)connectionClass;
- (unsigned int)defaultPortNumber;
- (unsigned int)defaultSecurePortNumber;
- (BOOL)requiresAuthentication;
- (long long)securityLayerType;
- (void)setSecurityLayerType:(long long)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)_setAccountInfo:(id)arg1;
- (id)defaultsDictionary;
- (void)setUsesSSL:(BOOL)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (id)permanentPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)sessionPassword;
- (void)setSessionPassword:(id)arg1;
- (id)_passwordWithPersistence:(unsigned long long)arg1;
- (void)_setPassword:(id)arg1 persistence:(unsigned long long)arg2;
- (BOOL)isSyncable;
- (id)newConnectedConnection;
- (id)authenticatedConnection;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (void)releaseAllConnections;
- (void)setIsOffline:(BOOL)arg1;
- (id)_URLPersistenceScheme;
- (id)_URLInternalConnectionScheme;
- (id)_URLExternalConnectionScheme;
- (Class)storeClass;
- (BOOL)supportsRichTextNotes;
- (BOOL)defaultShouldShowNotesInInbox;
- (id)mailboxPathExtension;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (void)setShouldMoveDeletedMessagesToTrash:(BOOL)arg1;
- (id)primaryMailboxUid;
- (BOOL)deleteConvertsStoreToFolder;
- (void)fetchSynchronouslyIsAuto:(id)arg1;
- (void)synchronizeAllMailboxes;
- (BOOL)_shouldSynchronizeMailbox:(id)arg1;
- (void)_synchronizeMailboxesSynchronously;
- (BOOL)_supportsMailboxListInitialization;
- (BOOL)_synchronizeMailboxListWithUserInput:(BOOL)arg1;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (id)_specialMailboxNameForType:(int)arg1;
- (void)_setSpecialMailboxName:(id)arg1 forType:(int)arg2;
- (BOOL)_readMailboxCache;
- (void)setEmailAddresses:(id)arg1;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2 displayName:(id)arg3;
- (id)_createMailboxWithParent:(id)arg1 name:(id)arg2 displayName:(id)arg3 type:(int)arg4;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)_deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (BOOL)supportsSlashesInMailboxName;
- (id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id *)arg3;
- (id)_mailboxNameForFolderName:(id)arg1;
- (id)_folderNameForMailboxName:(id)arg1;
- (id)deliveryAccount;
- (void)setDeliveryAccount:(id)arg1;
- (id)dynamicDeliveryAccount;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 isLocal:(BOOL)arg3;
- (BOOL)storeJunkOnServerDefault;
@property(retain) NSString *externalHostname; // @dynamic externalHostname;
@property unsigned int externalPortNumber; // @dynamic externalPortNumber;
@property BOOL externalUsesSSL; // @dynamic externalUsesSSL;
@property(copy) NSString *internalServerPath; // @dynamic internalServerPath;
@property(copy) NSString *externalServerPath; // @dynamic externalServerPath;
- (id)_serverPathWithAccountInfoKey:(id)arg1;
- (void)_setServerPath:(id)arg1 accountInfoKey:(id)arg2;
@property(retain) NSString *folderHierarchySyncState; // @dynamic folderHierarchySyncState;
@property(retain) NSString *rootFolderId;
@property(retain) NSURL *lastUsedAutodiscoverURL;
@property NSURL *internalConnectionURL; // @dynamic internalConnectionURL;
@property NSURL *externalConnectionURL; // @dynamic externalConnectionURL;
- (id)_connectionURL:(BOOL)arg1;
- (void)_setConnectionURL:(id)arg1 isExternal:(BOOL)arg2;
@property(readonly) NSURL *connectionURL; // @dynamic connectionURL;
- (BOOL)_isSameAsCalGroup:(id)arg1;
- (void)getUserOofSettings;
- (void)setUserOofSettingsState:(long long)arg1 internalReply:(id)arg2 externalReply:(id)arg3 startTime:(id)arg4 endTime:(id)arg5;
- (void)_networkConfigurationChanged:(id)arg1;
- (BOOL)_shouldHideMailboxUid:(id)arg1 withType:(int)arg2;
- (void)_handleConnectionError:(id)arg1 isUnsupportedVersionError:(char *)arg2 shouldRedoAutodiscovery:(char *)arg3;
- (BOOL)_redoAutodiscovery;
- (id)remoteTaskQueue;
- (id)mailboxNameForFolderIdString:(id)arg1;
- (void)createMailboxFromEWSFolder:(id)arg1;
- (BOOL)_isSyncIssuesFolder:(id)arg1;
- (void)updateMailboxForEWSFolder:(id)arg1;
- (void)deleteMailboxForEWSFolderIdString:(id)arg1;
- (void)deleteEWSItemsWithIdStrings:(id)arg1 fromFolderWithIdString:(id)arg2;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1 fromFolderWithIdString:(id)arg2;
- (id)deletedEWSIdStringsFromStrings:(id)arg1 inFolderWithIdString:(id)arg2;
- (void)updateEWSOfflineIdsToRealIds:(id)arg1 forFolders:(BOOL)arg2;
- (void)_setupMailboxUid:(id)arg1 forFolderId:(id)arg2;
- (id)_mailboxUidForFolderId:(id)arg1;
- (void)_setMailboxUid:(id)arg1 forFolderId:(id)arg2;
- (void)_saveFolderId:(id)arg1 forMailbox:(id)arg2;
- (void)_clearFolderId:(id)arg1 forMailbox:(id)arg2;
- (id)_loadFolderIdForMailboxUid:(id)arg1;
- (BOOL)_setEWSError:(id)arg1;
@property long long externalAudienceType; // @synthesize externalAudienceType=_externalAudienceType;
@property(retain) NSString *syncIssuesEntryID; // @synthesize syncIssuesEntryID=_syncIssuesEntryID;
@property BOOL useExternalURL; // @synthesize useExternalURL=_useExternalURL;
@property(retain) MFUUID *messageTracerUUID; // @synthesize messageTracerUUID=_messageTracerUUID;
@property double lastFullFetchTime; // @synthesize lastFullFetchTime=_lastFullFetchTime;
@property double lastFullFetchDuration; // @synthesize lastFullFetchDuration=_lastFullFetchDuration;
@property(retain) EWSConnection *connection; // @synthesize connection=_connection;
@property(retain) NSDictionary *distinguishedFolderIdsAndMailboxUidTypes; // @synthesize distinguishedFolderIdsAndMailboxUidTypes=_distinguishedFolderIdsAndMailboxUidTypes;
@property(retain, nonatomic) EWSGateway *gateway; // @synthesize gateway=_gateway;

@end
