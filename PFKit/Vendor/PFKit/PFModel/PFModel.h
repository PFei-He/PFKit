//
//  PFModel.h
//  PFKit
//
//  Created by PFei_He on 15/11/12.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PFModel : NSObject

///JSON数据
@property (strong, nonatomic) id JSON;

/**
 *  @brief 初始化
 *  @note
 *  @param JSON: JSON数据
 *  @return
 */
- (instancetype)initWithJSON:(id)JSON;

@end
