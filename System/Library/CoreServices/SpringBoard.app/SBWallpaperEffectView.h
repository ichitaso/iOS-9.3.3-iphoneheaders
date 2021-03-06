/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlurObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@protocol _SBFakeBlur;
@class UIColor, UIView, UIImageView, UIImage, NSString;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBAppViewBackgroundView> {

	long long _variant;
	UIColor* _wallpaperAverageColor;
	long long _startStyle;
	long long _endStyle;
	double _transitionFraction;
	UIView*<_SBFakeBlur> _blurView;
	UIView* _grayscaleTintView;
	UIView* _colorTintView;
	UIView*<_SBFakeBlur> _transitionBlurView;
	UIView* _transitionGrayscaleTintView;
	UIView* _transitionColorTintView;
	UIImageView* _maskImageView;
	UIView* _blurMaskingContainer;
	UIView* _tintMaskingContainer;
	UIImage* _maskImage;
	BOOL _shouldMaskBlur;
	BOOL _shouldMaskTint;
	BOOL _fullscreen;
	BOOL _forcesOpaque;
	BOOL _accessibilityReduceTransparencyEnabled;

}

@property (assign,nonatomic) BOOL fullscreen;                                      //@synthesize fullscreen=_fullscreen - In the implementation block
@property (assign,nonatomic) BOOL forcesOpaque;                                    //@synthesize forcesOpaque=_forcesOpaque - In the implementation block
@property (nonatomic,retain) UIView*<_SBFakeBlur> blurView;                        //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                           //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                               //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIView*<_SBFakeBlur> transitionBlurView;              //@synthesize transitionBlurView=_transitionBlurView - In the implementation block
@property (nonatomic,retain) UIView * transitionGrayscaleTintView;                 //@synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView - In the implementation block
@property (nonatomic,retain) UIView * transitionColorTintView;                     //@synthesize transitionColorTintView=_transitionColorTintView - In the implementation block
@property (nonatomic,retain) UIImageView * maskImageView;                          //@synthesize maskImageView=_maskImageView - In the implementation block
@property (nonatomic,retain) UIView * blurMaskingContainer;                        //@synthesize blurMaskingContainer=_blurMaskingContainer - In the implementation block
@property (nonatomic,retain) UIView * tintMaskingContainer;                        //@synthesize tintMaskingContainer=_tintMaskingContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDiscreteWallpaperEffect; 
@property (assign,nonatomic) long long wallpaperStyle; 
+(id)imageInRect:(CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(BOOL)arg6 masksTint:(BOOL)arg7 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)setForcesOpaque:(BOOL)arg1 ;
-(BOOL)prepareToAnimateToTransitionState:(inout SCD_Struct_SB20*)arg1 ;
-(void)setTransitionState:(SCD_Struct_SB20)arg1 ;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(BOOL)currentTransitionStateIsOpaque;
-(void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2 ;
-(BOOL)fullscreen;
-(void)setMaskImage:(id)arg1 masksBlur:(BOOL)arg2 masksTint:(BOOL)arg3 ;
-(void)_configureFromScratch;
-(void)_setTransitionFraction:(double)arg1 ;
-(void)_configureForCurrentBlurStyle;
-(void)_updateWallpaperAverageColor:(id)arg1 ;
-(void)setTransitionBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(void)setMaskImageView:(UIImageView *)arg1 ;
-(void)setTintMaskingContainer:(UIView *)arg1 ;
-(void)setBlurMaskingContainer:(UIView *)arg1 ;
-(void)_configureGrayscaleAndColorTintViewForStartStyle:(BOOL)arg1 ;
-(void)setTransitionGrayscaleTintView:(UIView *)arg1 ;
-(void)setTransitionColorTintView:(UIView *)arg1 ;
-(UIView *)transitionGrayscaleTintView;
-(UIView *)transitionColorTintView;
-(BOOL)forcesOpaque;
-(UIView*<_SBFakeBlur>)transitionBlurView;
-(UIImageView *)maskImageView;
-(UIView *)blurMaskingContainer;
-(UIView *)tintMaskingContainer;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(void)setStyle:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setAppearanceStorage:(id)arg1 ;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(UIView*<_SBFakeBlur>)blurView;
-(void)setBlurView:(UIView*<_SBFakeBlur>)arg1 ;
-(UIView *)grayscaleTintView;
-(UIView *)colorTintView;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)_configureViews;
-(id)initWithWallpaperVariant:(long long)arg1 ;
@end

