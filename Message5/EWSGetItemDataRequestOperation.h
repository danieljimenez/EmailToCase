/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class NSArray;

@interface EWSGetItemDataRequestOperation : EWSRequestOperation
{
    NSArray *_itemIdTypes;
}

+ (Class)classForResponse;
- (id)initWithItemIdTypes:(id)arg1 dataHandler:(id)arg2 gateway:(void)arg3 errorHandler:(id)arg4;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)activityString;
- (id)prepareRequest;
@property(retain, nonatomic) NSArray *itemIdTypes; // @synthesize itemIdTypes=_itemIdTypes;

@end
