//
//  PFModel.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "PFModel.h"

@implementation PFModel

//初始化
- (instancetype)initWithJSON:(id)JSON
{
    [self parseJSON:JSON];
    return [self init];
}

//JSON数据
- (void)setJSON:(id)JSON
{
    _JSON = JSON;
    [self parseJSON:JSON];
}

///解析JSON
- (void)parseJSON:(id)JSON
{
    if ([JSON isKindOfClass:[NSDictionary class]]) {
        [self setValuesForKeysWithDictionary:JSON];
    } else {
        NSLog(@"The object isn't kind of NSDictionary");
    }
}

//获取未被声明的对象
- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    NSLog(@"**Class->%@ UndefinedKey->%@ Value->%@ Type->%@**", [self classForCoder], key, value, [value classForCoder]);
}

@end
