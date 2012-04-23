//
//  MessageViewer-MailForce.m
//  MailForce
//
//  Created by Daniel Jimenez on 7/9/11.
//

#import "MessageViewer-MailForce.h"
#import "Swizzler.h"
#import "MailForce.h"
#import "MessageHeaders.h"
#import "MessageThread.h"
#import "LibraryMessage-MailForce.h"
#import "SegmentedToolbarItem.h"
#import "SegmentedToolbarItemSegmentItem.h"

@implementation MailForceMessageViewer

+(void)load {
    Class clazz = NSClassFromString(@"MessageViewer");

    if (clazz) {
        [Swizzler extendClass:@"MessageViewer"
                    withClass:@"MailForceMessageViewer"];
    }
}

- (id)_toolbarAllowedItemIdentifiers:(NSToolbar *)toolbar {
	NSArray* existingItems = [self _toolbarAllowedItemIdentifiers:toolbar];
	NSArray* newItems = [existingItems arrayByAddingObject:@"appendToCase:"];
	return newItems;
}

- (id)_toolbar:(NSToolbar *)toolbar itemForItemIdentifier:(NSString *)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag {
	BOOL includeAppendSegment = NO;
	int numberOfSegmentItems = 0;
	
	if ([itemIdentifier isEqualToString:@"appendToCase:"]) {
		includeAppendSegment = YES;
		numberOfSegmentItems = 1;
	} else {
		return [self _toolbar:toolbar itemForItemIdentifier:itemIdentifier willBeInsertedIntoToolbar:flag];
	}
	
	SegmentedToolbarItem *newSegmentToolbarItem = [[[NSClassFromString(@"SegmentedToolbarItem") alloc] initWithItemIdentifier:itemIdentifier] autorelease];
	NSMutableArray *newSubitems = [NSMutableArray arrayWithCapacity:numberOfSegmentItems];
	int newIndex = 0;
	for (newIndex = 0; newIndex < numberOfSegmentItems; newIndex++) {	
		//create a new segment item
		SegmentedToolbarItemSegmentItem *segmentItem = [[NSClassFromString(@"SegmentedToolbarItemSegmentItem") alloc] initWithItemIdentifier:itemIdentifier];
		
		//add the new segment to the mutable list of subitems
		[newSubitems addObject:segmentItem];
		[segmentItem release];
	}
	
	newIndex = 0;
	
	//add the mutable list of subitems to the newSegmentToolbarItem
	[newSegmentToolbarItem setSegmentCount:numberOfSegmentItems];
	[newSegmentToolbarItem setSubitems:newSubitems];
	
	if (includeAppendSegment) {
		SegmentedToolbarItemSegmentItem *newSegmentItem = [newSubitems objectAtIndex:newIndex];
		[newSegmentItem setParent:newSegmentToolbarItem];
		[newSegmentItem setSegmentNumber:newIndex];
		[newSegmentItem setTag:MV_TB_ITEM_TAG_BASE+newIndex]; //Yes this will always be zero, Mr. Static Analyzer.
		[newSegmentItem setToolTip:APPEND_TO_CASE];
		[newSegmentItem setLabel:APPEND_TO_CASE_SHORT];
		[newSegmentItem setPaletteLabel:APPEND_TO_CASE];
		[newSegmentItem setTarget:self];
		[newSegmentItem setAction:@selector(appendToCase:)];
		
		//Append toolbar image
		NSBundle* thisBundle = [NSBundle bundleForClass:[MailForce class]];
		NSString* imagePath = [thisBundle pathForImageResource:@"EmailMessage.png"];
		NSImage* image = [[NSImage alloc] initWithContentsOfFile:imagePath];
		[image setSize:NSSizeFromString(@"{20,20}")];
		[newSegmentItem setImage:image];
		[image release];
		
		//bump subitem index
		newIndex++;
	}
	
	//return the new SegmentedToolbarItem
	return newSegmentToolbarItem;
}

-(BOOL)_validateMenuItem:(id) menuItem {
    if ([menuItem action] == @selector(appendToCase:)) {
		@try {
			if ([self luckyMessage]) 
				return YES;
			else
				return NO;
		}
		@catch (NSException *exception) {
			return NO;
		}
    }
	
    return [self _validateMenuItem:menuItem]; //call swizzled method
}

-(BOOL)_validateToolbarItem:(id) toolbarItem {
    if ([toolbarItem action] == @selector(appendToCase:)) {
		@try {
			if ([self luckyMessage]) 
				return YES;
			else
				return NO;
		}
		@catch (NSException *exception) {
			return NO;
		}
    }
	
    return [self _validateToolbarItem:toolbarItem]; //call swizzled method
}

-(LibraryMessage*)luckyMessage {
    LibraryMessage* mfselectedMessage;
	
    if ([self currentDisplayedMessage]) {
        mfselectedMessage = [self currentDisplayedMessage];
		
        if ([mfselectedMessage isKindOfClass:[LibraryMessage class]]) {
            return mfselectedMessage;
        }
        else if ([mfselectedMessage isKindOfClass:[MessageThread class]]) {
            @throw [NSException exceptionWithName:@"Too many messages..."
										   reason:@"You've selected a message thread rather than a single message."
										 userInfo:nil];
        }
        else {
            @throw [NSException exceptionWithName:@"Undefined state!"
										   reason:@"Unable to determine selected message(s)."
										 userInfo:nil];
        }
    }
    else if ([self selectedMessages]) {
        if ([[self selectedMessages] count] == 1) {
            mfselectedMessage = [[self selectedMessages] lastObject];
            return mfselectedMessage;
        }
        else {
            @throw [NSException exceptionWithName:@"Too many messages..."
										   reason:@"You've selected more than one message."
										 userInfo:nil];
        }
    }
    else {		
        @throw [NSException exceptionWithName:@"Undefined state!"
									   reason:@"Unable to determine selected message(s)."
									 userInfo:nil];
    }
}

-(IBAction)appendToCase:(id) arg1 {
	MailForce* mailforce = [MailForce sharedInstance];
	@try {
		//If [self luckyMessage] is called after sforce, the user will annoyingly have to login
		//before being told they've selected an invalid message. 
		LibraryMessage* message = [self luckyMessage]; 
		
		if ([[mailforce sforce] loggedIn]) {
			SForceController* searchController = [mailforce searchController];
			[searchController setSforce:[mailforce sforce]];
			[searchController search:message];
		}
	}
	@catch (NSException* exception) {
		[mailforce showError:exception];
	}
}


@end
