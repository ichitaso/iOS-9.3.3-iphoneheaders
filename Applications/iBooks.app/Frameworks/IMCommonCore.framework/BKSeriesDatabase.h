/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCoreDataSource.h>
#import <IMCommonCore/IMCoreDataSource.h>

@class NSString;

@interface BKSeriesDatabase : IMCoreDataSource <IMCoreDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managedObjectModelName;
+(id)persistentStoreNameSeed;
+(id)persistentStoreVersion;
+(id)persistentStoreURL;
-(id)init;
-(id)newManagedObjectContext;
@end
