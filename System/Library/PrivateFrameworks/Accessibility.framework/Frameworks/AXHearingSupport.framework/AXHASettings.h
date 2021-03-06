/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (assign,nonatomic) BOOL independentHearingAidSettings; 
@property (assign,nonatomic) BOOL allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) BOOL shouldStreamToLeftAid; 
@property (assign,nonatomic) BOOL shouldStreamToRightAid; 
@property (assign,nonatomic) long long callAudioRoute; 
@property (assign,nonatomic) long long mediaAudioRoute; 
@property (nonatomic,retain) NSMutableSet * registeredNotifications;               //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                   //@synthesize updateBlocks=_updateBlocks - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(BOOL)allowHearingAidControlOnLockScreen;
-(BOOL)shouldStreamToLeftAid;
-(BOOL)shouldStreamToRightAid;
-(NSDictionary *)pairedHearingAids;
-(BOOL)independentHearingAidSettings;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(void)setIndependentHearingAidSettings:(BOOL)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1 ;
-(void)setShouldStreamToLeftAid:(BOOL)arg1 ;
-(void)setShouldStreamToRightAid:(BOOL)arg1 ;
-(BOOL)isiCloudPaired;
-(BOOL)shouldUseiCloud;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(void)pushLocalHearingAidsToiCloud;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3 ;
-(id)deviceIDForPairingInformation:(id)arg1 ;
-(BOOL)isDeviceIDOnCloudBlacklist:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)addDeviceIDToCloudBlacklist:(id)arg1 ;
-(void)removeDeviceIDFromCloudBlacklist:(id)arg1 ;
-(BOOL)isPairedWithFakeHearingAids;
-(long long)callAudioRoute;
-(void)setCallAudioRoute:(long long)arg1 ;
-(long long)mediaAudioRoute;
-(void)setMediaAudioRoute:(long long)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
@end

