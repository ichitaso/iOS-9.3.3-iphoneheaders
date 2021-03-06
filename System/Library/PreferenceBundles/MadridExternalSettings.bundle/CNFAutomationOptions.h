/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MadridExternalSettings.bundle/MadridExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CNFAutomationOptions : NSObject {

	NSString* _remote;
	NSNumber* _interval;
	NSNumber* _repetitions;

}

@property (retain) NSString * remote;                   //@synthesize remote=_remote - In the implementation block
@property (retain) NSNumber * interval;                 //@synthesize interval=_interval - In the implementation block
@property (retain) NSNumber * repetitions;              //@synthesize repetitions=_repetitions - In the implementation block
-(void)setRepetitions:(NSNumber *)arg1 ;
-(NSNumber *)repetitions;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(NSString *)remote;
-(void)setRemote:(NSString *)arg1 ;
@end

