/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSDate;

@interface IDSCountdown : NSObject {

	NSDate* _startDate;
	opaque_pthread_mutex_t _startDateMutex;
	double _timeInterval;

}

@property (nonatomic,readonly) BOOL isCountingDown; 
-(BOOL)isCountingDown;
-(BOOL)startCountingDown;
-(BOOL)_criticalIsCountingDown;
-(void)dealloc;
-(id)initWithTimeInterval:(double)arg1 ;
@end

