//
//  PFQRCode.m
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

#import "PFQRCode.h"

@implementation PFQRCode

//生成二维码图片
+ (UIImage *)createWithString:(NSString *)string imageNamed:(NSString *)name codeSize:(CGFloat)size
{
    //将要生成二维码的字符串转为数据类型
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
    
    //创建滤镜
    CIFilter *filter = [CIFilter filterWithName:@"CIQRCodeGenerator"];
    
    //设置内容和纠错级别
    [filter setValue:data forKey:@"inputMessage"];
    [filter setValue:@"H"forKey:@"inputCorrectionLevel"];
    
    //得到一个矩形
    CGRect extent = CGRectIntegral(filter.outputImage.extent);
    
    //得出缩放倍数
    CGFloat scale = MIN(size/CGRectGetWidth(extent), size/CGRectGetHeight(extent));
    
    //得出大小
    size_t width = CGRectGetWidth(extent) * scale;
    size_t height = CGRectGetHeight(extent) * scale;
    
    //创建一个灰度图
    CGColorSpaceRef cs = CGColorSpaceCreateDeviceGray();
    
    //创建一个位图
    CGContextRef bitmapRef = CGBitmapContextCreate(nil, width, height, 8, 0, cs, (CGBitmapInfo)kCGImageAlphaNone);
    
    //获取CIContext
    CIContext *context = [CIContext contextWithOptions:nil];
    CGImageRef bitmapImage = [context createCGImage:filter.outputImage fromRect:extent];
    CGContextSetInterpolationQuality(bitmapRef, kCGInterpolationNone);
    CGContextScaleCTM(bitmapRef, scale, scale);
    CGContextDrawImage(bitmapRef, extent, bitmapImage);
    
    //保存位图到图片
    CGImageRef scaledImage = CGBitmapContextCreateImage(bitmapRef);
    CGContextRelease(bitmapRef);
    CGImageRelease(bitmapImage);
    
    //中部定制图
    UIImage *iconImage = [UIImage imageNamed:name];
    
    //获取二维码的尺寸
    CGRect rect = CGRectMake(0,
                             0,
                             [UIImage imageWithCIImage:[filter.outputImage imageByApplyingTransform:CGAffineTransformMakeScale(20, 20)]].size.width,
                             [UIImage imageWithCIImage:[filter.outputImage imageByApplyingTransform:CGAffineTransformMakeScale(20, 20)]].size.height);
    
    //开始绘图
    UIGraphicsBeginImageContext(rect.size);
    
    //将定制图绘制于二维码中间
    [[UIImage imageWithCGImage:scaledImage] drawInRect:rect];
    CGSize imageSize = CGSizeMake(rect.size.width * 0.25, rect.size.height * 0.25);
    CGFloat x = (rect.size.width - imageSize.width) * 0.5;
    CGFloat y = (rect.size.height - imageSize.height) * 0.5;
    [iconImage drawInRect:CGRectMake(x, y, imageSize.width, imageSize.height)];
    
    //生成带图标的二维码
    UIImage *QRCode = UIGraphicsGetImageFromCurrentImageContext();
    
    //结束绘图
    UIGraphicsEndImageContext();
    
    return QRCode;
}

@end
