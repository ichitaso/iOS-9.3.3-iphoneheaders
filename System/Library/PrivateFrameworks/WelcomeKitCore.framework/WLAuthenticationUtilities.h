/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLAuthenticationUtilities : NSObject
+(id)dataFromPEMFormattedData:(id)arg1 ;
+(id)pemFormattedCertificateData:(id)arg1 ;
+(void)generateSelfSignedCertificateWithOrganization:(id)arg1 commonName:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)pemFormattedPublicKeyData:(id)arg1 ;
+(void)_appendBase64Data:(id)arg1 toString:(id)arg2 ;
+(id)hashWithString:(id)arg1 ;
@end

