//
//  PFFile.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//
//  https://github.com/PFei-He/PFKit
//
//  vesion: 0.0.3
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
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
