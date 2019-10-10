//
//  AdLimeFeed.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/9/19.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeNativeAdLayout.h"
@class AdLimeCustomFeedList<T>;

typedef NS_ENUM(NSUInteger, AdLimeFeedType) {
    ADLIME_FEEDTYPE_UNKNOWN = 0, // 未知类型
    ADLIME_FEEDTYPE_LARGE_IMAGE = 1, // 大图
    ADLIME_FEEDTYPE_SMALL_IMAGE = 2, // 小图
    ADLIME_FEEDTYPE_VERTICAL_IMAGE = 3, // 竖图
    ADLIME_FEEDTYPE_GROUP_IMAGE = 4, // 组图
    ADLIME_FEEDTYPE_VIDEO = 5  // 视频
};

@interface AdLimeFeed<T> : NSObject 

- (AdLimeFeed<T> *)initWithAdapter:(AdLimeCustomFeedList<T> *)adapter feed:(T)originData;
- (NSObject *)getOriginData;
- (AdLimeFeedType)getType;
- (UIView *)getAdView:(AdLimeNativeAdLayout *)layout;

+ (AdLimeFeed *)findFeed:(NSObject *)originData inArray:(NSMutableArray<AdLimeFeed *> *)feedArray;

@end
