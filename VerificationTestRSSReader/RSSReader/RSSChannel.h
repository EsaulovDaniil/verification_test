//
//  RSSChannel.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSChannelModel+CoreDataClass.h"
#import "RSSNews.h"

@interface RSSChannel : NSObject

+ (instancetype) channelWithName:(NSString*)name withUrl:(NSURL*)url withImage:(NSURL*)image withNewsList:(NSArray<RSSNews *>*)newsList;

- (instancetype) initWithName:(NSString*)name withUrl:(NSURL*)url withImage:(NSURL*)image withNewsList:(NSArray<RSSNews *>*)newsList;

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSURL * image;
@property (readonly, nonatomic) NSArray<RSSNews *> * news;
@property (readonly, nonatomic) int unreadCount;

@end
