/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UILabel.h>

@interface MapsLabelWithEdgeInsets : UILabel {

	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(UIEdgeInsets)edgeInsets;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

