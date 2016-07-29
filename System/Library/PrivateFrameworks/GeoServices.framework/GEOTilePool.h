/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOTileCache;

@interface GEOTilePool : NSObject {

	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOTileCache* _cache;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(unsigned long long)currentCost;
-(unsigned long long)currentCount;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)_receivedMemoryNotification;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(unsigned long long)maxCapacity;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(unsigned long long)maxCost;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)_enteredBackground:(id)arg1 ;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(id)initWithSideCacheEnabled:(BOOL)arg1 ;
@end
