/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@interface MVMailBundle : NSObject
{
}

+ (id)allBundles;
+ (id)composeAccessoryViewOwners;
+ (void)registerBundle;
+ (id)sharedInstance;
+ (BOOL)hasPreferencesPanel;
+ (id)preferencesOwnerClassName;
+ (id)preferencesPanelName;
+ (BOOL)hasComposeAccessoryViewOwner;
+ (id)composeAccessoryViewOwnerClassName;
- (void)dealloc;
- (void)_registerBundleForNotifications;

@end

