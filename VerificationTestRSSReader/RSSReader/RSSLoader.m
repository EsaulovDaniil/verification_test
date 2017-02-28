//
//  RSSLoader.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "RSSLoader.h"

@interface RSSLoader (){
	NSURL* _url;
	NSURLSessionTask *_task;
}

@end


@implementation RSSLoader

+ (instancetype)loaderWithURL:(NSURL*)url{
	return [[RSSLoader alloc] initWithURL:url];
}

- (instancetype)initWithURL:(NSURL*)url{
	self = [self init];
	_url = url;
	return self;
}

- (void)startLoading{
	[self.delegate RSSLoader:self didStartLoading:_url];
	_task = [[NSURLSession sharedSession] dataTaskWithURL:_url completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
		if (data) {
			if(self.delegate){
				[self.delegate RSSLoader:self didFinishLoading:data];
			}
		}else{
			if(self.delegate){
				[self.delegate RSSLoader:self didFailWithError:error];
			}
		}
	}];
	[_task resume];
}

@end
