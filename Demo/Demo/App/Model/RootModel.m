//
//  RootModel.m
//  Demo
//
//  Created by PFei_He on 15/11/13.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "RootModel.h"

@implementation Sports

@end

@implementation Fruits

@end

@implementation Food

@end

@implementation Person

//单例
+ (Person *)sharedInstance
{
    static Person *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}

@end
