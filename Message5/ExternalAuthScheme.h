/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/AuthScheme.h>

@interface ExternalAuthScheme : AuthScheme
{
}

- (id)name;
- (id)humanReadableName;
- (BOOL)requiresPassword;
- (long long)securityLevel;
- (unsigned int)applescriptScheme;

@end

