/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthenticationDelegates/IDSAuthenticationDelegatePlugin.bundle/IDSAuthenticationDelegatePlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountAuthenticationDelegate/AAAuthenticationDelegateProtocol.h>

@interface IDSAuthenticationDelegatePlugin : NSObject <AAAuthenticationDelegateProtocol>
-(void)didReceiveAuthenticationResponseParameters:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_storeAccountForServiceType:(id)arg1 accountStore:(id)arg2 parameters:(id)arg3 group:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

