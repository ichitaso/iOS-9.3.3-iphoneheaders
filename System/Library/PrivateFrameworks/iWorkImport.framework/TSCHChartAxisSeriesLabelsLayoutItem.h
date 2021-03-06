/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCategoryAxisLabelsLayoutItem.h>

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem
-(unsigned long long)numberOfLabelsForAxis:(id)arg1 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(CGSize)calcMinSize;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2 ;
-(BOOL)showLabelsForAxis:(id)arg1 ;
-(unsigned long long)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(id)initWithParent:(id)arg1 ;
@end

