/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	BOOL mCategoryAxesReversed;
	BOOL mCategoryAxesReversedOverridden;
	BOOL mContainsVolumeStockType;

}
-(BOOL)isCategoryAxesReversed:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)graphicProperties;
-(id)axes;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)chartTypes;
-(BOOL)hasSecondaryAxis;
-(BOOL)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(BOOL)containsVolumeStockType;
-(void)setContainsVolumeStockType:(BOOL)arg1 ;
@end

