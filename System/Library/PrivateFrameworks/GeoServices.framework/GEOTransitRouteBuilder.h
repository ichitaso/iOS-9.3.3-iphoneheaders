/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSMutableData, GEOMapRegion, GEOTransitSuggestedRoute, GEOTransitDecoderData;

@interface GEOTransitRouteBuilder : NSObject {

	NSMutableArray* _stepInfos;
	BOOL _usesZilch;
	unsigned long long _tripCount;
	NSMutableArray* _steps;
	NSMutableArray* _legs;
	NSMutableData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitDecoderData* _decoderData;

}
-(void)dealloc;
-(void)_reset;
-(void)_buildPointSectionsForRoute:(id)arg1 ;
-(void)buildRoute:(id)arg1 ;
-(BOOL)_isWalkingOnlyRoute:(id)arg1 ;
-(void)_buildPointSectionsForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 ;
-(id)_sectionForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 bounds:(SCD_Struct_GE56)arg4 currentTransitLineColor:(id)arg5 ;
-(void)_buildRouteFromSteps:(id)arg1 ;
-(void)_buildArrivalStepInfo:(id)arg1 ;
-(id)_stepForStepInfo:(unsigned long long)arg1 route:(id)arg2 ;
-(void)_buildTransitStepInfo:(id)arg1 ;
-(NSRange)_appendPointData:(id)arg1 withContinuity:(BOOL)arg2 ;
-(BOOL)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2 ;
-(id)_legForSteps:(NSRange)arg1 route:(id)arg2 ;
-(void)_buildExpandedWalkingStepInfos:(id)arg1 ;
-(id)_walkingStepForStepInfoIndex:(unsigned long long)arg1 route:(id)arg2 validPointRange:(NSRange)arg3 ;
-(BOOL)_index:(unsigned long long)arg1 matchesArray:(unsigned*)arg2 ofLength:(unsigned long long)arg3 ;
-(unsigned long long)_stepCountForLegWithStartingStepIndex:(unsigned long long)arg1 ;
-(NSRange)_validPointRangeForStepInfoIndex:(unsigned long long)arg1 ;
-(id)initWithSuggestedRoute:(id)arg1 data:(id)arg2 ;
-(void)_buildRouteFromSections:(id)arg1 ;
-(long long)_legTypeForTransitManeuver:(int)arg1 ;
@end
