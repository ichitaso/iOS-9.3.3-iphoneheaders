/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/ServerDocsClient-Structs.h>
#import <UIKit/UIViewController.h>
#import <ServerDocsClient/SVViewOptionsHeaderViewDelegate.h>
#import <ServerDocsClient/SVFilesContainerViewController.h>
@class NSArray;


@protocol SVFilesContainerViewController <NSObject>
@property (nonatomic,readonly) BOOL showViewOptionsHeaderView; 
@property (nonatomic,readonly) NSArray * validTypes; 
@property (nonatomic,readonly) BOOL showDisclosureIndicatorForFiles; 
@required
-(void)snapToShowOrHideHeaderForContentOffset:(double)arg1 animated:(BOOL)arg2;
-(void)adjustContentInset;
-(void)hideViewOptionsHeaderIfNecessary;
-(void)updateViewForSizeChangeWithCoordinator:(id)arg1;
-(BOOL)showViewOptionsHeaderView;
-(BOOL)showDisclosureIndicatorForFiles;
-(NSArray *)validTypes;
-(void)didSelectItem:(id)arg1;

@end


@protocol SVFilesChildViewController;
@class NSArray, SVMetadataItem, SVMetadataCache, DCService, UIViewController, UIActivityIndicatorView, SVErrorView, UILabel, NSString;

@interface SVFilesContainerViewController : UIViewController <SVViewOptionsHeaderViewDelegate, SVFilesContainerViewController> {

	SVMetadataItem* _directoryItem;
	SVMetadataCache* _metadataCache;
	long long _displayMode;
	DCService* _server;
	UIViewController*<SVFilesChildViewController> _childViewController;
	UIActivityIndicatorView* _loadingView;
	SVErrorView* _errorView;
	UILabel* _emptyFolderLabel;
	long long _viewOptionsVisibility;

}

@property (nonatomic,readonly) NSString * directoryPath; 
@property (nonatomic,retain) SVMetadataItem * directoryItem;                                                 //@synthesize directoryItem=_directoryItem - In the implementation block
@property (nonatomic,retain) SVMetadataCache * metadataCache;                                                //@synthesize metadataCache=_metadataCache - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                          //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) DCService * server;                                                             //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSString * defaultTitle; 
@property (nonatomic,retain) UIViewController*<SVFilesChildViewController> childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingView;                                          //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) SVErrorView * errorView;                                                        //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) UILabel * emptyFolderLabel;                                                     //@synthesize emptyFolderLabel=_emptyFolderLabel - In the implementation block
@property (assign,nonatomic) long long viewOptionsVisibility;                                                //@synthesize viewOptionsVisibility=_viewOptionsVisibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL showViewOptionsHeaderView; 
@property (nonatomic,readonly) NSArray * validTypes; 
@property (nonatomic,readonly) BOOL showDisclosureIndicatorForFiles; 
-(void)didUpdateAccounts;
-(void)updateTraitCollection;
-(id)initWithServer:(id)arg1 directoryItem:(id)arg2 ;
-(void)setDirectoryItem:(SVMetadataItem *)arg1 ;
-(void)setMetadataCache:(SVMetadataCache *)arg1 ;
-(void)metadataCacheDidUpdateContents:(id)arg1 ;
-(SVMetadataCache *)metadataCache;
-(void)metadataCacheDidUpdateAttributes:(id)arg1 ;
-(void)metadataCacheDidFailToUpdate:(id)arg1 ;
-(void)didStartOrEndUploads:(id)arg1 ;
-(void)setViewOptionsVisibility:(long long)arg1 ;
-(void)updateDisplayModeAndSortOrder;
-(void)getDirectoryContents;
-(void)snapToShowOrHideHeaderForContentOffset:(double)arg1 animated:(BOOL)arg2 ;
-(void)setUpChildViewController;
-(void)adjustContentInset;
-(void)hideViewOptionsHeaderIfNecessary;
-(long long)viewOptionsVisibility;
-(void)updateViewForSizeChangeWithCoordinator:(id)arg1 ;
-(SVMetadataItem *)directoryItem;
-(NSString *)defaultTitle;
-(void)createLoadingView;
-(UILabel *)emptyFolderLabel;
-(void)showUserNameOrPasswordIncorrectAlertForError:(id)arg1 ;
-(void)headerView:(id)arg1 didToggleDisplayMode:(long long)arg2 ;
-(void)headerView:(id)arg1 didChangeSortOrder:(long long)arg2 ;
-(BOOL)showViewOptionsHeaderView;
-(BOOL)showDisclosureIndicatorForFiles;
-(long long)detailLabelType;
-(void)setEmptyFolderLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(DCService *)server;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSArray *)validTypes;
-(void)didSelectItem:(id)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(UIViewController*<SVFilesChildViewController>)childViewController;
-(void)setChildViewController:(UIViewController*<SVFilesChildViewController>)arg1 ;
-(UIActivityIndicatorView *)loadingView;
-(void)setErrorView:(SVErrorView *)arg1 ;
-(SVErrorView *)errorView;
-(void)setServer:(DCService *)arg1 ;
-(void)setLoadingView:(UIActivityIndicatorView *)arg1 ;
-(NSString *)directoryPath;
@end

