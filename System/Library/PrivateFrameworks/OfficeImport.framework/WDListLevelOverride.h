/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {

	WDDocument* mDocument;
	WDListLevel* mListLevel;
	unsigned char mLevel;
	long long mStartNumber;
	BOOL mStartNumberOverridden;

}
-(void)dealloc;
-(id)description;
-(unsigned char)level;
-(BOOL)isListLevelOverridden;
-(id)listLevel;
-(long long)startNumber;
-(void)setStartNumber:(long long)arg1 ;
-(id)mutableListLevel;
-(id)initWithDocument:(id)arg1 level:(unsigned char)arg2 ;
-(BOOL)isStartNumberOverridden;
@end
