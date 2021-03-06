/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handlePowerNotOn;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
-(void)setID:(NSNumber *)arg1 ;
-(NSNumber *)ID;
@end

