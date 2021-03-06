/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMSServiceProvider.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol RMSServiceProviderDelegate;
@class NSMutableDictionary, NSNetServiceBrowser, NSString;

@interface RMSBonjourServiceProvider : NSObject <RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableDictionary* _services;
	NSMutableDictionary* _cache;
	id<RMSServiceProviderDelegate> _delegate;
	NSNetServiceBrowser* _netServiceBrowser;

}

@property (nonatomic,readonly) NSNetServiceBrowser * netServiceBrowser;                   //@synthesize netServiceBrowser=_netServiceBrowser - In the implementation block
@property (nonatomic,readonly) NSString * searchType; 
@property (nonatomic,readonly) NSString * searchDomain; 
@property (nonatomic,readonly) NSString * searchScope; 
@property (nonatomic,readonly) long long serviceDiscoverySource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)endDiscovery;
-(void)beginDiscovery;
-(NSString *)searchType;
-(NSString *)searchScope;
-(long long)serviceDiscoverySource;
-(long long)serviceTypeFromTXTDictionary:(id)arg1 ;
-(NSNetServiceBrowser *)netServiceBrowser;
-(long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1 ;
-(id)_searchString;
-(NSString *)searchDomain;
-(id)_valueForTXTRecordKey:(id)arg1 inTXTDictionary:(id)arg2 ;
-(id)_identifierForNetService:(id)arg1 ;
-(void)_updateService:(id)arg1 withNetService:(id)arg2 txtData:(id)arg3 ;
-(void)_updateCacheWithService:(id)arg1 identifier:(id)arg2 ;
@end

