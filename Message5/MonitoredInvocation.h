/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSInvocation.h"

@class ActivityMonitor;

@interface MonitoredInvocation : NSInvocation
{
    ActivityMonitor *_monitor;
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(unsigned char)arg4 canBeCancelled:(BOOL)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(unsigned char)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(unsigned char)arg6 canBeCancelled:(BOOL)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 taskName:(id)arg6 priority:(unsigned char)arg7 canBeCancelled:(BOOL)arg8;
- (void)dealloc;
- (void)finalize;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (void)setShouldPromptUserOnTermination;
- (void)invoke;
- (unsigned char)priority;

@end

