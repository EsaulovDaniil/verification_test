//
//  RSSParser.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSChannel.h"
#import "RSSNews.h"

@interface RSSParser : NSObject

- (RSSChannel* _Nullable)parse:(NSData* _Nonnull)data withUrl:(NSURL* _Nonnull)url;

@end
