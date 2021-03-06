/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VKPGenericShieldStyleInfo, NSString, NSMutableArray;

@interface VKPShield : PBCodable <NSCopying> {

	VKPGenericShieldStyleInfo* _genericShieldStyleInfo;
	NSString* _identifier;
	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variants;                                       //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericShieldStyleInfo; 
@property (nonatomic,retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;              //@synthesize genericShieldStyleInfo=_genericShieldStyleInfo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasGenericShieldStyleInfo;
-(VKPGenericShieldStyleInfo *)genericShieldStyleInfo;
-(NSMutableArray *)variants;
-(void)setGenericShieldStyleInfo:(VKPGenericShieldStyleInfo *)arg1 ;
-(void)clearVariants;
-(unsigned long long)variantsCount;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(id)variantsAtIndex:(unsigned long long)arg1 ;
-(void)addVariants:(id)arg1 ;
@end

