/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLProbabalisticHoughTransform : NSObject {

	int _cols;
	int _rows;
	float _rho;
	float _theta;
	int _threshold;
	int _lineLength;
	int _lineGap;
	int _numGoodLines;

}
-(SCD_Struct_BL4*)houghLinesProbabalistic:(char*)arg1 rows:(int)arg2 cols:(int)arg3 numLines:(int*)arg4 ;
-(void)leastSquareSmooth:(SCD_Struct_BL4*)arg1 ;
@end

