/*
 * SForceController.m MailForce
 *
 * Created by Daniel Jimenez on 7/16/11.
 *
 */

#import "MailForce.h"
#import "SForceController.h"
#import "zkDescribeSObject.h"
#import "ZKDescribeSObject_additions.h"
#import "MessageAttachment-MailForce.h"
#import "MessageAttachment.h"
#import "MessageAttachment-MailForce.h"
#import "NSFileWrapper-UniquePaths.h"
#import "NSFileHandle-MessageAdditions.h"
#import "NSFileWrapper-HFSDataConversion.h"
#import "NSFileWrapper-HFSExtensions.h"
#import "NSFileWrapper-ArchivedData.h"
#import "NSFileWrapper-UniquePaths.h"
#import "NSString-NSStringUtils.h"
#import "MessageStore.h"

@implementation SForceController

@synthesize sforce, emailController, whatSearchText;

-(id)init {
    self = [super init];

    if (self) {
        sforce = nil;
    }

    return self;
}

-(void)resetState {
	[self setEmailController:nil];
	[self setWhatSearchText:nil];
}

-(void)dealloc {
	[self resetState];
	[self setSforce:nil];
	[super dealloc];
}

-(void)loadNib {
    [NSBundle loadNibNamed:@"MailForce" owner:self];
}

-(BOOL)hasEntity:(NSString*) entity {
    return [sforce describeGlobalFor:entity] != nil;
}

-(BOOL)isCreateableObjectType:(NSString*) sobjectName {
    if (![self hasEntity:sobjectName]) {
        return NO;
    }

    return [[sforce describeSObject:sobjectName] createable];
}

-(void)showError:(NSString*) message information:(NSString*)information  {
	
    NSAlert* a = [NSAlert alertWithMessageText:message
                                 defaultButton:@"OK"
                               alternateButton:nil
                                   otherButton:nil
                     informativeTextWithFormat:information];
	
    [a setAlertStyle:NSCriticalAlertStyle];
    [a beginSheetModalForWindow:window modalDelegate:nil didEndSelector:nil contextInfo:nil];
}

-(NSArray*)checkedAttachments {
	NSMutableArray* returnArray = [NSMutableArray array];
	for (NSMutableDictionary* attachmentDict in [emailController attachments]) {
		BOOL checked = [[attachmentDict objectForKey:@"checked"] boolValue];
		if (checked) {
			[returnArray addObject:[attachmentDict objectForKey:@"attachment"]];
		}
	}
	return returnArray;
}

-(void)search:(LibraryMessage*) theEmailMessage {
	@try {
		[self setEmailController:[[EmailController alloc] initWithEmail:theEmailMessage]];
		if ([theEmailMessage hasCaseRefCode]) {
			[self addEmail:self];
		} else {
			[self loadNib];
			[NSApp activateIgnoringOtherApps:YES];
			[NSApp runModalForWindow:window];
			[window orderOut:self];
		}
	}
    @catch (NSException* exception) {
        [self showError:[exception name] information:[exception reason]];
    }
}

-(NSString*)escapeSosl:(NSString*) src {
    /* from docs, these are all reserved */
    NSArray* reserved = [NSArray arrayWithObjects:@"\\", @"&", @"|", @"!", @"{", @"}", @"[", @"]", @"^", @"~", @"*:", @":", @"'", @"\"", @"+", @"-", nil];
    NSMutableString* s = [NSMutableString stringWithString:src];
    NSEnumerator* e = [reserved objectEnumerator];

	NSString* r;
    while (r = [e nextObject]) {
        [s replaceOccurrencesOfString:r withString:[NSString stringWithFormat:@"\\%@", r] options:NSLiteralSearch range:NSMakeRange(0, [s length])];
    }

    return s;
}

-(NSString*)buildWhatSosl {
    NSMutableString* sosl = [NSMutableString 
							 stringWithFormat:@"FIND {%@*} IN ALL FIELDS RETURNING Case(", [self escapeSosl:[self whatSearchText]]];
	ZKDescribeSObject* desc = [sforce describeSObject:@"Case"];
	ZKDescribeField* f;
	NSEnumerator* fe = [[desc fields] objectEnumerator];

	[sosl appendFormat:@"%@", @"Account.Name"];
	while (f = [fe nextObject]) {
		[sosl appendFormat:@", %@", [f name]];
	}
	
	[sosl appendFormat:@")"];
    return sosl;
}

-(void)setSearchResultsDataSource:(NSArray*) res {
    if (whatResultsTableSource == nil) {
        whatResultsTableSource = [[CaseSearchDataSource alloc] init];
    }

    [whatResultsTableSource setSforce:sforce];
    [whatResultsTableSource setResults:res];
    [searchResultsTableView setDataSource:whatResultsTableSource];
    [searchResultsTableView reloadData];
}

