/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Audio.qldisplay/Audio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Audio/Audio-Structs.h>
#import <UIKit/UIButton.h>

@interface QLPlayPauseButton : UIButton {

	BOOL _playing;

}

@property (assign,nonatomic) BOOL playing;              //@synthesize playing=_playing - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
@end

