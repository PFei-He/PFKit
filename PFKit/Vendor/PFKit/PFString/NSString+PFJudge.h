//
//  NSString+PFJudge.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
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
