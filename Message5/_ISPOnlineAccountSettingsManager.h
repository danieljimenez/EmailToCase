/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/ISPAccountSettingsManager.h>

@class NSCache, NSString;

@interface _ISPOnlineAccountSettingsManager : ISPAccountSettingsManager
{
    NSString *_ispAccountsXQuery;
    NSCache *_fetchedISPPlistsByDomain;
}

- (id)init;
- (void)dealloc;
- (id)_persistanceFolderName;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (id)_ispPlistForDomain:(id)arg1;
- (id)_fetchISPDataForDomain:(id)arg1;
- (id)_ispPlistFromXMLDocument:(id)arg1;
- (void)_finalizeISPAccountsSettings:(id)arg1;
- (id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)emptyCache;

@end

