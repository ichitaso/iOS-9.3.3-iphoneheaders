/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicInterleavedEntityProvider.h>

@protocol MusicEntityProviding;
@class NSOperationQueue;

@interface MusicCompleteOfferEntityProvider : MusicInterleavedEntityProvider {

	BOOL _hasValidCompletionOffering;
	unsigned long long _completionOfferingRevisionID;
	unsigned long long _loadedCompletionOfferingRevisionID;
	id<MusicEntityProviding> _localEntityProvider;
	NSOperationQueue* _operationQueue;
	BOOL _storeCompleteOfferAvailable;
	id<MusicEntityProviding> _storeEntityProvider;
	BOOL _shouldIncludeStoreCompleteOffer;

}

@property (nonatomic,retain) id<MusicEntityProviding> localEntityProvider;                                         //@synthesize localEntityProvider=_localEntityProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStoreCompleteOffer;                                                 //@synthesize shouldIncludeStoreCompleteOffer=_shouldIncludeStoreCompleteOffer - In the implementation block
@property (getter=isStoreCompleteOfferAvailable,nonatomic,readonly) BOOL storeCompleteOfferAvailable;              //@synthesize storeCompleteOfferAvailable=_storeCompleteOfferAvailable - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(void)setShouldIncludeStoreCompleteOffer:(BOOL)arg1 ;
-(void)setLocalEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(BOOL)hasMultipleEntitiesIncludingStoreContent;
-(id<MusicEntityProviding>)localEntityProvider;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateStoreCompleteOfferAvailable;
-(void)_localEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_updateEntityProviders;
-(void)_reloadCompleteOffering;
-(BOOL)shouldIncludeStoreCompleteOffer;
-(BOOL)isStoreCompleteOfferAvailable;
@end
