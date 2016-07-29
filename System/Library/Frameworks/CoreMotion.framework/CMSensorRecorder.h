/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMSensorRecorder : NSObject
+(BOOL)isAccelerometerRecordingAvailable;
+(BOOL)isAuthorizedForRecording;
-(id)accelerometerDataSinceId:(unsigned long long)arg1 ;
-(id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)recordAccelerometerForDuration:(double)arg1 ;
-(id)accelerometerDataFrom:(id)arg1 to:(id)arg2 ;
-(void)recordAccelerometerFor:(double)arg1 ;
-(id)accelerometerDataSince:(unsigned long long)arg1 ;
@end
