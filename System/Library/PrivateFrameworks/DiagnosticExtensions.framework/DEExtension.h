/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DEExtensionHostContext, NSExtension;

@interface DEExtension : NSObject {

	BOOL _isLoggingEnabled;
	BOOL _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	NSString* _loggingConsent;
	DEExtensionHostContext* _context;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
-(id)description;
-(NSString *)identifier;
-(DEExtensionHostContext *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)isLoggingEnabled;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(id)initWithNSExtension:(id)arg1 ;
-(void)loadExtendedInfo;
-(void)getAttachmentsWithParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(NSString *)attachmentsName;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
@end
