//
//  RSSLoaderDelegate.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RSSLoader;

@protocol RSSLoaderDelegate <NSObject>

- (void)RSSLoader:(RSSLoader*)RSSLoader didStartLoading:(NSURL *)url;
- (void)RSSLoader:(RSSLoader*)RSSLoader didFinishLoading:(NSData *)data;
- (void)RSSLoader:(RSSLoader*)RSSLoader didFailWithError:(NSError *)err;


@end
