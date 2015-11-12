//
//  NSString+PFLocalized.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "NSString+PFLocalized.h"

@implementation NSString (PFLocalized)

//本地化
- (NSString *)localized
{
    return NSLocalizedStringWithDefaultValue(self, nil, [NSBundle mainBundle], nil, nil);
}

//本地化带注释
- (NSString *)localizedWithComment:(NSString *)comment
{
    return NSLocalizedStringWithDefaultValue(self, nil, [NSBundle mainBundle], nil, comment);
}

@end
