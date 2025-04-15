//
//  ADPManager.h
//  AdpDemo
//
//  Created by mac on 2025/2/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdpSDK/ADPSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN


@protocol ADPSplashDelegate;


@interface ADPSplashManager : NSObject

+ (instancetype)sharedInstance;


- (void)loadADWithPlacementID:(NSString *)placement WithRootViewController:(UIViewController *)rootViewController WithDelegate:(id<ADPSplashDelegate>)delegate WithBottomView:(nullable UIView  *)bottomView;


- (void)showSplashAdWithUIWindows:(UIWindow *)windows;


@end

NS_ASSUME_NONNULL_END
