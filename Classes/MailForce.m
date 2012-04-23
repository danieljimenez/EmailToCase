#import <Sparkle/Sparkle.h>
#import "MailForce.h"
#import "ZKDescribeSObject.h"
#import "ZKSforceClient.h"
#import "ZKLoginController.h"
#import "MailApp.h"

@interface MailForce ()
@property (nonatomic, retain) SForceController* searchController;
@property (nonatomic, retain) SUUpdater *updater;
-(void)injectMenuItems;
@end

@implementation MailForce
@synthesize searchController, orgId, updater;

#pragma mark Class Methods

+(void)initialize {
	// Make sure the initializer is only run once.
    if(self != [MailForce class])
        return;
	
	//Verify super class exists and then swizzle.
    Class mvMailBundleClass = NSClassFromString(@"MVMailBundle");
    if(!mvMailBundleClass)
        return;
	[Swizzler setSuperclassOf:@"MailForce" toClass:@"MVMailBundle"];

	// Loading defaults
	NSMutableDictionary* defaults = [NSMutableDictionary dictionary];
	NSString* prod = [NSString stringWithString:@"https://www.salesforce.com"];
	NSString* test = [NSString stringWithString:@"https://test.salesforce.com"];
	NSMutableArray* defaultServers = [NSMutableArray arrayWithObjects:prod, test, nil];
	[defaults setObject:defaultServers forKey:@"servers"];
	[defaults setObject:prod forKey:@"server"];
	[[NSUserDefaults standardUserDefaults] registerDefaults:defaults];

	// Bundle version information.
	NSBundle* thisBundle = [NSBundle bundleForClass:[self class]];
	NSString* bundleVersion = [thisBundle objectForInfoDictionaryKey:@"CFBundleVersion"];
	
	[self installSparkleUpdater];
    [self registerBundle];
	NSLog(@"MailForce, registered bundle version %@...", bundleVersion);
}

+ (void)installSparkleUpdater {
	SUUpdater *sup = [SUUpdater updaterForBundle:[NSBundle bundleForClass:[self class]]];
	sup.delegate = [self sharedInstance];
	[sup checkForUpdatesInBackground];
	[sup resetUpdateCycle];
	[[self sharedInstance] setUpdater:sup];
}

+(NSMenuItem*)menuItemWithTitle:(NSString*) title 
						 action:(SEL) action 
			   andKeyEquivalent:(NSString*) keyEquivalent 
						 inMenu:(NSMenu*) menu 
		  underItemWithSelector:(SEL) underThisSelector {
    NSMenuItem* menuItem;
    NSArray* items = [menu itemArray];
    NSUInteger i;
	
    if (!keyEquivalent) keyEquivalent = @"";
	
    for (i = 0; i < [items count]; i++) {
        menuItem = [items objectAtIndex:i];
		
        if ([menuItem action] == underThisSelector) {
            return [menu insertItemWithTitle:title action:action keyEquivalent:keyEquivalent atIndex:i + 1];
        }
        else if ([[menuItem target] isKindOfClass:[NSMenu class]]) {
            menuItem = [self menuItemWithTitle:title action:action andKeyEquivalent:keyEquivalent inMenu:[menuItem target] underItemWithSelector:underThisSelector];
			
            if (menuItem) {
                return menuItem;
            }
        }
    }
	
    return nil;
}

+(void)menuItem:(NSMenuItem*) newMenuItem 
		 inMenu:(NSMenu*) menu 
  underSelector:(SEL) underThisSelector {
    NSMenuItem* menuItem;
    NSArray* items = [menu itemArray];
    NSUInteger i;
	
    for (i = 0; i < [items count]; i++) {
        menuItem = [items objectAtIndex:i];
		
        if ([menuItem action] == underThisSelector) {
			[menu insertItem:newMenuItem atIndex:i + 1];
        }
        else if ([[menuItem target] isKindOfClass:[NSMenu class]]) {
            [self menuItem:newMenuItem inMenu:[menuItem target] underSelector:underThisSelector];
        }
    }
}

#pragma mark Instance Methods

-(id)init {
    if (self = [super init]) {
        searchController = [[SForceController alloc] init];
		[self injectMenuItems];
    }
    return self;
}

-(void)dealloc {
    [sforce release];
    [super dealloc];
}

-(void)updater:(SUUpdater *)updater didFinishLoadingAppcast:(SUAppcast *)appcast {
	NSLog(@"[MailForce] Loaded appcast!");
}

-(void)updater:(SUUpdater *)updater didFindValidUpdate:(SUAppcastItem *)update {
	NSLog(@"[MailForce] Found update to %@",[update versionString]);
}

-(void)updaterDidNotFindUpdate:(SUUpdater *)update {
	NSLog(@"[MailForce] No updates found...");
}

- (NSString *)pathToRelaunchForUpdater:(SUUpdater *)updater {
	return @"/Applications/Mail.app";
}

-(NSString*)clientId {
    static NSString* cid;

    if (cid != nil) {
        return cid;
    }

    NSDictionary* plist = [[NSBundle bundleForClass:[MailForce class]] infoDictionary];
    cid = [[NSMutableString stringWithFormat:@"MailForce/%@", [plist objectForKey:@"CFBundleVersion"]] retain];
    return cid;
}

-(ZKSforceClient*)sforce {
    if ((sforce == nil) || ![sforce loggedIn]) {
        ZKLoginController* login = [[ZKLoginController alloc] init];
        [login setClientId:[self clientId]];
        [NSApp activateIgnoringOtherApps:YES];
        ZKSforceClient* sf = [login showModalLoginWindow:self];
        [sf setCacheDescribes:YES];
        [self setSforce:sf];
        [login release];
		[self setOrgId:[[sforce currentUserInfo] organizationId]];
        return sforce;
    }
    else if ([sforce loggedIn]) {
		[self setOrgId:[[sforce currentUserInfo] organizationId]];
        return sforce;
    }
    else {
		[self setOrgId:nil];
        return nil;         // If the user is not logged in.
    }
}

-(void)setSforce:(ZKSforceClient*) arg1 {
    [sforce autorelease];
    sforce = [arg1 retain];
}

-(IBAction)logout:(id) sender {
    [self setSforce:nil];
}

-(void)showError:(NSException*) ex {
    NSAlert* alert = [NSAlert alertWithMessageText:[ex name]
                                     defaultButton:@"Close"
                                   alternateButton:nil
                                       otherButton:nil
                         informativeTextWithFormat:[ex reason]];

    [alert setAlertStyle:NSCriticalAlertStyle];
    [alert beginSheetModalForWindow:[[NSApplication sharedApplication] mainWindow]
                      modalDelegate:nil
                     didEndSelector:nil
                        contextInfo:nil];
}

-(void)injectMenuItems {
	NSMenu* menu = [NSApp mainMenu];
	
    // Add appendToCase menu item.
    NSMenuItem* appendToCaseMenuItem;
    appendToCaseMenuItem = [MailForce menuItemWithTitle:APPEND_TO_CASE
											action:@selector(appendToCase:)
								  andKeyEquivalent:nil
											inMenu:menu
							 underItemWithSelector:@selector(addSenderToAddressBook:)];
	
	NSMenuItem* separatorItem = [NSMenuItem separatorItem];
    [MailForce menuItem:separatorItem inMenu:menu underSelector:@selector(addSenderToAddressBook:)];
}

@end