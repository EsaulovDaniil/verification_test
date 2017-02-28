//
//  RSSChannelSetDelegate.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSChannel.h"

@class RSSChannelSet;

@protocol RSSChannelSetDelegate <NSObject>

- (void)RSSChannelSet:(RSSChannelSet*)RSSChannelSet didPreloaded:(NSArray<RSSChannel*> *)rssChannel;
- (void)RSSChannelSet:(RSSChannelSet*)RSSChannelSet didStartRefreshing:(NSArray<RSSChannel*> *)rssChannel;
- (void)RSSChannelSet:(RSSChannelSet*)RSSChannelSet didFinishRefreshing:(NSArray<RSSChannel*> *)rssChannel;
- (void)RSSChannelSet:(RSSChannelSet*)RSSChannelSet didFailWithError:(NSError *)err;

@end
