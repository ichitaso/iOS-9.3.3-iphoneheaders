/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/AEAnnotationSerializationManager.h>

@protocol AEAnnotationSerializationManager <NSObject>
@required
-(id)urlForOfflineDBWithAssetID:(id)arg1;
-(BOOL)isAssetOfflineWithAssetID:(id)arg1;
-(id)annotationProviderForOfflineDBWithAssetID:(id)arg1;
-(void)removeOfflineDBFilesWithAssetID:(id)arg1 exceptBookVersionString:(id)arg2;
-(BOOL)takeBookOfflineIfManagedWithAnnotationProvider:(id)arg1 assetID:(id)arg2;

@end


@protocol AEBookMetadataProvider;
@class NSString;

@interface AEAnnotationSerializationManager : NSObject <AEAnnotationSerializationManager> {

	id<AEBookMetadataProvider> bookMetadataProvider;

}

@property (nonatomic,retain) id<AEBookMetadataProvider> bookMetadataProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotationSerializationManagerWithBookMetadataProvider:(id)arg1 ;
+(BOOL)managedBooksAllowedToSync;
+(id)annotationSerializationManagerWithAssetID:(id)arg1 assetURL:(id)arg2 bookVersionString:(id)arg3 pathToAssetContextDirectory:(id)arg4 isManagedBook:(BOOL)arg5 ;
-(id)initWithBookMetadataProvider:(id)arg1 ;
-(void)setBookMetadataProvider:(id<AEBookMetadataProvider>)arg1 ;
-(id)urlForOfflineDBWithAssetID:(id)arg1 ;
-(id<AEBookMetadataProvider>)bookMetadataProvider;
-(id)p_filenameForOfflineDBWithAssetID:(id)arg1 ;
-(BOOL)isAssetOfflineWithAssetID:(id)arg1 ;
-(void)protected_takeAssetOfflineWithProvider:(id)arg1 assetID:(id)arg2 copyData:(BOOL)arg3 ;
-(BOOL)p_ensureDirectoryPathExists:(id)arg1 ;
-(id)annotationProviderForOfflineDBWithAssetID:(id)arg1 ;
-(void)removeOfflineDBFilesWithAssetID:(id)arg1 exceptBookVersionString:(id)arg2 ;
-(BOOL)takeBookOfflineIfManagedWithAnnotationProvider:(id)arg1 assetID:(id)arg2 ;
@end
