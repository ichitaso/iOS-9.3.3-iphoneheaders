/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetClient <NSObject>
@required
-(id)assetDataClass;
-(void)assetsToSyncWithCompletion:(/*^block*/id)arg1;
-(void)getDataForAsset:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)assetSync:(id)arg1 didCompleteWithError:(id)arg2;
-(void)assetSync:(id)arg1 didUpdateProgress:(float)arg2;
-(void)assetSyncDidCompleteWithError:(id)arg1;

@end
