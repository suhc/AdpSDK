//
//  WindMillIntersititialAd.h
//  WindSDK
//
//  Created by Codi on 2021/4/19.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WindMillSDK/WindMillEnum.h>

@class WindMillAdInfo;
@class WindMillAdRequest;
@class WindMillIntersititialAd;

NS_ASSUME_NONNULL_BEGIN

@protocol WindMillIntersititialAdDelegate<NSObject>

@optional

/// 广告加载成功回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidLoad:(WindMillIntersititialAd *)intersititialAd;

/// 广告加载失败回调
/// - Parameters:
///   - intersititialAd: WindMillIntersititialAd 实例对象
///   - error: 具体错误信息
- (void)intersititialAdDidLoad:(WindMillIntersititialAd *)intersititialAd didFailWithError:(NSError *)error;

/// 广告曝光回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidVisible:(WindMillIntersititialAd *)intersititialAd;

/// 广告展示失败
/// - Parameters:
///   - intersititialAd: WindMillIntersititialAd 实例对象
///   - error: 具体错误信息
- (void)intersititialAdDidShowFailed:(WindMillIntersititialAd *)intersititialAd error:(NSError *)error;

/// 广告点击回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidClick:(WindMillIntersititialAd *)intersititialAd;

/// 广告跳过回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidClickSkip:(WindMillIntersititialAd *)intersititialAd;

/// 广告关闭回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidClose:(WindMillIntersititialAd *)intersititialAd;

/// 广告视频播放完成或播放出错时回调
/// - Parameters:
///   - intersititialAd: WindMillIntersititialAd 实例对象
///   - error: 具体错误信息
- (void)intersititialAdDidPlayFinish:(WindMillIntersititialAd *)intersititialAd didFailWithError:(NSError * _Nullable)error;

/**目前仅支持 csj
 This method is called when another controller has been closed.
 @param interactionType : open appstore in app or open the webpage or view video ad details page.
 @Note :  Mediation dimension does not support this callBack.
 */
- (void)intersititialAdDidCloseOtherController:(WindMillIntersititialAd *)intersititialAd withInteractionType:(WindMillInteractionType)interactionType;

/// 广告播放中加载成功回调
/// - Parameter intersititialAd: WindMillIntersititialAd 实例对象
- (void)intersititialAdDidAutoLoad:(WindMillIntersititialAd *)intersititialAd;

/// 广告播放中加载失败回调
/// - Parameters:
///   - intersititialAd: WindMillIntersititialAd 实例对象
///   - error: 具体错误信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didAutoLoadFailWithError:(NSError *)error;


/// 竞价广告源开始竞价回调
/// - Parameter intersititialAd: WindMillintersititialAd 实例对象
///   - intersititialAd: 插屏信息
///   - adInfo: 广告的相关信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didStartBidADSource:(WindMillAdInfo *)adInfo;

/// 竞价广告源竞价成功回调
/// - Parameter intersititialAd: WindMillintersititialAd 实例对象
///   - intersititialAd: 插屏信息
///   - adInfo: 广告的相关信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didFinishBidADSource:(WindMillAdInfo *)adInfo;

/// 竞价广告源竞价失败回调，以及失败原因
/// - Parameters:
///   - intersititialAd: WindMillintersititialAd 实例对象
///   - adInfo: 具体错误信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didFailBidADSource:(WindMillAdInfo *)adInfo error:(NSError *)error;

/// 广告源开始加载回调
/// - Parameter intersititialAd: WindMillintersititialAd 实例对象
///   - intersititialAd: 插屏信息
///   - adInfo: 广告的相关信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didStartLoadingADSource:(WindMillAdInfo *)adInfo;

/// 广告源广告填充回调
/// - Parameter intersititialAd: WindMillintersititialAd 实例对象
///   - intersititialAd: 插屏信息
///   - adInfo: 广告的相关信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didFinishLoadingADSource:(WindMillAdInfo *)adInfo;

/// 广告源加载失败回调，以及失败原因
/// - Parameters:
///   - intersititialAd: WindMillintersititialAd 实例对象
///   - error: 具体错误信息
- (void)intersititialAd:(WindMillIntersititialAd *)intersititialAd didFailToLoadADSource:(WindMillAdInfo *)adInfo error:(NSError *)error;

@end

@interface WindMillIntersititialAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<WindMillIntersititialAdDelegate> delegate;

/// 广告位ID
@property (nonatomic, strong, readonly) NSString *placementId;

/// 广告是否有效
@property (nonatomic, getter=isAdReady, readonly) BOOL ready;

/// 当前播放广告的相关信息
@property (nonatomic, strong, readonly) WindMillAdInfo *adInfo;

/// 填充后可调用, 返回广告缓存池内所有信息
- (NSArray<WindMillAdInfo *> *)getCacheAdInfoList;

/// 构造器
/// - Parameter request: 广告请求模型，可以设置广告位ID等参数
- (instancetype)initWithRequest:(WindMillAdRequest *)request;

/// 加载广告
- (void)loadAdData;

/// 播放广告
/// @param rootViewController 播放广告所需要的ViewController
/// @param extras 扩展参数，用于设置播放时的代码位场景
- (void)showAdFromRootViewController:(UIViewController *)rootViewController
                             options:(NSDictionary<NSString *, NSString *> * _Nullable)extras;

@end

NS_ASSUME_NONNULL_END
