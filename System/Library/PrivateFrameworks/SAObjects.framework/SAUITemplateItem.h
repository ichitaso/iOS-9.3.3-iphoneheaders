/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SAUITemplateEdgeInsets;


@protocol SAUITemplateItem <SAAceSerializable>
@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@required
-(void)setPadding:(id)arg1;
-(SAUITemplateEdgeInsets *)padding;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(id)arg1;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(id)arg1;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1;
-(void)setPresentationOptions:(id)arg1;
-(NSArray *)presentationOptions;

@end
