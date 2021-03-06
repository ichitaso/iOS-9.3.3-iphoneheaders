/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BTSDevice : NSObject

@property (assign,getter=isHealthDevice,nonatomic) BOOL healthDevice; 
@property (getter=isMyDevice,nonatomic,readonly) BOOL myDevice; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(void)unpair;
-(BOOL)connected;
-(BOOL)paired;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(id)classicDevice;
@end

