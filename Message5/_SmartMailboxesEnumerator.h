/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSArray, _MailboxUidEnumerator;

@interface _SmartMailboxesEnumerator : NSEnumerator
{
    NSArray *_smartMailboxes;
    long long _currentMailboxIndex;
    _MailboxUidEnumerator *_currentMailboxEnumerator;
}

- (id)initWithSmartMailboxUids:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)nextObject;

@end

