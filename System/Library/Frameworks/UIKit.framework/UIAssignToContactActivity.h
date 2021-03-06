/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImage, CNContactPickerViewController, CNContact, UIImagePickerController, NSString;

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImage* _image;
	CNContactPickerViewController* _peoplePicker;
	CNContact* _person;
	UIImagePickerController* _imagePickerController;

}

@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * peoplePicker;                 //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) CNContact * person;                                           //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;              //@synthesize imagePickerController=_imagePickerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(id)activityType;
-(UIImage *)image;
-(void)_cleanup;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)activityViewController;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(CNContactPickerViewController *)peoplePicker;
-(void)setPeoplePicker:(CNContactPickerViewController *)arg1 ;
-(UIImagePickerController *)imagePickerController;
-(void)setImagePickerController:(UIImagePickerController *)arg1 ;
-(void)setPerson:(CNContact *)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(CNContact *)person;
@end

