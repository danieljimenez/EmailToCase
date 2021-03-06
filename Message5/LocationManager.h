/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class InvocationQueue, NSMutableArray, NetworkLocation;

@interface LocationManager : NSObject
{
    NSMutableArray *_locations;
    NetworkLocation *_current;
    InvocationQueue *_invocationQueue;
    BOOL _supressNotifications;
}

+ (id)sharedManager;
+ (id)currentLocation;
- (id)init;
- (id)initWithUserDefaultsArray:(id)arg1;
- (void)dealloc;
- (void)setCurrentLocation:(id)arg1;
- (id)currentLocation;
- (void)addLocation:(id)arg1;
- (id)locationForDomain:(id)arg1;
- (id)locationForIPAddress:(id)arg1;
- (void)_networkChanged:(id)arg1;
- (void)_determineCurrentLocation;
- (void)_managedLocationChanged:(id)arg1;
- (void)_unarchiveLocations:(id)arg1;
- (id)_archivedLocations;

@end

