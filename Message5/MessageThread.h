/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "Message.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MessageThread : Message
{
    NSMutableArray *_filteredMessages;
    NSString *_formattedUnreadMessageCount;
    NSMutableDictionary *_pendingChanges;
    Message *_newestMessage;
    Message *_oldestMessage;
    Message *_realNewestMessage;
    Message *_oldestUnreadMessage;
    Message *_newestReceivedMessage;
    Message *_newestSentMessage;
    Message *_messageWithHighestLibraryID;
    Message *_messageWithHighestRemoteID;
    Message *_messageWithHighestNumberWithinStores;
    unsigned int _unreadMessageCount;
    unsigned int _flaggedMessageCount;
    unsigned int _junkMessageCount;
    unsigned int _attachmentCount;
    BOOL _updateSubjectEtcUponClosing;
    BOOL _isThreadOpen;
    BOOL _showDateInSubject;
    BOOL _containsOnlyNotes;
}

+ (id)messagesByExpandingThreads:(id)arg1;
+ (id)_storeForMailbox:(id)arg1 fromStores:(id)arg2 cache:(id)arg3;
+ (id)findNewestMessageInMessages:(id)arg1;
+ (id)findNewestReceivedMessageInMessages:(id)arg1;
+ (id)findNewestSentMessageInMessages:(id)arg1;
+ (id)findOldestUnreadMessageInMessages:(id)arg1;
+ (id)findMessageWithHighestLibraryIDInMessages:(id)arg1;
+ (id)findMessageWithHighestRemoteIDInMessages:(id)arg1;
- (id)initWithMessages:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)appliedFlagColors;
@property(readonly) long long conversationID;
@property(readonly) unsigned int options;
- (id)filteredMessages;
- (void)addMessages:(id)arg1 usingComparator:(id)arg2 makePending:(void)arg3;
- (void)deleteMessages:(id)arg1 makePending:(BOOL)arg2;
- (BOOL)commitPendingChangesForSeriesID:(id)arg1;
- (void)discardPendingChangesForSeriesID:(id)arg1;
- (BOOL)flagsHaveChanged;
- (void)updateSubjectEtc:(BOOL)arg1;
- (id)formattedUnreadMessageCount;
- (unsigned long long)numberOfFilteredMessages;
- (unsigned long long)numberOfPendingFilteredMessages;
- (id)pendingFilteredMessages;
- (unsigned long long)numberOfUnreadMessages;
- (void)setNewestMessage:(id)arg1;
- (void)setNewestReceivedMessage:(id)arg1;
- (void)setNewestSentMessage:(id)arg1;
- (void)setOldestMessage:(id)arg1;
- (id)to;
- (id)subject;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (id)sender;
- (id)senderAddressComment;
- (id)messageID;
- (id)messageStore;
- (id)messageBody;
- (unsigned long long)messageSize;
- (unsigned long long)numberOfAttachments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isThread;
- (BOOL)isOpen;
- (void)setIsOpen:(BOOL)arg1;
- (BOOL)willBeDeletedIfMessagesAreDeleted:(id)arg1;
- (void)sortMessagesUsingComparator:(id)arg1 makePending:(void)arg2;
- (void)invertOrderOfMessagesMakePending:(BOOL)arg1;
- (id)oldestMessage;
- (id)newestMessage;
- (id)newestSentMessage;
- (id)oldestUnreadMessage;
- (id)oldestUnreadOrNewestMessage;
- (id)copyOldestUnreadOrNewestMessage;
- (void)_setJunkFlags;
- (id)_unlockedMessageWithHighestLibraryID;
- (id)messageWithHighestLibraryID;
- (id)_unlockedMessageWithHighestRemoteID;
- (id)messageWithHighestRemoteID;
- (unsigned int)uidForSort;
- (id)messageWithHighestNumberWithinStores:(id)arg1;
- (id)mailbox;
- (id)preferredEmailAddressToReplyWith;
@property BOOL containsOnlyNotes; // @synthesize containsOnlyNotes=_containsOnlyNotes;
@property BOOL showDateInSubject; // @synthesize showDateInSubject=_showDateInSubject;
@property BOOL isThreadOpen; // @synthesize isThreadOpen=_isThreadOpen;

@end
