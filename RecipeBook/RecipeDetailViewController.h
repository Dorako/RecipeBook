//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Malthe Elkær on 10/9/13.
//  Copyright (c) 2013 Malthe Elkær. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
