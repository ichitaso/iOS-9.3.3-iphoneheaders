/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * nameAnnotation; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)encyclopediaDomainObject;
+(id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
-(NSString *)nameAnnotation;
-(void)setNameAnnotation:(NSString *)arg1 ;
-(id)encodedClassName;
@end

