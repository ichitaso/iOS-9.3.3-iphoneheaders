/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PSESource.h>

@protocol PSESource <NSObject>
@required
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2;

@end


@class NSMutableDictionary, PSESourceSettings, NSString;

@interface PSESource : NSObject <PSESource> {

	NSMutableDictionary* _pushedResults;

}

@property (readonly) PSESourceSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pushedResultsKeySource:(id)arg1 consumer:(unsigned long long)arg2 ;
+(id)sharedInstance;
-(id)_meItem;
-(id)peopleWithLimit:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)_receiveSourceChanged:(id)arg1 ;
-(void)_contactsDbDidChange:(id)arg1 ;
-(void)_setupSourceChangedNotification;
-(PSESourceSettings *)settings;
@end

