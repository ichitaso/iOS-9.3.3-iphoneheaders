/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVItemWithRecurrenceChildren.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {

	CoreDAVLeafItem* _attendee;

}

@property (nonatomic,retain) CoreDAVLeafItem * attendee;              //@synthesize attendee=_attendee - In the implementation block
-(void)setAttendee:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)attendee;
@end

