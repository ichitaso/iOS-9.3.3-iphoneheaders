/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout {

	TSDWrapPolygon* _polygon;

}

@property (nonatomic,retain) TSDWrapPolygon * polygon;              //@synthesize polygon=_polygon - In the implementation block
-(CGRect)boundsInRoot;
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(void)storeActualPosition;
-(void)fixTransformFromInterimPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(id)wrapPolygon;
-(void)validate;
-(TSDWrapPolygon *)polygon;
@end

