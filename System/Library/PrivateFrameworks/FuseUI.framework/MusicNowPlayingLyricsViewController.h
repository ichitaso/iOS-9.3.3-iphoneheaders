/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPURatingControlDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class _UIBackdropView, UITextView, MusicNowPlayingRatingControl, UIView, MPAVItem, NSString;

@interface MusicNowPlayingLyricsViewController : UIViewController <MPURatingControlDelegate, UIViewControllerTransitioningDelegate> {

	_UIBackdropView* _backdropView;
	UITextView* _textView;
	MusicNowPlayingRatingControl* _ratingControl;
	UIView* _hairlineView;
	MPAVItem* _currentItem;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;                            //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
@property (nonatomic,readonly) UIView * hairlineView;                                     //@synthesize hairlineView=_hairlineView - In the implementation block
@property (nonatomic,retain) MPAVItem * currentItem;                                      //@synthesize currentItem=_currentItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIBackdropView *)backdropView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(MPAVItem *)currentItem;
-(UITextView *)textView;
-(MusicNowPlayingRatingControl *)ratingControl;
-(UIView *)hairlineView;
-(void)_updateLyrics;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
@end

