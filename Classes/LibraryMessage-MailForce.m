//
//  LibraryMessage+MailForce.m
//  MailForce
//
//  Created by Daniel Jimenez on 7/27/11.
//

#import "LibraryMessage-MailForce.h"
#import "ParsedMessage.h"
#import "MailForce.h"

@implementation LibraryMessage (MailForce)

-(NSString*)parseCaseId:(NSString*)searchText {
	NSError *error = NULL;
	NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:CASE_REF_REGEX options:0 error:&error];
	NSTextCheckingResult* result = [regex firstMatchInString:searchText options:0 range:NSMakeRange(0, [searchText length])];
	NSString* bothGroups = [searchText substringWithRange:[result rangeAtIndex:2]];
	if ([bothGroups length] > 0) {
		NSString* group1 = [searchText substringWithRange:[result rangeAtIndex:3]];
		NSString* group2 = [searchText substringWithRange:[result rangeAtIndex:4]];
		NSUInteger size = (15 - [bothGroups length]) + [group1 length];
		NSMutableString* caseId = [NSMutableString stringWithString:[group1 stringByPaddingToLength:size withString:@"0" startingAtIndex:0]];
		[caseId appendString:group2];
		return [NSString stringWithString:caseId];
	} else {
		return nil;
	}
}

-(BOOL)hasCaseRefCode {
	NSString* orgId = [[MailForce sharedInstance] orgId];
	if (orgId) {
		NSMutableString* orgRef = [NSMutableString stringWithString:[orgId substringWithRange:NSMakeRange(0, 4)]];
		[orgRef appendString:[orgId substringWithRange:NSMakeRange(11, 4)]];
		
		NSString* bodySearchText = [self stringForIndexing];
		NSString* subjectSearchText = [[self subject] string];
		
		NSError *error = NULL;
		NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:CASE_REF_REGEX options:0 error:&error];
		NSUInteger numberOfBodyMatches = [regex numberOfMatchesInString:bodySearchText options:0 range:NSMakeRange(0, [bodySearchText length])];
		NSUInteger numberOfSubjectMatches = [regex numberOfMatchesInString:subjectSearchText options:0 range:NSMakeRange(0, [subjectSearchText length])];
		
		if (numberOfSubjectMatches >= 1) {
			NSTextCheckingResult* result = [regex firstMatchInString:subjectSearchText options:0 range:NSMakeRange(0, [subjectSearchText length])];
			NSString* refOrgValue = [subjectSearchText substringWithRange:[result rangeAtIndex:1]];
			return [refOrgValue isEqualToString:orgRef] ? true : false;
		} else if (numberOfBodyMatches >= 1) {
			NSTextCheckingResult* result = [regex firstMatchInString:bodySearchText options:0 range:NSMakeRange(0, [bodySearchText length])];
			NSString* refOrgValue = [bodySearchText substringWithRange:[result rangeAtIndex:1]];
			return [refOrgValue isEqualToString:orgRef] ? true : false;
		} else {
			return false;
		}		
	} else {
		return false;
	}
}

-(NSString*)orgIdFromCaseRefCode {
	MessageBody* messageBody = [self messageBody];
	NSString* searchText = [[messageBody attributedString] string];
	NSError *error = NULL;
	NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:CASE_REF_REGEX options:0 error:&error];
	NSTextCheckingResult* result = [regex firstMatchInString:searchText options:0 range:NSMakeRange(0, [searchText length])];
	NSRange orgRange = [result rangeAtIndex:1];
	return [searchText substringWithRange:orgRange];
}

-(NSString*)caseIdFromCaseRefCode {
	MessageBody* messageBody = [self messageBody];
	NSString* bodySearchText = [[messageBody attributedString] string];
	NSString* subjectSearchText = [[self subject] string];
	
	NSString* messageBodyResult = [self parseCaseId:bodySearchText];
	NSString* subjectResult = [self parseCaseId:subjectSearchText];
	
	if (subjectResult) {
		return subjectResult;
	} else {
		return messageBodyResult;
	}
}

@end
