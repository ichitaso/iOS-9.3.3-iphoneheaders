/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@interface _UITextKitSelectionRect : UITextSelectionRect {

	BOOL _containsEnd;
	BOOL _containsStart;
	BOOL _vertical;
	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                                //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) BOOL containsStart;                           //@synthesize containsStart=_containsStart - In the implementation block
@property (assign,nonatomic) BOOL containsEnd;                             //@synthesize containsEnd=_containsEnd - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;              //@synthesize vertical=_vertical - In the implementation block
+(id)selectionRectWithRect:(CGRect)arg1 fromView:(id)arg2 ;
-(id)description;
-(CGRect)rect;
-(long long)writingDirection;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(void)setRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setVertical:(BOOL)arg1 ;
@end
