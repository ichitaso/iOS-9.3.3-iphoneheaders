/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISGestureInput.h>

@class ISDisplayLink;

@interface ISForceScrubInput : ISGestureInput {

	double _lastUpdate;
	double _smoothedForce;
	double _cachedDuration;
	BOOL __active;
	ISDisplayLink* __displayLink;

}

@property (setter=_setDisplayLink:,nonatomic,retain) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
-(void)_setActive:(BOOL)arg1 ;
-(void)playerDidChange;
-(void)_setDisplayLink:(id)arg1 ;
-(ISDisplayLink *)_displayLink;
-(void)_handlePress:(id)arg1 ;
-(long long)inputType;
-(void)_handleUpdate;
-(BOOL)_isTouching;
-(id)newGestureRecognizer;
-(BOOL)_active;
@end

