/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext
+(BOOL)useModelMigratorToCreateDatabase;
+(BOOL)canMergeRemoteChanges;
-(void)connectToChangeHub;
-(void)disconnectFromChangeHub;
@end

