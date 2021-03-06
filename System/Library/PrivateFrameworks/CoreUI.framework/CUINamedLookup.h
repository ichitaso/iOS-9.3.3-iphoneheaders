/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CUIRenditionKey;

@interface CUINamedLookup : NSObject {

	NSString* _name;
	CUIRenditionKey* _key;
	NSString* _signature;
	unsigned long long _storageRef;
	unsigned _odContent : 1;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL representsOnDemandContent; 
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(id)renditionKey;
-(id)_rendition;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(void)_cacheRenditionProperties;
-(id)renditionName;
-(BOOL)representsOnDemandContent;
-(void)setRepresentsOnDemandContent:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

