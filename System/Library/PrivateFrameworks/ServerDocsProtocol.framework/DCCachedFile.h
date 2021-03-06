/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsProtocol/DCCachedItem.h>
#import <libobjc.A.dylib/DCCachedFile.h>
@class NSData;


@protocol DCCachedFile
@property (retain,readonly) NSData * contents; 
@required
-(NSData *)contents;
-(void)updateUploadedFileFromRemoteMetadata:(id)arg1;
-(void)preflightUploadFromURL:(id)arg1;
-(void)updateFileFromURL:(id)arg1;
-(void)restoreFileFromRemoteMetadata:(id)arg1;
-(void)registerFileForUploadOfURL:(id)arg1 taskIdentifier:(id)arg2;
-(void)updateUploadedFileToDropBox;

@end


@class NSData;

@interface DCCachedFile : DCCachedItem <DCCachedFile>

@property (retain,readonly) NSData * contents; 
-(NSData *)contents;
-(void)updateUploadedFileFromRemoteMetadata:(id)arg1 ;
-(void)preflightUploadFromURL:(id)arg1 ;
-(void)updateFileFromURL:(id)arg1 ;
-(void)restoreFileFromRemoteMetadata:(id)arg1 ;
-(id)_contentsFullPath;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(void)registerFileForUploadOfURL:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)updateUploadedFileToDropBox;
@end

