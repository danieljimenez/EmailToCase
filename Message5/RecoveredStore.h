/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MessageStore.h>

@class NSArray;

@interface RecoveredStore : MessageStore
{
    NSArray *_pathsToImport;
}

- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 pathsToImport:(id)arg3;
- (id)init;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)dealloc;
- (void)writeUpdatedMessageDataToDisk;
- (id)messagesForImporter;

@end
