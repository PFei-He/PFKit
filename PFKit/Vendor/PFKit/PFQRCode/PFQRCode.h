//
//  PFQRCode.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PFQRCode : NSObject

/**
 *  @brief 生成二维码图片
 *  @note
 *  @param string: 用于生成二维码的字符串
 *  @param imageNamed: 放置于二维码中间的定制图
 *  @param codeSize: 二维码的尺寸
 *  @return
 */
+ (UIImage *)createWithString:(NSString *)string imageNamed:(NSString *)name codeSize:(CGFloat)size;

@end
