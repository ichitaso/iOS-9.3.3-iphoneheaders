/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@protocol TSCH3DPipelineLinkable;
@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {

	id<TSCH3DPipelineLinkable> mSource;
	TSCH3DGLFramebuffer* mTarget;
	TSCH3DGLFramebuffer* mInput;

}

@property (nonatomic,retain) id<TSCH3DPipelineLinkable> source; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * target; 
-(void)loadSource;
-(BOOL)prepareFramebuffer;
-(void)dealloc;
-(void)setTarget:(TSCH3DGLFramebuffer *)arg1 ;
-(void)setSource:(id<TSCH3DPipelineLinkable>)arg1 ;
-(id<TSCH3DPipelineLinkable>)source;
-(TSCH3DGLFramebuffer *)target;
-(BOOL)run;
@end

