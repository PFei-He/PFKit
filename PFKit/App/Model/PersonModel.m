//
//  PersonModel.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "PersonModel.h"

@implementation Sports

@end

@implementation Fruits

@end

@implementation Food

@end

@implementation PersonModel

//单例
+ (PersonModel *)sharedInstance
{
    static PersonModel *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}

@end
