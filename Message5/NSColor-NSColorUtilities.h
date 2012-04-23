/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSColor.h"

@interface NSColor (NSColorUtilities)
+ (id)allQuotingColors;
+ (id)defaultQuotingColors;
+ (id)allHighlightColors;
+ (int)highlightColorValueForColor:(id)arg1;
+ (id)colorForHighlightColorValue:(int)arg1;
+ (id)colorPlist;
+ (int)intWithIdentifierColor:(id)arg1;
+ (id)identifierForColor:(id)arg1;
+ (id)colorForIdentifier:(id)arg1;
+ (id)colorForEnrichedValue:(id)arg1;
+ (void)configureColorMenu:(id)arg1;
+ (id)newSwatchForColor:(id)arg1;
+ (id)colorWithIntValue:(int)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (void)setThreadBackgroundColor:(id)arg1;
+ (id)lighterThreadBackgroundColor;
+ (void)clearThreadBackgroundColors;
+ (id)threadBackgroundColor;
+ (id)threadChildBackgroundColor;
+ (id)lighterThreadChildBackgroundColor;
+ (id)threadQuasiSelectedColor;
+ (id)junkMailColor;
+ (id)linkColor;
+ (id)visitedLinkColor;
+ (id)activeLinkColor;
+ (id)splitterColor;
+ (id)subjectAdditionColor;
+ (id)aquaBlueColor;
+ (id)activeAlternateBackgroundColor;
+ (id)inactiveAlternateBackgroundColor;
+ (id)scriptingRGBColorWithDescriptor:(id)arg1;
- (int)intValue;
- (id)hexString;
- (id)scriptingRGBColorDescriptor;
- (id)cssColorString;
@end
