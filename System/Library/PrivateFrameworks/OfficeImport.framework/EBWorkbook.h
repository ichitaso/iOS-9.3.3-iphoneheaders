/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBWorkbook : NSObject
+(void)setupProcessors:(id)arg1 ;
+(void)readDocumentProperties:(id)arg1 state:(id)arg2 ;
+(void)readDocumentPresentation:(id)arg1 state:(id)arg2 ;
+(int)xlSheetTypeEnumFromEDSheet:(id)arg1 ;
+(id)readWithState:(id)arg1 reader:(id)arg2 ;
+(ChVector<OcText>*)createSheetNamesFromWorkbook:(id)arg1 ;
@end
