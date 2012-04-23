#import "CDStructures.h"
#import "Constants.h"
#import "LibraryMessage-MailForce.h"
#import "LibraryMessage.h"
#import "Message.h"
#import "MessageAddressee.h"
#import "MessageAttachment.h"
#import "MessageHeaders.h"
#import "MFHTMLParser.h"
#import "MFMimeDecodeContext.h"
#import "MimeBody.h"
#import "MimeCharset.h"
#import "MimePart.h"
#import "MimeTextAttachment.h"
#import "NSString-EmailAddressString.h"
#import "NSString-MimeEnrichedReader.h"
#import "NSTextAttachment-MimeSupport.h"
#import "OutgoingMessage.h"
#import "ParsedMessage.h"
#import "POPMessage.h"
#import "RemoteMessage.h"
#import "Subdata.h"
#import "Swizzler.h"
#import "TOCMessage.h"
#import "zkSforce.h"
#import "SForceController.h"
#import <MVMailBundle.h>

@class SUUpdater;
@class SUAppcast;
@class SUAppcastItem;

@interface MailForce : NSObject {
    ZKSforceClient* sforce;
	SUUpdater *updater;
}

@property (retain) ZKSforceClient* sforce;
@property (retain) NSString* orgId;
@property (nonatomic, readonly, retain) SForceController* searchController;
@property (nonatomic, readonly, retain) SUUpdater *updater;

+(NSMenuItem*)menuItemWithTitle:(NSString*) title action:(SEL) action andKeyEquivalent:(NSString*) keyEquivalent inMenu:(NSMenu*) menu underItemWithSelector:(SEL) selector;
+(void)menuItem:(NSMenuItem*) newMenuItem  inMenu:(NSMenu*) menu  underSelector:(SEL) underThisSelector;

// Install the Sparkle Updater.
+(void)installSparkleUpdater;
-(void)updater:(SUUpdater *)updater didFinishLoadingAppcast:(SUAppcast *)appcast;
-(void)updater:(SUUpdater *)updater didFindValidUpdate:(SUAppcastItem *)update;
-(void)updaterDidNotFindUpdate:(SUUpdater *)update;
-(NSString *)pathToRelaunchForUpdater:(SUUpdater *)updater;

-(void)showError:(NSException*) ex;

@end

@interface MailForce (LibraryMethods)

+(void)registerBundle;
+(id)sharedInstance;

@end