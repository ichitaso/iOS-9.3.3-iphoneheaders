/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKStoreURLBagContext.h>

@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain; 
@property (retain) NSURL * syncRequestURL; 
@property (retain) NSURL * pushKeyValueRequestURL; 
@property (retain) NSURL * pullKeyValueRequestURL; 
@property (retain) NSURL * pushAllKeyValueRequestURL; 
@property (retain) NSURL * pullAllKeyValueRequestURL; 
@property (assign) BOOL domainDisabled; 
@property (assign) double pollingIntervalInSeconds; 
@end

