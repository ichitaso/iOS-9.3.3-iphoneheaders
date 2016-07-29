/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {

	BOOL _lostModeEnabled;
	BOOL _disableSlideToUnlock;
	NSString* _message;
	NSString* _phoneNumber;
	unsigned long long _lostModeType;
	NSString* _footnoteText;

}

@property (assign,nonatomic) unsigned long long lostModeType;              //@synthesize lostModeType=_lostModeType - In the implementation block
@property (assign,nonatomic) BOOL lostModeEnabled;                         //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL disableSlideToUnlock;                    //@synthesize disableSlideToUnlock=_disableSlideToUnlock - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * footnoteText;                      //@synthesize footnoteText=_footnoteText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setLostModeType:(unsigned long long)arg1 ;
-(BOOL)disableSlideToUnlock;
-(NSString *)footnoteText;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setLostModeEnabled:(BOOL)arg1 ;
-(BOOL)lostModeEnabled;
-(unsigned long long)lostModeType;
-(void)setFootnoteText:(NSString *)arg1 ;
-(void)setDisableSlideToUnlock:(BOOL)arg1 ;
@end
