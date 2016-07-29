/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(unsigned)serializeString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)serialize32:(unsigned)arg1 ;
-(void)serialize64:(unsigned long long)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
-(id)copyContiguousData;
@end
