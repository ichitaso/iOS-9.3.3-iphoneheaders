/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <UIKit/UIView.h>

@protocol AXSpeakOverlayControlBarDelegate;
@class UIButton, UILabel, UIView, NSArray;

@interface AXSpeakOverlayControlBar : UIView {

	UIButton* _playPauseButton;
	UIButton* _tabModeButton;
	UIButton* _slowdownButton;
	UIButton* _stopButton;
	UIButton* _rewindButton;
	UIButton* _forwardButton;
	UIButton* _speedupButton;
	UILabel* _header;
	UIView* _dragView;
	BOOL _inTabMode;
	CGPoint _panGestureAnchor;
	id<AXSpeakOverlayControlBarDelegate> _delegate;
	NSArray* _minimizedConstraints;
	NSArray* _maximizedConstraints;

}

@property (assign,nonatomic,__weak) id<AXSpeakOverlayControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * minimizedConstraints;                                    //@synthesize minimizedConstraints=_minimizedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * maximizedConstraints;                                    //@synthesize maximizedConstraints=_maximizedConstraints - In the implementation block
+(CGSize)nubbitSize;
+(CGSize)controlBarSize;
-(void)setMinimizedConstraints:(NSArray *)arg1 ;
-(void)_playPauseButtonPressed;
-(NSArray *)maximizedConstraints;
-(NSArray *)minimizedConstraints;
-(void)changeToPauseButton;
-(void)_rewindButtonPressed;
-(void)_fastForwardButtonPressed;
-(void)setMaximizedConstraints:(NSArray *)arg1 ;
-(void)_addButtonConstraints:(id)arg1 ;
-(void)changeToResumeButton;
-(void)_speedUpButtonPressed;
-(void)_slowDownButtonPressed;
-(void)_loadButtonsAndConstraints:(id)arg1 ;
-(void)_tabModeButtonPressed;
-(void)setInTabMode:(BOOL)arg1 ;
-(id)_buttons;
-(void)_updateAccessibilityElements;
-(id)_roundButtons;
-(void)_updateButton:(id)arg1 withImageName:(id)arg2 accessibilityLabel:(id)arg3 ;
-(id)_addButtonWithImageName:(id)arg1 accessibilityLabel:(id)arg2 round:(BOOL)arg3 action:(SEL)arg4 ;
-(void)setTitleHeader:(id)arg1 ;
-(void)_headerTapped:(id)arg1 ;
-(id)_squareButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXSpeakOverlayControlBarDelegate>)arg1 ;
-(id<AXSpeakOverlayControlBarDelegate>)delegate;
-(void)_handlePan:(id)arg1 ;
-(void)_stopButtonPressed;
@end

