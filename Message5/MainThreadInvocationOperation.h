/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/ThrowingInvocationOperation.h>

@interface MainThreadInvocationOperation : ThrowingInvocationOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)start;
- (void)main;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isFinished;
- (void)_finish;

@end

