//
//  WindMillWaterfallFilter.h
//  WindMillSDK
//
//  Created by happyelements on 2024/5/30.
//

#import <WindMillSDK/WindMillFilter.h>

@interface WindMillWaterfallFilter : WindMillFilter

- (instancetype)initWithPlacementId:(NSString *)placementId;

@property (nonatomic, copy) NSString *placementId;

@end
