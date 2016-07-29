/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VKPGenericShieldVariant : PBCodable <NSCopying> {

	SCD_Struct_VK614* _layers;
	unsigned long long _layersCount;
	unsigned long long _layersSpace;
	NSString* _fontName;
	float _fontSize;
	float _leftCapWidth;
	float _leftPadding;
	float _lineSpacing;
	unsigned _numberOfLines;
	float _rightCapWidth;
	float _rightPadding;
	float _textBaseline;
	SCD_Struct_VK432 _has;

}

@property (assign,nonatomic) BOOL hasNumberOfLines; 
@property (assign,nonatomic) unsigned numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) unsigned long long layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK614* layers; 
@property (assign,nonatomic) BOOL hasTextBaseline; 
@property (assign,nonatomic) float textBaseline;                            //@synthesize textBaseline=_textBaseline - In the implementation block
@property (nonatomic,readonly) BOOL hasFontName; 
@property (nonatomic,retain) NSString * fontName;                           //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) BOOL hasFontSize; 
@property (assign,nonatomic) float fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL hasLeftCapWidth; 
@property (assign,nonatomic) float leftCapWidth;                            //@synthesize leftCapWidth=_leftCapWidth - In the implementation block
@property (assign,nonatomic) BOOL hasRightCapWidth; 
@property (assign,nonatomic) float rightCapWidth;                           //@synthesize rightCapWidth=_rightCapWidth - In the implementation block
@property (assign,nonatomic) BOOL hasLineSpacing; 
@property (assign,nonatomic) float lineSpacing;                             //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) BOOL hasLeftPadding; 
@property (assign,nonatomic) float leftPadding;                             //@synthesize leftPadding=_leftPadding - In the implementation block
@property (assign,nonatomic) BOOL hasRightPadding; 
@property (assign,nonatomic) float rightPadding;                            //@synthesize rightPadding=_rightPadding - In the implementation block
-(CGImageRef)newImageWithBackgroundColor:(CGColorRef)arg1 borderColor:(CGColorRef)arg2 textureAtlases:(id)arg3 contentScale:(double)arg4 ;
-(CGSize)_imageSizeWithTextureAtlases:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)leftCapWidth;
-(SCD_Struct_VK614*)layers;
-(NSString *)fontName;
-(float)lineSpacing;
-(unsigned)numberOfLines;
-(void)setLineSpacing:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFontName:(NSString *)arg1 ;
-(void)setRightPadding:(float)arg1 ;
-(float)rightPadding;
-(float)fontSize;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFontName;
-(float)textBaseline;
-(SCD_Struct_VK614)layerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)layersCount;
-(void)addLayer:(SCD_Struct_VK614)arg1 ;
-(BOOL)hasTextBaseline;
-(void)setHasTextBaseline:(BOOL)arg1 ;
-(void)setTextBaseline:(float)arg1 ;
-(BOOL)hasFontSize;
-(void)setHasFontSize:(BOOL)arg1 ;
-(void)clearLayers;
-(void)setLayers:(SCD_Struct_VK614*)arg1 count:(unsigned long long)arg2 ;
-(float)rightCapWidth;
-(BOOL)hasLeftPadding;
-(BOOL)hasRightCapWidth;
-(void)setRightCapWidth:(float)arg1 ;
-(void)setHasNumberOfLines:(BOOL)arg1 ;
-(void)setHasLeftPadding:(BOOL)arg1 ;
-(void)setLeftPadding:(float)arg1 ;
-(void)setHasRightCapWidth:(BOOL)arg1 ;
-(BOOL)hasRightPadding;
-(BOOL)hasLeftCapWidth;
-(void)setLeftCapWidth:(float)arg1 ;
-(void)setHasRightPadding:(BOOL)arg1 ;
-(void)setHasLineSpacing:(BOOL)arg1 ;
-(void)setHasLeftCapWidth:(BOOL)arg1 ;
-(BOOL)hasNumberOfLines;
-(float)leftPadding;
-(BOOL)hasLineSpacing;
@end
