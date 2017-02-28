//
//  RSSUrlSource .m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "RSSUrlSource.h"
#import "RSSLoader.h"
#import "RSSParser.h"

@interface RSSUrlSource () <RSSLoaderDelegate>{
	RSSParser *_parser;
	RSSLoader *_loader;
}

@end


@implementation RSSUrlSource

+ (instancetype)sourceWithURL:(NSURL*)url{
	return [[RSSUrlSource alloc] initWithURL:url];
}

- (instancetype)initWithURL:(NSURL*)url{
	self = [self init];
	self.url = url;
	_loader = [RSSLoader loaderWithURL:url];
	_loader.delegate = self;
	_parser = [RSSParser new];
	return self;
}

- (void)RSSLoader:(RSSLoader*)RSSLoader didStartLoading:(NSURL *)url{
	[self.delegate RSSSource:self didStartRefreshing:url];
}

- (void)RSSLoader:(RSSLoader*)RSSLoader didFinishLoading:(NSData *)data{
	dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
		RSSChannel * channel = [_parser parse:data
									  withUrl:_url];
		if (!channel)
			[self.delegate RSSSource:self
					didFailWithError:[NSError errorWithDomain:[[NSBundle mainBundle] bundleIdentifier]
														 code:42
													 userInfo:nil]];
		else
			[self.delegate RSSSource:self
				 didFinishRefreshing:channel];
	});
}

- (void)RSSLoader:(RSSLoader*)RSSLoader didFailWithError:(NSError *)err{
	[self.delegate RSSSource:self
			didFailWithError:err];
}

- (void)refresh{
	[_loader startLoading];
	[super refresh];
}

@end
