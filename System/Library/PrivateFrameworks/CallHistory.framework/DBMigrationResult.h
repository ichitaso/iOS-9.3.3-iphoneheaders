/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DBMigrationResult : NSObject {

	long long _errorCode;
	long long _dbVersion;

}

@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) long long dbVersion;              //@synthesize dbVersion=_dbVersion - In the implementation block
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2 ;
-(long long)dbVersion;
-(void)setDbVersion:(long long)arg1 ;
@end

