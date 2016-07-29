/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class NSArray, NSString;

@interface AXForceTouchController : AccessibilityBaseListController <UIViewControllerPreviewingDelegate> {

	BOOL _forceTouchSettingsEnabled;
	id<UIViewControllerPreviewing> _viewControllerPreviewing;
	BOOL _shouldIgnoreNextEnabledChangedNotification;
	NSArray* _forceTouchSettingItems;

}

@property (assign,nonatomic) BOOL shouldIgnoreNextEnabledChangedNotification;              //@synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification - In the implementation block
@property (nonatomic,retain) NSArray * forceTouchSettingItems;                             //@synthesize forceTouchSettingItems=_forceTouchSettingItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_specsForTester;
-(void)setShouldIgnoreNextEnabledChangedNotification:(BOOL)arg1 ;
-(void)setForceTouchSensitivity:(id)arg1 specifier:(id)arg2 ;
-(void)setForceTouchSettingItems:(NSArray *)arg1 ;
-(id)_specsForSensitivity;
-(void)setForceTouchSettingsEnabled:(BOOL)arg1 ;
-(NSArray *)forceTouchSettingItems;
-(id)_specsForMasterSwitch;
-(id)forceTouchSensitivity:(id)arg1 ;
-(void)setForceTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)shouldIgnoreNextEnabledChangedNotification;
-(id)forceTouchEnabled:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)specifiers;
@end
