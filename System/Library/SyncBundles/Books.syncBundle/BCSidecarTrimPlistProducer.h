/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCSidecarTrimPlistProducer : BCPlistProducer {

	NSArray* _removePaths;

}
-(id)initWithPath:(id)arg1 removePaths:(id)arg2 ;
-(id)produceData;
-(void)dealloc;
-(BOOL)shouldRetry;
@end
