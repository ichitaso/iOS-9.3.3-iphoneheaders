/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNPhoneDialer : NSObject
+(id)URLWithPhoneNumber:(id)arg1 ;
+(id)sanitizePhoneNumber:(id)arg1 ;
+(id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2 ;
+(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
+(id)messageWithAdditionalParameters:(id)arg1 ;
+(id)cancelMessageWithDialMessageID:(id)arg1 ;
+(void)loadIdentityServices;
+(id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(BOOL)cancelDialMessage:(id)arg1 error:(id*)arg2 ;
@end
