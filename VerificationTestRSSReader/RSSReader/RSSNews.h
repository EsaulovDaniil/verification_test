//
//  RSSNews.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RSSNewsModel+CoreDataClass.h"

@interface RSSNews : NSObject

+(instancetype _Nonnull)newsWithTitle:(NSString * _Nonnull) title
							 withDate:(NSDate * _Nullable) date
							 withText:(NSString * _Nonnull) text
							  withURL:(NSURL * _Nullable) url
							 withGUID:(NSString * _Nonnull)guid;

-(instancetype _Nonnull)initWithTitle:(NSString * _Nonnull) title
							 withDate:(NSDate * _Nullable) date
							 withText:(NSString * _Nonnull)text
							  withURL:(NSURL * _Nullable)url
							 withGUID:(NSString * _Nonnull)guid;

@property(readonly, nonatomic) NSString* _Nonnull title;
@property(readonly, nonatomic) NSDate* _Nullable date;
@property(readonly, nonatomic) NSString* _Nonnull text;
@property(readonly, nonatomic) NSURL* _Nullable url;
@property(readonly, nonatomic) NSString* _Nonnull guid;
@property(readonly, nonatomic) bool read;


@end
