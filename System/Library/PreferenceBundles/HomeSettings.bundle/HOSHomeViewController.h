/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <HomeSettings/HSUserListManagerTableDelegate.h>

@class HMHome, HOSHomeTableManager, NSString;

@interface HOSHomeViewController : PSEditableListController <HSUserListManagerTableDelegate> {

	HMHome* _home;
	HOSHomeTableManager* _tableViewManager;

}

@property (nonatomic,retain) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HOSHomeTableManager * tableViewManager;              //@synthesize tableViewManager=_tableViewManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HOSHomeTableManager *)tableViewManager;
-(void)setTableViewManager:(HOSHomeTableManager *)arg1 ;
-(void)managerDidDismissWithError:(id)arg1 ;
-(void)managerDidUpdateUserList;
-(void)_reallyDeleteHome;
-(void)deleteHome;
-(void)managerDidSendInvitations:(id)arg1 ;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setEditable:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)didLock;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
@end
