/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject {

	/*^block*/id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
