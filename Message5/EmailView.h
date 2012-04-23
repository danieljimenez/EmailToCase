/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class EmailViewController, MessageBodyScrollView, MessageHeaderView, NSImageView, NSTrackingArea, NSViewAnimation, RolloverActionButtonsView;

@interface EmailView : NSView <NSTextViewDelegate, NSAnimationDelegate>
{
    MessageHeaderView *_headerView;
    NSView *_bodyView;
    MessageBodyScrollView *_bodyScrollView;
    RolloverActionButtonsView *_rolloverView;
    double _minimumHeight;
    double _maximumHeight;
    double _preferredHeight;
    double _spaceBetweenHeaderAndBody;
    NSImageView *_unreadImageView;
    NSTrackingArea *_trackingArea;
    unsigned int _doneInitializing:1;
    unsigned int _tilingSubviews:1;
    unsigned int _resizingFromSuperview:1;
    unsigned int _bodyViewIsLoaded:1;
    unsigned int _okayToResize:1;
    int _separator;
    NSView *_accessibilityLinkedView;
    EmailViewController *_controller;
    NSViewAnimation *_rolloverAnimation;
}

- (void)awakeFromNib;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)headerView;
- (id)bodyView;
- (void)setBodyView:(id)arg1;
- (void)makeBodyBeFirstResponder;
- (id)_bodyViewToLink;
- (void)_setUpAccessibilityLinks;
- (void)removeAccessibilityLinks;
- (void)setUpAccessibilityLinksFromView:(id)arg1;
- (void)setHeaderBodySeparator:(int)arg1;
- (BOOL)isFlipped;
- (void)_subviewFrameChanged:(id)arg1;
- (struct CGSize)_contentSize;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_setRolloverFrame;
- (struct CGRect)_rolloverTrackingRect;
- (void)_windowDidBecomeMain:(id)arg1;
- (void)_windowDidResignMain:(id)arg1;
- (void)_setRolloverAnimation:(id)arg1;
- (void)_addRolloverView;
- (void)_removeRolloverView;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)tile;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBodyViewIsLoaded:(BOOL)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)_textAttributesForLinkWithName:(id)arg1;
- (void)setSpaceBetweenHeaderAndBody:(double)arg1;
- (void)_textOrWebViewSelectionChanged:(id)arg1;
- (void)setUnread:(BOOL)arg1;
- (id)headerSnapshot;
- (id)bodySnapshotWithSize:(struct CGSize)arg1;
- (struct CGSize)visibleBodySize;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGRect)rectOfRolloverButtonsInView:(id)arg1;
@property double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property EmailViewController *controller; // @synthesize controller=_controller;

@end

