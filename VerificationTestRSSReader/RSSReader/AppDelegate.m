//
//  AppDelegate.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "AppDelegate.h"
#import "BackgroundRefresher.h"

@interface AppDelegate (){
	BackgroundRefresher *_refresher;
}

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:UIUserNotificationTypeBadge categories:nil];
	[application registerUserNotificationSettings:settings];
	[application setMinimumBackgroundFetchInterval:UIApplicationBackgroundFetchIntervalMinimum];
	return YES;
}

-(void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler{
	_refresher = [BackgroundRefresher refresherWithCompletionHandler:completionHandler];
	[_refresher refresh];
}

@end
