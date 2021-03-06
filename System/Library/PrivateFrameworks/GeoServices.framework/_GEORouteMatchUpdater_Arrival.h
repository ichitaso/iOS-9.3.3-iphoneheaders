/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _arrivalStep;
	GEOComposedRouteStep* _previousExitStationStep;
	PolylineCoordinate _arrivalRouteCoordinate;
	SCD_Struct_GE16 _destinationLocationCoordinate;

}
-(void)dealloc;
-(id)initWithRoute:(id)arg1 arrivalStep:(id)arg2 ;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end

