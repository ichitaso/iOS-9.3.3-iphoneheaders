/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@protocol MusicEntityValueProviding;
@class NSString;

@interface MusicMediaSectionEntityValueProvider : NSObject <MusicEntityValueProviding> {

	id<MusicEntityValueProviding> _mediaEntityValueProvider;
	NSString* _sectionTitle;

}

@property (nonatomic,retain) id<MusicEntityValueProviding> mediaEntityValueProvider;              //@synthesize mediaEntityValueProvider=_mediaEntityValueProvider - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                               //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id<MusicEntityValueProviding>)mediaEntityValueProvider;
-(void)setMediaEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
@end
