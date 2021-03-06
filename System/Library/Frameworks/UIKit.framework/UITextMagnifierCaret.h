/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextMagnifier.h>

@interface UITextMagnifierCaret : UITextMagnifier {

	double _yOffset;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double yOffset;              //@synthesize yOffset=_yOffset - In the implementation block
+(id)sharedCaretMagnifier;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(BOOL)terminalPointPlacedCarefully;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(double)yOffset;
-(id)initWithFrame;
-(void)updateFrameAndOffset;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(void)zoomUpAnimation;
-(CGPoint)animationPoint;
-(void)zoomDownAnimation;
-(BOOL)isHorizontal;
-(void)setYOffset:(double)arg1 ;
@end

