/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSDLineEnd : NSObject <NSCopying> {

	CGPathRef mPath;
	CGPathRef mWrapPath;
	CGPoint mEndPoint;
	BOOL mIsFilled;
	NSString* mIdentifier;
	int mLineJoin;

}

@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) CGPathRef wrapPath; 
@property (nonatomic,readonly) CGPoint endPoint; 
@property (nonatomic,readonly) BOOL isFilled; 
@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int lineJoin; 
+(id)line;
+(id)lineEndWithPath:(CGPathRef)arg1 wrapPath:(CGPathRef)arg2 endPoint:(CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 ;
+(id)lineEndWithIdentifier:(id)arg1 ;
+(id)lineEndWithPath:(CGPathRef)arg1 endPoint:(CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
+(id)simpleArrow;
+(id)filledCircle;
+(id)filledDiamond;
+(id)openArrow;
+(id)filledArrow;
+(id)filledSquare;
+(id)openSquare;
+(id)openCircle;
+(id)invertedArrow;
+(id)none;
+(id)lineEndWithType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)endPoint;
-(BOOL)isFilled;
-(BOOL)isNone;
-(id)initWithPath:(CGPathRef)arg1 wrapPath:(CGPathRef)arg2 endPoint:(CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6 ;
-(id)initWithPath:(CGPathRef)arg1 endPoint:(CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
-(CGPathRef)wrapPath;
-(int)lineJoin;
@end
