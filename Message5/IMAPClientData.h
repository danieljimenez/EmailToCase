/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData, NSMutableString;

@interface IMAPClientData : NSObject
{
    NSMutableData *_data;
    NSMutableString *_commandString;
    IMAPClientData *_nextData;
    struct _NSRange _dontLogRange;
    BOOL _isFrozen;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithStringWaitingForArguments:(id)arg1;
- (void)addStringArgument:(id)arg1;
- (void)addDataArgument:(id)arg1 literalPlus:(BOOL)arg2;
- (void)freeze;
@property BOOL isFrozen; // @synthesize isFrozen=_isFrozen;
@property struct _NSRange dontLogRange; // @synthesize dontLogRange=_dontLogRange;
@property(retain) IMAPClientData *nextData; // @synthesize nextData=_nextData;
@property(retain) NSMutableString *commandString; // @synthesize commandString=_commandString;
@property(retain) NSMutableData *data; // @synthesize data=_data;

@end

