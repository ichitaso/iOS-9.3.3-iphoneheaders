/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS43* _keyCallBacks;
	SCD_Struct_NS44* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
-(void)removeAllItems;
@end

