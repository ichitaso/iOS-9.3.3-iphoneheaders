/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, NSString, GEOLatLng;

@interface GEOPDClientMetadata : PBCodable <NSCopying> {

	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	unsigned _dayOfWeek;
	NSString* _deviceCountryCode;
	NSString* _deviceDisplayLanguage;
	NSString* _deviceKeyboardLanguage;
	GEOLatLng* _deviceLocation;
	NSString* _deviceSpokenLanguage;
	unsigned _hourOfDay;
	int _resultListAttributionSupport;
	unsigned _timeSinceMapEnteredForeground;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                        //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                          //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceDisplayLanguage; 
@property (nonatomic,retain) NSString * deviceDisplayLanguage;                                    //@synthesize deviceDisplayLanguage=_deviceDisplayLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLanguage; 
@property (nonatomic,retain) NSString * deviceKeyboardLanguage;                                   //@synthesize deviceKeyboardLanguage=_deviceKeyboardLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpokenLanguage; 
@property (nonatomic,retain) NSString * deviceSpokenLanguage;                                     //@synthesize deviceSpokenLanguage=_deviceSpokenLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (assign,nonatomic) BOOL hasResultListAttributionSupport; 
@property (assign,nonatomic) int resultListAttributionSupport;                                    //@synthesize resultListAttributionSupport=_resultListAttributionSupport - In the implementation block
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay;                                                  //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek;                                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(BOOL)hasDeviceCountryCode;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(NSString *)deviceCountryCode;
-(GEOLatLng *)deviceLocation;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasDeviceLocation;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(unsigned)dayOfWeek;
-(BOOL)hasDayOfWeek;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(NSString *)deviceDisplayLanguage;
-(void)setDeviceKeyboardLanguage:(NSString *)arg1 ;
-(void)setResultListAttributionSupport:(int)arg1 ;
-(BOOL)hasHourOfDay;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(unsigned)hourOfDay;
-(int)resultListAttributionSupport;
-(void)setDeviceDisplayLanguage:(NSString *)arg1 ;
-(NSString *)deviceKeyboardLanguage;
-(void)setDeviceSpokenLanguage:(NSString *)arg1 ;
-(void)setHourOfDay:(unsigned)arg1 ;
-(BOOL)hasDeviceKeyboardLanguage;
-(BOOL)hasDeviceSpokenLanguage;
-(BOOL)hasResultListAttributionSupport;
-(NSString *)deviceSpokenLanguage;
-(void)setHasResultListAttributionSupport:(BOOL)arg1 ;
-(BOOL)hasDeviceDisplayLanguage;
@end
