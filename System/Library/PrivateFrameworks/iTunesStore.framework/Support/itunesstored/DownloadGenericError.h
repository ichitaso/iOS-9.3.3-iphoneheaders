/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface DownloadGenericError : DownloadError <NSCopying> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)performActionForResponseFlags:(unsigned long long)arg1 ;
-(BOOL)_isInstallError:(id)arg1 ;
-(id)_notificationTitle;
-(id)_notificationBody;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
@end

