//
//  LibraryMessage+MailForce.h
//  MailForce
//
//  Created by Daniel Jimenez on 7/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "LibraryMessage.h"
#import "MessageBody.h"

@class NSDate;

@interface LibraryMessage (MailForce)
-(BOOL)hasCaseRefCode;
-(NSString*)orgIdFromCaseRefCode;
-(NSString*)caseIdFromCaseRefCode;
@end
