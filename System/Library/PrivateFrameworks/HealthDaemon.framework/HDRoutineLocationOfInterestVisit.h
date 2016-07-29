/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface HDRoutineLocationOfInterestVisit : NSObject {

	NSDate* _entryTime;
	NSDate* _exitTime;

}

@property (nonatomic,retain) NSDate * entryTime;              //@synthesize entryTime=_entryTime - In the implementation block
@property (nonatomic,retain) NSDate * exitTime;               //@synthesize exitTime=_exitTime - In the implementation block
-(id)initWithCodable:(id)arg1 ;
-(NSDate *)entryTime;
-(void)setEntryTime:(NSDate *)arg1 ;
-(NSDate *)exitTime;
-(void)setExitTime:(NSDate *)arg1 ;
-(id)initWithLocationOfInterestVisit:(id)arg1 ;
@end
