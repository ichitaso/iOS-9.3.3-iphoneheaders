/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(SUOperationProgress *)arg1 ;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(SUOperationProgress *)progress;
-(SUDescriptor *)descriptor;
-(SUDownloadMetadata *)metadata;
-(void)setMetadata:(SUDownloadMetadata *)arg1 ;
-(unsigned long long)totalSpaceConsumed;
@end
