/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "MVTerminationHandler-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "QLSeamlessOpenerDelegate-Protocol.h"

@class InvocationQueue, NSMutableArray, NSMutableDictionary, NSTimer;

@interface AttachmentManager : NSObject <MVTerminationHandler, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessOpenerDelegate>
{
    NSMutableArray *_openedAttachmentPaths;
    NSMutableDictionary *_openedAttachmentMessageIDs;
    NSMutableArray *_messageIDPurgeQueue;
    NSTimer *_purgeTimer;
    long long _purgeBehavior;
    NSMutableDictionary *_quickLookAttachments;
    InvocationQueue *_deletionHandlerQueue;
    BOOL _isDirty;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_openedAttachmentListPath;
+ (BOOL)attachmentPurgingIsEnabled;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (long long)attachmentPurgingBehavior;
- (id)init;
- (void)dealloc;
- (void)initializeAttachmentPurging;
- (void)enableAttachmentPurging;
- (void)disableAttachmentPurging;
- (void)setAttachmentPurgingBehavior:(long long)arg1;
- (void)beginLoadingInlineAttachmentsForDisplay:(id)arg1;
- (void)cancelLoadingInlineAttachmentsForDisplay:(id)arg1;
- (void)_confirmDownloadSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (BOOL)dragAttachments:(id)arg1 startPoint:(struct CGPoint)arg2 view:(id)arg3 event:(id)arg4 image:(id)arg5 delegate:(id)arg6;
- (id)pathsForDraggedAttachments:(id)arg1 fromView:(id)arg2;
- (void)_openFromDownloadedNotification:(id)arg1;
- (void)_downloadCompleted:(id)arg1;
- (void)_tellControllerAttachmentIsDownloaded:(id)arg1;
- (BOOL)_addAttachmentForQuickLook:(id)arg1 attachmentDirectory:(id)arg2;
- (void)_addAttachmentToQuickLookPanel:(id)arg1 attachmentDirectory:(id)arg2 window:(id)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (BOOL)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)windowWillClose:(id)arg1;
- (void)quickLookAttachments:(id)arg1 window:(id)arg2;
- (void)quickLookAttachmentsFromMessages:(id)arg1 window:(id)arg2;
- (void)downloadAttachments:(id)arg1 window:(id)arg2 delegate:(id)arg3;
- (void)openAttachments:(id)arg1 applicationURL:(struct __CFURL *)arg2 window:(id)arg3 delegate:(id)arg4;
- (void)_openAttachmentsWithDictionary:(id)arg1;
- (void)saveAttachmentsFromMessages:(id)arg1 window:(id)arg2;
- (void)runSavePanelForAttachments:(id)arg1 window:(id)arg2;
- (void)_runSavePanelForContext:(id)arg1;
- (void)saveAttachmentsToDownloadDirectory:(id)arg1 window:(id)arg2;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2 window:(id)arg3;
- (BOOL)openInvitationAttachments:(id)arg1 openImmediately:(BOOL)arg2;
- (void)chooseApplicationToOpenAttachments:(id)arg1 needsSave:(BOOL)arg2 window:(id)arg3 delegate:(id)arg4;
- (void)_confirmExecutableSheetDidEnd:(id)arg1 alertReturn:(long long)arg2 context:(id)arg3;
- (BOOL)openFileURL:(id)arg1 stayInBackground:(BOOL)arg2 window:(id)arg3;
- (BOOL)openFileAtPath:(id)arg1 withApplication:(id)arg2 stayInBackground:(BOOL)arg3;
- (void)_configureOpenWithMenu:(id)arg1 forAttachments:(id)arg2;
- (id)contextualMenuForAttachments:(id)arg1 clickedAttachment:(id)arg2 forEditing:(BOOL)arg3;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3 window:(id)arg4;
- (void)writeImageAttachmentToPasteboard:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (int)_openFullPath:(id)arg1 withAppURL:(struct __CFURL *)arg2 options:(unsigned int)arg3;
- (void)_openPathsForAttachmentsWithDictionary:(id)arg1;
- (void)_immediatelySaveFileWrapper:(id)arg1 path:(id)arg2 window:(id)arg3;
- (void)_saveAttachment:(id)arg1 toPath:(id)arg2 window:(id)arg3;
- (void)_saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (BOOL)_saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3 error:(id *)arg4;
- (void)_saveAttachmentsFromMessages:(id)arg1 toDirectory:(id)arg2;
- (BOOL)_saveAttachmentsFromMessages:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
- (void)_reportCantOpenSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (BOOL)_sameAttachmentAsBefore:(id)arg1 path:(id)arg2;
- (BOOL)_immediatelyOpenAttachment:(id)arg1 path:(id)arg2 window:(id)arg3 application:(struct __CFURL *)arg4 reason:(int)arg5 exists:(BOOL)arg6;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)_setupOpenedAttachmentsMessageIDMap;
- (void)_addOrReplaceEntry:(id)arg1 inAttachmentList:(id)arg2;
- (void)_addPurgeEntryForAttachmentAtPath:(id)arg1 modDate:(id)arg2 messageID:(id)arg3 partNumber:(id)arg4;
- (void)_setDirty:(BOOL)arg1;
- (void)_scheduleAttachmentListSave;
- (void)_saveOpenedAttachmentsList;
- (BOOL)_allMessagesWithMessageIDAreDeletedOrTrashed:(id)arg1;
- (void)_synchronouslyPurgeAttachments;
- (void)_finishTerminatingAttachmentPurge;
- (void)_reallyPurgeAttachments;
- (void)_purgeAttachments:(id)arg1;
- (void)_purgeMessageIDs;
- (void)_scheduleMessageIDPurge;
- (void)_schedulePurgeOfMessageIDs:(id)arg1;
- (void)_messageDeleted:(id)arg1;
- (void)_handleMessageDeleted:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (BOOL)_immediatelyOpenAttachment:(id)arg1 withApplicationURL:(struct __CFURL *)arg2 window:(id)arg3 attachmentDirectory:(id)arg4 reason:(int)arg5;
- (id)_pathForSavedFileWrapper:(id)arg1 directory:(id)arg2 makePathUnique:(BOOL)arg3;
- (void)_noteFileSystemChanged:(id)arg1;

@end

