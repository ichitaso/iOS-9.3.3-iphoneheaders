/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, AVCaptureVideoPreviewLayer, UIView, CMKEffectsFullsizeView, CMKEffectsGridView, CMKEffectsGridLabelsView;

@interface CMKVideoPreviewView : UIView {

	NSString* _videoGravity;
	BOOL _disableLayoutForPreviewView;
	BOOL _disableLayoutForEffectsFullsizeView;
	BOOL _disableLayoutForEffectsGridViews;
	BOOL _square;
	AVCaptureVideoPreviewLayer* _previewLayer;
	long long _orientation;
	UIView* _previewLayerView;
	CMKEffectsFullsizeView* _effectsFullsizeView;
	CMKEffectsGridView* _effectsGridView;
	CMKEffectsGridLabelsView* _effectsGridLabelsView;
	UIView* _fadeOutView;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                                                           //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain,readonly) UIView * previewLayerView;                                                                  //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (nonatomic,retain,readonly) CMKEffectsFullsizeView * effectsFullsizeView;                                               //@synthesize effectsFullsizeView=_effectsFullsizeView - In the implementation block
@property (nonatomic,retain,readonly) CMKEffectsGridView * effectsGridView;                                                       //@synthesize effectsGridView=_effectsGridView - In the implementation block
@property (nonatomic,retain,readonly) CMKEffectsGridLabelsView * effectsGridLabelsView;                                           //@synthesize effectsGridLabelsView=_effectsGridLabelsView - In the implementation block
@property (nonatomic,retain,readonly) UIView * fadeOutView;                                                                       //@synthesize fadeOutView=_fadeOutView - In the implementation block
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,getter=isDisabledLayoutForPreviewView,nonatomic) BOOL disableLayoutForPreviewView;                              //@synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsFullsizeView,nonatomic) BOOL disableLayoutForEffectsFullsizeView;              //@synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsGridViews,nonatomic) BOOL disableLayoutForEffectsGridViews;                    //@synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews - In the implementation block
@property (assign,getter=isSquare,nonatomic) BOOL square;                                                                         //@synthesize square=_square - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(NSString *)videoGravity;
-(CGRect)rectForCaptureDeviceFace:(id)arg1 ;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)_updateGravityForLayers;
-(BOOL)isSquare;
-(CGRect)frameForView:(id)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)updateToContentSize:(id)arg1 ;
-(CMKEffectsFullsizeView *)effectsFullsizeView;
-(CMKEffectsGridView *)effectsGridView;
-(UIView *)previewLayerView;
-(void)createEffectsFullsizeView;
-(void)createEffectsGridViews;
-(void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1 ;
-(void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1 ;
-(CMKEffectsGridLabelsView *)effectsGridLabelsView;
-(void)setDisableLayoutForEffectsFullsizeView:(BOOL)arg1 ;
-(void)setDisableLayoutForPreviewView:(BOOL)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toSublayer:(id)arg2 ;
-(UIView *)fadeOutView;
-(void)setDisableLayoutForEffectsGridViews:(BOOL)arg1 ;
-(CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1 ;
-(void)setSquare:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSquare:(BOOL)arg1 ;
-(BOOL)isDisabledLayoutForPreviewView;
-(BOOL)isDisabledLayoutForEffectsFullsizeView;
-(BOOL)isDisabledLayoutForEffectsGridViews;
@end
