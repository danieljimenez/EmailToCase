//
//  MessageViewer-MailForce.h
//  MailForce
//
//  Created by Daniel Jimenez on 7/9/11.
//

#import <Cocoa/Cocoa.h>
#import "MailForce.h"
#import "MessageViewer.h"
#import "SForceController.h"

#define MV_TB_ITEM_TAG_BASE 150

@interface MailForceMessageViewer : NSObject

-(LibraryMessage*)luckyMessage;
-(IBAction)appendToCase:(id) arg1;

@end

@interface MailForceMessageViewer (LibraryMethods)
/*These methods are here to supress warnings, do not implement!*/

-(id)selectedMessages;
-(id)currentDisplayedMessage;

@end