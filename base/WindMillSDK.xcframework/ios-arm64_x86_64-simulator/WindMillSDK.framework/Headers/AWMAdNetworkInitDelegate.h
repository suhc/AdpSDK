//
//  AWMNetworkInitListener.h
//  WindMillSDK
//
//  Created by happyelements on 2025/6/26.
//

#import <Foundation/Foundation.h>
#import "WindMillEnum.h"

@protocol AWMAdNetworkInitDelegate <NSObject>

/// 渠道即将初始化前的回调
- (void)onNetworkInitBeforeWithChannelId:(WindMillAdn)channelId initInstance:(NSObject *)initInstance;

/// 渠道初始化成功
- (void)onNetworkInitSuccessWithChannelId:(WindMillAdn)channelId;

/// 渠道初始化失败
- (void)onNetworkInitFailedWithChannelId:(WindMillAdn)channelId error:(NSError *)error;

@end

