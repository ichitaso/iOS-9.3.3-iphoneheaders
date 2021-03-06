/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDNanoSyncStoreDelegate <NSObject>
@property (nonatomic,readonly) BOOL isMaster; 
@required
-(BOOL)isMaster;
-(void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
-(void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;
-(void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;

@end

