/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UILabel, UIButton, UIActivityIndicatorView;

@interface PKWelcomeHeaderView : UIView {

	UIView* _titleView;
	UILabel* _environmentLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _showActivityIndicator;
	BOOL _showSEHinting;
	unsigned long long _passType;

}

@property (nonatomic,readonly) unsigned long long passType;              //@synthesize passType=_passType - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                 //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showSEHinting;                         //@synthesize showSEHinting=_showSEHinting - In the implementation block
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(unsigned long long)passType;
-(id)initWithPassType:(unsigned long long)arg1 ;
-(void)addTapped;
-(void)_addTapped;
-(void)setShowSEHinting:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(BOOL)showSEHinting;
@end

