//
//  NSString+StringFrame.h
//  TTSAppTemplate
//
//  Created by tieshan on 15/7/18.
//  Copyright (c) 2015年 铁山. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (StringFrame)
/**
 *	@brief	计算字符串所占的size
 *
 *	@param 	font 	    字符串显示的字体的大小
 *	@param 	maxSize 	最大尺寸，一般宽度是确定的
 *	@param 	lineBreakMode 	换行模式
 *
 *	@return	返回字符串所占的size
 */
- (CGSize)calculateStringSizeWithFontSize:(UIFont *)font andMaxSize:(CGSize)maxSize andLineBreakMode:(NSLineBreakMode)lineBreakMode;

@end
