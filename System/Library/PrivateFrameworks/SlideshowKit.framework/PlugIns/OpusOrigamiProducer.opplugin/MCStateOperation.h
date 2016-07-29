/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCStateOperation : MCAction {

	NSString* _stateKey;

}

@property (copy) NSString * stateKey;                          //@synthesize stateKey=_stateKey - In the implementation block
@property (assign,nonatomic) BOOL alwaysNotifies; 
@property (assign,nonatomic) BOOL recordsTime; 
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setRecordsTime:(BOOL)arg1 ;
-(void)setAlwaysNotifies:(BOOL)arg1 ;
-(BOOL)alwaysNotifies;
-(NSString *)stateKey;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(BOOL)recordsTime;
-(void)demolish;
-(void)setStateKey:(NSString *)arg1 ;
-(id)description;
-(id)imprint;
@end
