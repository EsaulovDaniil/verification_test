//
//  DNSManagedObjectContext.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "NSManagedObjectContext+contextWithSqlite.h"

@implementation NSManagedObjectContext (contextWithSqlite)


+(instancetype)mainContext {
	static NSManagedObjectContext * instance = nil;
	static dispatch_once_t once;
	dispatch_once(&once, ^{
		instance = [NSManagedObjectContext contextWithSqlite:@"database.sqlite"];
	});
	return instance;
}

+(instancetype)createSecondaryContext {
	NSManagedObjectContext * context = [[NSManagedObjectContext alloc] initWithConcurrencyType:NSPrivateQueueConcurrencyType];
	[context setParentContext:NSManagedObjectContext.mainContext];
	return context;
}

+(instancetype)contextWithSqlite:(NSString*)name {
	NSManagedObjectModel *mom = [NSManagedObjectModel mergedModelFromBundles:nil];
	NSPersistentStoreCoordinator *psc = [[NSPersistentStoreCoordinator alloc]
										 initWithManagedObjectModel:mom];
	NSManagedObjectContext * context = [[NSManagedObjectContext alloc]
					initWithConcurrencyType:NSMainQueueConcurrencyType];
	context.persistentStoreCoordinator = psc;

	NSURL *storeURL = [[[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory
															   inDomains:NSUserDomainMask] lastObject]
					   URLByAppendingPathComponent:name];
	dispatch_async(dispatch_get_global_queue( DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^(void) {
		NSError *error = nil;
		NSPersistentStore *store = [[context persistentStoreCoordinator] addPersistentStoreWithType:NSSQLiteStoreType
																					  configuration:nil
																								URL:storeURL
																							options:nil
																							  error:&error];
		NSAssert(store != nil, @"Error initializing PSC: %@\n%@", [error localizedDescription], [error userInfo]);
	});
	return context;
}

@end
