/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@interface LibraryQueries : NSObject
{
}

+ (char *)queryForUniquingDataForMessageNumber:(long long)arg1;
+ (char *)queryToFindCopiesOfMessage:(char *)arg1 sentOn:(unsigned long long)arg2 receivedOn:(unsigned long long)arg3 withSize:(unsigned long long)arg4;
+ (id)checkOutStatementToInsertMessage:(id)arg1;
+ (id)checkOutStatementToCompletelyUpdateMessage:(id)arg1;
+ (id)fromClauseForTables:(unsigned long long)arg1 startingFromTableExpression:(id)arg2;
+ (id)checkOutStatementForMailboxURLFromMailboxID:(long long)arg1 usingDB:(id)arg2;
+ (id)checkOutStatementForEventWithMessageID:(long long)arg1 usingDB:(id)arg2;
+ (id)checkOutStatementToInsertEvent:(id)arg1;
+ (int)bindInsertEventStatement:(id)arg1 withEvent:(id)arg2 messageID:(long long)arg3;
+ (id)checkOutStatementToUpdateEvent:(id)arg1;
+ (int)bindUpdateEventStatement:(id)arg1 withEvent:(id)arg2 messageID:(long long)arg3;
+ (char *)queryToDeleteEventByMessageID:(id)arg1;

@end

