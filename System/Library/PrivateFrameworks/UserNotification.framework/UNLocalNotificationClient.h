/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNLocationMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, BKSApplicationDataStore, UNLocationMonitor, PCPersistentTimer, NSMutableSet, NSArray, NSMutableDictionary, NSObject;

@interface UNLocalNotificationClient : NSObject <UNLocationMonitorDelegate> {

	NSString* _bundleIdentifier;
	BKSApplicationDataStore* _dataStore;
	UNLocationMonitor* _locationMonitor;
	PCPersistentTimer* _localNotificationTimer;
	NSMutableSet* _requireLocalNotificationsCachingReasons;
	NSArray* _cachedLocalNotifications;
	NSMutableDictionary* _localNotificationsByMonitoredRegionIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _monitoringLocaleAndTimeChanges;
	BOOL _uninstalled;
	BOOL _userNotificationsEnabled;
	BOOL _requiresLocalNotifications;
	BOOL _isSystemApplication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)scheduledLocalNotifications;
-(void)cancelLocalNotification:(id)arg1 ;
-(void)updateLocalNotificationTimersAndRegionRegistrations;
-(void)_invalidateLocalNotificationTimers;
-(void)_invalidateLocalNotificationRegionRegistrations;
-(void)_updateLocalNotificationTimers;
-(void)_updateLocalNotificationRegionRegistrations;
-(void)invalidateLocalNotificationTimersAndRegionRegistrations;
-(void)_purgeCachedLocalNotifications;
-(BOOL)isAppRunning;
-(id)_scheduledLocalNotifications;
-(void)_removeNotificationFromRegionMonitoring:(id)arg1 ;
-(id)_lastLocalNotificationFireDate;
-(BOOL)_isLocalNotification:(id)arg1 scheduledToFireAfterDate:(id)arg2 ;
-(id)_copyUnexpiredScheduledLocalNotifications;
-(id)fireDatesForLocalNotification:(id)arg1 withFetchRequest:(id)arg2 ;
-(void)_setLastLocalNotificationFireDate:(id)arg1 ;
-(void)_fireNotification:(id)arg1 ;
-(void)_setScheduledLocalNotifications:(id)arg1 ;
-(BOOL)appIsAuthorizedForRegionMonitoring;
-(void)handleTriggeredRegion:(id)arg1 didEnter:(BOOL)arg2 ;
-(BOOL)_canScheduledLocalNotificationTimers;
-(void)localNotificationTimerFired;
-(void)_beginRequireLocalNotificationsCachingWithReason:(id)arg1 ;
-(void)_endRequireLocalNotificationsCachingWithReason:(id)arg1 ;
-(void)triggerLocationArrow;
-(void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(BOOL)arg2 ;
-(id)snoozeNotificationForLocalNotification:(id)arg1 ;
-(void)scheduleSnoozeNotification:(id)arg1 ;
-(void)snoozeLocalNotification:(id)arg1 ;
-(void)locationMonitor:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationMonitor:(id)arg1 didExitRegion:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 isSystemApplication:(BOOL)arg2 requiresLocalNotifications:(BOOL)arg3 userNotificationsEnabled:(BOOL)arg4 queue:(id)arg5 ;
-(void)setUserNotificationsEnabled:(BOOL)arg1 ;
-(void)handleProcessExit;
-(void)handleUninstall;
-(void)handleMemoryWarning;
-(id)_getLocalNotificationFromBulletin:(id)arg1 ;
-(id)scheduleForFetchRequest:(id)arg1 ;
-(void)cancelLocalNotifications:(id)arg1 ;
-(void)handleSignificantTimeChange;
-(void)handleLocaleChange;
-(void)snoozeLocalNotifications:(id)arg1 ;
@end

