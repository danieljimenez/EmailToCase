/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/Connection.h>

#import "EWSExchangeServiceBindingDelegate-Protocol.h"

@class EWSAccount, EWSExchangeServiceBinding;

@interface EWSConnection : Connection <EWSExchangeServiceBindingDelegate>
{
    EWSExchangeServiceBinding *_binding;
    EWSAccount *_account;
}

- (void)dealloc;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)connectAndSetSecurityLayerUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (id)_connectAndAuthenticateUsingAccount:(id)arg1;
- (id)_fetchRootFolderId:(id *)arg1;
- (void)_setupConnectionErrorMessageForMonitor:(id)arg1 withHostname:(id)arg2 port:(unsigned int)arg3 usingSSL:(BOOL)arg4;
- (BOOL)reconnect;
- (BOOL)isValid;
- (void)disconnect;
- (id)sendMessage:(id)arg1 forRequest:(id)arg2;
- (id)_sendMessage:(id)arg1 error:(id *)arg2;
- (void)disconnectWithError:(id)arg1;
- (void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didReceiveCertificateError:(id)arg2;
@property EWSAccount *account; // @synthesize account=_account;
@property(retain) EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;

@end

