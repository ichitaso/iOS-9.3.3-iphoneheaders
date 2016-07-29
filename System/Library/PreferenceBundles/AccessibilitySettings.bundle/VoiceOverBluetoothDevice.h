/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VoiceOverBluetoothDevice : NSObject <NSCopying> {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}
-(BOOL)isNameCached;
-(unsigned)authorizedServices;
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)connect;
-(void)disconnect;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)unpair;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(void)_clearName;
-(unsigned)minorClass;
-(unsigned long long)connectedServicesCount;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(int)arg1 ;
-(void)setPIN:(id)arg1 ;
-(unsigned)deviceClass;
-(BOOL)connected;
-(unsigned long long)connectedServices;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(id)address;
-(BOOL)paired;
-(unsigned)majorClass;
-(BTDeviceImplRef)device;
@end
