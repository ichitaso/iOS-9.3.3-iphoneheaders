/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class NSDate, DuetSampleData;

@interface ABLEMockCDAttribute : NSObject <ABLEMockCDAttributeProtocol> {

	NSDate* _endDate;
	DuetSampleData* _duetSampleData;

}

@property (retain) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (retain) DuetSampleData * duetSampleData;              //@synthesize duetSampleData=_duetSampleData - In the implementation block
-(DuetSampleData *)duetSampleData;
-(void)setDuetSampleData:(DuetSampleData *)arg1 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)initWithEndDate:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
@end
