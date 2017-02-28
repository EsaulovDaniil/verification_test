//
//  RRSSSourceDelegate.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSChannel.h"

@class RSSSource;

@protocol RSSSourceDelegate <NSObject>

- (void)RSSSource:(RSSSource*)RSSSource didStartRefreshing:(NSURL *)url;
- (void)RSSSource:(RSSSource*)RSSSource didFinishRefreshing:(RSSChannel *)rssChannel;
- (void)RSSSource:(RSSSource*)RSSSource didFailWithError:(NSError *)err;

@end
