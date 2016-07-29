/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSWPTwoPartAction : NSObject {

	/*^block*/id _startAction;
	/*^block*/id _cancelAction;
	/*^block*/id _finishAction;
	BOOL _performImmediately;

}

@property (assign) BOOL performImmediately;              //@synthesize performImmediately=_performImmediately - In the implementation block
+(id)actionWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(id)initWithStartAction:(/*^block*/id)arg1 cancelAction:(/*^block*/id)arg2 finishAction:(/*^block*/id)arg3 ;
-(void)performStartAction;
-(void)performFinishAction;
-(BOOL)performImmediately;
-(void)setPerformImmediately:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
@end
