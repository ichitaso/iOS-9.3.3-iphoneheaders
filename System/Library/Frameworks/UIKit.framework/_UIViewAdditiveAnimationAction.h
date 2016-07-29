/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAction.h>

@class CAAnimation;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

	CAAnimation* _pendingAnimation;

}

@property (nonatomic,retain,readonly) CAAnimation * pendingAnimation;              //@synthesize pendingAnimation=_pendingAnimation - In the implementation block
-(CAAnimation *)pendingAnimation;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(id)initWithPendingAnimation:(id)arg1 ;
@end
