//
//  PFTime.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFTime : NSObject

/**
 *  @brief 根据格式获取当前时间
 *  @note
 *  @param format: 输出的时间格式
 *  @return 当前时间
 */
+ (NSString *)currentTimeWithFormat:(NSString *)format;

@end
