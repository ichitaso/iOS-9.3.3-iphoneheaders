/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHImage : NSObject
+(int)handleFloatingImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(CGPathRef)arg6 state:(id)arg7 ;
+(int)handleInlineImageBinary:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(CGPathRef)arg5 style:(id)arg6 state:(id)arg7 ;
+(void)handleSimpleImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 state:(id)arg4 ;
+(void)mapMaskedImage:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(CGPathRef)arg5 graphicStyle:(id)arg6 isFloating:(BOOL)arg7 state:(id)arg8 ;
+(void)mapCropGeometry:(id)arg1 bounds:(id)arg2 style:(id)arg3 ;
+(int)handleFloatingMedia:(id)arg1 state:(id)arg2 ;
+(int)handleFloatingWebView:(id)arg1 state:(id)arg2 ;
+(int)handleInlineMedia:(id)arg1 state:(id)arg2 ;
+(int)handleInlineWebView:(id)arg1 state:(id)arg2 ;
@end
