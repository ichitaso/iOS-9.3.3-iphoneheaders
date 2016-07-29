/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ODRBackgroundMaintenance : NSObject {

	NSOperationQueue* _maintenanceQueue;

}
+(id)sharedInstance;
-(void)cancelBackgroundMaintenanceOperations;
-(void)startBackgroundMaintenanceOperations;
-(id)_workValidationOperation;
-(id)_launchServicesSyncOperation;
-(id)_validateManifestsOperation;
-(id)_validateOnDeviceManifestsOperation;
-(id)_validateOnDeviceAssetPacksOperation;
-(id)_validateDownloadsOperation;
-(id)_removeUnusedDownloadUUIDOperation;
-(id)_init;
@end
