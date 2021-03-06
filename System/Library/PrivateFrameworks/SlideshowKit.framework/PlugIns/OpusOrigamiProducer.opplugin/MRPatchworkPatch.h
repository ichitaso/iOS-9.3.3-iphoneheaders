/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRImage;

@interface MRPatchworkPatch : NSObject {

	MRImage* _image;
	CGRect rectangle;
	BOOL needsBlend;

}

@property (nonatomic,retain) MRImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect rectangle; 
@property (assign,nonatomic) BOOL needsBlend; 
-(id)initWithImage:(id)arg1 rectangle:(CGRect)arg2 needsBlend:(BOOL)arg3 ;
-(void)setNeedsBlend:(BOOL)arg1 ;
-(BOOL)needsBlend;
-(void)setImage:(MRImage *)arg1 ;
-(void)dealloc;
-(MRImage *)image;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
@end

