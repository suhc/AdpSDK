//
//  ADPRewardVideoManager.h
//  AdpDemo


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdpSDK/ADPRewardVideoDelegate.h>
/*
 * Third-party extra data
 */
extern NSString *const kATAdLoadingExtraMediaExtraKey;
extern NSString *const kATAdLoadingExtraUserDataKeywordKey;
extern NSString *const kATAdLoadingExtraUserIDKey;
extern NSString *const kATAdLoadingExtraLocationKey;
extern NSString *const kATAdLoadingExtraRewardNameKey;
extern NSString *const kATAdLoadingExtraRewardAmountKey;


@protocol ADPRewardVideoDelegate;


NS_ASSUME_NONNULL_BEGIN

@interface ADPRewardVideoManager : NSObject

+ (instancetype)sharedInstance;


- (void)loadRewardVideoWithPlacementId:(NSString *)placementId WithOptions:(NSDictionary *)options WithDelegate:(id<ADPRewardVideoDelegate>)delegate;



- (void)showRewardVideoWithRootViewController:(UIViewController *)rootViewController;



@end

NS_ASSUME_NONNULL_END
