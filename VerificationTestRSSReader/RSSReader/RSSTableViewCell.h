//
//  RSSTableViewCell.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSNews.h"

@interface RSSTableViewCell : UITableViewCell

@property(strong,nonatomic) RSSNews* data;

@end
