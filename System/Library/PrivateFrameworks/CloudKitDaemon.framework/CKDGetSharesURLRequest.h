/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetSharesURLRequest : CKDURLRequest {

	/*^block*/id _shareFetchedBlock;
	NSArray* _shareIDs;
	NSArray* _zoneIDs;
	NSMutableDictionary* _shareIDsByRequestID;
	NSMutableDictionary* _zoneIDsByRequestID;

}

@property (nonatomic,copy) id shareFetchedBlock;                                     //@synthesize shareFetchedBlock=_shareFetchedBlock - In the implementation block
@property (nonatomic,retain) NSArray * shareIDs;                                     //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;                                      //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareIDsByRequestID;              //@synthesize shareIDsByRequestID=_shareIDsByRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDsByRequestID;               //@synthesize zoneIDsByRequestID=_zoneIDsByRequestID - In the implementation block
-(int)operationType;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)shareIDs;
-(NSMutableDictionary *)shareIDsByRequestID;
-(NSMutableDictionary *)zoneIDsByRequestID;
-(id)shareFetchedBlock;
-(id)initWithShareIDs:(id)arg1 ;
-(id)initWithZoneIDs:(id)arg1 ;
-(void)setShareFetchedBlock:(id)arg1 ;
-(void)setShareIDs:(NSArray *)arg1 ;
-(void)setShareIDsByRequestID:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsByRequestID:(NSMutableDictionary *)arg1 ;
@end

