/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class AuthScheme, NSData, NSString, SASLClient, _NSSocket;

@interface Connection : NSObject
{
    double _connectTimeout;
    double _readWriteTimeout;
    _NSSocket *_socket;
    char *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    NSData *_logData;
    Class _accountClass;
    NSString *_username;
    NSString *_password;
    AuthScheme *_authScheme;
    SASLClient *_saslClient;
    NSString *_hostname;
    struct OpaqueSecIdentityRef *_clientIdentity;
    long long _securityLayerType;
    unsigned int _portNumber;
    BOOL _canReauthenticate;
}

+ (void)initialize;
+ (void)logBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (void)flushLog;
+ (id)logClasses;
+ (void)setLogClasses:(id)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)_resetLogHeader;
- (void)_setupSSLDomainError:(id)arg1 hostname:(id)arg2 socket:(id)arg3;
- (void)_setupConnectionErrorMessageForMonitor:(id)arg1 withHostname:(id)arg2 port:(unsigned int)arg3 usingSSL:(BOOL)arg4;
- (BOOL)connectAndSetSecurityLayerUsingAccount:(id)arg1;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)reconnect;
- (BOOL)_connectUsingAccount:(id)arg1 securityLayerType:(long long)arg2;
- (BOOL)_connectUsingHostname:(id)arg1 onPort:(unsigned int)arg2 securityLayerType:(long long)arg3 clientIdentity:(struct OpaqueSecIdentityRef *)arg4 accountClass:(Class)arg5;
- (void)_clearSuccessfulConnection;
- (void)_setSuccessfulConnectionHostname:(id)arg1 onPort:(unsigned int)arg2 securityLayerType:(long long)arg3 clientIdentity:(struct OpaqueSecIdentityRef *)arg4 accountClass:(Class)arg5;
- (void)_setupConnection;
- (BOOL)_teardownConnectionWithResult:(BOOL)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)_reauthenticate;
- (void)_clearSuccessfulAuthentication;
- (void)_setSuccessfulAuthenticationUsername:(id)arg1 password:(id)arg2 authScheme:(id)arg3 saslClient:(id)arg4;
- (unsigned int)cipherKeyLength;
- (id)capabilities;
- (id)authenticationMechanisms;
- (BOOL)_writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange)arg2 error:(id *)arg3;
- (BOOL)_writeData:(id)arg1 error:(id *)arg2;
- (long long)_readBytesFromSocketIntoBuffer:(char *)arg1 amount:(long long)arg2 requireAllBytes:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_fillBuffer:(id *)arg1;
- (BOOL)_readLineIntoData:(id)arg1 error:(id *)arg2;
- (BOOL)_readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)_startTLSForHostname:(id)arg1 onPort:(unsigned int)arg2 securityLayerType:(long long)arg3 accountClass:(Class)arg4;
- (long long)_startTLSForSecurityLayerType:(long long)arg1;
- (BOOL)isValid;
- (void)disconnect;
- (void *)_socket;
- (BOOL)_hasBytesAvailable;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property double readWriteTimeout; // @synthesize readWriteTimeout=_readWriteTimeout;
@property double connectTimeout; // @synthesize connectTimeout=_connectTimeout;

@end

