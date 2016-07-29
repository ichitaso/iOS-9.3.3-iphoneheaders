/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@class NSDate, NSData;

@interface APSIncomingMessage : APSMessage

@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSData * token; 
@property (assign,getter=wasFromStorage,nonatomic) BOOL fromStorage; 
@property (assign,getter=wasLastMessageFromStorage,nonatomic) BOOL lastMessageFromStorage; 
@property (assign,nonatomic) long long priority; 
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(void)setFromStorage:(BOOL)arg1 ;
-(BOOL)wasLastMessageFromStorage;
-(void)setLastMessageFromStorage:(BOOL)arg1 ;
-(BOOL)wasFromStorage;
@end
