/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString, NSArray;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,retain) NSArray * languages; 
@property (nonatomic,retain) NSArray * keyboards; 
+(BOOL)__useDynamicMethodResolution;
-(void)synchronizeGlobalPreferences;
-(void)removeFormattedPhoneNumberFromGlobalPreferences;
-(NSArray *)keyboards;
-(void)flushExternalCaches;
-(void)setKeyboards:(NSArray *)arg1 ;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
@end

