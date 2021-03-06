/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BCUserAccount : NSObject {

	BOOL _cachedIsPrimaryAccountManagedAppleID;
	NSObject*<OS_dispatch_queue> _prewarmQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> prewarmQueue;              //@synthesize prewarmQueue=_prewarmQueue - In the implementation block
@property (assign,nonatomic) BOOL cachedIsPrimaryAccountManagedAppleID;              //@synthesize cachedIsPrimaryAccountManagedAppleID=_cachedIsPrimaryAccountManagedAppleID - In the implementation block
+(BOOL)isPrimaryAccountManagedAppleID;
+(BOOL)isUserSignedInToiTunes;
+(BOOL)isUserSignedInToiCloud;
+(id)sharedInstance;
+(void)prewarm;
+(id)storeAccountID;
+(id)storeFrontIdentifier;
-(NSObject*<OS_dispatch_queue>)prewarmQueue;
-(BOOL)_evaluateIsPrimaryAccountManagedAppleID;
-(void)setCachedIsPrimaryAccountManagedAppleID:(BOOL)arg1 ;
-(BOOL)_isPrimaryAccountManagedAppleID;
-(BOOL)cachedIsPrimaryAccountManagedAppleID;
-(void)setPrewarmQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)_prewarm;
@end

