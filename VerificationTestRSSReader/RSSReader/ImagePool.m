//
//  ImagePool.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "ImagePool.h"

@implementation ImagePool

+ (UIImage*)imageWithUrl:(NSURL*)url{
	if(url==nil) return [UIImage imageNamed: @"rss_icon.png"];
	static NSCache *imagesCache;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		imagesCache = [[NSCache alloc] init];
	});
	UIImage *result = [imagesCache objectForKey:url];
	if(result != nil) return result;
	result = [UIImage imageWithData:[NSData dataWithContentsOfURL:url]];
	if(result != nil)
		[imagesCache setObject:result forKey:url];
	return result;
}




@end
