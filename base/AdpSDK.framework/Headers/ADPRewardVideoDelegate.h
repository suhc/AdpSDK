//
//  ADPRewardVideoDelegate.h
//  AdpDemo
//
//  Created by mac on 2025/3/7.
//

#import <Foundation/Foundation.h>

@protocol ADPRewardVideoDelegate <NSObject>

@required

- (void)rewardVideoDidRewardSuccessWithIsVerify:(BOOL)verify;



/// 广告加载成功
- (void)rewardVideoAdDidFinish;

///  广告加载失败回调
- (void)rewardVideoAdDidFaillError:(NSError *)error;

/// 广告曝光
- (void)rewardVideoAdDidVisible;

/// 广告关闭
- (void)rewardVideoAdClosed;

/// 广告点击
- (void)rewardVideoAdClicked;

/// 广告点击跳过
- (void)rewardVideoAdSkiped;



@end
