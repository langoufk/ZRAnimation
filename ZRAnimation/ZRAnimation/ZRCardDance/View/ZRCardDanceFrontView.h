//
//  ZRCardDanceFrontView.h
//  ZRAnimation
//
//  Created by Robin on 2018/10/10.
//  Copyright © 2018年 RobinZhao. All rights reserved.
//

#import "ZRCardDanceBaseView.h"
#import "ZRCardDanceModel.h"

@interface ZRCardDanceFrontView : ZRCardDanceBaseView

+ (ZRCardDanceFrontView *)createdWithFrame:(CGRect)frame;
- (void)setupSubViews:(CGRect)frame model:(ZRCardDanceModel *)model;

@end
