//
//  AWMCustomNativeAd.h
//  WindMillSDK
//
//  Created by Codi on 2022/10/20.
//

#import <WindMillSDK/WindMillEnum.h>
#import <WindMillSDK/AWMADImage.h>

typedef NS_ENUM(NSInteger, AWMMediatedNativeAdMode) {
    AWMMediatedNativeAdModeSmallImage = 2,      // 水平小图样式
    AWMMediatedNativeAdModeLargeImage = 3,      // 水平大图样式
    AWMMediatedNativeAdModeGroupImage = 4,      // 水平组图样式
    AWMMediatedNativeAdModeNativeExpress = 5,   // 模版广告
    AWMMediatedNativeAdModePortraitImage = 6,   // 竖版图片
    AWMMediatedNativeAdModeVideo = 14,          // 视频样式
    AWMMediatedNativeAdModeVideoPortrait = 15,  // 垂直视频样式
    AWMMediatedNativeAdModeVideoLandSpace = 16, // 水平视频样式
};

typedef enum : NSUInteger  {
    AWMNativeAdInteractionTypeCustorm = 0,
    AWMNativeAdInteractionTypeNO_INTERACTION = 1,  // pure ad display
    AWMNativeAdInteractionTypeURL = 2,             // open the webpage using a browser
    AWMNativeAdInteractionTypePage = 3,            // open the webpage within the app
    AWMNativeAdInteractionTypeDownload = 4,        // download the app
    AWMNativeAdInteractionTypePhone = 5,           // make a call
    AWMNativeAdInteractionTypeMessage = 6,         // send messages
    AWMNativeAdInteractionTypeEmail = 7,           // send email
    AWMNativeAdInteractionTypeVideoAdDetail = 8,   // video ad details page
    AWMNativeAdInteractionTypeWechat = 9,          // open wechat
    AWMNativeAdInteractionTypeDeepLink = 10,       // deep link
    AWMNativeAdInteractionTypeMediationOthers  = 100 //聚合其他广告sdk返回的类型
} AWMNativeAdInteractionType;

typedef NS_ENUM(NSInteger, AWMNativeAdSlotAdType) {
    AWMNativeAdSlotAdTypeFeed          = 1,       // feed ads
    AWMNativeAdSlotAdTypeDrawVideo     = 2,       // vertical (immersive) video ads
};


@protocol AWMMediatedNativeAdData <NSObject>

/// 广告标题
@property (nonatomic, copy) NSString *title;

/// 广告详情描述
@property (nonatomic, copy) NSString *desc;

/// app类型广告的广告商app图标，
@property (nonatomic, copy) NSString *iconUrl;

/// 按钮文案，例如'下载/安装'
@property (nonatomic, copy) NSString *callToAction;

/// app评分，区间为0-5
@property (nonatomic, assign) double rating;

/// 图片URL列表 【Optional，可能位nil】
/// 大图：列表中只有一个URL
/// 三图：列表中有3个URL
@property (nonatomic, strong) NSArray *imageUrlList;

/// 图片/视频模式
@property (nonatomic, assign) AWMMediatedNativeAdMode adMode;

/// 广告类型（feed/draw）
@property (nonatomic, assign) AWMNativeAdSlotAdType adType;

/// 广告交互类型
@property (nonatomic, assign, readonly) AWMNativeAdInteractionType interactionType;

/// 渠道ID
@property (nonatomic, assign) WindMillAdn networkId;

/// 原生自渲染视频封面图对象，仅支持ks
@property (nonatomic, strong) AWMADImage *videoCoverImage;

///  原生自渲染视频URL，仅支持ks
@property (nonatomic, copy) NSString *videoUrl;

/// 图片URL列表 【Optional，可能位nil】
/// 大图：列表中只有一个AWMADImage对象
/// 三图：列表中有3个AWMADImage对象
@property (nonatomic, strong) NSArray<AWMADImage *> *imageModelList;
@end
