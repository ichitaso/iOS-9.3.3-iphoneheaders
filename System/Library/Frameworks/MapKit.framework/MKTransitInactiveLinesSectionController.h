/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {

	BOOL _linesWithServiceResumesDataOnly;
	NSArray* _inactiveLines;

}

@property (nonatomic,readonly) NSArray * inactiveLines;                         //@synthesize inactiveLines=_inactiveLines - In the implementation block
@property (assign,nonatomic) BOOL linesWithServiceResumesDataOnly;              //@synthesize linesWithServiceResumesDataOnly=_linesWithServiceResumesDataOnly - In the implementation block
-(id)init;
-(void)_setNeedsBuildRows;
-(void)_buildRows;
-(NSArray *)inactiveLines;
-(BOOL)linesWithServiceResumesDataOnly;
-(void)setLinesWithServiceResumesDataOnly:(BOOL)arg1 ;
@end

