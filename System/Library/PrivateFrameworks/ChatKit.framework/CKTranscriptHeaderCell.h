/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell {

	UIView* _loadingIndicator;

}

@property (nonatomic,retain) UIView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
+(double)defaultCellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviewsForAlignmentContents;
-(void)setLoadingIndicator:(UIView *)arg1 ;
-(UIView *)loadingIndicator;
@end
