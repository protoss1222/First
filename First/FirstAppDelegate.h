//
//  FirstAppDelegate.h
//  First
//
//  Created by zhangPeng zhang on 11. 8. 17..
//  Copyright 2011년 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface FirstAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
