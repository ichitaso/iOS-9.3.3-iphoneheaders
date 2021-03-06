/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CommCenter/CTCellularPlanLoggerDelegate.h>

@class NSString;

@interface CTCellularPlanCSILogger : NSObject <CTCellularPlanLoggerDelegate> {

	queue* queue;
	shared_ptr<ctu::Logger>* fLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLogger;
-(id)init;
-(void)didReceiveLogMessage:(id)arg1 withLevel:(int)arg2 ;
@end

