//
//  PFTime.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "PFTime.h"

@implementation PFTime

//根据格式获取当前时间
+ (NSString *)currentTimeWithFormat:(NSString *)format
{
    NSDate *date = [NSDate date];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateStyle = NSDateFormatterFullStyle;
    formatter.dateFormat = format;
    NSString *string = [formatter stringFromDate:date];
    return string;
}

@end
