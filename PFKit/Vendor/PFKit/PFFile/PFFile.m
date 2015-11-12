//
//  PFFile.m
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import "PFFile.h"

@implementation PFFile

//创建文件
+ (void)createFile:(NSString *)fileName
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *path = [paths[0] stringByAppendingPathComponent:fileName];
    NSFileManager *manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:path]) {//如果文件不存在则创建文件
        [manager createFileAtPath:path contents:nil attributes:nil];
    }
}

//读取文件
+ (NSDictionary *)readFile:(NSString *)fileName
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *path = [paths[0] stringByAppendingPathComponent:fileName];
    return [[NSDictionary alloc] initWithContentsOfFile:path];
}

//读取JSON文件
+ (NSDictionary *)readJSON:(NSString *)fileName
{
    NSString *path = [[NSBundle mainBundle] pathForResource:fileName ofType:@"json"];
    NSString *string = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    return [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableLeaves error:nil];
}

//写入文件
+ (BOOL)writeToFile:(NSString *)fileName params:(NSDictionary *)params
{
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *path = [[paths objectAtIndex:0] stringByAppendingPathComponent:fileName];
    return [params writeToFile:path atomically:YES];
}

@end
