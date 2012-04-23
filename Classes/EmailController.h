//
//  EmailController.h
//  MailForce
//
//  Created by Daniel Jimenez on 8/15/11.
//

#import "LibraryMessage.h"

@interface EmailController : NSObject

@property (retain) LibraryMessage* email;
@property (retain) NSArray* attachments;

-(id)initWithEmail:(LibraryMessage*) email;
-(NSString*)getAddresses:(NSArray*) array;
-(void)parseMessageBody:(ZKSObject*) sobject;
-(void)parseMessageOptions:(ZKSObject*) sobject;

@end
