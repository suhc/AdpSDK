//
//  ADPNativeAdManager.h
//  AdpDemo
//
//  Created by mac on 2025/3/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdpSDK/ADPNativeAdDelegate.h>


NS_ASSUME_NONNULL_BEGIN

@protocol ADPNativeAdDelegate;


@interface ADPNativeAdManager : NSObject


+ (instancetype)sharedInstance;


- (void)loadNativeAdWithPlacementId:(NSString *)placementId WithAdSize:(CGSize)adSize WithDelegate:(id<ADPNativeAdDelegate>)delegate;




- (UIView *)showNativeAdWithRootViewController:(UIViewController *)rootViewController;



@end

NS_ASSUME_NONNULL_END
