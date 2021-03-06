/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BinaryImageSegment, NSMutableArray, NSArray, NSMutableDictionary;

@interface BinaryImageCatalog : NSObject {

	BinaryImageSegment* _absolute_segment;
	NSMutableArray* _kernel_segments;
	NSArray* _targeted_cache;
	unsigned long long _targeted_slide;
	NSMutableDictionary* _shared_segments;
	NSMutableArray* _used_segments;
	NSMutableArray* _notes;

}
-(unsigned long long)markImageAsUsed:(id)arg1 from:(int)arg2 ;
-(void)setKernelImages:(id)arg1 ;
-(void)targetSharedCache:(unsigned char)arg1 withSlide:(unsigned long long)arg2 ;
-(void)appendNotesTo:(id)arg1 ;
-(id)searchFrame:(unsigned long long)arg1 in:(id)arg2 ;
-(id)reportUsedImages;
-(id)init;
@end

