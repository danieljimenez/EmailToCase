/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSResponseOperation.h>

@class EWSUserOofSettingsType;

@interface EWSGetUserOofSettingsResponseOperation : EWSResponseOperation
{
    EWSUserOofSettingsType *_OofSettings;
    long long _AllowExternalOof;
}

- (void)dealloc;
- (void)executeOperation;
@property long long AllowExternalOof; // @synthesize AllowExternalOof=_AllowExternalOof;
@property(retain) EWSUserOofSettingsType *OofSettings; // @synthesize OofSettings=_OofSettings;

@end

