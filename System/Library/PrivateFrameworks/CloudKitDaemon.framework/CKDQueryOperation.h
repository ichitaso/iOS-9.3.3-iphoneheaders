/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class CKQuery, CKQueryCursor, NSSet, CKRecordZoneID, CKDRecordFetchAggregator, NSObject, NSMutableArray;

@interface CKDQueryOperation : CKDDatabaseOperation {

	BOOL _shouldFetchAssetContent;
	BOOL _fetchAllResults;
	BOOL _hasCalledQueryCursorUpdatedBlock;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	CKQueryCursor* _resultsCursor;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCursorUpdatedBlock;
	NSSet* _desiredKeySet;
	CKRecordZoneID* _zoneID;
	CKDRecordFetchAggregator* _recordFetcher;
	NSObject*<OS_dispatch_group> _fetchRecordsGroup;
	unsigned long long _numRequestsSent;
	NSMutableArray* _requestInfos;

}

@property (nonatomic,readonly) CKQuery * query;                                           //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) CKQueryCursor * cursor;                                    //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long resultsLimit;                           //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultsCursor;                               //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                         //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCursorUpdatedBlock;                                    //@synthesize queryCursorUpdatedBlock=_queryCursorUpdatedBlock - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeySet;                                       //@synthesize desiredKeySet=_desiredKeySet - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                     //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) CKDRecordFetchAggregator * recordFetcher;                    //@synthesize recordFetcher=_recordFetcher - In the implementation block
@property (assign,nonatomic) BOOL fetchAllResults;                                        //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchRecordsGroup;              //@synthesize fetchRecordsGroup=_fetchRecordsGroup - In the implementation block
@property (assign,nonatomic) unsigned long long numRequestsSent;                          //@synthesize numRequestsSent=_numRequestsSent - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestInfos;                               //@synthesize requestInfos=_requestInfos - In the implementation block
@property (assign,nonatomic) BOOL hasCalledQueryCursorUpdatedBlock;                       //@synthesize hasCalledQueryCursorUpdatedBlock=_hasCalledQueryCursorUpdatedBlock - In the implementation block
-(CKQuery *)query;
-(CKQueryCursor *)cursor;
-(void)main;
-(CKRecordZoneID *)zoneID;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setQueryCursorUpdatedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(BOOL)shouldFetchAssetContent;
-(BOOL)fetchAllResults;
-(CKQueryCursor *)resultsCursor;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchRecordsGroup;
-(id)queryCursorUpdatedBlock;
-(void)setHasCalledQueryCursorUpdatedBlock:(BOOL)arg1 ;
-(CKDRecordFetchAggregator *)recordFetcher;
-(BOOL)hasCalledQueryCursorUpdatedBlock;
-(id)recordFetchedBlock;
-(NSSet *)desiredKeySet;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSMutableArray *)requestInfos;
-(unsigned long long)numRequestsSent;
-(void)setNumRequestsSent:(unsigned long long)arg1 ;
-(void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2 ;
-(void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1 ;
-(void)_handleRecordResponse:(id)arg1 perRequestSchedulerInfo:(id)arg2 ;
-(void)setRecordFetcher:(CKDRecordFetchAggregator *)arg1 ;
-(void)setDesiredKeySet:(NSSet *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setFetchAllResults:(BOOL)arg1 ;
-(void)setFetchRecordsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRequestInfos:(NSMutableArray *)arg1 ;
@end

