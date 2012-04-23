/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface JunkRecorder : NSObject
{
    BOOL _isShort;
    BOOL _isSigned;
    long long _imageCount;
    long long _characterCount;
    double _imageToTextRatio;
    NSMutableDictionary *_imageInfos;
    double _lsmScore;
}

- (id)init;
- (void)dealloc;
- (id)description;
@property double lsmScore; // @synthesize lsmScore=_lsmScore;
@property BOOL isShort; // @synthesize isShort=_isShort;
@property BOOL isSigned; // @synthesize isSigned=_isSigned;
@property(retain) NSMutableDictionary *imageInfos; // @synthesize imageInfos=_imageInfos;
@property double imageToTextRatio; // @synthesize imageToTextRatio=_imageToTextRatio;
@property long long characterCount; // @synthesize characterCount=_characterCount;
@property long long imageCount; // @synthesize imageCount=_imageCount;

@end

