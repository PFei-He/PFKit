//
//  PersonModel.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "PFModel.h"

@interface Sports : PFModel

@property (copy, nonatomic)     NSString        *one;
@property (copy, nonatomic)     NSString        *two;

@end

@interface Fruits : PFModel

@property (copy, nonatomic)     NSString        *fruit;

@end

@interface Food : PFModel

@property (copy, nonatomic)     NSString        *meat;
@property (copy, nonatomic)     NSArray         *fruit;

@end

@interface PersonModel : PFModel

@property (copy, nonatomic)     NSString        *name;
@property (strong, nonatomic)   NSNumber        *age;
@property (copy, nonatomic)     NSString        *sex;
@property (strong, nonatomic)   NSNumber        *phone;
@property (strong, nonatomic)   NSArray         *address;
@property (strong, nonatomic)   NSNumber        *height;
@property (strong, nonatomic)   NSNumber        *weight;
@property (strong, nonatomic)   NSDictionary    *food;
@property (strong, nonatomic)   NSArray         *sport;
@property (copy, nonatomic)     NSString        *code;

/**
 *  @brief 单例
 *  @note
 *  @param
 *  @return PersonModel类的唯一实例
 */
+ (PersonModel *)sharedInstance;

@end
