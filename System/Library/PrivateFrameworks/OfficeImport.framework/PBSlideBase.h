/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBSlideBase : NSObject
+(BOOL)slideFollowsMasterBackground:(id)arg1 ;
+(void)parseSlideShowInfo:(PptSSSlideInfoAtom*)arg1 slideBase:(id)arg2 state:(id)arg3 ;
+(int)parseTransType:(int)arg1 direction:(long long)arg2 ;
+(id)newOptions:(long long)arg1 transType:(int)arg2 ;
+(unsigned char)mapDirection:(id)arg1 ;
+(BOOL)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
+(void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3 ;
+(void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3 ;
+(void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3 ;
+(unsigned long long)authorIdForName:(id)arg1 state:(id)arg2 ;
+(id)nonPlaceholderDrawablesAmongDrawables:(id)arg1 ;
@end

