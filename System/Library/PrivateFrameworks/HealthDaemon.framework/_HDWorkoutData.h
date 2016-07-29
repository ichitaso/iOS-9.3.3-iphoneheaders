/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDServer;
@class _HKWorkoutSession, NSString;

@interface _HDWorkoutData : NSObject {

	BOOL _isFirstParty;
	_HKWorkoutSession* _workoutSession;
	NSString* _clientIdentifier;
	id<HDServer> _server;

}

@property (nonatomic,retain) _HKWorkoutSession * workoutSession;              //@synthesize workoutSession=_workoutSession - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HDServer> server;                      //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) BOOL isFirstParty;                               //@synthesize isFirstParty=_isFirstParty - In the implementation block
-(id<HDServer>)server;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithWorkoutSession:(id)arg1 clientIdentifier:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 ;
-(void)deliverError:(id)arg1 ;
-(void)deliverChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(_HKWorkoutSession *)workoutSession;
-(void)setWorkoutSession:(_HKWorkoutSession *)arg1 ;
-(void)setServer:(id<HDServer>)arg1 ;
-(BOOL)isFirstParty;
-(void)setIsFirstParty:(BOOL)arg1 ;
@end
