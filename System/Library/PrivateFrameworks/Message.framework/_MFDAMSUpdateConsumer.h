/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <libobjc.A.dylib/MFDASyncActionsConsumer.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
-(BOOL)handleItems:(id)arg1 ;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end
