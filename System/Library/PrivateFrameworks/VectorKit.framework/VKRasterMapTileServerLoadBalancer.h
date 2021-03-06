/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VKRasterMapTileServerLoadBalancer : NSObject {

	NSArray* _tileServers;
	unsigned _superTileSize;
	NSArray* _snapshotServers;

}
-(void)dealloc;
-(id)description;
-(void)renderSnapshotRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTileRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithTileServers:(id)arg1 snapshotServers:(id)arg2 ;
@end

