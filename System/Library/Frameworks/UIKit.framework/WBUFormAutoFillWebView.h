/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSString;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:,nonatomic,copy) NSString * webui_lastGeneratedPasswordForCurrentBackForwardItem; 
@required
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(UIView *)webui_viewForAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;
-(NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
-(void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;

@end

