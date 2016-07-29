/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPDistributableArchiveOutputStream, TSPDatabase, TSPDistributableFileManager;

@interface TSPDistributableWriter : NSObject {

	TSPDistributableArchiveOutputStream* _outputStream;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long> >* _encodedIds;
	set<int, std::__1::less<int>, std::__1::allocator<int> >* _typesSeen;
	BOOL _isCancelled;
	TSPDatabase* _database;
	TSPDistributableFileManager* _fileManager;
	unsigned long long _processedEntriesCount;

}
-(id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 includeToc:(BOOL)arg5 ;
-(BOOL)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 ;
-(BOOL)goAndReportProgress:(BOOL)arg1 error:(id*)arg2 context:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end
