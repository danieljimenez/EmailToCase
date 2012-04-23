/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class ActivityMonitor, MailAccount, QuotaUsage;

@interface SizeEngine : NSObject
{
    MailAccount *_account;
    QuotaUsage *_totalUsage;
    ActivityMonitor *_monitor;
    long long _monitorAccessKey;
    BOOL _isActive;
}

- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)account;
- (id)totalUsage;
- (void)refresh;
- (void)cancel;
- (void)start;
- (void)stop;
- (void)_startWorkerThreadIfNeeded;
- (void)_workerThreadFinished:(id)arg1;
- (void)_runWorkerThread;
- (BOOL)_prepareToRefresh;
- (BOOL)_shouldStartWorkerThread;
- (void)_postChangeNotificationWithUserInfo:(id)arg1;

@end
