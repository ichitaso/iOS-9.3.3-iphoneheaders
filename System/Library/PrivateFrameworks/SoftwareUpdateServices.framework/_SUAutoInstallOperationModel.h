/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _id;
	SUAutoInstallForecast* _forecast;
	int _agreementStatus;

}

@property (nonatomic,retain) NSUUID * id;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) SUAutoInstallForecast * forecast;              //@synthesize forecast=_forecast - In the implementation block
@property (assign,nonatomic) int agreementStatus;                           //@synthesize agreementStatus=_agreementStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SUAutoInstallForecast *)forecast;
-(int)agreementStatus;
-(void)setForecast:(SUAutoInstallForecast *)arg1 ;
-(void)setAgreementStatus:(int)arg1 ;
-(NSUUID *)id;
-(void)setId:(NSUUID *)arg1 ;
@end
