/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUtil.framework/IMUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMNSURLConnectionUtil : NSObject
+(id)makeAsyncRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 ;
+(id)makeAsyncRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 startImmediately:(BOOL)arg4 ;
+(void)makeSynchronousRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 ;
+(id)makeAsyncRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 ;
+(void)makeSynchronousRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 ;
@end
