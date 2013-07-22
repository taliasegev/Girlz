//
//  GirlzViewController.m
//  Girlz
//
//  Created by Talia Segev on 7/22/13.
//  Copyright (c) 2013 talia@keren. All rights reserved.
//

#import "GirlzViewController.h"

@interface GirlzViewController ()

@end

@implementation GirlzViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self refreshUI];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)refreshUI{
    
    Profile *keren = [[Profile alloc]initWithUserName:@"keren" Password:@"hila" Email:@"keren.dotan@gmail.com"];
    NSLog(@" new Profile was created: %@",keren);
    
    
    
}

@end
