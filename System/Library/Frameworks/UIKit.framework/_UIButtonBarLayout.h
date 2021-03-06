/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIButtonBarLayoutMetricsData;
@interface _UIButtonBarLayout : NSObject {

	id<_UIButtonBarLayoutMetricsData> _layoutMetrics;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(id)init;
-(id)description;
-(id)_item;
-(BOOL)_shouldBeDirty;
-(void)_configure;
-(void)configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)_isSpace;
-(BOOL)_isGroup;
-(BOOL)compact;
-(void)setDirty:(BOOL)arg1 ;
-(void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(void)addLayoutViews:(id)arg1 ;
-(void)addLayoutGuides:(id)arg1 ;
-(void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(BOOL)dirty;
@end

