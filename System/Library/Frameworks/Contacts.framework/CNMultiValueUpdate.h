/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMultiValueUpdate_iOSAB.h>

@class NSString;

@interface CNMultiValueUpdate : NSObject <CNMultiValueUpdate_iOSAB> {

	BOOL _ignoreIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL ignoreIdentifiers;                //@synthesize ignoreIdentifiers=_ignoreIdentifiers - In the implementation block
+(id)addValue:(id)arg1 ;
+(id)removeValue:(id)arg1 ;
+(id)replaceValue:(id)arg1 withValue:(id)arg2 ;
+(id)reorderValues:(id)arg1 ;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 error:(id*)arg4 ;
-(long long)multiValueIndexForValue:(id)arg1 inMultiValue:(void*)arg2 identifier:(id*)arg3 ;
-(void)setIgnoreIdentifiers:(BOOL)arg1 ;
-(BOOL)ignoreIdentifiers;
@end

