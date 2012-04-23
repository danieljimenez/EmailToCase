/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/Connection.h>

@class NSArray, NSData, NSMutableData;

@interface POP3Connection : Connection
{
    NSMutableData *_sendBuffer;
    struct __CFDictionary *_listResults;
    struct __CFDictionary *_serverMessageIdsByNumber;
    unsigned long long _numberOfMessagesAvailable;
    id <POP3ConnectionDelegate> _delegate;
    id _context;
    long long _activityMonitorKey;
    unsigned long long _numberOfMessagesToFetch;
    unsigned long long _numberOfMessagesFetched;
    unsigned long long _totalBytesToFetch;
    unsigned long long _totalBytesReceived;
    NSData *_apopTimeStamp;
    NSArray *_capabilities;
    BOOL _capaCommandFailed;
    BOOL _connectionShouldPrefetchMessages;
    BOOL _currentlyFetchingMessage;
}

- (id)init;
- (void)dealloc;
- (id)capabilities;
- (id)authenticationMechanisms;
- (BOOL)_teardownConnectionWithResult:(BOOL)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)_authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (long long)_authenticateUsingHostname:(id)arg1 username:(id)arg2 password:(id)arg3 authScheme:(id)arg4 authenticator:(id)arg5;
- (long long)_apopAuthenticateWithUsername:(id)arg1 password:(id)arg2;
- (long long)_authenticateWithUsername:(id)arg1 password:(id)arg2;
- (int)quit;
- (BOOL)supportsUSER;
- (BOOL)supportsAPOP;
- (int)doStat;
- (int)_getListResults;
- (int)getMessageNumbers:(const struct __CFArray **)arg1 andMessageIdsByNumber:(const struct __CFDictionary **)arg2;
- (id)messageIDForMessageNumber:(unsigned long long)arg1;
- (void)setMessageID:(id)arg1 forMessageNumber:(unsigned long long)arg2;
- (id)_newDataForMessage:(unsigned long long)arg1 ofSize:(unsigned long long)arg2 informDelegate:(BOOL)arg3;
- (int)_retr:(unsigned long long)arg1;
- (int)dele:(unsigned long long)arg1;
- (id)newMessageHeaderForMessageNumber:(unsigned long long)arg1;
- (void)getTopOfMessageNumber:(unsigned long long)arg1 intoMutableData:(id)arg2;
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)arg1;
- (BOOL)messagesAvailable;
- (unsigned long long)numberOfMessagesAvailable;
- (int)fetchMessages:(struct __CFArray *)arg1 totalBytes:(unsigned long long)arg2;
- (int)deleteMessagesOnServer:(struct __CFArray *)arg1;
- (void)setDelegate:(id)arg1 context:(id)arg2;
- (BOOL)_startTLSForHostname:(id)arg1 onPort:(unsigned int)arg2 securityLayerType:(long long)arg3 accountClass:(Class)arg4;
- (long long)_startTLSForSecurityLayerType:(long long)arg1;
- (int)_readMultilineResponseWithMaxSize:(unsigned long long)arg1 intoMutableData:(id)arg2 informDelegate:(BOOL)arg3;
- (int)_sendCommand:(const char *)arg1 dontLogIndex:(long long)arg2 withArguments:(id)arg3;
- (id)_copyReplyLineDataWithError:(id *)arg1;
- (id)_copyReplyLineData;
- (void)_parsePOPErrorFromData:(id)arg1 error:(id)arg2;
- (int)_getStatusFromReply;
- (int)_apopWithUsername:(id)arg1 password:(id)arg2;
- (int)_user:(id)arg1;
- (int)_pass:(id)arg1;
@property(nonatomic) long long activityMonitorKey; // @synthesize activityMonitorKey=_activityMonitorKey;
@property(nonatomic) BOOL currentlyFetchingMessage; // @synthesize currentlyFetchingMessage=_currentlyFetchingMessage;
@property(nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property(nonatomic) unsigned long long totalBytesToFetch; // @synthesize totalBytesToFetch=_totalBytesToFetch;
@property(nonatomic) unsigned long long numberOfMessagesFetched; // @synthesize numberOfMessagesFetched=_numberOfMessagesFetched;
@property(nonatomic) unsigned long long numberOfMessagesToFetch; // @synthesize numberOfMessagesToFetch=_numberOfMessagesToFetch;
@property(retain, nonatomic) id context; // @synthesize context=_context;

@end

