/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary;

@interface MRSendCommandMessage : MRProtocolMessage {

	NSDate* _serializationDate;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate;              //@synthesize serializationDate=_serializationDate - In the implementation block
-(unsigned long long)type;
-(NSDictionary *)options;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 ;
-(NSDate *)serializationDate;
-(unsigned)command;
@end

