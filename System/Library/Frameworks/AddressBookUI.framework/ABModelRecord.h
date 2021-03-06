/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSArray;

@interface ABModelRecord : NSObject {

	int _recordID;
	CFStringRef _sortKey;
	long long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;

}
-(void)dealloc;
-(BOOL)isGroup;
-(id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(CFStringRef)arg5 ;
-(long long)highlightIndex;
-(id)namePieces;
-(int)recordID;
-(CFStringRef)sortKey;
@end

