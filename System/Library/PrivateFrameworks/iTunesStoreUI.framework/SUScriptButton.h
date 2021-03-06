/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptCanvasContext, WebScriptObject, UIImage, NSString;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {

	id _action;
	SUScriptCanvasContext* _canvas;
	BOOL _shouldPerformDefaultAction;
	WebScriptObject* _target;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL shouldPerformDefaultAction;              //@synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction - In the implementation block
@property (retain) id action; 
@property (retain) SUScriptCanvasContext * canvas; 
@property (assign) BOOL enabled; 
@property (assign) BOOL loading; 
@property (readonly) id showingConfirmation; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * style; 
@property (assign) long long tag; 
@property (retain) NSString * title; 
@property (retain) WebScriptObject * target; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(BOOL)enabled;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTarget:(WebScriptObject *)arg1 ;
-(id)action;
-(NSString *)title;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(UIImage *)image;
-(WebScriptObject *)target;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)_action;
-(NSString *)subtitle;
-(SUScriptCanvasContext *)canvas;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIEdgeInsets)imageEdgeInsets;
-(id)attributeKeys;
-(id)buttonItem;
-(id)_initSUScriptButton;
-(id)initWithSystemItemString:(id)arg1 ;
-(id)_boxedNativeButton;
-(id)nativeButtonOfType:(int)arg1 ;
-(id)_nativeButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(void)setImageWithURLString:(id)arg1 scale:(id)arg2 ;
-(void)performActionWithArguments:(id)arg1 ;
-(void)setNativeButton:(id)arg1 ;
-(BOOL)loading;
-(id)_systemItemString;
-(BOOL)shouldPerformDefaultAction;
-(void)setShouldPerformDefaultAction:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)showingConfirmation;
@end

