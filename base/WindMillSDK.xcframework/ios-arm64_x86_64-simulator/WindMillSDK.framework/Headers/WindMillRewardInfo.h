//
//  WindMillRewardInfo.h
//  HeMobTest
//
//  Created by zhou.ding on 2017/5/3.
//  Copyright © 2017年 happyelements. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface WindMillRewardInfo : NSObject

/// 是否达到激励条件
@property (nonatomic,assign) BOOL isCompeltedView;

/// 交易的唯一id
@property (nonatomic, copy, nullable) NSString *transId;

/// 第三方广告唯一标识 目前支持 腾讯、百度
@property (nonatomic, copy, nullable) NSString *thirdTransId;

/// 用户id
@property (nonatomic, copy, nullable) NSString *userId;

/// 区分优量汇的激励场景支持点击二次奖励的能力
@property (nonatomic, copy, nullable) NSString *rewardAction;

@end
NS_ASSUME_NONNULL_END
