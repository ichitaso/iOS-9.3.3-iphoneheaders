/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLSharedPhotoLibrary : PLPhotoLibrary
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedPhotoLibrary;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)concurrencyType;
-(void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(void)_assetsdHasNoXPCTransactions:(id)arg1 ;
@end

