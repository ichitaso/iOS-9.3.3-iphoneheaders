/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSMutableString, NSString, TIConvertedCandidate;

@interface TIConversionHistory : NSObject {

	BOOL _inputChangedSinceLastConversion;
	BOOL _invalid;
	NSMutableArray* _convertedCandidates;
	NSArray* _convertedCandidateRefs;
	NSMutableString* _mutableConvertedCandidateText;
	NSMutableArray* _mutableConvertedCandidateRefs;

}

@property (assign,nonatomic) BOOL inputChangedSinceLastConversion;                         //@synthesize inputChangedSinceLastConversion=_inputChangedSinceLastConversion - In the implementation block
@property (nonatomic,readonly) NSString * convertedCandidateText; 
@property (nonatomic,readonly) unsigned long long convertedLength; 
@property (nonatomic,readonly) TIConvertedCandidate * lastConvertedCandidate; 
@property (nonatomic,readonly) NSArray * convertedCandidateRefs;                           //@synthesize convertedCandidateRefs=_convertedCandidateRefs - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                                 //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMutableArray * convertedCandidates;                         //@synthesize convertedCandidates=_convertedCandidates - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableConvertedCandidateRefs;               //@synthesize mutableConvertedCandidateRefs=_mutableConvertedCandidateRefs - In the implementation block
@property (nonatomic,retain) NSMutableString * mutableConvertedCandidateText;              //@synthesize mutableConvertedCandidateText=_mutableConvertedCandidateText - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(void)clear;
-(void)setInvalid:(BOOL)arg1 ;
-(BOOL)invalid;
-(NSMutableArray *)convertedCandidates;
-(NSMutableArray *)mutableConvertedCandidateRefs;
-(NSMutableString *)mutableConvertedCandidateText;
-(void)setInputChangedSinceLastConversion:(BOOL)arg1 ;
-(TIConvertedCandidate *)lastConvertedCandidate;
-(unsigned long long)convertedLength;
-(BOOL)inputChangedSinceLastConversion;
-(NSString *)convertedCandidateText;
-(void)addCandidate:(id)arg1 candidateRef:(id)arg2 replacedAmbiguousPinyinSyllable:(id)arg3 replacementUnambiguousPinyinSyllable:(id)arg4 convertedInput:(id)arg5 ;
-(void)didRevertLastConvertedCandidate;
-(BOOL)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)arg1 ;
-(NSArray *)convertedCandidateRefs;
-(void)setConvertedCandidates:(NSMutableArray *)arg1 ;
-(void)setMutableConvertedCandidateText:(NSMutableString *)arg1 ;
-(void)setMutableConvertedCandidateRefs:(NSMutableArray *)arg1 ;
@end

