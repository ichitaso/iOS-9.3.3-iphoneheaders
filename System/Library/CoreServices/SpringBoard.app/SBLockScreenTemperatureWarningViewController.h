/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenTemperatureWarningView, NSString;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {

	SBLockScreenTemperatureWarningView* _warningView;

}

@property (nonatomic,__weak,readonly) NSString * slideToUnlockText; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)slideToUnlockText;
@end

