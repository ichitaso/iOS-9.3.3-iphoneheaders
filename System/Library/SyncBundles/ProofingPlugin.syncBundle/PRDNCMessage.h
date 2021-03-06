/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRDNCSession, NSString;

@interface PRDNCMessage : NSObject {

	PRDNCSession* _receivingConnection;
	NSString* _name;
	NSString* _param;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * param;                                  //@synthesize param=_param - In the implementation block
@property (assign,nonatomic) BOOL paramAsBool; 
@property (nonatomic,readonly) NSString * dncNotificationName; 
@property (nonatomic,readonly) PRDNCSession * receivingConnection;              //@synthesize receivingConnection=_receivingConnection - In the implementation block
+(id)componentsForFullNotificationName:(id)arg1 ;
+(id)fullNotificationNameForBaseName:(id)arg1 param:(id)arg2 ;
-(NSString *)dncNotificationName;
-(PRDNCSession *)receivingConnection;
-(void)sendACK;
-(void)sendStillAlive;
-(void)setParamAsBool:(BOOL)arg1 ;
-(id)initWithReceivingConnection:(id)arg1 name:(id)arg2 param:(id)arg3 ;
-(BOOL)paramAsBool;
-(void)sendBoolReply:(BOOL)arg1 ;
-(void)setParam:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
-(NSString *)param;
@end

