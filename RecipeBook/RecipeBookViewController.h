//
//  RecipeBookViewController.h
//  RecipeBook
//
//  Created by Malthe Elkær on 10/8/13.
//  Copyright (c) 2013 Malthe Elkær. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeBookViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end