//
//  EmailController.m
//  MailForce
//
//  Created by Daniel Jimenez on 8/15/11.
//

#import "EmailController.h"
#import "MailForce.h"
#import "MessageAttachment-MailForce.h"
#import "MessageAttachment.h"

@implementation EmailController
@synthesize email, attachments;

-(id)initWithEmail:(LibraryMessage*)arg1 {
    self = [super init];
    
	if (self) {
		if (!arg1) {
            [NSException raise:MESSAGE_PARSE_ERROR format:@"Email undefined. %@",REPORT_ERROR_TO_DEVELOPER];
        }
		[self setEmail:arg1];
		if ([arg1 numberOfAttachments] > 0) {
			NSEnumerator *e = [[arg1 appleScriptAttachments] objectEnumerator];
			NSMutableArray *att = [NSMutableArray array];
			MessageAttachment* attachment;
			while (attachment = [e nextObject]) {
				NSMutableDictionary *t = [NSMutableDictionary dictionaryWithObjectsAndKeys:[attachment shouldBeCheckedByDefault], @"checked"
										  ,[attachment filename], @"filename"
										  ,[attachment formattedSize], @"size"
										  ,attachment, @"attachment"
										  ,nil];
				[att addObject:t];
			}
			[self setAttachments:att];
		}
    }
	
    return self;
}

-(void)parseMultipartAlternative:(MimePart*) mimePart sobject:(ZKSObject*)sobject  {
	if ([mimePart isType:@"multipart" subtype:@"alternative"]) {
		NSArray* subParts = [mimePart subparts];
		for (MimePart *subPart in subParts) {
			if ([subPart isType:@"text" subtype:@"plain"]) {
				[sobject setFieldValue:[subPart decodeTextHtmlWithContext:nil] field:@"TextBody"];
			} else if ([subPart isType:@"text" subtype:@"html"]) {
				[sobject setFieldValue:[[subPart parsedMessage] html] field:@"HtmlBody"];
			} else {
				[self parseMultipartAlternative:subPart sobject:sobject];
			}
		}
	} else {
		NSArray* subParts = [mimePart subparts];
		for (MimePart *subPart in subParts) {
			[self parseMultipartAlternative:subPart sobject:sobject];
		}
	}
}

-(void)parseMessageOptions:(ZKSObject*) sobject {
    unsigned int options = [email primitiveOptions];
	
    // Best I can tell, 6 or 30 are received and 22 is sent.
    if ((options == 6) || (options == 30) || (options == 0)) {
        [sobject setFieldValue:@"true" field:@"incoming"];
        [sobject setFieldValue:@"1" field:@"status"];
    }
    else if (options == 22) {
        [sobject setFieldValue:@"false" field:@"incoming"];
        [sobject setFieldValue:@"3" field:@"status"];
    }
    else {
		[NSException raise:MESSAGE_PARSE_ERROR 
					format:@"Email options, state unknown (%@). %@", REPORT_ERROR_TO_DEVELOPER];
    }
}

-(void)parseMessageBody:(ZKSObject*) sobject {
    MessageBody* messageBody = [email messageBody];
	
    if (messageBody) {
		MimeBody* mimeMessageBody = (MimeBody*)messageBody;
		
		if ([mimeMessageBody isTextPlain]) {
			[sobject setFieldValue:[[mimeMessageBody attributedString] string] field:@"TextBody"];
		} else {
			MimePart* mimePart = [mimeMessageBody topLevelPart];
			[self parseMultipartAlternative:mimePart sobject:sobject];
		}
    } 
	else {
        [NSException raise:MESSAGE_PARSE_ERROR format:@"MessageBody could not be read. %@",REPORT_ERROR_TO_DEVELOPER];
    }
}

-(NSString*)getAddresses:(NSArray*) array {
    NSMutableArray* cleanAddresses = [NSMutableArray array];
	
    for (MessageAddressee* toAddressee in array) {
        [cleanAddresses addObject:[toAddressee address]];
    }
	
    return [cleanAddresses componentsJoinedByString:@"; \n"];
}

@end
