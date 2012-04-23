/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMachPortDelegate-Protocol.h"

@class MFError, NSInvocation, NSMachPort, NSMutableSet, NSString, SafeValueCache;

@interface ActivityMonitor : NSObject <NSMachPortDelegate>
{
    NSString *_itemDescription;
    NSString *_taskName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    NSMutableSet *_subMonitors;
    NSInvocation *_cancelInvocation;
    NSMachPort *_cancelPort;
    SafeValueCache *_targetDisplayNameCache;
    MFError *_error;
    id _delegate;
    id _target;
    double _doneValue;
    double _previousDoneness;
    double _itemValue;
    double _itemMinValue;
    double _itemMaxValue;
    double _startTime;
    double _itemLastNotifiedTime;
    double _percentDone;
    long long _shouldUnifyDoneness;
    long long _currentProgressStage;
    long long _numberOfProgressStages;
    long long _key;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    unsigned long long _itemFudgeFactor;
    int _changeCount;
    int _activityType;
    unsigned char _priority;
    BOOL _canCancel;
    BOOL _shouldCancel;
    BOOL _isActive;
    BOOL _isProgressing;
    BOOL _shouldPromptUserOnTermination;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)determinateProgress;
+ (void)setCurrentMonitor:(id)arg1;
+ (id)currentMonitorIfExists;
+ (id)currentMonitor;
- (id)init;
- (void)dealloc;
- (BOOL)isActive;
- (void)setDelegate:(id)arg1;
- (void)postActivityStarting;
- (void)handlePortMessage:(id)arg1;
- (void)postActivityFinished;
- (void)_didChange;
- (int)changeCount;
- (void)setStatusMessage:(id)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (id)statusMessage;
- (void)setPercentDone:(double)arg1;
- (double)percentDone;
- (double)unifiedFractionDone;
- (void)beginProgressFor:(long long)arg1;
- (unsigned char)priority;
- (void)setPriority:(unsigned char)arg1;
- (id)activityDescription;
- (id)_updatedTargetDisplayName:(id)arg1;
- (id)taskDescriptionString;
- (id)description;
- (id)taskName;
- (void)setTaskName:(id)arg1;
- (void)setActivityTarget:(id)arg1;
- (id)activityTarget;
- (void)addActivityTarget:(id)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (id)activityTargets;
@property(nonatomic) BOOL canBeCancelled;
@property(nonatomic) BOOL shouldCancel;
- (void)addSubMonitor:(id)arg1;
- (void)removeSubMonitor:(id)arg1;
- (void)cancel;
- (long long)acquireExclusiveAccessKey;
- (void)relinquishExclusiveAccessKey:(long long)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(long long)arg3;
- (void)setStatusMessage:(id)arg1 withKey:(long long)arg2;
- (void)setPercentDone:(double)arg1 withKey:(long long)arg2;
- (void)_setCancelPort:(id)arg1;
- (id)cancelPort;
- (void)updateDoneValue;
@property double doneValue; // @synthesize doneValue=_doneValue;
- (int)activityType;
- (void)setActivityType:(int)arg1;
- (void)setItemFudgeFactor:(unsigned long long)arg1;
@property BOOL isProgressing; // @synthesize isProgressing=_isProgressing;
@property double itemMaxValue; // @synthesize itemMaxValue=_itemMaxValue;
- (void)setItemIndeterminateValue;
- (void)setItem:(id)arg1;
- (void)resetItemValue;
@property double itemValue; // @synthesize itemValue=_itemValue;
@property unsigned long long itemsDone; // @synthesize itemsDone=_itemsDone;
@property unsigned long long itemsTotal; // @synthesize itemsTotal=_itemsTotal;
- (void)incrementItemValue:(double)arg1;
- (void)incrementItemsDone:(unsigned long long)arg1;
- (void)incrementItemsTotal:(unsigned long long)arg1;
- (void)markCompleted:(BOOL)arg1;
- (void)resetActivityType;
- (BOOL)shouldPromptUserOnTermination;
- (void)setShouldPromptUserOnTermination;
@property(retain) MFError *error; // @synthesize error=_error;
@property double itemMinValue; // @synthesize itemMinValue=_itemMinValue;
@property(copy) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain) NSInvocation *cancelInvocation; // @synthesize cancelInvocation=_cancelInvocation;

@end
