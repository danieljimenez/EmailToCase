/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSLocking-Protocol.h"

@class NSLock, NSMachPort, NSString;

@interface MFCrossProcessLock : NSObject <NSLocking>
{
    NSString *_identifier;
    NSMachPort *_port;
    NSLock *_lock;
    long long _lockCount;
}

+ (id)defaultMailCrossProcessLock;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)arg1;
- (id)description;

@end

