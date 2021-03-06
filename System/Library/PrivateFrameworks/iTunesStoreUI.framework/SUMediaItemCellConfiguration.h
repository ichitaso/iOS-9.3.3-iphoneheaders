/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (nonatomic,readonly) CGSize artworkSize; 
@property (nonatomic,readonly) long long mediaIconType; 
@property (nonatomic,readonly) BOOL showContentRating; 
+(id)copyDefaultContext;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(double)alphaForImageAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3 ;
-(double)alphaForLabelAtIndex:(unsigned long long)arg1 fromAlpha:(double*)arg2 withModifiers:(unsigned long long)arg3 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2 ;
-(id)copyImageDataProvider;
-(UIEdgeInsets)_ratingBorderInsets;
-(long long)mediaIconType;
-(BOOL)showContentRating;
-(CGSize)artworkSize;
@end

