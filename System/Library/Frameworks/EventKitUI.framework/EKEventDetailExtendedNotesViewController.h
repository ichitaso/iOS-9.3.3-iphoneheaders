/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;

}

@property (nonatomic,copy) NSString * notes; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)_textView;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
@end
