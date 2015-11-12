//
//  PFFile.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFFile : NSObject

/**
 *  @brief 创建文件
 *  @note 文件存放于沙盒中的Documents文件夹中
 *  @param fileName: 文件名
 *  @return
 */
+ (void)createFile:(NSString *)fileName;

/**
 *  @brief 读取文件
 *  @note 文件存放于沙盒中的Documents文件夹中
 *  @param fileName: 文件名
 *  @return 文件中的数据
 */
+ (NSDictionary *)readFile:(NSString *)fileName;

/**
 *  @brief 读取JSON文件
 *  @note 文件存放于main bundle中
 *  @param fileName: 文件名
 *  @return 文件中的数据
 */
+ (NSDictionary *)readJSON:(NSString *)fileName;

/**
 *  @brief 写入文件
 *  @note 文件存放于沙盒中的Documents文件夹中
 *  @param fileName: 文件名
 *  @param params: 写入文件的参数
 *  @return 写入结果
 */
+ (BOOL)writeToFile:(NSString *)fileName params:(NSDictionary *)params;

@end
