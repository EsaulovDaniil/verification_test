//
//  RSSModelUtils.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSNewsModel+CoreDataClass.h"
#import "RSSNews.h"
#import "RSSChannelModel+CoreDataClass.h"
#import "RSSChannel.h"

@interface RSSModelUtils : NSObject

+ (void)writeNewsModel:(RSSNewsModel * _Nonnull)model
			  withNews:(RSSNews * _Nonnull)news
		   withChannel:(RSSChannelModel * _Nonnull)channel;
+ (RSSNews * _Nonnull)newsWithModel:(RSSNewsModel * _Nonnull)model;
+ (void)setRead:(bool)read withNews:(RSSNews * _Nonnull)news;
+ (bool)getRead:(RSSNews * _Nonnull)news;

+ (void)writeChannelModel:(RSSChannelModel * _Nonnull)model
			  withChannel:(RSSChannel * _Nonnull)channel;
+ (RSSChannel * _Nonnull)channelWithModel:(RSSChannelModel * _Nonnull)model;

@end
