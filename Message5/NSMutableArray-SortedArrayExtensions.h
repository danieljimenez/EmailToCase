/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSMutableArray.h"

@interface NSMutableArray (SortedArrayExtensions)
- (unsigned long long)insertObject:(id)arg1 usingSortFunction:(void *)arg2 context:(void *)arg3;
- (unsigned long long)indexOfObject:(id)arg1 usingSortFunction:(void *)arg2 context:(void *)arg3;
- (unsigned long long)indexOfSimilarObject:(id)arg1 usingSortFunction:(void *)arg2 context:(void *)arg3;
- (BOOL)mf_containsObject:(id)arg1 usingComparator:(id)arg2;
- (unsigned long long)mf_insertObject:(id)arg1 usingComparator:(id)arg2;
- (unsigned long long)mf_removeObject:(id)arg1 usingComparator:(id)arg2;
@end

