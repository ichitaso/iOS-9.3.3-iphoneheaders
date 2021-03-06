/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, UIImage, NSBundle;

@interface TSATemplateInfo : NSObject {

	NSString* _identifier;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSURL * previewImageURL; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) NSURL * documentURL; 
@property (nonatomic,readonly) NSBundle * localizationBundle; 
@property (nonatomic,readonly) BOOL isAvailable; 
@property (nonatomic,readonly) BOOL isUserTemplate; 
-(void)prepareForNewDocumentWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUserTemplate;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSURL *)documentURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)makeIdentifier;
-(NSBundle *)localizationBundle;
-(BOOL)isAvailable;
-(UIImage *)previewImage;
-(NSURL *)previewImageURL;
-(id)initWithDisplayName:(id)arg1 ;
@end

