/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol MCAnimationPathSupport
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@required
-(id)imprintsForAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1;
-(void)demolishAnimationPaths;
-(unsigned long long)countOfAnimationPaths;
-(void)addAnimationPath:(id)arg1;
-(void)removeAnimationPathForKey:(id)arg1;
-(NSSet *)animationPaths;
-(id)animationPathForKey:(id)arg1;
-(void)removeAllAnimationPaths;

@end

