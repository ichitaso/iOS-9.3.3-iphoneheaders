/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAbstractOperation.h>

@class NSString;

@interface TSKCOUpdateOperation : TSKCOAbstractOperation {

	NSString* mPropertyName;

}

@property (nonatomic,readonly) NSString * propertyName; 
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)initWithPropertyName:(id)arg1 noop:(BOOL)arg2 ;
-(int)conflictTypeWithOperation:(id)arg1 hadRun:(BOOL)arg2 ;
-(id)initWithPropertyName:(id)arg1 ;
-(NSString *)propertyName;
-(void)dealloc;
@end

