/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class NSArray;

@interface ABLEMockCDAttributeWithData : NSObject <ABLEMockCDAttributeProtocol> {

	NSArray* _data;

}

@property (retain) NSArray * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(id)initWithTable:(id)arg1 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
@end

