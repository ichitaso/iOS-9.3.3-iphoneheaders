/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSString;

@interface _MTLComputePipelineState : NSObject {

	NSString* _label;
	id<MTLDevice> _device;

}

@property (readonly) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(id<MTLDevice>)device;
@end
