/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (nonatomic,copy) NSString * contentsToAppend; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)update;
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSString *)contentsToAppend;
-(void)setContentsToAppend:(NSString *)arg1 ;
-(id)encodedClassName;
@end
