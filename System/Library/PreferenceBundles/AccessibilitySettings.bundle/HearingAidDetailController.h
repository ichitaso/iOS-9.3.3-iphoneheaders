/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingDetailViewController.h>

@class AXRemoteHearingAidDevice, NSTimer;

@interface HearingAidDetailController : AXHearingDetailViewController {

	AXRemoteHearingAidDevice* _device;
	NSTimer* _hysteresisTimer;

}

@property (nonatomic,retain) NSTimer * hysteresisTimer;              //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
-(id)independentAids:(id)arg1 ;
-(void)setShouldStream:(id)arg1 specifier:(id)arg2 ;
-(void)setIndependentAids:(id)arg1 specifier:(id)arg2 ;
-(void)forgetAid:(id)arg1 ;
-(id)shouldStream:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(NSTimer *)hysteresisTimer;
-(void)setHysteresisTimer:(NSTimer *)arg1 ;
-(void)setDevice:(id)arg1 ;
-(id)disconnectedSpecifiers;
-(id)specifiers;
-(id)device;
@end

