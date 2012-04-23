/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSGetItemsResponseOperation;

@interface EWSSuppressReadReceiptsRequestOperation : EWSRequestOperation
{
    EWSGetItemsResponseOperation *_getItemsResponse;
}

+ (Class)classForResponse;
- (id)initWithGetItemsResponse:(id)arg1 gateway:(id)arg2;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)prepareRequest;
@property(retain, nonatomic) EWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;

@end
