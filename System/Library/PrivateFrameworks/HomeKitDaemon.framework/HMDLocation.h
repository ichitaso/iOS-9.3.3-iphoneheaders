/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class HMMessageDispatcher, NSObject, CLLocationManager, NSHashTable, NSMapTable, NSString;

@interface HMDLocation : NSObject <CLLocationManagerDelegate> {

	int _locationAuthorized;
	int _authStatus;
	HMMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	CLLocationManager* _locationManager;
	NSHashTable* _locationCallbacks;
	NSMapTable* _regionStateCallbacks;

}

@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                    //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) int locationAuthorized;                                 //@synthesize locationAuthorized=_locationAuthorized - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authStatus;                                         //@synthesize authStatus=_authStatus - In the implementation block
@property (nonatomic,retain) NSHashTable * locationCallbacks;                        //@synthesize locationCallbacks=_locationCallbacks - In the implementation block
@property (nonatomic,retain) NSMapTable * regionStateCallbacks;                      //@synthesize regionStateCallbacks=_regionStateCallbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sunriseTimeForLocation:(id)arg1 ;
+(id)sunsetTimeForLocation:(id)arg1 ;
+(id)_getAlmanacWithLocation:(id)arg1 ;
+(id)findEvent:(id)arg1 withGeo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deregisterForRegionUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)locationAuthorized;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(CLLocationManager *)locationManager;
-(void)_callDelegate:(id)arg1 withLocation:(id)arg2 ;
-(int)authStatus;
-(NSHashTable *)locationCallbacks;
-(NSMapTable *)regionStateCallbacks;
-(void)setLocationAuthorized:(int)arg1 ;
-(void)_updateWithLocation:(id)arg1 ;
-(void)setAuthStatus:(int)arg1 ;
-(void)_updateWithLocationAutorizationStatus:(int)arg1 ;
-(void)_updateRegionState:(long long)arg1 forRegion:(id)arg2 ;
-(void)extractLocationWithDelegate:(id)arg1 ;
-(void)beingConfigured:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)setLocationCallbacks:(NSHashTable *)arg1 ;
-(void)setRegionStateCallbacks:(NSMapTable *)arg1 ;
@end

