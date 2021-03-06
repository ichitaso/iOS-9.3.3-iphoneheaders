/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIStatusBarStyleAttributes, UIStatusBarCorners, UIImageView;

@interface UIStatusBarBackgroundView : UIView {

	UIStatusBarStyleAttributes* _style;
	UIStatusBarCorners* _topCorners;
	UIImageView* _glowView;
	BOOL _glowEnabled;
	BOOL _suppressGlow;

}
-(id)style;
-(id)_baseImage;
-(BOOL)_topCornersAreRounded;
-(void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2 ;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1 ;
-(void)_stopGlowAnimation;
-(BOOL)_styleCanGlow;
-(id)_glowImage;
-(id)_backgroundImageName;
-(id)initWithFrame:(CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setGlowAnimationEnabled:(BOOL)arg1 ;
-(void)setSuppressesGlow:(BOOL)arg1 ;
@end

