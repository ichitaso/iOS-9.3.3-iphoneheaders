/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOSearchAttributionManifest;

@interface GEOSearchAttributionLoader : NSObject {

	GEOSearchAttributionManifest* _attributionManifest;

}
-(void)dealloc;
-(id)initWithAttributionManifest:(id)arg1 ;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 allowNetwork:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

