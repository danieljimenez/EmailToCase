/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPDownload.h>

@class NSMutableArray;

@interface IMAPCompoundDownload : IMAPDownload
{
    NSMutableArray *_subdownloads;
}

- (id)createCopy;
- (void)dealloc;
- (id)subdownloads;
- (void)addSubdownload:(id)arg1;
- (void)removeSubdownload:(id)arg1;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (BOOL)isComplete;
- (id)error;
- (unsigned int)bytesFetched;
- (unsigned int)expectedLength;

@end
