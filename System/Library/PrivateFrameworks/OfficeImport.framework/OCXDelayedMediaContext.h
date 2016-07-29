/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class OCPPackage, NSURL, NSString;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {

	OCPPackage* mPackage;
	NSURL* mTargetLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)initWithTargetLocation:(id)arg1 package:(id)arg2 ;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)dataRep;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
@end
