/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel {

	NSString* _topText;
	NSString* _middleText;
	NSString* _bottomText;
	NSString* _bottomTextColor;

}

@property (nonatomic,copy,readonly) NSString * topText;                      //@synthesize topText=_topText - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleText;                   //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomText;                   //@synthesize bottomText=_bottomText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomTextColor;              //@synthesize bottomTextColor=_bottomTextColor - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topText;
-(NSString *)middleText;
-(NSString *)bottomText;
-(NSString *)bottomTextColor;
@end

