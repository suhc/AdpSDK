//
//  AWMAdLoadingParam.h
//  WindMillSDK
//
//  Created by Codi on 2022/10/20.
//

/// 聚合请求ID，NSString
extern NSString *const AWMAdLoadingParamLinkID;
/// 聚合广告位ID，NSString
extern NSString *const AWMAdLoadingParamMediationRitID;
/// ADN广告位名称，平台配置名称，NSString
extern NSString *const AWMAdLoadingParamMediaName;
/// ADN平台ID，平台生成的唯一ID，NSString
extern NSString *const AWMAdLoadingParamMediaID;
/// ADN平台广告位ID，NSString
extern NSString *const AWMAdLoadingParamSlotId;
/// 【可选】ADN广告位OPTIONS（自定义渠道不支持）
extern NSString *const AWMAdLoadingParamWADOPTIONS;
/// 【第三方adn竞价返回的byte[]
//extern NSString *const AWMAdLoadingParamResponseBytes;
/// 【可选】聚合load唯一ID（自定义渠道不支持）
/// 媒体专属扩展参数， NSDictionary（自定义渠道不支持）
extern NSString *const AWMAdLoadingParamMediaExtra;
/// 场景ID，NSString
extern NSString *const AWMAdLoadingParamScenarioID;
/// 场景描述，NSString
extern NSString *const AWMAdLoadingParamScenarioDESC;
/// 策略id
extern NSString *const AWMAdLoadingParamStrategyId;
/// 聚合实验ID
extern NSString *const AWMAdLoadingParamExperimentId;

#pragma mark - 自定义补充

/// 自定义Adapter扩展参数， NSString，JSON格式
extern NSString *const AWMAdLoadingParamCustomJson;


#pragma mark - 开屏广告

/// 自定义底部视图，UIView
extern NSString *const AWMAdLoadingParamSPCustomBottomView;

/// 期望广告尺寸，NSValue/CGSize
extern NSString *const AWMAdLoadingParamSPExpectSize;

/// 自定义底部视图尺寸，NSValue/CGSize
extern NSString *const AWMAdLoadingParamSPCustomBottomViewSize;

/// 开屏超时时间，NSNumber/NSInteger
extern NSString *const AWMAdLoadingParamSPTolerateTimeout;

/// 0: 使用对应广告类型渲染；1: 使用原生自渲染填充
extern NSString * const AWMAdLoadingParamSPLoadRenderType;

/** 聚合的广告类型（注意sig 插屏就是4） [sdk3.8.0support] */
extern NSString * const AWMAdLoadingParamSPSubAdType;

extern NSString * const AWMAdLoadingParamAdnChannelId;

#pragma mark - Banner广告
/// 自定义Banner视图尺寸，NSValue/CGSize
extern NSString *const AWMAdLoadingParamBannerExpectSize;

#pragma mark - Native广告

/// 加载广告数量，NSNumber
extern NSString *const AWMAdLoadingParamNALoadAdCount;

#pragma mark - 加载回调参数，即adapter开发者通过`- ***Ad:didAdServerResponseWithExt/Fail*** ext:`中NSDictionary回调的数据

/// 【可选】AND广告ECPM，NSString，单位分
extern NSString *const AWMMediaAdLoadingExtECPM;

/// 【可选】AND广告PECM，NSString
extern NSString *const AWMMediaAdLoadingExtPECM;

/// 【可选】AND广告ECPM对应的货币类型，NSString，目前支持CNY、USD
extern NSString *const AWMMediaAdLoadingExtCurrency;

/// 【可选】ADN广告的加载标识，NSString
extern NSString *const AWMMediaAdLoadingExtRequestID;

/// 【可选】AND广告唯一标识，NSString
extern NSString *const AWMMediaAdLoadingExtAdID;
