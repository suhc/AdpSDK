//
//  WindMillDislikeWords.h
//  WindSDK
//
//  Created by Codi on 2021/1/8.
//  Copyright © 2021 Codi. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol WindDislikeCustomEvent;

@interface WindMillDislikeWords : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *dislikeId;
@property (nonatomic, copy, readonly, nullable) NSString *name;
@property (nonatomic, copy, readonly, nullable) NSArray<WindMillDislikeWords *> *options;

@end

NS_ASSUME_NONNULL_END
