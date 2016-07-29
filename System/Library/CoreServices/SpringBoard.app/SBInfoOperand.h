/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSectionInfo, SBRowInfo;

@interface SBInfoOperand : NSObject {

	SBSectionInfo* _section;
	SBRowInfo* _row;

}

@property (nonatomic,readonly) SBSectionInfo * section;                                  //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) SBRowInfo * row;                                          //@synthesize row=_row - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) BOOL sectionOperand; 
+(id)operandWithSection:(id)arg1 row:(id)arg2 ;
-(BOOL)isSectionOperand;
-(id)initWithSection:(id)arg1 row:(id)arg2 ;
-(SBRowInfo *)row;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SBSectionInfo *)section;
@end
