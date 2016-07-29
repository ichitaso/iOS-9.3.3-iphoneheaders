/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BRCBookmark, BRCGenerationID, BRCServerZone, BRCItemID, NSDirectoryEnumerator, BRCAccountSession, NSData, NSNumber, BRCLocalContainer, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding> {

	NSString* _absolutePath;
	NSString* _relativePath;
	BRCRelativePath* _basePath;
	BRCBookmark* _bookmark;
	NSString* _symlinkContent;
	BRCGenerationID* _generationID;
	int _deviceID;
	BRCServerZone* _serverZone;
	BRCItemID* _sharedItemID;
	NSString* _sharedOwnerName;
	unsigned char _finderInfo[32];
	unsigned long long _fileID;
	unsigned short _mode;
	unsigned _nlink;
	timespec _birthtime;
	timespec _mtime;
	long long _size;
	unsigned long long _parentFileID;
	unsigned _documentID;
	unsigned _fsGenerationID;
	unsigned _flags;
	unsigned short _type;
	unsigned char _itemScope;
	unsigned _isExcluded : 1;
	unsigned _isInPackage : 1;
	unsigned _isBundle : 1;
	unsigned _isPackageRoot : 1;
	unsigned _readFault : 1;
	unsigned _hasFinderTags : 1;
	unsigned _isBusy : 1;
	unsigned _isAlias : 1;
	unsigned _qtnResolved : 1;
	int _fd;
	Ai _openRefCount;
	opaque_pthread_rwlock_t _mutex;
	SCD_Struct_BR12* _dir;
	NSDirectoryEnumerator* _descendantsEnumerator;
	BRCAccountSession* _session;
	NSData* _quarantineInfo;

}

@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isBundle; 
@property (nonatomic,readonly) BOOL isFault; 
@property (nonatomic,readonly) BOOL isFile; 
@property (nonatomic,readonly) BOOL isPackageRoot; 
@property (nonatomic,readonly) BOOL isInPackage; 
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned char itemScope; 
@property (nonatomic,readonly) BOOL isUnixDir; 
@property (nonatomic,readonly) BOOL exists; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL isExecutable; 
@property (nonatomic,readonly) BOOL isHiddenExtension; 
@property (nonatomic,readonly) BOOL isHiddenFile; 
@property (nonatomic,readonly) BOOL isBusy; 
@property (nonatomic,readonly) BOOL isSymLink; 
@property (nonatomic,readonly) BOOL isExcluded; 
@property (nonatomic,readonly) BOOL hasFinderTags; 
@property (nonatomic,readonly) BOOL isAlias; 
@property (nonatomic,readonly) unsigned fileType; 
@property (nonatomic,readonly) unsigned long long fileID; 
@property (nonatomic,readonly) unsigned long long parentFileID; 
@property (nonatomic,readonly) unsigned hardlinkCount; 
@property (nonatomic,readonly) unsigned documentID; 
@property (nonatomic,readonly) NSNumber * fileObjectID; 
@property (nonatomic,readonly) int deviceID; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) long long modificationTime; 
@property (nonatomic,readonly) long long birthTime; 
@property (nonatomic,readonly) unsigned fsGenerationID; 
@property (nonatomic,readonly) BRCGenerationID * generationID; 
@property (nonatomic,readonly) BRCItemID * sharedItemID; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) BRCAccountSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) NSString * absolutePath; 
@property (nonatomic,readonly) NSString * pathRelativeToRoot; 
@property (nonatomic,readonly) NSString * pathRelativeToPackageRoot; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * symlinkContent; 
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * faultDisplayName; 
@property (nonatomic,readonly) BRCBookmark * bookmark; 
@property (nonatomic,readonly) NSData * quarantineInfo;                           //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) unsigned long long parentHash; 
+(BOOL)supportsSecureCoding;
+(int)locateByFileID:(unsigned long long)arg1 zone:(id)arg2 ;
-(BOOL)isResolved;
-(long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(unsigned short)type;
-(BRCLocalContainer *)container;
-(void)close;
-(unsigned)fileType;
-(BOOL)isWritable;
-(BOOL)isBundle;
-(void)_close;
-(NSString *)sharedOwnerName;
-(BOOL)isRoot;
-(BRCAccountSession *)session;
-(BOOL)isBusy;
-(BOOL)exists;
-(BOOL)isFault;
-(unsigned long long)fileID;
-(BOOL)isDocument;
-(NSString *)faultDisplayName;
-(NSString *)absolutePath;
-(NSNumber *)fileObjectID;
-(BOOL)isFile;
-(long long)modificationTime;
-(long long)birthTime;
-(BOOL)isAlias;
-(NSString *)logicalName;
-(unsigned long long)parentFileID;
-(BOOL)resolveMustExist:(BOOL)arg1 error:(int*)arg2 ;
-(id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2 ;
-(BRCServerZone *)serverZone;
-(unsigned)documentID;
-(unsigned char)itemScope;
-(id)initWithFileID:(unsigned long long)arg1 zone:(id)arg2 ;
-(BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int*)arg2 ;
-(BOOL)performOnOpenParentFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(BOOL)isInPackage;
-(id)pathOfPackageRoot;
-(BRCItemID *)sharedItemID;
-(id)logicalURLWithLogicalName:(id)arg1 ;
-(NSString *)pathRelativeToRoot;
-(id)pathWithChildAtPath:(id)arg1 ;
-(BOOL)performOnOpenFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(id)refreshFromPathMustExist:(BOOL)arg1 ;
-(BOOL)isExecutable;
-(NSData *)quarantineInfo;
-(NSString *)symlinkContent;
-(BOOL)isUnixDir;
-(BOOL)isPackageRoot;
-(BOOL)isSymLink;
-(BOOL)_fixupRelativePath;
-(int)_resolvePathTypeAndContainer;
-(BOOL)_shouldKeepBasePathOpen;
-(int)_resolveBasePath;
-(int)_resolveWhenExists;
-(int)_resolveWhenDoesntExist;
-(NSString *)pathRelativeToPackageRoot;
-(int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2 ;
-(BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int*)arg2 ;
-(BOOL)isEqualToRelativePath:(id)arg1 ;
-(id)initWithRootPath:(id)arg1 session:(id)arg2 ;
-(id)initWithPath:(id)arg1 zone:(id)arg2 ;
-(BOOL)isExcluded;
-(unsigned)hardlinkCount;
-(unsigned)fsGenerationID;
-(BOOL)isHiddenExtension;
-(BOOL)isHiddenFile;
-(BOOL)hasFinderTags;
-(BOOL)flock:(int)arg1 ;
-(BOOL)openDirectoryForScanWithError:(int*)arg1 ;
-(id)nextChild;
-(BOOL)openDirectoryForRecursiveScan;
-(id)nextDescendant;
-(void)closeDirectoryScan;
-(BRCBookmark *)bookmark;
-(unsigned long long)parentHash;
-(BRCGenerationID *)generationID;
-(int)deviceID;
-(BRCRelativePath *)root;
-(NSString *)filename;
@end
