/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSOperation.h"

@class ActivityMonitor, NSString;

@interface MonitoredOperation : NSOperation
{
    ActivityMonitor *_parentMonitor;
    ActivityMonitor *_monitor;
}

- (id)init;
- (void)dealloc;
- (void)main;
@property(readonly) NSString *activityString;
- (void)executeOperation;
@property(retain, nonatomic) ActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) ActivityMonitor *parentMonitor; // @synthesize parentMonitor=_parentMonitor;

@end
