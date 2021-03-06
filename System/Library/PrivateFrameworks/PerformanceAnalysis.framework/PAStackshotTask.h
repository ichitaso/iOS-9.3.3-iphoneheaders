/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshot;

@interface PAStackshotTask : NSObject {

	task_snapshot* _task_snap;
	PAStackshot* _stackshot;
	long long _bytesUsedByThreads;
	long long _bytesAvailableForThreads;
	void* _imageInfos;
	void* _mainBinary;
	int* _donationReceivingPids;

}

@property (readonly) int pid; 
@property (readonly) const char* name; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isForeground; 
-(const char*)name;
-(BOOL)isForeground;
-(int)pid;
-(BOOL)isFromMicrostackshot;
-(BOOL)isDarwinBG;
-(unsigned)powerstatsFlags;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
-(unsigned long long)_bytesUsedByImageInfos;
-(unsigned long long)_bytesUsedByDonationReceivingPids;
-(BOOL)isSuppressed;
-(unsigned long long)bytesUsedByHeader;
-(void)iterateThreads:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedByThreads;
-(id)initWithStackshot:(id)arg1 ;
-(unsigned long long)numImageInfos;
-(dyld_uuid_info_64)mainBinary;
-(id)copyImageInfos;
-(id)copyDonationReceivingPids;
-(const task_snapshot*)task_snap;
@end

