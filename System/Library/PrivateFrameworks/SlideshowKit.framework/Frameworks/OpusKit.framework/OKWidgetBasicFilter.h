/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CIImage, OKPresentation, NSString;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport> {

	CIImage* _inputImage;
	OKPresentation* _inputPresentation;

}

@property (assign,nonatomic) OKPresentation * inputPresentation;              //@synthesize inputPresentation=_inputPresentation - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                            //@synthesize inputImage=_inputImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)inputKeys;
-(OKPresentation *)inputPresentation;
-(void)setInputPresentation:(OKPresentation *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

