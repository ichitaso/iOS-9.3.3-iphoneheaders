/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSCalendar;

@interface WBSHistorySessionIntervalCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	Vector<double, 0, WTF::CrashOnOverflow, 16>* _intervalCache;

}
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
-(double)beginningOfSessionContainingTime:(double)arg1 ;
-(double)_beginningOfSessionContainingTime:(double)arg1 ;
-(void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3 ;
@end

