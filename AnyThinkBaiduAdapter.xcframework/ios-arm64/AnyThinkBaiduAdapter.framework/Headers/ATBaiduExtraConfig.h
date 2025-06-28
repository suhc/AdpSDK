//
//  ATBaiduExtraConfig.h
//  AnyThinkBaiduAdapter
//
//  Created by GUO PENG on 2022/8/25.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>


@class BaiduMobAdSetting;
NS_ASSUME_NONNULL_BEGIN

@interface ATBaiduExtraConfig : NSObject

+ (void)setExtraConfig:(void(^_Nullable)(BaiduMobAdSetting* _Nullable configuration))extraConfigBlock;

@end

NS_ASSUME_NONNULL_END
