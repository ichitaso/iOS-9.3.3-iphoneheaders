/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MIHThreadFunctionParams : NSObject {

	unsigned _uid;
	/*^block*/id _block;

}

@property (copy) id block;                    //@synthesize block=_block - In the implementation block
@property (assign) unsigned uid;              //@synthesize uid=_uid - In the implementation block
-(unsigned)uid;
-(void)setUid:(unsigned)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

