/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/XPCServices/AssetCacheLocatorService.xpc/AssetCacheLocatorService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ACLSTypeVerifier : NSObject {

	NSDictionary* _template;

}

@property (retain) NSDictionary * template;              //@synthesize template=_template - In the implementation block
-(BOOL)verify:(id)arg1 name:(id)arg2 withTemplate:(id)arg3 tag:(unsigned)arg4 ;
-(id)sanitize:(id)arg1 withTemplate:(id)arg2 tag:(unsigned)arg3 ;
-(BOOL)verify:(id)arg1 name:(id)arg2 tag:(unsigned)arg3 ;
-(id)sanitize:(id)arg1 tag:(unsigned)arg2 ;
-(id)initWithTemplate:(id)arg1 ;
-(void)setTemplate:(NSDictionary *)arg1 ;
-(NSDictionary *)template;
@end

