/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ChangeMerger : NSObject
{
    NSMutableDictionary *_adds;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
}

- (void)add:(id)arg1;
- (void)update:(id)arg1;
- (void)delete:(id)arg1;
- (id)addedObjects;
- (id)updatedObjects;
- (id)deletedObjects;
- (void)changesSaved;

@end

