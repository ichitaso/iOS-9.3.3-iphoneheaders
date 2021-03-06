/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {

	unsigned _accessPointIndex;
	unsigned _stopIndex;
	unsigned _transferTime;
	BOOL _displayStop;
	BOOL _uncertainArrival;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;              //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) BOOL hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex;                     //@synthesize stopIndex=_stopIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayStop; 
@property (assign,nonatomic) BOOL displayStop;                       //@synthesize displayStop=_displayStop - In the implementation block
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime;                  //@synthesize transferTime=_transferTime - In the implementation block
@property (assign,nonatomic) BOOL hasUncertainArrival; 
@property (assign,nonatomic) BOOL uncertainArrival;                  //@synthesize uncertainArrival=_uncertainArrival - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(BOOL)hasStopIndex;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(unsigned)stopIndex;
-(BOOL)hasDisplayStop;
-(BOOL)displayStop;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(unsigned)transferTime;
-(void)setTransferTime:(unsigned)arg1 ;
-(BOOL)hasTransferTime;
-(BOOL)uncertainArrival;
-(void)setHasUncertainArrival:(BOOL)arg1 ;
-(void)setHasDisplayStop:(BOOL)arg1 ;
-(void)setDisplayStop:(BOOL)arg1 ;
-(void)setUncertainArrival:(BOOL)arg1 ;
-(BOOL)hasUncertainArrival;
@end

