/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSToolbarItem.h"

@class SegmentedToolbarItem;

@interface SegmentedToolbarItemSegmentItem : NSToolbarItem
{
    SegmentedToolbarItem *_parent;
    long long _segmentNumber;
}

- (id)menuFormRepresentation;
- (void)setToolTip:(id)arg1;
- (void)_setToolTip:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)_setTag:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
@property (assign) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property (retain) SegmentedToolbarItem *parent; // @synthesize parent=_parent;

@end
