/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EWSDeleteFolderRequestOperation : EWSRequestOperation <NSCoding>
{
    NSString *_folderIdString;
}

+ (Class)classForResponse;
- (id)initWithEWSFolderIdString:(id)arg1 gateway:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)activityString;
- (BOOL)isFolderRequest;
- (id)prepareRequest;
- (void)setupOfflineResponse;
@property(retain, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;

@end

