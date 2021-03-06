/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class NSString;

@interface IMAPClientMailboxOperation : IMAPSingleClientOperation
{
    NSString *_mailboxName;
    NSString *_mailboxArgumentName;
}

- (id)initWithMailboxName:(id)arg1;
- (id)_initWithCommandType:(int)arg1 mailboxName:(id)arg2;
- (void)dealloc;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)simpleDescriptionString;
@property(copy) NSString *mailboxArgumentName; // @synthesize mailboxArgumentName=_mailboxArgumentName;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;

@end

