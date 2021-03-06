/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneUpdateEvent.h>

@class FBSSceneClientSettingsDiff, FBSDisplay;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {

	FBSSceneClientSettingsDiff* _clientSettings;
	FBSDisplay* _display;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
-(void)dealloc;
-(FBSDisplay *)display;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

