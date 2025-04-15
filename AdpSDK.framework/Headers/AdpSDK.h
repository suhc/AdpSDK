//
//  AdpSDK.h
//  AdpDemo
//
//  Created by mac on 2025/2/21.
//

#import <Foundation/Foundation.h>
#import <AdpSDK/ADPInterstitialManager.h>
#import <AdpSDK/ADPRewardVideoManager.h>
#import <AdpSDK/ADPSplashManager.h>
#import <AdpSDK/ADPNativeAdManager.h>
#import <AdpSDK/ADPInterstitialDelegate.h>
#import <AdpSDK/ADPNativeAdDelegate.h>
#import <AdpSDK/ADPRewardVideoDelegate.h>
#import <AdpSDK/ADPSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdpSDK : NSObject


+ (NSString *)getSDKVersion;


+ (void)initADPSDK:(NSString *)appid;


@end

NS_ASSUME_NONNULL_END
