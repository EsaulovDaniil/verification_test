//
//  RSSTableViewCell.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "RSSTableViewCell.h"

@interface RSSTableViewCell()

@property (weak, nonatomic) IBOutlet UILabel *title;
@property (weak, nonatomic) IBOutlet UILabel *date;
@property (weak, nonatomic) IBOutlet UILabel *status;

@end


@implementation RSSTableViewCell

-(void)setData:(RSSNews *)data{
    
    
	_data = data;
	self.title.text = data.title;
    self.title.font = [UIFont fontWithName:@"Arial-BoldMT" size:17.0];
	if(data.date)
		self.date.text = [NSDateFormatter localizedStringFromDate:data.date
													dateStyle:NSDateFormatterShortStyle
													timeStyle:NSDateFormatterShortStyle];
    
	else
		self.date.text = @"";
	[self.date sizeToFit];
	self.status.hidden = data.read;
    
    if (data.read) {
        self.title.font = [UIFont fontWithName:@"Arial" size:15.0];
    }

}




@end
