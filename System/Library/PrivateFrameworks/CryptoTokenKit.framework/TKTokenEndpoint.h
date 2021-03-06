/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface TKTokenEndpoint : NSObject {

	id<TKTokenDelegate> _token;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSString* _tokenID;
	long long _referenceCount;

}

@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (assign) long long referenceCount;                        //@synthesize referenceCount=_referenceCount - In the implementation block
-(NSXPCListenerEndpoint *)endpoint;
-(void)setReferenceCount:(long long)arg1 ;
-(void)acceptNewConnection:(id)arg1 ;
-(void)handleOperation:(long long)arg1 session:(id)arg2 event:(id)arg3 reply:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)accessControlCompleteWithConstraints:(id)arg1 reply:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)completeWithReturnedAttributes:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleEvaluateAccessControlEvent:(id)arg1 reply:(id)arg2 session:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleGetObjectCreationAccessControlEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleGetObjectAccessControlEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleReadDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleGetPublicKeyEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleSignDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleCreateObjectEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleDeleteObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithToken:(id)arg1 tokenID:(id)arg2 instanceID:(id)arg3 ;
-(void)handleUpdateObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 attributes:(id)arg4 session:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(long long)referenceCount;
@end

