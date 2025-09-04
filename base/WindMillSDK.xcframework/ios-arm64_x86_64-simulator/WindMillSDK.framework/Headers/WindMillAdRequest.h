//
//  WindMillAdRequest.h
//  WindSDK
//
//  Created by happyelements on 2018/4/8.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WindMillAdRequest : NSObject

/// 【必传】，广告位ID。
@property (nonatomic,copy) NSString *placementId;

/// 【可选】，媒体用户ID。
@property (nonatomic,copy) NSString *userId;

/// reward name.【可选】，目前仅倍业支持
@property (nonatomic, copy) NSString *rewardName;

/// number of rewards.【可选】，目前仅倍业支持
@property (nonatomic, assign) NSInteger rewardAmount;

/// 【可选】，服务端激励回传时，透传参数。
@property (nonatomic,strong) NSDictionary<NSString *, NSString *> *options;

+ (instancetype)request;



@end
