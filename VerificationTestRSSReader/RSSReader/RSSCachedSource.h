//
//  RSSCachedSource.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//
#import "RSSSource.h"

@interface RSSCachedSource : RSSSource

+ (instancetype)sourceWithURL:(NSURL*)url;

- (instancetype)initWithURL:(NSURL*)url;

@end
