//
//  NSToolbar-MailForce.m
//  MailForce
//
//  Created by Daniel Jimenez on 8/16/11.
//

#import "NSToolbar-MailForce.h"
#import "MessageViewer.h"
#import "TableViewManager.h"
#import "Swizzler.h"
#import "MailForce.h"
#import "MessageViewer-MailForce.h"

BOOL didSetContextualMenuDelegate = NO;

@implementation MailForceToolbar

+(void)load {
    Class clazz = NSClassFromString(@"NSToolbar");
	
    if (clazz) {
        [Swizzler extendClass:@"NSToolbar"
                    withClass:@"MailForceToolbar"];
    }
}

-(void)_setDelegate:(id) delegate {
	if ([delegate isKindOfClass:NSClassFromString(@"MessageViewer")] && !didSetContextualMenuDelegate) {
		//Get the menu we want to manipulate
		//and the selector for the menu item we want to place the new menu items under.
		NSMenu* menu = [[[delegate tableManager] tableView] menu];
		SEL underTheGunSelector = @selector(redirectMessage:);
		
		//Add mail items.
		[MailForce menuItemWithTitle:APPEND_TO_CASE 
								 action:@selector(appendToCase:) 
					   andKeyEquivalent:@"" 
								 inMenu:menu 
				  underItemWithSelector:underTheGunSelector];
		
		//Seperator
		[MailForce menuItem:[NSMenuItem separatorItem] inMenu:menu underSelector:underTheGunSelector];
		
		//Avoid having to do this more than once!
		didSetContextualMenuDelegate = YES;
	}
	[self _setDelegate:delegate]; //call swizzled method
}

@end
