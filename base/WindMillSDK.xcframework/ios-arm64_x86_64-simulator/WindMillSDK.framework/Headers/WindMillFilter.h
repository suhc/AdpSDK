//
//  WindMillFilter.h
//  WindMillSDK
//
//  Created by happyelements on 2024/5/30.
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillEnum.h>

typedef NSString * WaterfallFilterKey NS_STRING_ENUM;
// 三方渠道维度
extern WaterfallFilterKey const WaterfallFilterKeyChannelId;
// 三方广告位维度
extern WaterfallFilterKey const WaterfallFilterKeyAdnId;
// 广告源竞价类型维度
extern WaterfallFilterKey const WaterfallFilterKeyBiddingType;
// 价格维度
extern WaterfallFilterKey const WaterfallFilterKeyECPM;

@interface WindMillFilterItem : NSObject

@property (nonatomic, copy) NSString *field;
@property (nonatomic, strong) id value;
@property (nonatomic, assign) WindMillOperator opr;

@end

@interface WindMillWaterfallFilterData : NSObject

@property (nonatomic, assign) NSInteger channelId; // 渠道ID
@property (nonatomic, copy) NSString *adId;      // 聚合广告位ID
@property (nonatomic, copy) NSString *adnId;     // 渠道广告位ID
@property (nonatomic, assign) float ecpm;          // 渠道ecpm,单位为分
@property (nonatomic, assign) NSInteger bidType;   // 渠道竞价类型

- (NSDictionary *)toDictionary;

@end

@interface WindMillFilterResult : NSObject

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) WindMillFilterItem *filterItem;
@property (nonatomic, strong) NSArray<WindMillFilterItem *> *filterGroup;

@end

@interface WindMillFilter : NSObject

@property (nonatomic, strong) NSMutableArray<NSMutableArray<WindMillFilterItem *> *> *datas;

- (WindMillFilter *)andFilter; //与的关系:不开启新的过滤表达式:可写可不写
- (WindMillFilter *)orFilter;  //或的关系:开启一个新的过滤表达式了
- (WindMillFilter *(^)(WaterfallFilterKey, NSString *))equalTo;
- (WindMillFilter *(^)(WaterfallFilterKey, NSArray<NSString *> *))inFilter;
- (WindMillFilter *(^)(WaterfallFilterKey, NSNumber *))greaterThan;   //此操作符只针对于价格过滤维度
- (WindMillFilter *(^)(WaterfallFilterKey, NSNumber *))lessThan;      //此操作符只针对于价格过滤维度
- (WindMillFilter *(^)(WaterfallFilterKey, NSNumber *))greaterThanOrEqualTo;  //此操作符只针对于价格过滤维度
- (WindMillFilter *(^)(WaterfallFilterKey, NSNumber *))lessThanOrEqualTo;     //此操作符只针对于价格过滤维度

- (WindMillFilterResult *)doFilterWithData:(WindMillWaterfallFilterData *)data;
- (NSString *)toStringWithResult:(WindMillFilterResult *)result;

@end
