//
//  WindHCHTTPServer.h
//  WindHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WindHCHTTPServer : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)server;

@property (nonatomic, readonly, getter=isRunning) BOOL running;

- (BOOL)start:(NSError **)error;
- (void)stop;

- (void)setPort:(UInt16)value;

- (NSURL *)URLWithOriginalURL:(NSURL *)URL;

@end
