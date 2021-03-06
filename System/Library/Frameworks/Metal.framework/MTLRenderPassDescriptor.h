/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
+(id)renderPassDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

