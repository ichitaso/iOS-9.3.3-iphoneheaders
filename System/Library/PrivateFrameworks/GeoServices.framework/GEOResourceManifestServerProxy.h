/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(GEOActiveTileGroup *)activeTileGroup;
-(oneway void)resetActiveTileGroup;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(void)forceUpdate:(/*^block*/id)arg1;
-(id)serverQueue;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(void)openConnection;
-(void)closeConnection;
-(void)updateIfNecessary:(/*^block*/id)arg1;

@end
