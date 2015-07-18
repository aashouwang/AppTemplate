//
//  NSString+StringFrame.m
//  TTSAppTemplate
//
//  Created by tieshan on 15/7/18.
//  Copyright (c) 2015年 铁山. All rights reserved.
//

#import "NSString+StringFrame.h"

@implementation NSString (StringFrame)
- (CGSize)calculateStringSizeWithFontSize:(UIFont *)font andMaxSize:(CGSize)maxSize andLineBreakMode:(NSLineBreakMode)lineBreakMode
{
    CGSize sizeToFit;
    if (IS_IOS7_ABOVE)
    {
        NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc]init];
        
        paragraphStyle.lineBreakMode = lineBreakMode;
        
        NSDictionary *attributes = @{NSFontAttributeName:font, NSParagraphStyleAttributeName:paragraphStyle.copy};
        
        sizeToFit = [self boundingRectWithSize:maxSize
                                       options:
                     NSStringDrawingTruncatesLastVisibleLine |
                     NSStringDrawingUsesLineFragmentOrigin |
                     NSStringDrawingUsesFontLeading
                                    attributes:attributes
                                       context:nil].size;
        
        [paragraphStyle release];
    }
    else
    {
        sizeToFit = [self sizeWithFont:font
                     constrainedToSize:maxSize
                         lineBreakMode:lineBreakMode];
        //此处的换行类型（lineBreakMode）可根据自己的实际情况进行设置
    }
    return sizeToFit;
}
@end
