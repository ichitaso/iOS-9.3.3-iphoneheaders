/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MusicStoreItemMetadataContext, NSString, NSArray, NSData;

@interface MusicJSPlaybackRequest : NSObject {

	MusicStoreItemMetadataContext* _containerItem;
	NSString* _featureName;
	NSArray* _items;
	NSData* _recommendationData;
	unsigned long long _shuffleMode;
	unsigned long long _startIndex;
	unsigned long long _upNextAction;

}

@property (nonatomic,readonly) MusicStoreItemMetadataContext * containerItem;              //@synthesize containerItem=_containerItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                           //@synthesize recommendationData=_recommendationData - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleMode;                             //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) unsigned long long startIndex;                              //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long upNextAction;                            //@synthesize upNextAction=_upNextAction - In the implementation block
-(id)init;
-(NSArray *)items;
-(unsigned long long)startIndex;
-(NSString *)featureName;
-(NSData *)recommendationData;
-(id)initWithJSDictionary:(id)arg1 ;
-(MusicStoreItemMetadataContext *)containerItem;
-(unsigned long long)shuffleMode;
-(unsigned long long)upNextAction;
@end

