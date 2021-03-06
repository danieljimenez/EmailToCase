/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "DynamicErrorWindowDelegate-Protocol.h"

@class DatabaseRecoverer;

@interface BusyStatusErrorWindowDelegate : NSObject <DynamicErrorWindowDelegate>
{
    DatabaseRecoverer *_recoverer;
}

- (id)initWithRecoverer:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)displayIndeterminateProgress;
- (id)errorMessageForErrorDiagnosis:(long long)arg1;
- (id)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (id)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (id)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (unsigned long long)helpTopicForDiagnosis:(long long)arg1;
- (id)_stringForDatabase;
- (id)_capitalizedStringForDatabase;
@property DatabaseRecoverer *recoverer; // @synthesize recoverer=_recoverer;

@end

