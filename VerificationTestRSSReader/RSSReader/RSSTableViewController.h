//
//  RSSTableViewController.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSChannel.h"

@interface RSSTableViewController : UITableViewController

@property (strong,nonatomic) RSSChannel *channel;

@end
