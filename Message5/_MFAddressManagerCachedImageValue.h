/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage;

@interface _MFAddressManagerCachedImageValue : NSObject
{
    NSImage *_image;
    double _fetchDate;
}

- (id)initWithImage:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isStaleImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;

@end

