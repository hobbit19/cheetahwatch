//
//  SUAutomaticUpdateAlert.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/18/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#ifndef SUAUTOMATICUPDATEALERT_H
#define SUAUTOMATICUPDATEALERT_H

#import "SUWindowController.h"

@class SUAppcastItem;
@interface SUAutomaticUpdateAlert : SUWindowController {
	SUAppcastItem *updateItem;
	NSBundle *hostBundle;
}

- (id)initWithAppcastItem:(SUAppcastItem *)item hostBundle:(NSBundle *)hostBundle;

- (IBAction)relaunchNow:sender;
- (IBAction)relaunchLater:sender;

@end

#endif
