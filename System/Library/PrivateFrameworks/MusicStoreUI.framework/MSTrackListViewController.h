/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MSStructuredPageViewController.h>
#import <libobjc.A.dylib/MSTrackListHeaderDelegate.h>

@class MSTrackListHeaderView, NSString;

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {

	MSTrackListHeaderView* _headerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)newTermsAndConditionsFooter;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_reloadHeaderView;
-(void)_webViewsLoaded:(id)arg1 ;
-(void)_reloadFooterView;
-(void)_delayedReloadForWebViews;
-(id)_headerArtworkItemImage;
-(id)_newImageDataProvider;
-(id)_newPlaceholderImage;
-(id)_headerArtworkImage;
-(id)purchasableItemsForHeaderView:(id)arg1 ;
@end
