//
//  AWMADImage.h
//  WindMillSDK
//
//  Created by happyelements on 2024/3/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWMADImage : NSObject

// image address URL
@property (nonatomic, copy) NSString *imageURL;

// image width
@property (nonatomic, assign) float width;

// image height
@property (nonatomic, assign) float height;

@end

NS_ASSUME_NONNULL_END
