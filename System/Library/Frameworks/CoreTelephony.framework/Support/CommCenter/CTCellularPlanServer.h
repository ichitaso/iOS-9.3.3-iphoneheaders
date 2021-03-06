/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface CTCellularPlanServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fConnections;
	NSMutableArray* fConnectionsInPurchaseFlow;
	queue* fQueue;
	shared_ptr<ctu::Logger>* fLogger;
	BOOL fIsDataPlanCapable;
	shared_ptr<CellularPlanBootstrapAssertion>* fBootstrapAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServerInstance;
+(void)initializeServer;
-(void)sendPlanInfoDidUpdateNotification;
-(void)logFn:(const char*)arg1 format:(id)arg2 ;
-(void)setUserInPurchaseFlow:(BOOL)arg1 withConnection:(id)arg2 ;
-(void)fetchNewProfilesWithNewPlanCompletion:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(id)initWithMachServiceName:(id)arg1 andQueue:(queue*)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)signIdMapForSessionId:(id)arg1 locationRequired:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 latitude:(id)arg4 longitude:(id)arg5 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
-(void)launchSequoia;
-(void)expirePlan;
-(void)updatePlansDatabase;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)manageAccountForPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isRoamingPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didSelectPlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

