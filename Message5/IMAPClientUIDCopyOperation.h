/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPClientUIDOperation.h>

@class NSDictionary, NSString;

@interface IMAPClientUIDCopyOperation : IMAPClientUIDOperation
{
    NSString *_destinationMailboxName;
    NSString *_destinationMailboxArgumentName;
    NSDictionary *_messageInfo;
    BOOL _shouldTryCreate;
}

- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 destinationMailboxName:(id)arg3;
- (void)dealloc;
- (id)commandTypeString;
- (id)detailsString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)executeOnConnection:(id)arg1;
@property BOOL shouldTryCreate; // @synthesize shouldTryCreate=_shouldTryCreate;
@property(retain) NSDictionary *messageInfo; // @synthesize messageInfo=_messageInfo;
@property(copy) NSString *destinationMailboxArgumentName; // @synthesize destinationMailboxArgumentName=_destinationMailboxArgumentName;
@property(copy) NSString *destinationMailboxName; // @synthesize destinationMailboxName=_destinationMailboxName;

@end

