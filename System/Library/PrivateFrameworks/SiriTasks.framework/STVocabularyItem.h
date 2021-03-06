/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTasks/SiriTasks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface STVocabularyItem : NSObject <NSCopying> {

	NSString* _string;
	NSUUID* __siriID;

}

@property (nonatomic,copy) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (setter=_setSiriID:,nonatomic,copy) NSUUID * _siriID;              //@synthesize _siriID=__siriID - In the implementation block
+(BOOL)isValidVocabularyString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSUUID *)_siriID;
-(void)_setSiriID:(id)arg1 ;
-(BOOL)_isSimilarEnoughToNotSync:(id)arg1 ;
-(id)_dictionaryForSaving;
-(id)_initWithVocabularyItem:(id)arg1 ;
@end

