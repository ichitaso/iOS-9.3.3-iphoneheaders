/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface MKCompassView : UIView {

	CALayer* _imageLayer;

}

@property (assign,nonatomic) double yaw; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(void)setYaw:(double)arg1 ;
@end