-(IBAction)searchCases:(id) sender {
    NSString* sosl = [self buildWhatSosl];
    @try {
        NSArray* results = [sforce search:sosl];
        [self setSearchResultsDataSource:results];

        if ([results count] == 1) {
            [searchResultsTableView selectRowIndexes:[NSIndexSet indexSetWithIndex:0] byExtendingSelection:NO];
        }
    }
    @catch (ZKSoapException* ex) {
        NSAlert* a = [NSAlert alertWithMessageText:@"Search Failed" defaultButton:@"OK" alternateButton:nil otherButton:nil informativeTextWithFormat:[ex reason]];
        [a runModal];
    }
}

-(ZKSObject*)selectedCase {
	LibraryMessage* email = [emailController email];
    if ([email hasCaseRefCode]) {
        return [ZKSObject withTypeAndId:@"Case" sfId:[email caseIdFromCaseRefCode]];
    }
    else {
        int sel = [searchResultsTableView selectedRow];

        if (sel < 0) {
            return nil;
        }
        return [[whatResultsTableSource results] objectAtIndex:sel];
    }
}

-(void)openInSalesforce:(NSString*) sfId {
    NSMutableString* detail = [NSMutableString stringWithString:[[sforce describeSObject:@"Case"] urlDetail]];

    [detail replaceOccurrencesOfString:@"{ID}" withString:sfId options:NSLiteralSearch range:NSMakeRange(0, [detail length])];
    NSURL* detailUrl = [NSURL URLWithString:detail];
    NSURL* baseUiUrl = [NSURL URLWithString:@"/"
                              relativeToURL:detailUrl];
    NSURL* frontdoor = [NSURL URLWithString:[NSString stringWithFormat:@"/secur/frontdoor.jsp?sid=%@&retURL=%@", [sforce sessionId], [detailUrl path]]
                              relativeToURL:baseUiUrl];
    [[NSWorkspace sharedWorkspace] openURL:frontdoor];
}

-(void)saveAttachments:(NSArray*)attachmentsForUpload forParentId:(NSString*)parentId {
	NSMutableArray* saveArray = [NSMutableArray array];
	if ([attachmentsForUpload count] > 0) {
		for (MessageAttachment* attachment in attachmentsForUpload) {
			ZKSObject* attachmentObject = [attachment makeSObject:parentId];
			[saveArray addObject:attachmentObject];
		}
	}
	NSArray *saveResultArray = [sforce create:saveArray];
	for (ZKSaveResult* sr in saveResultArray) {
		if (![sr success]) {
			[NSException raise:@"Unable to create attachments" format:@"%@ %@",[sr message],REPORT_ERROR_TO_DEVELOPER];
		}		
	}
}

-(IBAction)addEmail:(id) sender {
    @try {
		LibraryMessage* email = [emailController email];
        ZKSObject* emailMessage = [ZKSObject withType:@"EmailMessage"];
        ZKSObject* what = [self selectedCase];  // get selected item in results list.

        [emailMessage setFieldValue:[what id] field:@"parentid"];
        [emailMessage setFieldValue:[email subject] field:@"subject"];
        [emailMessage setFieldValue:[[email sender] uncommentedAddress] field:@"FromAddress"];
        [emailMessage setFieldValue:[email senderAddressComment] field:@"FromName"];
        [emailMessage setFieldValue:[emailController getAddresses:[email toRecipients]] field:@"ToAddress"];
        [emailMessage setFieldValue:[emailController getAddresses:[email ccRecipients]] field:@"CcAddress"];
        [emailMessage setFieldValue:[emailController getAddresses:[email bccRecipients]] field:@"BccAddress"];
		[emailMessage setFieldDateTimeValue:[[email dateSent] dateWithCalendarFormat:nil timeZone:nil] field:@"MessageDate"];
        [emailController parseMessageOptions:emailMessage];
        [emailController parseMessageBody:emailMessage];

        // Attempt to save!
        ZKSaveResult* sr = [[sforce create:[NSArray arrayWithObject:emailMessage]] objectAtIndex:0];

        if ([sr success]) {
			[self saveAttachments:[self checkedAttachments] forParentId:[sr id]];
			[self openInSalesforce:[sr id]];
			[self resetState];
            [NSApp stopModal];
        }
        else {
			[NSException raise:@"Unable to create email" format:@"%@ %@",[sr message],REPORT_ERROR_TO_DEVELOPER];
        }
    }
    @catch (NSException* exception) {
        [self showError:[exception name] information:[exception reason]];
    }
}

-(IBAction)cancel:(id) sender {
    [self resetState];
    [NSApp abortModal];
}

-(void)windowWillClose:(NSNotification*) notification {
    [self cancel:notification];
}

-(BOOL)splitView:(NSSplitView*) splitView shouldHideDividerAtIndex:(NSInteger) dividerIndex {
	if ([[emailController email] numberOfAttachments] == 0) {
		return YES;
	} else {
		return NO;
	}
}

@end
