/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@interface ImageJunkMetadata : NSObject
{
    int _type;
    struct CGSize _size;
    unsigned long long _frameCount;
    unsigned long long _pixelCount;
    unsigned long long _byteCount;
    double _density;
    BOOL _isAnimated;
}

+ (id)stringForImageType:(int)arg1;
+ (id)lsmMarkerForImageSizeCategory:(int)arg1;
+ (id)lsmMarkerForImageDensityCategory:(int)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2 type:(int)arg3;
- (void)dealloc;
- (void)computeDensity;
@property unsigned long long byteCount; // @synthesize byteCount=_byteCount;
@property unsigned long long pixelCount; // @synthesize pixelCount=_pixelCount;
@property(readonly) int sizeCategory;
@property(readonly) int densityCategory;
- (id)description;
@property unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property BOOL isAnimated; // @synthesize isAnimated=_isAnimated;
@property double density; // @synthesize density=_density;
@property struct CGSize size; // @synthesize size=_size;
@property int type; // @synthesize type=_type;

@end

