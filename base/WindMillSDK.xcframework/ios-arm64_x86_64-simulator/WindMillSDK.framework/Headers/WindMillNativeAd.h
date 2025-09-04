//
//  WindMillNativeAd.h
//  WindSDK
//
//  Created by Codi on 2021/7/14.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WindMillEnum.h"
#import "AWMADImage.h"

typedef NS_ENUM(NSInteger, WindMillFeedADMode) {
    WindMillFeedADModeSmallImage = 2,       // 小图
    WindMillFeedADModeLargeImage = 3,       // 大图
    WindMillFeedADModeGroupImage = 4,       // 组图
    WindMillFeedADModeNativeExpress = 5,    // 模版渲染
    WindMillFeedADModePortraitImage = 6,    // 竖图
    WindMillFeedADModeVideo = 14,           // 视频类
    WindMillFeedADModeVideoPortrait = 15,   // 竖视频
    WindMillFeedADModeVideoLandSpace = 16,  // 横视频
};

typedef NS_ENUM(NSInteger, WindMillNativeAdSlotAdType) {
    WindMillNativeAdSlotAdTypeFeed          = 1,       // feed ads
    WindMillNativeAdSlotAdTypeDrawVideo     = 2,       // vertical (immersive) video ads
};

NS_ASSUME_NONNULL_BEGIN

@interface WindMillNativeAd : NSObject

/// Typed access to the ad title.
@property (nonatomic, copy, readonly, nullable) NSString *title;

/// Typed access to the body text, usually a longer description of the ad.
@property (nonatomic, copy, readonly, nullable) NSString *desc;

/// Typed access to the ad icon.
@property (nonatomic, copy, readonly, nullable) NSString *iconUrl;

/// Typed access to the call to action phrase of the ad.
@property (nonatomic, copy, readonly, nullable) NSString *callToAction;

/// Typed access to the ad star rating.
@property (nonatomic, assign, readonly) double rating;

/// 图片URL列表 【Optional，可能为nil】
/// 大图：列表中只有一个URL
/// 三图：列表中有3个URL
@property (nonatomic, strong, readonly, nullable) NSArray *imageUrlList;

/// 图片URL列表 【Optional，可能位nil】
/// 大图：列表中只有一个model
/// 三图：列表中有3个model
@property (nonatomic, strong, readonly, nullable) NSArray<AWMADImage *> *imageModelList;

/// 渠道ID
@property (nonatomic, assign, readonly) WindMillAdn networkId;

/// WindMillFeedADModeNativeExpress为模版渲染，此时其它属性都为nil
@property (nonatomic, assign, readonly) WindMillFeedADMode feedADMode;

/// 广告类型（Feed/Draw）
@property (nonatomic, assign, readonly) WindMillNativeAdSlotAdType adType;

/// 广告交互类型
@property (nonatomic, assign, readonly) WindMillInteractionType interactionType;

/// 是否为视频广告
@property (nonatomic, assign, readonly) BOOL isVideoAd;

/// 仅支持ks
@property (nonatomic, strong, nullable) AWMADImage *videoCoverImage;

/// 仅支持ks
@property (nonatomic, copy, nullable) NSString *videoUrl;

/// 广告是否有效
@property (nonatomic, getter=isAdReady, readonly) BOOL ready;

@end

NS_ASSUME_NONNULL_END
