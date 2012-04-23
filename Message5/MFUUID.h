/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface MFUUID : NSObject <NSCopying>
{
    struct __CFUUID *_uuidRef;
}

+ (id)uuid;
+ (id)uuidWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithBytes:(CDStruct_bd2f613f *)arg1;
- (id)initWithUUIDRef:(struct __CFUUID *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (struct __CFUUID *)getCFUUID;
- (CDStruct_bd2f613f)bytes;
- (unsigned long long)length;
- (id)dataValue;
- (id)lowercasedStringValue;

@end
