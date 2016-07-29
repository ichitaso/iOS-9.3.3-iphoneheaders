/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSArray, PSSpecifier, ACUIAccountViewProvidersManager, NSString;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {

	BOOL _dontShowSecondLevelOtherAccountTypes;
	NSArray* _preEnabledDataclasses;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	PSSpecifier* _gmailSpecifier;

}

@property (nonatomic,readonly) ACUIAccountViewProvidersManager * viewProvidersManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_specifierForiCloudAccount;
-(id)_specifierForExchangeAccount;
-(id)_specifiersForRegionalMailAccounts;
-(id)_specifierForGmailAccount;
-(id)_specifierForYahooAccount;
-(id)_specifierForAOLAccount;
-(id)_specifierForOutlookAccount;
-(id)specifierForOtherAccounts;
-(id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2 ;
-(id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2 ;
-(ACUIAccountViewProvidersManager *)viewProvidersManager;
-(void)_createCustomControlledAccountTapped:(id)arg1 ;
-(void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)arg1 ;
-(id)_specifierForRegionalAccountType:(id)arg1 ;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)specifiers;
@end
