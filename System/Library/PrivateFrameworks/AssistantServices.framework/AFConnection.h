/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSString, NSArray, NSMutableDictionary, NSObject, NSError;

@interface AFConnection : NSObject {

	NSXPCConnection* _connection;
	NSString* _outstandingRequestClass;
	NSArray* _cachedBulletins;
	BOOL _hasActiveRequest;
	BOOL _hasActiveTimeout;
	long long _activeRequestUsefulUserResultType;
	NSMutableDictionary* _replyHandlerForAceId;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _audioSessionID;
	void* _levelsSharedMem;
	unsigned long long _sharedMemSize;
	NSObject*<OS_dispatch_source> _levelsTimer;
	unsigned _clientStateIsInSync : 1;
	unsigned _voiceOverIsActive : 1;
	NSError* _lastRetryError;
	id<AFAssistantUIService> _delegate;
	id<AFSpeechDelegate> _speechDelegate;

}

@property (assign,nonatomic,__weak) id<AFAssistantUIService> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AFSpeechDelegate> speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isRecording; 
@property (nonatomic,readonly) BOOL hasActiveRequest; 
+(id)currentLanguageCode;
+(void)initialize;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id*)arg4 ;
+(BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id*)arg3 ;
+(BOOL)assistantIsSupported;
+(void)stopMonitoringAvailability;
+(BOOL)userDataSyncNeeded;
+(BOOL)isAvailable;
+(id)outputVoice;
+(void)beginMonitoringAvailability;
+(void)defrost;
-(id)_clientService;
-(id)_clientServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_cachedBulletins;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)startUIRequest;
-(void)cancelRequest;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 ;
-(void)requestBarrier:(/*^block*/id)arg1 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(void)setDelegate:(id<AFAssistantUIService>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AFAssistantUIService>)delegate;
-(void)_updateState;
-(id)_connection;
-(float)averagePower;
-(void)endSession;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)clearContext;
-(void)rollbackRequest;
-(void)_clearConnection;
-(void)_stopLevelUpdates;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3 ;
-(void)_willStartRequestForSpeech:(BOOL)arg1 ;
-(void)_tellDelegateRequestWillStart;
-(void)_scheduleRequestTimeout;
-(void)_cancelRequestTimeout;
-(void)_tellDelegateShouldSpeakChanged:(BOOL)arg1 ;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_willCompleteRequest;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_requestDidEnd;
-(void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_updateClientState;
-(void)_invokeRequestTimeout;
-(void)_extendRequestTimeout;
-(void)_setShouldSpeak:(BOOL)arg1 ;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)_willCancelRequest;
-(void)_willEndSession;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 ;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willSetApplicationContextWithRefId:(id)arg1 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2 ;
-(void)prepareForPhoneCall;
-(void)_willPresentUsefulUserResultWithType:(long long)arg1 ;
-(void)_doCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_aceConnectionWillRetryOnError:(id)arg1 ;
-(void)_setLevelsWithSharedMem:(id)arg1 ;
-(void)_tellDelegateRequestFinished;
-(void)_tellDelegateWillStartAcousticIDRequest;
-(void)_tellDelegateDidDetectMusic;
-(void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1 ;
-(void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2 ;
-(void)_tellDelegateInvalidateCurrentUserActivity;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidDetectStartpoint;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)_extendExistingRequestTimeout;
-(void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAcousticIDRequestWithOptions:(id)arg1 ;
-(BOOL)hasActiveRequest;
-(float)peakPower;
-(void)sendGenericAceCommand:(id)arg1 ;
-(void)usefulUserResultWillPresent;
-(void)willPresentUsefulUserResultWithType:(long long)arg1 ;
-(id<AFSpeechDelegate>)speechDelegate;
-(void)setApplicationContext:(id)arg1 ;
-(BOOL)isRecording;
-(void)setIsStark:(BOOL)arg1 ;
-(void)forceAudioSessionActive;
-(void)forceAudioSessionInactive;
-(void)rollbackClearContext;
-(void)sendReplyCommand:(id)arg1 ;
-(void)telephonyRequestCompleted;
-(void)recordUIMetrics:(id)arg1 ;
-(void)setSpeechDelegate:(id<AFSpeechDelegate>)arg1 ;
-(void)setVoiceOverIsActive:(BOOL)arg1 ;
-(BOOL)shouldSpeak;
-(void)preheatWithStyle:(long long)arg1 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(unsigned)audioSessionID;
-(void)stopSpeech;
-(void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2 ;
-(/*^block*/id)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1 ;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2 ;
-(void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2 ;
-(void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2 ;
-(void)startDirectActionRequestWithString:(id)arg1 ;
-(void)startContinuationRequestWithUserInfo:(id)arg1 ;
-(void)startRequestWithInfo:(id)arg1 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 ;
-(void)setAlertContextWithBulletins:(id)arg1 ;
-(void)setApplicationContextForApplicationInfos:(id)arg1 ;
-(void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2 ;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/id)arg2 ;
-(void)willPresentUI;
-(void)didDismissUI;
@end
