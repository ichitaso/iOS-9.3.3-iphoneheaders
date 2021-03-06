/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying> {

	BOOL _requiresLocalBootstrapScript;
	BOOL _supportsFullApplicationReload;
	long long _tabBarControllerStyle;

}

@property (nonatomic,readonly) BOOL requiresLocalBootstrapScript; 
@property (nonatomic,readonly) BOOL supportsFullApplicationReload; 
@property (nonatomic,readonly) long long tabBarControllerStyle; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresLocalBootstrapScript;
-(BOOL)supportsFullApplicationReload;
-(long long)tabBarControllerStyle;
@end

