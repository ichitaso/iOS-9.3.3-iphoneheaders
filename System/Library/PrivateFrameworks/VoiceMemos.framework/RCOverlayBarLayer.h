/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer, UIColor;

@interface RCOverlayBarLayer : CALayer {

	CALayer* _topKnob;
	CALayer* _bar;
	CALayer* _bottomKnob;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 ;
-(void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 ;
-(id)barComponents;
@end

