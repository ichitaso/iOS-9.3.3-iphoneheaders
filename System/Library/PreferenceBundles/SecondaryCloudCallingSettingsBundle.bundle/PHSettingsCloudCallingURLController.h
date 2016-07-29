/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/SecondaryCloudCallingSettingsBundle.bundle/SecondaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (retain) NSString * bundleDescriptor;                                                   //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (nonatomic,readonly) BOOL shouldShowEmergencyAddress; 
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(void)enableCapability;
-(BOOL)shouldEnableCapability;
-(void)loadWebViewController;
-(BOOL)shouldShowEmergencyAddress;
-(NSString *)bundleDescriptor;
-(id)provisionCapabilityController;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(id)genericErrorAlertController;
-(void)webSheetCompletion;
-(void)reloadWebViewController;
-(id)updateEmergencyAddressController;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end
