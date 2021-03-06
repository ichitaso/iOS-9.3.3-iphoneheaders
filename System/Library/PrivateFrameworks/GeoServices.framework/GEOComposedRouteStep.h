/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEOStep, GEOComposedRouteLeg, GEOComposedTransitTripRouteStep, GEOPBTransitStop, GEOTransitStep, GEOInstructionSet, NSArray;

@interface GEOComposedRouteStep : NSObject {

	GEOComposedRoute* _composedRoute;
	GEOStep* _geoStep;
	unsigned long long _stepIndex;
	NSRange _pointRange;
	NSRange _maneuverPointRange;
	long long _routeLegType;

}

@property (nonatomic,readonly) BOOL shouldCreateEnterBoardGroup; 
@property (nonatomic,readonly) BOOL shouldCreateAlightExitGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTransferGroup; 
@property (nonatomic,readonly) BOOL shouldCreateTripProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateFerryProgressionGroup; 
@property (nonatomic,readonly) BOOL shouldCreateArrivalGroup; 
@property (assign,nonatomic) GEOComposedRoute * composedRoute;                                            //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteLeg * leg; 
@property (getter=getPreviousStep,nonatomic,readonly) GEOComposedRouteStep * previousStep; 
@property (getter=getNextStep,nonatomic,readonly) GEOComposedRouteStep * nextStep; 
@property (nonatomic,readonly) long long routeLegType;                                                    //@synthesize routeLegType=_routeLegType - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                                        //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) NSRange maneuverPointRange;                                                //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) unsigned maneuverStartPointIndex; 
@property (nonatomic,readonly) unsigned maneuverEndPointIndex; 
@property (nonatomic,readonly) unsigned long long stepIndex;                                              //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) BOOL isUncertainArrival; 
@property (nonatomic,readonly) BOOL isArrivalStep; 
@property (nonatomic,readonly) SCD_Struct_GE16 startGeoCoordinate; 
@property (nonatomic,readonly) SCD_Struct_GE16 endGeoCoordinate; 
@property (nonatomic,readonly) GEOStep * geoStep;                                                         //@synthesize geoStep=_geoStep - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,readonly) unsigned duration; 
@property (nonatomic,readonly) unsigned distance; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousBoardingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * nextAlightingStep; 
@property (nonatomic,readonly) GEOComposedTransitTripRouteStep * previousAlightingStep; 
@property (nonatomic,readonly) GEOPBTransitStop * startingStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingStop; 
@property (nonatomic,readonly) unsigned startTime; 
@property (nonatomic,readonly) GEOPBTransitStop * previousStop; 
@property (nonatomic,readonly) GEOPBTransitStop * nextStop; 
@property (nonatomic,readonly) GEOTransitStep * transitStep; 
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) NSArray * steppingArtwork; 
@property (nonatomic,readonly) NSArray * routeDetailsPrimaryArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork; 
-(int)maneuver;
-(BOOL)_belongsToTransferGroup;
-(BOOL)shouldCreateFerryProgressionGroup;
-(BOOL)shouldCreateTransferGroup;
-(BOOL)shouldCreateAlightExitGroup;
-(BOOL)shouldCreateArrivalGroup;
-(BOOL)shouldCreateTripProgressionGroup;
-(BOOL)shouldCreateEnterBoardGroup;
-(BOOL)shouldPreloadWithHighPriority;
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(unsigned)startTime;
-(int)transportType;
-(unsigned)distance;
-(GEOInstructionSet *)instructions;
-(unsigned)pointCount;
-(BOOL)hasDuration;
-(GEOPBTransitStop *)previousStop;
-(NSArray *)routeDetailsPrimaryArtwork;
-(GEOPBTransitStop *)startingStop;
-(GEOComposedTransitTripRouteStep *)previousAlightingStep;
-(GEOComposedTransitTripRouteStep *)previousBoardingStep;
-(SCD_Struct_GE16)endGeoCoordinate;
-(GEOComposedTransitTripRouteStep *)nextAlightingStep;
-(GEOComposedTransitTripRouteStep *)nextBoardingStep;
-(GEOPBTransitStop *)endingStop;
-(GEOPBTransitStop *)nextStop;
-(GEOTransitStep *)transitStep;
-(id<GEOTransitArtworkDataSource>)routeDetailsSecondaryArtwork;
-(NSArray *)steppingArtwork;
-(SCD_Struct_GE16)startGeoCoordinate;
-(unsigned long long)stepIndex;
-(GEOStep *)geoStep;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)composedRoute;
-(NSRange)pointRange;
-(long long)routeLegType;
-(id)getNextStep;
-(BOOL)isUncertainArrival;
-(GEOComposedRouteLeg *)leg;
-(id)firstNameOrBranch;
-(unsigned)maneuverStartPointIndex;
-(BOOL)isArrivalStep;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 ;
-(NSRange)maneuverPointRange;
-(id)getPreviousStep;
-(id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
-(unsigned)maneuverEndPointIndex;
@end

