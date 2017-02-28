//
//  NSManagedObjectContext.h
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (contextWithSqlite)

+(instancetype)mainContext;
+(instancetype)contextWithSqlite:(NSString*)name;
+(instancetype)createSecondaryContext;

@end
