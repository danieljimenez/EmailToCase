/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPClientMailboxOperation.h>

@class IMAPMailbox;

@interface IMAPClientSelectOperation : IMAPClientMailboxOperation
{
    IMAPMailbox *_imapMailbox;
    BOOL _delayed;
}

- (id)initWithMailboxName:(id)arg1;
- (void)dealloc;
- (id)commandTypeString;
- (BOOL)handlesAllUntaggedResponses;
- (BOOL)executeOnConnection:(id)arg1;
- (BOOL)isReady;
- (BOOL)readOnly;
@property BOOL delayed; // @synthesize delayed=_delayed;
@property(retain) IMAPMailbox *imapMailbox; // @synthesize imapMailbox=_imapMailbox;

@end

