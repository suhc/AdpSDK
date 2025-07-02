//
//  ATKSExtraConfigura.h
//  AnyThinkKuaiShouAdapter
//
//  Created by GUO PENG on 2022/8/24.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KSAdSDK/KSAdSDKManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATKSExtraConfig : NSObject

+ (void)setExtraConfig:(void(^_Nullable)(KSAdSDKManager* _Nullable configuration))extraConfigBlock;


@end

NS_ASSUME_NONNULL_END
