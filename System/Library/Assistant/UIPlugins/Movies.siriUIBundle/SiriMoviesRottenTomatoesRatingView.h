/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSNumber;

@interface SiriMoviesRottenTomatoesRatingView : UIView {

	UIImageView* _tomatoImageView;
	UILabel* _percentageLabel;
	double _tomatoImageViewRightPadding;
	NSNumber* _tomatoRating;

}
-(id)initWithRating:(id)arg1 viewSize:(long long)arg2 showProviderName:(BOOL)arg3 ;
-(BOOL)_isFresh;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromTopOfFrame;
@end
