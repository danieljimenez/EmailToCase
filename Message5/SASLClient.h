/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class Account, NSString;

@interface SASLClient : NSObject
{
    NSString *_mechanismName;
    Account *_account;
    long long _authenticationState;
    unsigned int _encryptionBufferSize;
    BOOL _justSentPlainTextPassword;
}

+ (void)initializeSASLClient;
+ (id)newSASLClientWithMechanismName:(id)arg1 account:(id)arg2 externalSecurityLayer:(unsigned int)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)resetWithExternalSecurityLayer:(unsigned int)arg1;
@property(nonatomic) unsigned int encryptionBufferSize; // @synthesize encryptionBufferSize=_encryptionBufferSize;
@property(nonatomic) BOOL justSentPlainTextPassword; // @synthesize justSentPlainTextPassword=_justSentPlainTextPassword;
@property(nonatomic) long long authenticationState; // @synthesize authenticationState=_authenticationState;
@property(retain, nonatomic) Account *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *mechanismName; // @synthesize mechanismName=_mechanismName;

@end

