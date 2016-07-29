/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface STUpdateWatchListRequest : AFSiriRequest {

	NSArray* _contentIdentifiersToAdd;
	NSArray* _contentIdentifiersToRemove;

}

@property (nonatomic,copy) NSArray * contentIdentifiersToAdd;                 //@synthesize contentIdentifiersToAdd=_contentIdentifiersToAdd - In the implementation block
@property (nonatomic,copy) NSArray * contentIdentifiersToRemove;              //@synthesize contentIdentifiersToRemove=_contentIdentifiersToRemove - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)contentIdentifiersToAdd;
-(void)_setContentIdentifiersToAdd:(id)arg1 ;
-(NSArray *)contentIdentifiersToRemove;
-(void)_setContentIdentifiersToRemove:(id)arg1 ;
@end
