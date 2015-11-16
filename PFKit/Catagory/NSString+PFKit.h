//
//  NSString+PFKit.h
//  PFKit
//
//  Created by PFei_He on 15/11/15.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//
//  https://github.com/PFei-He/PFKit
//
//  vesion: 0.1.0
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

@interface NSString (PFJudge)

/**
 *  @brief 判断是否QQ号码
 *  @note
 *  @param
 *  @return
 */
- (BOOL)isQQ;

/**
 *  @brief 判断是否邮箱地址
 *  @note
 *  @param
 *  @return
 */
- (BOOL)isEmail;

/**
 *  @brief 判断是否URL
 *  @note
 *  @param
 *  @return
 */
- (BOOL)isURL;

/**
 *  @brief 判断是否手机号码
 *  @note
 *  @param
 *  @return
 */
- (BOOL)isMobilePhoneNumber;

/**
 *  @brief 判断是否ip地址
 *  @note
 *  @param
 *  @return
 */
- (BOOL)isIPAddress;

/**
 *  @brief 匹配邮箱地址
 *  @note
 *  @param
 *  @return
 */
- (NSString *)matchesEmail:(NSString *)string;

/**
 *  @brief 匹配URL
 *  @note
 *  @param
 *  @return
 */
- (NSString *)matchesURL:(NSString *)string;

@end

@interface NSString (PFLocalized)

/**
 *  @brief 本地化
 *  @note
 *  @param
 *  @return 当前语言环境对应的值
 */
- (NSString *)localized;

/**
 *  @brief 本地化带注释
 *  @note
 *  @param comment: 本地化文件中的注释
 *  @return 当前语言环境对应的值
 */
- (NSString *)localizedWithComment:(NSString *)comment;

@end
