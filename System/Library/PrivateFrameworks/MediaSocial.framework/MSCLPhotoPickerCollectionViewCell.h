/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface MSCLPhotoPickerCollectionViewCell : UICollectionViewCell {

	UIImageView* _checkmarkImageView;
	UIImageView* _thumbnailImageView;
	UIImageView* _videoGlyphImageView;

}

@property (assign,nonatomic) BOOL showsSelectionCheckmark; 
@property (assign,nonatomic) BOOL showsVideoGlyph; 
@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setShowsSelectionCheckmark:(BOOL)arg1 ;
-(void)setShowsVideoGlyph:(BOOL)arg1 ;
-(BOOL)showsSelectionCheckmark;
-(BOOL)showsVideoGlyph;
-(UIImageView *)thumbnailImageView;
@end

