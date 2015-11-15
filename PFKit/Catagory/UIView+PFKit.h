//
//  UIView+PFKit.h
//  PFKit
//
//  Created by PFei_He on 15/11/15.
//  Copyright © 2015年 PF-Lib. All rights reserved.
//
//  https://github.com/PFei-He/PFKit
//
//  vesion: 0.0.5
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

#import <UIKit/UIKit.h>

@interface UIView (Metrics)

///
@property (assign, nonatomic)   CGPoint     origin;
///
@property (assign, nonatomic)   CGFloat     x;
///
@property (assign, nonatomic)   CGFloat     y;
///
@property (assign, nonatomic)   CGSize      size;
///
@property (assign, nonatomic)   CGFloat     width;
///
@property (assign, nonatomic)   CGFloat     height;
///
@property (assign, nonatomic)   CGFloat     top;
///
@property (assign, nonatomic)   CGFloat     left;
///
@property (assign, nonatomic)   CGFloat     bottom;
///
@property (assign, nonatomic)   CGFloat     right;
///
@property (assign, nonatomic)   CGFloat     centerX;
///
@property (assign, nonatomic)   CGFloat     centerY;
///
@property (readonly, nonatomic) CGPoint     boundsCenter;
///
@property (assign, nonatomic)   CGPoint     offset;
///
@property (assign, nonatomic)   CGPoint     position;

@end
