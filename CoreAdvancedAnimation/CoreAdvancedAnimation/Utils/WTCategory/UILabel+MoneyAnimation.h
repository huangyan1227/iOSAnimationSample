//
//  UILabel+MoneyAnimation.h
//  CoreAdvancedAnimation
//
//  Created by mac on 2018/8/13.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum _AnimationDirection {
    positive  = 1,
    negative = -1,
} AnimationDirection;


@interface UILabel (MoneyAnimation)

//跳动效果
- (void)wt_setNumber:(NSNumber *)number;

//翻页效果
- (void)wt_setTextPageAnimation:(NSString *)text direction:(AnimationDirection)direction;
@end
