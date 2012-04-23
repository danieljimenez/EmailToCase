/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EWSExchangeServiceBindingDelegate <NSObject>
- (void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;

@optional
- (void)exchangeServiceBinding:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didFailWithError:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didReceiveCertificateError:(id)arg2;
- (BOOL)exchangeServiceBinding:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
@end

