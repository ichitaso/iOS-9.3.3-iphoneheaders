/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BSUIAnimationFactory.h>

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {

	_UIViewAnimationAttributes* _attributes;

}
-(id)_initWithSettings:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(double)delay;
-(void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithAttributes:(id)arg1 ;
-(id)factoryWithTimingFunction:(id)arg1 ;
@end

