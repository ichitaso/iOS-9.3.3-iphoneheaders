/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MCBookmark : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _title;
	NSString* _path;

}

@property (nonatomic,retain) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * path;               //@synthesize path=_path - In the implementation block
-(id)initWithSerializableDictionary:(id)arg1 ;
-(id)serializableDictionary;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setPath:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
@end
