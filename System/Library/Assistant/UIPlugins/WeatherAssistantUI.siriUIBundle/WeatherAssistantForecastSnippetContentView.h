/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <Weather/WeatherView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, WeatherAssistantForecastSnippetController, UIButton, NSDateComponents, NSCalendar, NSDateFormatter, NSMutableArray, NSString;

@interface WeatherAssistantForecastSnippetContentView : WeatherView <UIGestureRecognizerDelegate> {

	BOOL _showingHourly;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _showCurrentForecastHeader;
	BOOL _userWantsCelsius;
	WeatherAssistantForecastSnippetController* _weatherSnippetDelegate;
	UIButton* _providerButton;
	NSDateComponents* _components;
	NSCalendar* _calendar;
	NSDateFormatter* _formatter;
	UIButton* _dataProviderButton;
	NSMutableArray* _forecastViews;

}

@property (assign,nonatomic,__weak) WeatherAssistantForecastSnippetController * weatherSnippetDelegate;              //@synthesize weatherSnippetDelegate=_weatherSnippetDelegate - In the implementation block
@property (assign,nonatomic) BOOL showingHourly;                                                                     //@synthesize showingHourly=_showingHourly - In the implementation block
@property (assign,nonatomic) BOOL showCurrentForecastHeader;                                                         //@synthesize showCurrentForecastHeader=_showCurrentForecastHeader - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * providerButton;                                                              //@synthesize providerButton=_providerButton - In the implementation block
@property (nonatomic,retain) NSDateComponents * components;                                                          //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                                                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDateFormatter * formatter;                                                            //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) BOOL userWantsCelsius;                                                                  //@synthesize userWantsCelsius=_userWantsCelsius - In the implementation block
@property (nonatomic,readonly) UIButton * dataProviderButton;                                                        //@synthesize dataProviderButton=_dataProviderButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * forecastViews;                                                         //@synthesize forecastViews=_forecastViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tintedProviderButton;
+(double)heightForProposedForecastCount:(unsigned long long)arg1 showHourlyForecast:(BOOL)arg2 showForecastHeader:(BOOL)arg3 compactWidth:(BOOL)arg4 ;
-(id)newForecastViewForIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 showForecastHeader:(BOOL)arg2 ;
-(void)setShowingHourly:(BOOL)arg1 ;
-(void)setForecastViews:(NSMutableArray *)arg1 ;
-(BOOL)showCurrentForecastHeader;
-(UIButton *)dataProviderButton;
-(void)setWeatherSnippetDelegate:(WeatherAssistantForecastSnippetController *)arg1 ;
-(void)setProviderButton:(UIButton *)arg1 ;
-(void)setUserWantsCelsius:(BOOL)arg1 ;
-(id)condensedHourInRegionFormat:(long long)arg1 ;
-(UIButton *)providerButton;
-(NSMutableArray *)forecastViews;
-(WeatherAssistantForecastSnippetController *)weatherSnippetDelegate;
-(void)openExtendedForecast:(id)arg1 ;
-(BOOL)userWantsCelsius;
-(void)setShowCurrentForecastHeader:(BOOL)arg1 ;
-(BOOL)showingHourly;
-(void)setupWeather;
-(NSDateFormatter *)formatter;
-(void)setFormatter:(NSDateFormatter *)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(NSDateComponents *)components;
-(void)setComponents:(NSDateComponents *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)resetLocale:(id)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)refreshLocalization;
@end

