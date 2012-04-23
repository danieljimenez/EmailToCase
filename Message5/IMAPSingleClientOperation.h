/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPClientOperation.h>

@class MFError, NSMutableArray, NSString;

@interface IMAPSingleClientOperation : IMAPClientOperation
{
    NSMutableArray *_untaggedResponses;
    MFError *_error;
    unsigned long long _sequenceNumber;
    unsigned long long _sessionNumber;
    BOOL _isComplete;
}

- (void)dealloc;
- (int)composition;
@property(readonly) BOOL handlesAllUntaggedResponses;
@property unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (void)cleanupAfterCompletion;
@property(readonly) NSString *debugCommandString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
@property(readonly) NSString *tag;
- (id)newCommandString;
@property BOOL isComplete; // @synthesize isComplete=_isComplete;
@property unsigned long long sessionNumber; // @synthesize sessionNumber=_sessionNumber;
@property(retain) MFError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *untaggedResponses; // @synthesize untaggedResponses=_untaggedResponses;

@end

