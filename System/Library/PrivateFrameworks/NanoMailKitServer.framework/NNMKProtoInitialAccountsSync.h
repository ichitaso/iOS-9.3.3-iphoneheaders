/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying> {

	NSMutableArray* _initialAccounts;

}

@property (nonatomic,retain) NSMutableArray * initialAccounts;              //@synthesize initialAccounts=_initialAccounts - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addInitialAccount:(id)arg1 ;
-(unsigned long long)initialAccountsCount;
-(void)clearInitialAccounts;
-(id)initialAccountAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)initialAccounts;
-(void)setInitialAccounts:(NSMutableArray *)arg1 ;
@end

