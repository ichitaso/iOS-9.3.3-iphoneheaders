/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class UIImage, NSString, MKMapSnapshotCreator, VKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject {

	id _requester;
	id _context;
	SCD_Struct_MK7 _coordinate;
	unsigned long long _zoomLevel;
	CGSize _size;
	UIImage* _image;
	NSString* _attributionString;
	MKMapSnapshotCreator* _delegate;
	VKMapSnapshotCreator* _snapshotCreator;

}

@property (nonatomic,retain) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id requester;                                        //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSString * attributionString;                        //@synthesize attributionString=_attributionString - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK7 coordinate;                           //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) unsigned long long zoomLevel;                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) MKMapSnapshotCreator * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                   //@synthesize image=_image - In the implementation block
-(void)cancel;
-(CGSize)size;
-(void)setDelegate:(MKMapSnapshotCreator *)arg1 ;
-(id)description;
-(MKMapSnapshotCreator *)delegate;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(id)requester;
-(void)setRequester:(id)arg1 ;
-(void)setZoomLevel:(unsigned long long)arg1 ;
-(NSString *)attributionString;
-(void)setAttributionString:(NSString *)arg1 ;
-(unsigned long long)zoomLevel;
-(void)setCoordinate:(SCD_Struct_MK7)arg1 ;
-(SCD_Struct_MK7)coordinate;
@end

