/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDFPSCounter : NSObject {

	NSMutableArray* _dateArray;
	double _startTimeInterval;
	double _endTimeInterval;
	unsigned long long _frameCount;

}
-(void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2 ;
-(id)p_fpsSummaryStringIncludingGraph:(BOOL)arg1 ;
-(id)p_getFPSInfo:(BOOL)arg1 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(double)arg1 ;
-(id)fpsSummaryString;
-(id)fpsGraphString;
-(void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(BOOL)arg6 slide:(long long)arg7 ;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

