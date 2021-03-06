/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPBrush, MFPCustomLineCap;

@interface MFPPen : NSObject {

	MFPBrush* mBrush;
	float mWidth;
	CGAffineTransform mTransform;
	int mStartCap;
	int mEndCap;
	int mLineJoin;
	float mMiterLimit;
	int mDashStyle;
	int mDashCap;
	float mDashOffset;
	int mDashPatternCount;
	float* mDashPattern;
	int mAlignment;
	int mCompoundArrayCount;
	float* mCompoundArray;
	MFPCustomLineCap* mCustomStartCap;
	MFPCustomLineCap* mCustomEndCap;

}
-(void)setAlignment:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(float)width;
-(int)alignment;
-(void)setWidth:(float)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setStartCap:(int)arg1 ;
-(void)setEndCap:(int)arg1 ;
-(void)setDashStyle:(int)arg1 ;
-(void)setDashCap:(int)arg1 ;
-(void)setDashOffset:(float)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 ;
-(void)setCompoundArray:(const float*)arg1 count:(int)arg2 ;
-(void)setBrush:(id)arg1 ;
-(void)strokePath:(id)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 toPath:(id)arg3 ;
-(void)applyLineCapToPath:(id)arg1 ;
-(void)applyDashCapToPath:(id)arg1 ;
-(void)applyLineJoinToPath:(id)arg1 ;
-(void)applyDashPatternToPath:(id)arg1 ;
-(id)brush;
-(int)startCap;
-(int)endCap;
-(int)lineJoin;
-(int)dashStyle;
-(int)dashCap;
-(float)dashOffset;
-(int)dashPatternCount;
-(const float*)dashPattern;
-(int)compoundArrayCount;
-(const float*)compoundArray;
-(id)customStartCap;
-(void)setCustomStartCap:(id)arg1 ;
-(id)customEndCap;
-(void)setCustomEndCap:(id)arg1 ;
@end

