/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "RemoteMessage.h"

@class MessageHeaders, NSData, NSString;

@interface EWSMessage : RemoteMessage
{
    NSString *_itemId;
    NSString *_changeKey;
    NSData *_bodyData;
    NSData *_headerData;
    MessageHeaders *_headers;
    long long _libraryID;
}

+ (void)initialize;
+ (BOOL)messageTypeForEWSItemClass:(id)arg1;
+ (id)EWSItemClassForMessageType:(BOOL)arg1;
+ (id)EWSFolderClassForMailboxType:(int)arg1;
+ (id)headersItemShape;
+ (void)parseExtendedFieldsFromEWSMessage:(id)arg1 intoFlags:(unsigned int *)arg2 flagsMask:(unsigned int *)arg3 messageID:(id *)arg4 headers:(id *)arg5;
+ (void)_extendedPropertiesFromEWSItem:(id)arg1 statusFlags:(int *)arg2 messageFlags:(int *)arg3 flagStatus:(int *)arg4 followupIcon:(int *)arg5 toDoFlags:(int *)arg6 replyFlags:(int *)arg7 hasAttachments:(char *)arg8 customFlags:(id)arg9 messageID:(id *)arg10 headers:(id *)arg11;
+ (id)extendedFieldsForEWSNoteType;
+ (id)fieldsToMaintainWhenUpdatingMessageType:(BOOL)arg1;
+ (id)extendedFieldsForEWSMeetingMessageType;
+ (id)extendedFieldsForEWSMeetingRequestMessageType;
+ (id)extendedFieldsForEWSCalendarType;
+ (id)propertiesToGetBeforeUpdatingMessageFlags:(id)arg1 forMessageType:(BOOL)arg2 includesReadReceipts:(char *)arg3;
+ (id)updatesForEWSItem:(id)arg1 applyingFlags:(id)arg2;
+ (id)_newEWSDeleteItemWithPropertyTag:(id)arg1 propertyType:(int)arg2;
+ (id)_newEWSDeleteItemWithDistinguishedPropertySetId:(int)arg1 propertyType:(int)arg2 propertyId:(long long)arg3;
+ (id)_extendedFieldsForFlags:(unsigned int)arg1 importance:(int *)arg2;
+ (id)_newEWSExtendedPropertyWithTag:(id)arg1 intValue:(int)arg2;
+ (id)_newCustomEWSExtendedPropertyWithName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)_newEWSSetItemWithPropertyTag:(id)arg1 intValue:(int)arg2;
+ (id)_newCustomEWSSetItemWithPropertyName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)dataFromMimeContent:(id)arg1;
+ (id)_mimeContentForData:(id)arg1;
+ (id)newEWSItemFromMessage:(id)arg1 data:(id)arg2 flags:(unsigned int)arg3 sender:(id)arg4 recipientsByHeaderKey:(id)arg5 categories:(id)arg6 existingProperties:(id)arg7 useSenderInsteadOfFrom:(BOOL)arg8;
+ (id)EWSItemIdTypesForMessages:(id)arg1;
+ (id)EWSItemIdStringsForItemIdTypes:(id)arg1;
+ (id)EWSItemIdTypesForItemIdStrings:(id)arg1;
+ (id)_newEWSHeaderFieldsForMessageHeaders:(id)arg1 encodingHint:(unsigned int)arg2;
+ (id)_newEWSAddressForAddress:(id)arg1;
+ (id)_newEWSAddressesForAddresses:(id)arg1;
- (id)initWithItemId:(id)arg1 changeKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)remoteID;
- (BOOL)isEditable;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setHeaderAndBodyFromFullData:(id)arg1;
@property(nonatomic) long long libraryID; // @synthesize libraryID=_libraryID;
@property(retain) MessageHeaders *headers; // @synthesize headers=_headers;
@property(retain) NSData *headerData; // @synthesize headerData=_headerData;
@property(retain) NSData *fetchedBodyData; // @synthesize fetchedBodyData=_bodyData;
@property(copy, nonatomic) NSString *changeKey; // @synthesize changeKey=_changeKey;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;

@end

