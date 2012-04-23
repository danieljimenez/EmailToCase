/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSArray, NSButton, NSColor, NSImageView, NSIndexSet, NSString, NSTextField, NSView, RoundedRectTextField, SenderPhotoView, ThreadDisclosureTextField;

@interface RichTableCellView : NSTableCellView
{
    NSView *_senderContainerView;
    NSTextField *_senderTextField;
    NSImageView *_presenceView;
    NSImageView *_attachmentsView;
    NSImageView *_flaggedView;
    NSView *_flaggedStatusContainerView;
    NSArray *_allStatusViewArray;
    NSButton *_unreadView;
    SenderPhotoView *_photoView;
    NSTextField *_subjectTextField;
    NSTextField *_snippetTextField;
    NSTextField *_dateTextField;
    NSTextField *_sizeTextField;
    RoundedRectTextField *_toCcIndicator;
    ThreadDisclosureTextField *_threadDisclosureControl;
    BOOL _isChildOfThread;
    BOOL _isFirstChildOfThread;
    BOOL _isLastChildOfThread;
    BOOL _isNote;
    BOOL _shouldShowSize;
    BOOL _shouldUseDateSent;
    BOOL _shouldShowPresence;
    BOOL _shouldShowToCc;
    BOOL _shouldShowPhoto;
    BOOL _shouldShowFlaggedStatus;
    BOOL _shouldShowLocation;
    BOOL _shouldShowRecipientInsteadOfSender;
    BOOL _shouldShowThreadDisclosureControl;
    BOOL _hasNonDuplicateRelatedMessages;
    BOOL _isThreadChildSidebarSelectedColor;
    BOOL _isThreadCollapsing;
    NSString *_fromToAuthorEmail;
    unsigned long long _numberOfSnippetLines;
    unsigned long long _messageSize;
    unsigned int _messageFlags;
    NSIndexSet *_appliedFlagColors;
    NSColor *_textColor;
    NSString *_snippet;
}

+ (void)initialize;
+ (void)_resetDateFormats;
+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)lineSeparatorColor;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)isValidMessageDoubleClick:(id)arg1;
@property(nonatomic) BOOL shouldShowSize; // @synthesize shouldShowSize=_shouldShowSize;
@property(nonatomic) BOOL shouldShowPresence; // @synthesize shouldShowPresence=_shouldShowPresence;
@property(nonatomic) BOOL shouldShowToCc;
@property(nonatomic) BOOL shouldShowPhoto; // @synthesize shouldShowPhoto=_shouldShowPhoto;
@property(nonatomic) BOOL shouldShowLocation; // @synthesize shouldShowLocation=_shouldShowLocation;
@property(nonatomic) BOOL shouldShowThreadDisclosureControl; // @synthesize shouldShowThreadDisclosureControl=_shouldShowThreadDisclosureControl;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
- (BOOL)isHighlighted;
- (void)setObjectValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(nonatomic) BOOL isChildOfThread; // @synthesize isChildOfThread=_isChildOfThread;
- (BOOL)isSelected;
- (void)updateSnippet:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (id)_tableView;
- (id)_unknownSenderImage;
- (id)_noteSenderImage;
- (id)_availableStatusImage;
- (id)_snippetForMessage;
- (void)_updateFlagViews:(BOOL)arg1;
- (void)_updateThreadDisclosure;
- (void)_updateStatusViews;
- (void)_updateSnippetTextField:(id)arg1;
- (void)_updateFlaggedStatusViews;
- (void)_updateSnippetForThread:(id)arg1;
- (void)_updateThreadControl;
- (void)_tearDown;
- (void)_adjustPhotoView;
- (void)_adjustSubviews;
- (void)_photoAvailable:(id)arg1;
- (void)_presenceChanged:(id)arg1;
@property(nonatomic) BOOL isThreadCollapsing; // @synthesize isThreadCollapsing=_isThreadCollapsing;
@property(nonatomic) BOOL isThreadChildSidebarSelectedColor; // @synthesize isThreadChildSidebarSelectedColor=_isThreadChildSidebarSelectedColor;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSIndexSet *appliedFlagColors; // @synthesize appliedFlagColors=_appliedFlagColors;
@property(nonatomic) unsigned int messageFlags; // @synthesize messageFlags=_messageFlags;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(nonatomic) BOOL hasNonDuplicateRelatedMessages; // @synthesize hasNonDuplicateRelatedMessages=_hasNonDuplicateRelatedMessages;
@property(nonatomic) BOOL shouldShowRecipientInsteadOfSender; // @synthesize shouldShowRecipientInsteadOfSender=_shouldShowRecipientInsteadOfSender;
@property(nonatomic) BOOL shouldShowFlaggedStatus; // @synthesize shouldShowFlaggedStatus=_shouldShowFlaggedStatus;
@property(nonatomic) BOOL shouldUseDateSent; // @synthesize shouldUseDateSent=_shouldUseDateSent;
@property(nonatomic) BOOL isNote; // @synthesize isNote=_isNote;
@property(nonatomic) BOOL isLastChildOfThread; // @synthesize isLastChildOfThread=_isLastChildOfThread;
@property(nonatomic) BOOL isFirstChildOfThread; // @synthesize isFirstChildOfThread=_isFirstChildOfThread;
@property(nonatomic) ThreadDisclosureTextField *threadDisclosureControl; // @synthesize threadDisclosureControl=_threadDisclosureControl;
@property(nonatomic) RoundedRectTextField *toCcIndicator; // @synthesize toCcIndicator=_toCcIndicator;
@property(nonatomic) NSTextField *sizeTextField; // @synthesize sizeTextField=_sizeTextField;
@property(nonatomic) NSTextField *dateTextField; // @synthesize dateTextField=_dateTextField;
@property(nonatomic) NSTextField *snippetTextField; // @synthesize snippetTextField=_snippetTextField;
@property(nonatomic) NSTextField *subjectTextField; // @synthesize subjectTextField=_subjectTextField;
@property(nonatomic) SenderPhotoView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) NSView *flaggedStatusContainerView; // @synthesize flaggedStatusContainerView=_flaggedStatusContainerView;
@property(nonatomic) NSImageView *flaggedView; // @synthesize flaggedView=_flaggedView;
@property(nonatomic) NSButton *unreadView; // @synthesize unreadView=_unreadView;
@property(nonatomic) NSImageView *presenceView; // @synthesize presenceView=_presenceView;
@property(nonatomic) NSImageView *attachmentsView; // @synthesize attachmentsView=_attachmentsView;
@property(nonatomic) NSTextField *senderTextField; // @synthesize senderTextField=_senderTextField;
@property(nonatomic) NSView *senderContainerView; // @synthesize senderContainerView=_senderContainerView;
@property(retain, nonatomic) NSString *fromToAuthorEmail; // @synthesize fromToAuthorEmail=_fromToAuthorEmail;

@end

