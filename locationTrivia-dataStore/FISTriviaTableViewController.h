//
//  FISTriviaTableViewController.h
//  locationTrivia-dataStore
//
//  Created by Flatiron School on 6/30/16.
//  Copyright © 2016 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISLocation.h"
#import "FISTrivium.h"
#import "FISAddTriviaViewController.h"

@interface FISTriviaTableViewController : UITableViewController
@property (strong, nonatomic) FISLocation *location;

@end
