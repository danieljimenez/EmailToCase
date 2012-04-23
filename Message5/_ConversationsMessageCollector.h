/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageConsumer-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface _ConversationsMessageCollector : NSObject <MessageConsumer>
{
    NSMutableArray *_messages;
    NSMutableDictionary *_conversationsMembers;
}

- (id)init;
- (void)dealloc;
- (id)messages;
- (id)conversationsMembers;
- (void)newMessagesAvailable:(id)arg1 conversationsMembersByMessageID:(id)arg2;
- (BOOL)shouldCancel;
- (void)finishedSendingMessages;

@end

