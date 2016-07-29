/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@optional
-(long long)keyboardAppearance;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1;
-(void)setKeyboardAppearance:(long long)arg1;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;

@end
