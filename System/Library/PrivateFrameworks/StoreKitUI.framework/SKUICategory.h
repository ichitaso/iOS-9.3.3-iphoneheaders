/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIArtworkList, NSArray, NSString, NSURL;

@interface SKUICategory : NSObject {

	SKUIArtworkList* _artworkList;
	long long _categoryIdentifier;
	NSArray* _children;
	NSString* _name;
	NSString* _parentLabel;
	NSURL* _url;

}

@property (nonatomic,readonly) SKUIArtworkList * artworkList;              //@synthesize artworkList=_artworkList - In the implementation block
@property (nonatomic,readonly) long long categoryIdentifier;               //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                         //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * parentLabel;                     //@synthesize parentLabel=_parentLabel - In the implementation block
-(NSString *)name;
-(NSURL *)URL;
-(SKUIArtworkList *)artworkList;
-(id)initWithCategoryDictionary:(id)arg1 ;
-(BOOL)containsURL:(id)arg1 ;
-(id)subcategoryContainingURL:(id)arg1 ;
-(long long)categoryIdentifier;
-(NSString *)parentLabel;
-(NSArray *)children;
@end

