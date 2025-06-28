//
//  WindMillNativeAd.h
//  WindSDK
//
//  Created by Codi on 2021/7/14.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WindMillSDK/WindMillEnum.h>
#import <WindMillSDK/AWMADImage.h>

typedef NS_ENUM(NSInteger, WindMillFeedADMode) {
    WindMillFeedADModeSmallImage = 2,
    WindMillFeedADModeLargeImage = 3,
    WindMillFeedADModeGroupImage = 4,
    WindMillFeedADModeNativeExpress = 5,
    WindMillFeedADModePortraitImage = 6,
    WindMillFeedADModeVideo = 14,
    WindMillFeedADModeVideoPortrait = 15,
    WindMillFeedADModeVideoLandSpace = 16,
};

typedef NS_ENUM(NSInteger, WindMillNativeAdSlotAdType) {
    WindMillNativeAdSlotAdTypeFeed          = 1,       // feed ads
    WindMillNativeAdSlotAdTypeDrawVideo     = 2,       // vertical (immersive) video ads
};


@interface WindMillNativeAd : NSObject

/// Typed access to the ad title.
@property (nonatomic, copy, readonly) NSString *title;

/// Typed access to the body text, usually a longer description of the ad.
@property (nonatomic, copy, readonly) NSString *desc;

/// Typed access to the ad icon.
@property (nonatomic, copy, readonly) NSString *iconUrl;

/// Typed access to the call to action phrase of the ad.
@property (nonatomic, copy, readonly) NSString *callToAction;

/// Typed access to the ad star rating.
@property (nonatomic, assign, readonly) double rating;

/// 图片URL列表 【Optional，可能为nil】
/// 大图：列表中只有一个URL
/// 三图：列表中有3个URL
@property (nonatomic, strong, readonly) NSArray *imageUrlList;

/// 图片URL列表 【Optional，可能位nil】
/// 大图：列表中只有一个model
/// 三图：列表中有3个model
@property (nonatomic, strong, readonly) NSArray<AWMADImage *> *imageModelList;

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
@property (nonatomic, strong) AWMADImage *videoCoverImage;

/// 仅支持ks
@property (nonatomic, copy) NSString *videoUrl;

/// 广告是否有效
@property (nonatomic, getter=isAdReady, readonly) BOOL ready;

@end
