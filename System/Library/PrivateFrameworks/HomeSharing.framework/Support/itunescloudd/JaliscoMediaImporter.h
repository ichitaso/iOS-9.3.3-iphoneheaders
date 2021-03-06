/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@interface JaliscoMediaImporter : JaliscoImporter
+(void)cancelAllOperations;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(id)_queryFilterEncodedStringForDAAPNameString:(id)arg1 ;
-(id)_importTracksFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withItemsResponse:(id)arg3 ;
-(id)_chapterDataFromURL:(id)arg1 ;
-(id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2 ;
-(void)cancel;
@end

