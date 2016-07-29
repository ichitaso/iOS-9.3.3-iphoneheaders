/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextView, UIView, NSLayoutManager, NSTextStorage, NSTextContainer, NSMutableArray, NSArray;

@interface _UISiriStreamingManager : NSObject {

	UITextView* _textView;
	UIView* _siriItemView;
	NSLayoutManager* _streamingLayoutManager;
	NSTextStorage* _streamingTextStorage;
	NSTextContainer* _streamingTextContainer;
	NSMutableArray* _words;
	NSMutableArray* _wordTokens;
	NSArray* _wordsToSetAfterAnimations;
	unsigned long long _firstIndexToRemoveAfterLineChangeClearingAnimation;
	BOOL _isPerformingLineChangeClearingAnimation;
	BOOL _commitResultsAfterDynamicsFinish;
	BOOL _waitingForDynamicsBehaviorToStop;

}

@property (nonatomic,copy) NSArray * words;                                           //@synthesize words=_words - In the implementation block
@property (nonatomic,readonly) NSLayoutManager * streamingLayoutManager;              //@synthesize streamingLayoutManager=_streamingLayoutManager - In the implementation block
@property (nonatomic,readonly) NSTextContainer * streamingTextContainer;              //@synthesize streamingTextContainer=_streamingTextContainer - In the implementation block
@property (nonatomic,readonly) NSTextStorage * streamingTextStorage;                  //@synthesize streamingTextStorage=_streamingTextStorage - In the implementation block
-(id)initWithTextView:(id)arg1 ;
-(void)commitFinalResults;
-(void)setWords:(NSArray *)arg1 ;
-(void)_commitFinalResults;
-(void)animateText;
-(void)behaviorDidStop:(id)arg1 ;
-(NSArray *)words;
-(NSLayoutManager *)streamingLayoutManager;
-(NSTextContainer *)streamingTextContainer;
-(NSTextStorage *)streamingTextStorage;
@end
