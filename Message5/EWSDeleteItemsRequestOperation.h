/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EWSDeleteItemsRequestOperation : EWSRequestOperation <NSCoding>
{
    NSArray *_EWSItemIds;
    NSString *_folderIdString;
}

+ (Class)classForResponse;
- (id)initWithEWSItemIds:(id)arg1 folderIdString:(id)arg2 gateway:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (void)_ewsDeleteItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 folderIdString:(id)arg2;
- (id)activityString;
- (id)prepareRequest;
- (void)setupOfflineResponse;
@property(retain, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
@property(retain, nonatomic) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;

@end

