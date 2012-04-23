//
//  Category.m
//  MailForce
//
//  Created by Daniel Jimenez on 8/13/11.
//

#import "NSData-Base64Extensions.h"
#import "MessageAttachment-MailForce.h"

@implementation MessageAttachment (MailForce)

-(ZKSObject *)makeSObject:(NSString*) parentId {
	ZKSObject *a = [[[ZKSObject alloc] initWithType:@"Attachment"] autorelease];
	[a setFieldValue:parentId field:@"ParentId"];
	[a setFieldValue:[self filename] field:@"Name"];
	[a setFieldValue:[self mimeType] field:@"ContentType"];
	NSData *d = [[NSData alloc] initWithData:[self currentData]];
	[a setFieldValue:[d encodeBase64] field:@"Body"];
	[d release];
	return a;
}

-(NSNumber*)shouldBeCheckedByDefault {
	if ([self isImage]) {
		return [NSNumber numberWithBool:NO];
	} else {
		return [NSNumber numberWithBool:YES];
	}
}

-(NSString *)formattedSize {
	int sz = [(NSNumber*)[self appleScriptApproximateSize] intValue];
	if (sz < 1024)
		return [NSString stringWithFormat:@"%d bytes", sz];
	if (sz < (1024 * 1024))
		return [NSString stringWithFormat:@"%2.1f KB", (sz / 1024.0f)];
	return [NSString stringWithFormat:@"%2.1f MB", (sz / (1024.0f * 1024))];

}

@end

