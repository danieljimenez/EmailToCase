/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface JunkMailFilter : NSObject
{
    struct __LSMMap *_map;
    NSString *_mapFilePath;
    NSURL *_mapFileURL;
    NSURL *_oldMapFileURL;
    double _lsmThreshold;
    BOOL _isDirty;
    BOOL _isInTraining;
    BOOL _useCleanMap;
}

+ (id)sharedInstance;
+ (id)_junkFilterUsageCounterKeys;
+ (long long)daysUntilTransition;
+ (BOOL)shouldUpdateTrainingDebt;
+ (void)incrementJunkMailTrainingDebtBy:(long long)arg1;
+ (void)incrementJunkMailTrainingCreditBy:(long long)arg1;
+ (void)resetJunkMailTrainingBalance;
+ (void)resetJunkMailUsageCounters;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (struct __LSMMap *)map;
- (void)setMap:(struct __LSMMap *)arg1;
@property(readonly) unsigned long long evaluatedMessageCount;
@property(readonly) unsigned long long evaluatedAsJunkMessageCount;
@property(readonly) unsigned long long manuallyMarkedAsJunkMessageCount;
@property(readonly) unsigned long long manuallyMarkedAsNotJunkMessageCount;
- (void)reset;
- (void)saveTraining;
@property(readonly) long long junkMailTrainingBalance;
@property(readonly) long long junkMailTrainingDebt;
@property(readonly) long long junkMailTrainingCredit;
@property(readonly) BOOL isEnabled;
- (id)state;
@property(readonly) BOOL gatherUsageCounts;
- (id)_usageCounter;
- (int)junkMailLevelForMessage:(id)arg1;
- (int)junkMailLevelForMessage:(id)arg1 junkRecorder:(id)arg2;
- (id)trainOnMessages:(id)arg1 junkMailLevel:(int)arg2;
- (void)userDidReplyToMessage:(id)arg1;
@property(nonatomic) BOOL isDirty;
- (void)_saveTrainingWithDelay;
@property(nonatomic) BOOL isInTraining; // @synthesize isInTraining=_isInTraining;
@property(nonatomic) double lsmThreshold; // @synthesize lsmThreshold=_lsmThreshold;
@property(retain) NSString *mapFilePath; // @synthesize mapFilePath=_mapFilePath;
@property(retain) NSURL *mapFileURL; // @synthesize mapFileURL=_mapFileURL;
@property(retain) NSURL *oldMapFileURL; // @synthesize oldMapFileURL=_oldMapFileURL;
@property(nonatomic) BOOL useCleanMap; // @synthesize useCleanMap=_useCleanMap;

@end

