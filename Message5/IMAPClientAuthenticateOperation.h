/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class SASLClient;

@interface IMAPClientAuthenticateOperation : IMAPSingleClientOperation
{
    SASLClient *_authenticator;
    BOOL _includeInitialResponse;
}

- (id)initWithAuthenticator:(id)arg1;
- (void)dealloc;
- (id)commandTypeString;
- (id)debugCommandString;
- (BOOL)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)executeOnConnection:(id)arg1;
@property BOOL includeInitialResponse; // @synthesize includeInitialResponse=_includeInitialResponse;
@property(retain) SASLClient *authenticator; // @synthesize authenticator=_authenticator;

@end

