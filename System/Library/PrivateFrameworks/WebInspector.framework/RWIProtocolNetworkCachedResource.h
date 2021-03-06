/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
-(NSString *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setUrl:(NSString *)arg1 ;
-(RWIProtocolNetworkResponse *)response;
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(double)bodySize;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
-(void)setBodySize:(double)arg1 ;
@end

