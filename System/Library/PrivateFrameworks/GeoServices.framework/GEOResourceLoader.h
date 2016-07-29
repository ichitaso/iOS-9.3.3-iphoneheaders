/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSArray, NSData, NSMapTable, GEOPowerAssertion, NSObject;

@interface GEOResourceLoader : NSObject {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	long long _numberOfDownloadsInProgress;
	long long _numberOfCopiesInProgress;
	NSMutableArray* _loadedResources;
	BOOL _canceled;
	NSString* _baseURLString;
	unsigned long long _maxConcurrentLoads;
	NSArray* _resourceInfos;
	NSData* _auditToken;
	BOOL _allowResumingPartialDownloads;
	NSMapTable* _inProgressResourceDownloads;
	GEOPowerAssertion* _powerAssertion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSData * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSArray * loadedResources;              //@synthesize loadedResources=_loadedResources - In the implementation block
+(Class)resourceLoadOperationClass;
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(NSData *)auditToken;
-(void)setAuditToken:(NSData *)arg1 ;
-(BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(NSArray *)loadedResources;
-(id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5 ;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 orExistingPathOnDisk:(id)arg3 allowCreatingHardLink:(BOOL)arg4 checksum:(id)arg5 completionHandler:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(void)_loadNextResource;
@end
