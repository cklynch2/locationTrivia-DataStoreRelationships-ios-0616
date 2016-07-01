//
//  FISAddTriviaViewController.h
//  locationTrivia-dataStore
//
//  Created by Flatiron School on 6/30/16.
//  Copyright © 2016 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISLocation.h"


@interface FISAddTriviaViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *triviumField;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
@property (weak, nonatomic) IBOutlet UIButton *saveButton;
@property (strong, nonatomic) FISLocation *location;

- (IBAction)cancelTapped:(id)sender;
- (IBAction)saveTapped:(id)sender;

@end
