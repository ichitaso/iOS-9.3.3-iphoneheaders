/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBBridgeAggregateReporter : NSObject
+(id)descriptionForSuccessType:(unsigned long long)arg1 ;
+(id)descriptionForTimingType:(unsigned long long)arg1 ;
+(void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2 ;
+(id)descriptionForCommTimingType:(unsigned long long)arg1 ;
+(void)activationServerRespondedAtPage:(unsigned long long)arg1 ;
+(void)incrementSuccessType:(unsigned long long)arg1 ;
+(void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
+(void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2 ;
@end
