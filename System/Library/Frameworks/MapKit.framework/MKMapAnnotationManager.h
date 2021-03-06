/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationManager.h>

@class MKAnnotationView;

@interface MKMapAnnotationManager : MKAnnotationManager {

	MKAnnotationView* _userLocationView;
	BOOL _addedUserLocationAnnotation;

}
-(id)_defaultUserLocationAnnotationView:(id)arg1 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(BOOL)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
@end

