//
//  ParseService.h
//  UserActivity
//
//  Created by el mariachi on 10/06/15.
//  Copyright (c) 2015 bitelz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>
#import "DataService.h"

@interface ParseService : NSObject <DataService>

@property (weak, nonatomic) id<DataServiceDelegate> delegate;

@end
