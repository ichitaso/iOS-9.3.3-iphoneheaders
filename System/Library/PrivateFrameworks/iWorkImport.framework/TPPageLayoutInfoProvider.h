/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPPageLayoutInfoProvider <NSObject>
@required
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
-(BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1;
-(id)headerFooterProviderForPageIndex:(unsigned long long)arg1;
-(id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
-(int)contentFlagsForPageIndex:(unsigned long long)arg1;
-(unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
-(unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
-(BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;

@end

