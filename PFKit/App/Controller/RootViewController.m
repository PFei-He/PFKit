//
//  RootViewController.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "Interface.h"

@interface RootViewController ()

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation RootViewController

#pragma mark - Life Cycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    //取出JSON中的对象参数
    Food *food = [[Food alloc] initWithJSON:[PersonModel sharedInstance].food];
    Fruits *fruits = [[Fruits alloc] initWithJSON:food.fruit[0]];
    NSLog(@"%@", fruits.fruit);
    
    self.imageView.image = [PFQRCode createWithString:[PersonModel sharedInstance].code imageNamed:@"Custom Figure.jpg" codeSize:self.imageView.frame.size.width];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
