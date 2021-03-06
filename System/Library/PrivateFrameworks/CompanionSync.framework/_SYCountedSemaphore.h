/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SYCountedSemaphore : NSObject {

	AI _sem_port;
	Ai _count;
	Ai _signals;
	AB _invalidated;

}
-(id)init;
-(void)invalidate;
-(void)signal;
-(BOOL)waitWithTimeout:(double)arg1 ;
-(BOOL)_waitSemaphoreWithTimeout:(double)arg1 ;
-(void)_signalSemaphore;
-(void)_ensureSemaphore;
-(id)initWithCount:(long long)arg1 ;
@end

