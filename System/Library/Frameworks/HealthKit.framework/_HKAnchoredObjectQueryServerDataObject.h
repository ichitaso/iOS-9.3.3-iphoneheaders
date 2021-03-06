/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject {

	BOOL _includeDeletedObjects;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(BOOL)includeDeletedObjects;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end

