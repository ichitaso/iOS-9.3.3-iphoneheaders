/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOIdPlacementBaseOperation.h>

@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5 ;
-(id)p_transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformAdd:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRemove:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRearrange:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformPlacement:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 ;
-(id)description;
@end
