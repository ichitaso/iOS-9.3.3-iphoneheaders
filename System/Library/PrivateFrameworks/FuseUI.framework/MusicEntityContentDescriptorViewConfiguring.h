/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MusicEntityViewContentDescriptor;


@protocol MusicEntityContentDescriptorViewConfiguring <NSObject>
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@optional
-(void)setEntityDisabled:(BOOL)arg1;
-(void)setTextLateralEdgePadding:(double)arg1;
-(void)updateForAsynchronousPropertyLoadCompleted;

@required
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
-(void)setEntityValueProvider:(id)arg1;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(id)arg1;

@end

