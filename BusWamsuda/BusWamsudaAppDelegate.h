//
//  BusWamsudaAppDelegate.h
//  BusWamsuda
//
//  Created by Yi Yeon Jae on 11. 6. 12..
//  Copyright 2011 noritech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BusWamsudaAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
