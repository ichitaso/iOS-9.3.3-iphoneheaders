/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {

	GEOMapItemReviewsAttribution* _geoReviewsAttribution;

}

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)urlsForReview:(id)arg1 ;
-(NSArray *)addReviewURLs;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
@end
