//
//  AppDelegate.h
//  MomeiApp
//
//  Created by yangjuanping on 2019/9/24.
//  Copyright © 2019 yangjuanping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

//@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (weak, nonatomic) IBOutlet UITabBarController *tabBarViewController;

@end

