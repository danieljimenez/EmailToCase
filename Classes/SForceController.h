/*
 *  SForceController.h
 *  MailForce
 *
 *  Created by Daniel Jimenez on 7/16/11.
 *
 */

#import "CaseSearchDataSource.h"
#import "LibraryMessage.h"
#import "LibraryMessage-MailForce.h"
#import "MessageAttachment.h"
#import "EmailController.h"

@interface SForceController : NSObject <NSTableViewDelegate> {
    IBOutlet NSTableView* searchResultsTableView;
    IBOutlet NSWindow* window;
	IBOutlet NSTableView *attachmentTableView;
    CaseSearchDataSource* whatResultsTableSource;
}

@property (retain) NSString* whatSearchText;
@property (retain) ZKSforceClient* sforce;
@property (retain) EmailController* emailController;

-(void)openInSalesforce:(NSString*) sfId;
-(void)search:(LibraryMessage*) email;
-(IBAction)searchCases:(id) sender;
-(IBAction)addEmail:(id) sender;
-(IBAction)cancel:(id) sender;

@end
