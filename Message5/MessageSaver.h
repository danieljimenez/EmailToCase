/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSButton, NSPopUpButton, NSSavePanel, NSSet, NSURL, NSWindow;

@interface MessageSaver : NSObject
{
    NSArray *_messages;
    NSSet *_stores;
    NSSavePanel *_savePanel;
    NSWindow *_window;
    NSURL *_saveDestination;
    NSPopUpButton *_formatPopup;
    NSButton *_includeAttachmentsSwitch;
    unsigned int _haveAttachments:1;
    unsigned int _hideExtension:1;
    unsigned int _includeAttachments:1;
    unsigned int _saveFormat:4;
    unsigned int _headerDetailLevel:4;
}

+ (void)initialize;
+ (void)saveMessages:(id)arg1 headerDetailLevel:(long long)arg2 preferredFormat:(int)arg3 window:(id)arg4;
- (void)dealloc;
- (void)saveMessagesWithoutPrompting:(id)arg1 toFilePath:(id)arg2 headerDetailLevel:(long long)arg3 format:(int)arg4;
- (void)_setMessages:(id)arg1;
- (void)_setHeaderDetailLevel:(long long)arg1;
- (void)_setSaveFormat:(int)arg1;
- (void)_setWindow:(id)arg1;
- (void)_savePanelDidEndWithFileHandlingResult:(long long)arg1;
- (void)_runSavePanelForStationery;
- (void)_runSavePanel;
- (void)_updateSavePanelUI;
- (void)_saveMessages;
- (void)_handleSaveError:(id)arg1;
- (void)changeFormat:(id)arg1;
- (void)changeIncludeAttachments:(id)arg1;
- (id)_separator;

@end

