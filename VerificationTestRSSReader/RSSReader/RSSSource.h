//
//  RSSSource.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSSourceDelegate.h"

@interface RSSSource : NSObject

@property (nonatomic, weak) id <RSSSourceDelegate> delegate;

- (void)refresh;

@end
