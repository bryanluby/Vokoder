//
//  VIViewController.h
//  CoreData
//
//  Copyright © 2015 Vokal.
//

#import <UIKit/UIKit.h>

#import "VIPersonDataSource.h"

@interface VIViewController : UITableViewController
@property (strong, nonatomic) VIPersonDataSource *dataSource;

@end
