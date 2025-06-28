//
//  WindMillAdInfo.h
//  WindMillSDK
//
//  Created by Codi on 2022/3/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WindMillSDK/WindMillEnum.h>

@interface WindMillAdInfo : NSObject
/// 渠道id
@property (nonatomic, assign, readonly) WindMillAdn networkId;

/// 渠道名称
@property (nonatomic, copy, readonly) NSString *networkName;

/// 渠道的广告位ID
@property (nonatomic, copy) NSString *networkPlacementId;

/// 三方代码位广告类型 备注：1代表激励视频，2代表开屏广告，4代表插屏广告，5代表原生广告，7代表Banner广告
@property (nonatomic, assign, readonly) NSUInteger networkAdtype;

/// 多类型广告优选，发放激励时机 
/// 激励视频类型：0  默认激励时机（三方渠道的激励回调）
/// 插屏/开屏： 1  广告关闭时机 2  广告点击时机
@property (nonatomic, assign, readonly) NSUInteger rewardTiming;

/// 瀑布流id / 策略分组ID
@property (nonatomic, copy, readonly) NSString *groupId;

/// 定向包ID
@property (nonatomic, copy, readonly) NSString *ruleId;

/// ab分组
@property (nonatomic, assign, readonly) NSInteger abFlag;

/// 加载优先级
@property (nonatomic, assign, readonly) NSInteger loadPriority;

/// 播放优先级
@property (nonatomic, assign, readonly) NSInteger playPriority;

/// 单位分
@property (nonatomic, assign, readonly) NSInteger eCPM;

/// 获取加密广告价格，注意格式为非数字,目前仅支持百度
@property (nonatomic, assign, readonly) NSString *pecm;

/// 货币单位
@property (nonatomic, copy, readonly) NSString *currency;

/// 是否hb广告源
@property (nonatomic, assign, readonly) BOOL isHeaderBidding;

/** bid类型，0：s2s，1：c2c */
@property(nonatomic, assign, readwrite) NSInteger bidType;

/// 每次展示广告时生成的独立 ID，可用于排查问题
@property (nonatomic, copy, readonly) NSString *loadId;

/// app自己的用户体系的id，开发者传入
@property (nonatomic, copy, readonly) NSString *userId;

/// ToBid 平台定义广告源id，开发者可用于排序    
@property (nonatomic, copy, readonly) NSString *aggrWaterfallId;

/// 当前广告类型
@property (nonatomic, assign, readonly) WindMillAdSlotType adType;

/// 广告场景id，由开发者传入
@property (nonatomic, copy, readonly) NSString *scene;

/// 广告源序号
@property (nonatomic, assign, readonly) NSInteger adsourceIndex;

/// 开发者在request中传入的options
@property (nonatomic, strong, readonly) NSDictionary *options;

@property (nonatomic, strong, readonly) NSDictionary *networkOptions;

/// 是否是原生广告源转换的广告
@property (nonatomic, assign, readonly) NSInteger isNativeAdsource;

- (NSString *)toJson;

@end
