/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EntryTransporter : NSObject
{
    NSString *_title;
    NSString *_identifier;
    NSURL *_alternateURL;
    NSURL *_baseURL;
    BOOL _isRead;
    BOOL _isFlagged;
    long long _rank;
    NSDate *_datePublished;
    NSTimeZone *_timeZonePublished;
    NSDate *_dateUpdated;
    NSTimeZone *_timeZoneUpdated;
    NSArray *_authors;
    NSArray *_enclosures;
    NSString *_HTMLContent;
    NSString *_textContent;
}

+ (id)transporterArrayWithEntries:(id)arg1;
- (id)initWithEntry:(id)arg1;
- (void)dealloc;
@property(retain) NSArray *enclosures; // @synthesize enclosures=_enclosures;
@property(retain) NSArray *authors; // @synthesize authors=_authors;
@property(copy) NSString *textContent; // @synthesize textContent=_textContent;
@property(copy) NSString *HTMLContent; // @synthesize HTMLContent=_HTMLContent;
@property(copy) NSTimeZone *timeZoneUpdated; // @synthesize timeZoneUpdated=_timeZoneUpdated;
@property(copy) NSDate *dateUpdated; // @synthesize dateUpdated=_dateUpdated;
@property(copy) NSTimeZone *timeZonePublished; // @synthesize timeZonePublished=_timeZonePublished;
@property(copy) NSDate *datePublished; // @synthesize datePublished=_datePublished;
@property long long rank; // @synthesize rank=_rank;
@property BOOL isFlagged; // @synthesize isFlagged=_isFlagged;
@property BOOL isRead; // @synthesize isRead=_isRead;
@property(copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy) NSURL *alternateURL; // @synthesize alternateURL=_alternateURL;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *title; // @synthesize title=_title;

@end
