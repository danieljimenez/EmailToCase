/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MessageBody.h>

@class NSMutableData;

@interface _OutgoingMessageBody : MessageBody
{
    NSMutableData *_rawData;
}

- (id)init;
- (void)dealloc;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)clearMessageWithoutReleasing;
@property(retain, nonatomic) NSMutableData *rawData; // @synthesize rawData=_rawData;

@end
