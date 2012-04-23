//
//  Category.h
//  MailForce
//
//  Created by Daniel Jimenez on 8/13/11.
//

#import "MessageAttachment.h"
#import "zkSforce.h"

@interface MessageAttachment (MailForce)

-(ZKSObject *)makeSObject:(NSString*) parentCase;
-(NSNumber*)shouldBeCheckedByDefault;
-(NSString *)formattedSize;

@end