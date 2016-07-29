/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISegmentedControl.h>

@class _UILegibilitySettings;

@interface SBSUIEffectsSegmentedControl : UISegmentedControl {

	BOOL _parallaxPossible;
	BOOL _irisPossible;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) unsigned long long selectedEffect; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(unsigned long long)selectedEffect;
-(id)initWithParallaxPossible:(BOOL)arg1 irisPossible:(BOOL)arg2 ;
-(void)setSelectedEffect:(unsigned long long)arg1 ;
@end
