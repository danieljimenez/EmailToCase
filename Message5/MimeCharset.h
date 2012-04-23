/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSString;

@interface MimeCharset : NSObject
{
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _encoding;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)allMimeCharsets;
+ (id)charsetForEncoding:(unsigned int)arg1;
+ (id)preferredMimeCharset;
+ (unsigned int)encodingVariantForEncoding:(unsigned int)arg1 address:(id)arg2;
+ (id)encodingVariantsForRecipients:(id)arg1;
- (id)_initWithEncoding:(unsigned int)arg1 primaryLanguage:(id)arg2;
- (void)dealloc;
- (unsigned int)encoding;
- (id)charsetName;
- (BOOL)canBeUsedForOutgoingMessages;
- (BOOL)coversLargeUnicodeSubset;
- (BOOL)useBase64InHeaders;
- (id)displayName;
- (id)primaryLanguage;
- (id)description;

@end

