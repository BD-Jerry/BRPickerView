//
//  BRPickerStyle.h
//  BRPickerViewDemo
//
//  Created by 任波 on 2019/10/2.
//  Copyright © 2019年 91renb. All rights reserved.
//
//  最新代码下载地址：https://github.com/91renb/BRPickerView

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// 边框样式（左边取消按钮/右边确定按钮）
typedef NS_ENUM(NSUInteger, BRBorderStyle) {
    BRBorderStyleNone = 0,
    BRBorderStyleSolid,
    BRBorderStyleFill,
};

/// 选择器视图样式
@interface BRPickerStyle : NSObject

/** 背景遮罩视图颜色 */
@property (nonatomic, strong) UIColor *maskColor;
/** picker选择器视图背景颜色 */
@property (nonatomic, strong) UIColor *pickerColor;

/** 标题栏背景颜色 */
@property (nonatomic, strong) UIColor *titleBarColor;
/** 标题栏下边框线颜色 */
@property (nonatomic, strong) UIColor *lineColor;

/** 左边取消按钮文本颜色 */
@property (nonatomic, strong) UIColor *leftTextColor;
/** 左边取消按钮边框样式 */
@property (nonatomic, assign) BRBorderStyle leftBorderStyle;

/** 中间标题文本颜色 */
@property (nonatomic, strong) UIColor *titleTextColor;

/** 右边确定按钮文本颜色 */
@property (nonatomic, strong) UIColor *rightTextColor;
/** 右边确定按钮边框样式 */
@property (nonatomic, assign) BRBorderStyle rightBorderStyle;

@end