//
//  RSSUrlSource.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSSource.h"

@interface RSSUrlSource : RSSSource

+ (instancetype)sourceWithURL:(NSURL*)url;

- (instancetype)initWithURL:(NSURL*)url;

@property (strong,nonatomic) NSURL * url;

@end
