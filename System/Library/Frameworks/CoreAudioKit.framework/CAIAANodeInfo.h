/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(id)init;
-(void)refresh;
-(void)setLabelColor:(UIColor *)arg1 ;
-(unsigned long long)numNodes;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
-(UIColor *)labelColor;
@end
