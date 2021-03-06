/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAceSerialization : NSObject
+(id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2 ;
+(id)_tryParsingSpeechPacketBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)_tryParsingPlistPacketBytes:(const void*)arg1 length:(unsigned long long)arg2 type:(unsigned char)arg3 ;
+(id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1 ;
+(id)aceDataForObject:(id)arg1 error:(id*)arg2 ;
+(id)aceDataForPing:(unsigned)arg1 ;
+(id)aceDataForPong:(unsigned)arg1 ;
+(id)aceDataForNop;
+(id)aceDataForStreamEnd;
+(id)aceDataForSpeechPacket:(id)arg1 error:(id*)arg2 ;
+(BOOL)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)tryParsingPacketData:(id)arg1 parsedData:(id*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4 ;
@end

