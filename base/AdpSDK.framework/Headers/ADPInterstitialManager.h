//
//  ADPInterstitialManager.h
//  AdpDemo


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdpSDK/ADPInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ADPInterstitialDelegate;


@interface ADPInterstitialManager : NSObject

+ (instancetype)sharedInstance;

- (void)loadInterstitialWithPlacementId:(NSString *)placementId WithDelegate:(id<ADPInterstitialDelegate>)delegate;


- (void)showInterstitialWithRootViewController:(UIViewController *)rootViewController;



@end

NS_ASSUME_NONNULL_END
