/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentSizer.h>
#import <Silex/SXTextSourceDataSource.h>

@class SXTextResizer, SXTextLayouter, NSString;

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource> {

	SXTextResizer* _textResizer;
	SXTextLayouter* _textLayouter;

}

@property (nonatomic,readonly) unsigned long long stringLength; 
@property (nonatomic,retain) SXTextResizer * textResizer;                    //@synthesize textResizer=_textResizer - In the implementation block
@property (nonatomic,retain) SXTextLayouter * textLayouter;                  //@synthesize textLayouter=_textLayouter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)documentController;
-(double)calculateHeightForWidth:(double)arg1 ;
-(id)textRules;
-(SXTextResizer *)textResizer;
-(id)additions;
-(id)inlineTextStyles;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 context:(id)arg4 columnLayout:(id)arg5 ;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(void)removeAllExclusionPaths;
-(unsigned long long)stringLength;
-(id)existingExclusionPathForComponentWithIdentifier:(id)arg1 ;
-(void)addExclusionPath:(id)arg1 ;
-(void)setTextLayouter:(SXTextLayouter *)arg1 ;
-(SXTextLayouter *)textLayouter;
-(void)setTextResizer:(SXTextResizer *)arg1 ;
-(id)textStyle;
@end
