/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVideoCompositionInstruction;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_CM5 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	id<AVVideoCompositionInstruction> _instruction;
	BOOL _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM5 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) id<AVVideoCompositionInstruction> instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(BOOL)isFinished;
-(AVVideoCompositionRenderContext *)renderContext;
-(SCD_Struct_CM5)compositionTime;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(void)setRenderContext:(AVVideoCompositionRenderContext *)arg1 ;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(void)setCompositionTime:(SCD_Struct_CM5)arg1 ;
-(NSDictionary *)sourcesByTrackID;
-(void)setSourcesByTrackID:(NSDictionary *)arg1 ;
-(NSArray *)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(NSArray *)arg1 ;
-(void)setInstruction:(id<AVVideoCompositionInstruction>)arg1 ;
-(id<AVVideoCompositionInstruction>)instruction;
-(AVWeakReference *)session;
-(void)setSession:(AVWeakReference *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
@end

