/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, SiriUIKeyline;

@interface ACSportsPlaySummaryView : UIView {

	UILabel* _goalTimeLabel;
	UILabel* _goalScorerLabel;
	BOOL _isHome;
	NSString* _goalTime;
	NSString* _goalScorer;
	SiriUIKeyline* _leftKeyline;
	SiriUIKeyline* _rightKeyline;

}

@property (nonatomic,retain) NSString * goalTime;                       //@synthesize goalTime=_goalTime - In the implementation block
@property (nonatomic,retain) NSString * goalScorer;                     //@synthesize goalScorer=_goalScorer - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * leftKeyline;               //@synthesize leftKeyline=_leftKeyline - In the implementation block
@property (nonatomic,retain) SiriUIKeyline * rightKeyline;              //@synthesize rightKeyline=_rightKeyline - In the implementation block
@property (assign,nonatomic) BOOL isHome;                               //@synthesize isHome=_isHome - In the implementation block
-(void)setRightKeyline:(SiriUIKeyline *)arg1 ;
-(SiriUIKeyline *)leftKeyline;
-(void)setGoalScorer:(NSString *)arg1 ;
-(SiriUIKeyline *)rightKeyline;
-(void)setLeftKeyline:(SiriUIKeyline *)arg1 ;
-(NSString *)goalScorer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setIsHome:(BOOL)arg1 ;
-(BOOL)isHome;
-(NSString *)goalTime;
-(void)setGoalTime:(NSString *)arg1 ;
@end
