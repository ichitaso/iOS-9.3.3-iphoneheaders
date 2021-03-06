/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol AKTextAnnotationProtocol;
@class UITextView, AKAnnotation, AKController, AKPageController, NSTextStorage, NSUndoManager, NSString;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate> {

	UITextView* _textView;
	AKAnnotation*<AKTextAnnotationProtocol> _annotation;
	AKController* _controller;
	AKPageController* _pageController;
	NSTextStorage* _textStorage;
	double _renderingTextStorageScaleFactor;
	NSUndoManager* _textViewUndoManager;
	CGPoint _startingContentInset;

}

@property (nonatomic,readonly) BOOL isEditing; 
@property (retain) UITextView * textView;                                           //@synthesize textView=_textView - In the implementation block
@property (__weak) AKAnnotation*<AKTextAnnotationProtocol> annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKController * controller;                                       //@synthesize controller=_controller - In the implementation block
@property (__weak) AKPageController * pageController;                               //@synthesize pageController=_pageController - In the implementation block
@property (retain) NSTextStorage * textStorage;                                     //@synthesize textStorage=_textStorage - In the implementation block
@property (assign) double renderingTextStorageScaleFactor;                          //@synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor - In the implementation block
@property (retain) NSUndoManager * textViewUndoManager;                             //@synthesize textViewUndoManager=_textViewUndoManager - In the implementation block
@property (assign) CGPoint startingContentInset;                                    //@synthesize startingContentInset=_startingContentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEditing;
-(void)setTextView:(UITextView *)arg1 ;
-(NSTextStorage *)textStorage;
-(void)endEditing;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(UITextView *)textView;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation*<AKTextAnnotationProtocol>)annotation;
-(void)setAnnotation:(AKAnnotation*<AKTextAnnotationProtocol>)arg1 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(void)_performBlockOnMainThread:(/*^block*/id)arg1 ;
-(void)_registerForKeyboardNotifications;
-(void)_unregisterForKeyboardNotifications;
-(void)updateForTextAttributeChange;
-(void)commitToModelWithoutEndingEditing;
-(void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3 ;
-(void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3 ;
-(void)_commitToModelWithoutEndingEditing;
-(void)_endEditing;
-(void)setTextViewUndoManager:(NSUndoManager *)arg1 ;
-(CGRect)_editorFrameForTextBoundsInModel:(CGRect)arg1 ;
-(void)setRenderingTextStorageScaleFactor:(double)arg1 ;
-(double)renderingTextStorageScaleFactor;
-(void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2 ;
-(void)_adjustAnnotationFrameToFitText;
-(void)_returnScrollViewAfterShownKeyboard;
-(void)_updateTextView:(id)arg1 withFrame:(CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4 ;
-(void)_adjustScrollViewForShownKeyboardRect:(CGRect)arg1 ;
-(void)setStartingContentInset:(CGPoint)arg1 ;
-(CGPoint)startingContentInset;
-(NSUndoManager *)textViewUndoManager;
-(id)initWithController:(id)arg1 ;
@end

