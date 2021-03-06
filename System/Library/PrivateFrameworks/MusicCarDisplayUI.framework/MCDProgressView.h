/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MCDProgressBarView, NSLayoutConstraint;

@interface MCDProgressView : UIView {

	BOOL _progressActive;
	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _liveLabel;
	MCDProgressBarView* _progressBarView;
	NSLayoutConstraint* _leftConstant;
	NSLayoutConstraint* _rightConstant;
	float _progress;
	BOOL _isLive;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_addConstraints;
-(void)setPlaybackTime:(double)arg1 duration:(double)arg2 ;
@end

