/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WatchConnectivity-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface WCDProtoUserInfoTransfer : PBCodable <NSCopying> {

	NSData* _clientData;
	NSString* _transferIdentifier;
	unsigned _version;
	SCD_Struct_WC1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasClientData; 
@property (nonatomic,retain) NSData * clientData;                        //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransferIdentifier; 
@property (nonatomic,retain) NSString * transferIdentifier;              //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(BOOL)hasClientData;
-(BOOL)hasTransferIdentifier;
-(NSString *)transferIdentifier;
-(NSData *)clientData;
-(void)setClientData:(NSData *)arg1 ;
@end
