/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PersistentAddressBookAddress : PBCodable <NSCopying> {

	double _position;
	int _addressID;
	int _recordID;
	NSString* _syncIdentifier;
	SCD_Struct_RA6 _has;

}

@property (assign,nonatomic) BOOL hasRecordID; 
@property (assign,nonatomic) int recordID;                           //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) BOOL hasAddressID; 
@property (assign,nonatomic) int addressID;                          //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                        //@synthesize position=_position - In the implementation block
-(BOOL)hasSyncIdentifier;
-(void)setHasRecordID:(BOOL)arg1 ;
-(void)setHasAddressID:(BOOL)arg1 ;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)addressID;
-(void)setAddressID:(int)arg1 ;
-(BOOL)hasAddressID;
-(BOOL)hasPosition;
-(void)setRecordID:(int)arg1 ;
-(int)recordID;
-(BOOL)hasRecordID;
-(NSString *)syncIdentifier;
-(void)setHasPosition:(BOOL)arg1 ;
@end
