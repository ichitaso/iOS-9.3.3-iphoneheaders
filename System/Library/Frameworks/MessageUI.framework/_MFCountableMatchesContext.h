/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {

	CFDictionaryRef _peopleCount;
	NSMutableSet* _popularPeople;
	long long _maxCount;

}

@property (assign,nonatomic) long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)setMaxCount:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)maxCount;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(id)highestMatches;
@end

