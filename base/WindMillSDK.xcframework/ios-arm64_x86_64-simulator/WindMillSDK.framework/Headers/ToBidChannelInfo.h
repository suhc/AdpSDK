//
//  ToBidChannelInfo.h
//  WindMillSDK
//
//  Created by Codi on 2023/8/15.
//

typedef enum : NSUInteger {
    ToBidChannleAdTypeExpressRewardAd = 10,
    ToBidChannleAdTypeRewardAd,
    ToBidChannleAdTypeFullVideoAd,
    ToBidChannleAdTypeIntersititialAd,
    ToBidChannleAdTypeSplashAd,
    ToBidChannleAdTypeBannerAd,
    ToBidChannleAdTypeNative,
    ToBidChannleAdTypeNativeDraw,
} ToBidChannleAdType;

@protocol ToBidChannelInfo <NSObject>

@optional
+ (NSDictionary *)getAdInfoWithTarget:(id)target forType:(ToBidChannleAdType)type;

+ (NSDictionary *)getAdInfoWithDict:(NSDictionary *)dict;

@end
