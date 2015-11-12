//
//  NSString+PFLocalized.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import <Foundation/Foundation.h>

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
