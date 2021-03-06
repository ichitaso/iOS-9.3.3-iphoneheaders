/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, AppLaunchStatsState, BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;

@interface AppLaunchStatsSBMonitor : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject*<OS_dispatch_queue> sbMonitorQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	/*^block*/id callback;
	AppLaunchStatsState* aplsState;
	BKSApplicationStateMonitor* appStateMonitor;
	NSMutableDictionary* blackListed;
	NSMutableDictionary* recentList;
	NSMutableDictionary* trendList;
	NSMutableSet* foreGroundApps;
	BOOL _enableAppSwitcherCheck;
	BOOL _enableWasRecentlyLaunched;

}

@property (nonatomic,readonly) NSMutableSet * foreGroundApps; 
@property (nonatomic,readonly) BOOL enableAppSwitcherCheck;                 //@synthesize enableAppSwitcherCheck=_enableAppSwitcherCheck - In the implementation block
@property (nonatomic,readonly) BOOL enableWasRecentlyLaunched;              //@synthesize enableWasRecentlyLaunched=_enableWasRecentlyLaunched - In the implementation block
-(void)save:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)reloadConfiguration;
-(void)saveContext:(id)arg1 ;
-(id)init:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)foregroundAppsSnapshot;
-(BOOL)isForeGroundApp:(id)arg1 ;
-(BOOL)isSiriRunning;
-(BOOL)enableAppSwitcherCheck;
-(BOOL)isRemovedFromAppSwitcher:(id)arg1 ;
-(BOOL)wasRecentlyLaunched:(id)arg1 ;
-(BOOL)enableWasRecentlyLaunched;
-(void)clearTrendingCache;
-(void)initListenerForAppStateChange;
-(void)appSwitchedObserver:(id)arg1 ;
-(void)addToBlackList:(id)arg1 ;
-(void)updateFGAppID:(id)arg1 ;
-(void)removeFromBlackList:(id)arg1 ;
-(NSMutableSet *)foreGroundApps;
-(void)appSuspendedTriggerExternalEvent:(id)arg1 ;
@end

