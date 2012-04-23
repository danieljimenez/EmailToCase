/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageSortingInterface-Protocol.h"

@interface MFMessageSortingValue : NSObject <MFMessageSortingInterface>
{
}

+ (id)equivalentSortsForSort:(id)arg1;
+ (void)addSortData:(id)arg1 forMessages:(id)arg2 sortOrder:(id)arg3 withDelegate:(id)arg4;
+ (id)copySortDataForMessages:(id)arg1 sortOrders:(id)arg2 withDelegate:(id)arg3;
+ (id)mutableCopyOfSortData:(id)arg1;
+ (void)removeMessage:(id)arg1 fromSortData:(id)arg2;
+ (void)addMessage:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;
+ (void)addMessages:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3;
+ (void)removeEverythingExceptMessages:(id)arg1 fromSortData:(id)arg2;
- (BOOL)senderIsAvailableOnline;
- (int)colorForSort;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (unsigned int)messageFlags;
- (id)senderAddressComment;
- (unsigned long long)messageSize;
- (unsigned long long)numberOfAttachments;
- (id)subject;
- (id)subjectAndPrefixLength:(unsigned long long *)arg1;
- (id)to;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (id)mailbox;
- (unsigned int)uidForSort;
- (long long)libraryID;

@end
