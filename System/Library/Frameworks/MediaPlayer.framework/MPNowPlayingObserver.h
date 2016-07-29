/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, MPStoreDownload, UIImage, NSData, NSMutableDictionary, MPAVController, NSString;

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPStoreDownload* _activeDownload;
	UIImage* _currentArtworkImage;
	NSData* _currentArtworkData;
	BOOL _hasSeenAnyItem;
	NSMutableDictionary* _mediaItemCoalescedUpdateDateAccessedTimers;
	NSObject*<OS_dispatch_queue> _statusBarQueue;
	BOOL _scheduledNowPlayingInfoUpdate;
	BOOL _enabled;
	MPAVController* _player;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) MPAVController * player;                    //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(void)_avItemArtworkDidChangeNotification:(id)arg1 ;
-(void)_avItemDurationDidChangeNotification:(id)arg1 ;
-(void)_avItemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_avItemLikedStateDidChangeNotification:(id)arg1 ;
-(void)_avItemTitlesDidChangeNotification:(id)arg1 ;
-(BOOL)_reloadArtworkIfPossible;
-(void)_setNeedsNowPlayingInfoUpdate;
-(id)_storeDownloadForNowPlayingItemInArray:(id)arg1 ;
-(void)_updateProgressForDownload:(id)arg1 ;
-(BOOL)_hasProperConditionsToLoadArtwork;
-(void)_coalescedUpdateLastUsedDateForCurrentItem;
-(void)_prefetchArtworkForNextItem;
-(id)_activeDownloadForItemWithStoreID:(long long)arg1 ;
-(long long)_MPNowPlayingDownloadStateForDownload:(id)arg1 ;
-(void)_postNowPlayingInfoForItem:(id)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2 ;
-(void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_contentsDidChangeNotification:(id)arg1 ;
-(void)_crossedTimeMarkerNotification:(id)arg1 ;
-(void)_itemDidFinishLoadingNotification:(id)arg1 ;
-(void)_repeatTypeDidChangeNotification:(id)arg1 ;
-(void)_postNowPlayingInfo;
-(BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1 ;
-(void)_playbackErrorNotification:(id)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(void)configureArtworkCatalog:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(id)_additionalKeysForNowPlayingItem:(id)arg1 ;
-(void)_unregisterForNotificationsForPlayer:(id)arg1 ;
-(void)_registerForNotificationsForPlayer:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
@end
