/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class UIButton;

@interface SBNotificationVibrantButton : UIButton {

	UIButton* _vibrantButton;
	UIButton* _overlayButton;

}

@property (nonatomic,retain) UIButton * vibrantButton;              //@synthesize vibrantButton=_vibrantButton - In the implementation block
@property (nonatomic,retain) UIButton * overlayButton;              //@synthesize overlayButton=_overlayButton - In the implementation block
-(id)initWithColorSettings:(id)arg1 ;
-(void)_configureVibrantViewWithSettings:(id)arg1 ;
-(void)_configureOverlayViewWithSettings:(id)arg1 ;
-(UIButton *)vibrantButton;
-(id)_buttonImageForColor:(id)arg1 selected:(BOOL)arg2 ;
-(id)_newButtonWithBackgroundImage:(id)arg1 selectedImage:(id)arg2 titleColor:(id)arg3 selectedTitleColor:(id)arg4 ;
-(void)setVibrantButton:(UIButton *)arg1 ;
-(UIButton *)overlayButton;
-(void)setOverlayButton:(UIButton *)arg1 ;
-(void)_buttonStateChanged:(id)arg1 ;
-(void)_buttonPushed:(id)arg1 ;
-(void)updateForContenteCategorySizeChange;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)titleLabel;
-(id)_buttonFont;
@end
