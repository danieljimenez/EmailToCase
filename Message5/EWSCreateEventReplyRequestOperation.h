/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSCreateItemRequestOperation.h>

@class EWSGetItemsResponseOperation, NSString;

@interface EWSCreateEventReplyRequestOperation : EWSCreateItemRequestOperation
{
    NSString *_messageMeetingItemIdString;
    BOOL _messageResponseType;
    EWSGetItemsResponseOperation *_getItemsResponse;
}

+ (Class)classForResponse;
- (id)initWithItemIdString:(id)arg1 folderIdString:(id)arg2 messageType:(BOOL)arg3 responseType:(BOOL)arg4 disposition:(long long)arg5 gateway:(id)arg6 errorHandler:(id)arg7;
- (void)_ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:(id)arg1 responseType:(BOOL)arg2;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)prepareRequest;
@property(retain, nonatomic) EWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
@property(nonatomic) BOOL messageResponseType; // @synthesize messageResponseType=_messageResponseType;
@property(retain, nonatomic) NSString *messageMeetingItemIdString; // @synthesize messageMeetingItemIdString=_messageMeetingItemIdString;

@end

