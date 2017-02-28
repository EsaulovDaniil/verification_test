//
//  BackgroundRefresher.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BackgroundRefresher : NSObject

+ (instancetype)refresherWithCompletionHandler:(void (^)(UIBackgroundFetchResult))handler;

- (instancetype)initWithCompletionHandler:(void (^)(UIBackgroundFetchResult))handler;

- (void)refresh;

@end
