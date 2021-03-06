/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest {

	BOOL _lockOrientation;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) BOOL lockOrientation;                        //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setLockOrientation:(BOOL)arg1 ;
-(BOOL)lockOrientation;
@end

