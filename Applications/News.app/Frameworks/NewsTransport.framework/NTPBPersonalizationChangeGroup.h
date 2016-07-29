/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {

	unsigned long long _changeNumber;
	NSMutableArray* _deltas;
	NSString* _instanceIdentifier;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,retain) NSMutableArray * deltas;                      //@synthesize deltas=_deltas - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeNumber; 
@property (assign,nonatomic) unsigned long long changeNumber;              //@synthesize changeNumber=_changeNumber - In the implementation block
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(void)addDeltas:(id)arg1 ;
-(void)clearDeltas;
-(unsigned long long)deltasCount;
-(id)deltasAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(void)setChangeNumber:(unsigned long long)arg1 ;
-(void)setHasChangeNumber:(BOOL)arg1 ;
-(BOOL)hasChangeNumber;
-(NSMutableArray *)deltas;
-(NSString *)instanceIdentifier;
-(unsigned long long)changeNumber;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
