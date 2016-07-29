/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSProgressFraction;

@interface _NSProgressFractionTuple : NSObject {

	_NSProgressFraction* _previous;
	_NSProgressFraction* _next;

}

@property (copy) _NSProgressFraction * previous;              //@synthesize previous=_previous - In the implementation block
@property (copy) _NSProgressFraction * next;                  //@synthesize next=_next - In the implementation block
-(BOOL)previousIsEqualToNext;
-(void)setPrevious:(_NSProgressFraction *)arg1 ;
-(void)setNext:(_NSProgressFraction *)arg1 ;
-(_NSProgressFraction *)next;
-(_NSProgressFraction *)previous;
-(void)dealloc;
-(id)description;
@end
