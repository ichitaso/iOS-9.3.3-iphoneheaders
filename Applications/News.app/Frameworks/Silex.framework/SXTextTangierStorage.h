/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPStorage.h>

@class SXTextSource, NSSet, NSMutableArray, NSLocale;

@interface SXTextTangierStorage : TSWPStorage {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	SXTextSource* _textSource;
	NSSet* _rangedExclusionPaths;
	NSMutableArray* _attachments;

}

@property (nonatomic,readonly) SXTextSource * textSource;               //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,readonly) NSLocale * locale; 
@property (assign,nonatomic) BOOL isSelectable;                         //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                      //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,retain) NSSet * rangedExclusionPaths;              //@synthesize rangedExclusionPaths=_rangedExclusionPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachments;              //@synthesize attachments=_attachments - In the implementation block
-(SXTextSource *)textSource;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(NSSet *)rangedExclusionPaths;
-(id)initWithContext:(id)arg1 stylesheet:(id)arg2 textSource:(id)arg3 storageKind:(int)arg4 ;
-(void)setRangedExclusionPaths:(NSSet *)arg1 ;
-(BOOL)shouldHyphenate;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(NSLocale *)locale;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
@end

