//
//  GCCacheSampleAppDelegate.h
//  GCCacheSample
//
//  Created by nikan on 3/15/11.
//  Copyright 2011 Anton Nikolaienko. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GCCacheSampleViewController;

@interface GCCacheSampleAppDelegate : NSObject <UIApplicationDelegate, UIAlertViewDelegate> {
    UIActivityIndicatorView *_progressIndicator;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet GCCacheSampleViewController *viewController;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *progressIndicator;

@end
