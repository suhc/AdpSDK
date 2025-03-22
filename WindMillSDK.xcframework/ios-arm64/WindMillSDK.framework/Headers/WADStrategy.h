//
//  WADStrategyOptions.h
//  WindSDK
//
//  Created by happyelements on 2018/4/9.
//  Copyright © 2018 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WADOptions;
@class SMGCDTimer;
@class AWMParameter;
@class AWMSdkInitConfig;

@interface WADHBResponse : NSObject

/** 竞价成功url */
@property(nonatomic, readwrite, copy) NSString *winURL;

/** 竞价失败url */
@property(nonatomic, readwrite, copy) NSString *loseURL;

/** 请求唯一标识，竞价平台提供 */
@property(nonatomic, readwrite, copy) NSString *bidId;

/** 第三方adn竞价返回的json string */
@property(nonatomic, readwrite, copy) NSString *responseStr;

/** 第三方adn竞价返回的json string */
@property(nonatomic, readwrite, copy) NSString *responseBytes;

@property (nonatomic,copy) NSString *token;

@property(nonatomic, assign) uint32_t channelId;

@end


@interface WADStrategy : NSObject

@property (nonatomic, strong) AWMSdkInitConfig *sdkInitConfig;
@property (nonatomic, strong) AWMParameter *parameter;
/** 第三方adn竞价的response */
@property(nonatomic, readwrite, strong) WADHBResponse *hbResponse;
/** ssp自定义参数 */
@property (nonatomic,strong) WADOptions *options;
@property (nonatomic, strong) NSDictionary *mediaExt;
/** 加载唯一标识 */
@property (nonatomic,copy) NSString *loadId;
@property (nonatomic,copy) NSString *vid;
/** 渠道ID */
@property(nonatomic, assign) uint32_t channelId;
/** 广告类型 */
@property (nonatomic, assign) NSUInteger adType;
/** 渠道名称 */
@property (nonatomic,copy) NSString *name;
/** 广告位预估价格，单位分 */
@property(nonatomic, readwrite) NSInteger ecpm;
/// 获取加密广告价格，注意格式为非数字,目前仅支持百度
@property (nonatomic, assign) NSString *pecm;
/** 广告位排序价格，单位分 */
@property(nonatomic, readwrite) NSInteger price;
@property(nonatomic, readwrite) NSString *strPrice;
/** 是否hb广告位，0：不是，1：是 */
@property(nonatomic, readwrite) uint32_t hb;
/** 普通广告源序号(price一样存在相同的序号)[sdk4.0.0support] */
@property(nonatomic, readwrite) uint32_t order;
/** bid类型，0：s2s，1：c2c */
@property(nonatomic, readwrite) uint32_t bidType;
/** bidding的底价，单位：分 */
@property(nonatomic, readwrite) int32_t bidFloor;
/** 0: 使用对应广告类型渲染；1: 使用原生自渲染填充 */
@property(nonatomic, readwrite) uint32_t renderType;
/** 播放中加载, 默认值false:默认不加载 */
@property(nonatomic, readwrite) BOOL playingAutoLoad;
/** 竞价渠道通知竞价结果开关；false:关闭；默认true:开启 */
@property(nonatomic, readwrite) BOOL notifyBidResultSwitch;
/** 广点通固定回调urL */
@property(nonatomic, readwrite) NSString *notifyUrl;
/** 返回是否过期 */
@property (nonatomic, assign, readonly) BOOL isExpired;
/** 是否是自定义渠道 */
@property(nonatomic, readwrite) BOOL isCustom;
/** 广告初始化适配器类名 */
@property(nonatomic, readwrite, copy) NSString *adInitClass;
/** 对应广告适配器类名 */
@property(nonatomic, readwrite, copy) NSString *adClass;
/** 币种 人民币 CNY("CNY"), 美元 USD("USD"), 欧元 EUR("EUR") */
@property(nonatomic, readwrite, copy) NSString *currency;
/** 币种系数 可以为正负, 0为默认值,需sdk特殊处理 */
@property(nonatomic, assign) int32_t ratio;
/** 汇率*/
@property(nonatomic, readwrite, copy) NSString *exchangeRate;
/** 对应广告位size */
@property (nonatomic, assign) CGSize size;
/** 是否曝光过 */
@property(nonatomic, readwrite) BOOL isVisibled;
/** 是否调用渠道load接口 */
@property(nonatomic, readwrite) BOOL isCallLoad;
/** 渠道是否回调ready回调 */
@property(nonatomic, readwrite) BOOL isCallbackReady;
/** 渠道是否回调error回调 */
@property(nonatomic, readwrite) BOOL isCallbackError;
/** 渠道是否loading中 */
@property(nonatomic, readwrite) BOOL isLoadingAd;

/** 仅ssp透传到sdk打点使用 */
@property(nonatomic, readwrite, strong) NSMutableDictionary<NSString*, NSString*> *dcOptions;

@property(nonatomic, readwrite, copy) NSString *uniqueId;

/** 自定义，竞价回传使用 */
/** bidding二价 */
@property(nonatomic, readwrite) NSInteger secondBiddingPrice;
/** bidding二价渠道ID */
@property(nonatomic, assign) uint32_t secondBiddingChannelId;
/** waterfall二价 */
@property(nonatomic, readwrite) NSInteger secondWaterfallPrice;
/** waterfall二价渠道ID */
@property(nonatomic, assign) uint32_t secondWaterfallChannelId;

// 竞败时
/** bidding最高价 */
@property(nonatomic, readwrite) NSInteger biddingPrice;
/** bidding最高价渠道ID */
@property(nonatomic, assign) uint32_t biddingChannelId;
/** winner最高价渠道ID */
@property(nonatomic, assign) uint32_t winnerChannelId;
/** winner最高价是否hb */
@property(nonatomic, assign) uint32_t winnerChannelIsHb;

@end
