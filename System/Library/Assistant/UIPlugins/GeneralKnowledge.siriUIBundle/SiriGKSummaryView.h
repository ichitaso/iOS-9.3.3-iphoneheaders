/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UITextView, UILabel, UIImageView, UIView;

@interface SiriGKSummaryView : SiriGKView {

	UITextView* _summaryTextView;
	UILabel* _captionLabel;
	UIImageView* _insetImageView;
	UIView* _placeholderView;

}
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithText:(id)arg1 caption:(id)arg2 imageResource:(id)arg3 usingPersistentStore:(id)arg4 ;
-(void)_configureWithImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
