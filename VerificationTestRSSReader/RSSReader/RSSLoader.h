//
//  RRSSLoader.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSLoaderDelegate.h"

@interface RSSLoader : NSObject

@property (nonatomic, weak) id <RSSLoaderDelegate> delegate;

+ (instancetype)loaderWithURL:(NSURL*)url;

- (instancetype)initWithURL:(NSURL*)url;
- (void)startLoading;

@end
