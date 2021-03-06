/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIKeyboardArbitration.h>

@class NSString, _UIKeyboardArbiter, FBSCAContextSceneLayer, NSMutableSet, BKSProcessAssertion, NSXPCConnection;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	_UIKeyboardArbiter* _owner;
	BOOL _running;
	FBSCAContextSceneLayer* _sceneLayer;
	NSString* _remoteSceneID;
	BOOL _active;
	BOOL _wantedActive;
	double _level;
	NSMutableSet* _hostedPids;
	BOOL _checkingShowability;
	int _suppressionCount;
	BKSProcessAssertion* _remoteKeepAliveAssertion;
	unsigned long long _remoteKeepAliveAssertionCount;
	unsigned long long _remoteKeepAliveTimerCount;
	NSXPCConnection* _connection;

}

@property (readonly) int processIdentifier; 
@property (retain,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL running;                                              //@synthesize running=_running - In the implementation block
@property (retain,readonly) FBSCAContextSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
@property (retain,readonly) NSString * remoteSceneID;                         //@synthesize remoteSceneID=_remoteSceneID - In the implementation block
@property (readonly) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (readonly) BOOL wantedActive;                                       //@synthesize wantedActive=_wantedActive - In the implementation block
@property (readonly) double level;                                            //@synthesize level=_level - In the implementation block
+(id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)bundleIdentifier;
-(double)level;
-(BOOL)active;
-(void)setDebugLevel:(long long)arg1 ;
-(void)retrieveDebugInformation:(/*^block*/id)arg1 ;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 withSuppression:(int)arg3 onConnected:(/*^block*/id)arg4 ;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentifier:(id)arg2 forKeyboard:(BOOL)arg3 withLevel:(double)arg4 ;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)signalKeyboardChangeComplete;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2 ;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 ;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(int)processIdentifier;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(FBSCAContextSceneLayer *)sceneLayer;
-(void)takeProcessAssertionOnRemoteWithQueue:(id)arg1 ;
-(void)releaseProcessAssertion;
-(BOOL)isHandlerShowableWithHandler:(id)arg1 ;
-(NSString *)remoteSceneID;
-(BOOL)wantedActive;
-(void)_deactivateScene;
@end

