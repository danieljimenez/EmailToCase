/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class BookmarksManager;

@interface SafariBookmarksLoader : NSObject
{
    BookmarksManager *_bookmarksManager;
}

- (id)init;
- (id)initWithManager:(id)arg1;
- (void)dealloc;
- (void)_loadBookmarkItemsFromDictionary:(id)arg1 position:(long long)arg2 parent:(id)arg3 folders:(id)arg4;
- (void)loadSafariBookmarks;

@end

