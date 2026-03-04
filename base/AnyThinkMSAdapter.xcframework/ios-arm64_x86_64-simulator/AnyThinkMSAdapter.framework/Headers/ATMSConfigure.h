//
//  ATMSConfigure.h
//  AnyThinkMSAdapter
//
//  Created by GUO PENG on 2025/10/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATMSConfigure : NSObject

@property (nonatomic, assign) BOOL isHideBannerCloseBtn;

+ (instancetype)sharedManager;


@end

NS_ASSUME_NONNULL_END
