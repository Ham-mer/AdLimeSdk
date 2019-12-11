//
//  AdLimeFeed.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/9/19.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeNativeAdLayout.h"

@class AdLimeCustomFeedList<T>;

/*!
@enum AdLimeFeedType
@abstract feed type in feedlist ad
@constant ADLIME_FEEDTYPE_UNKNOWN             unknown
@constant ADLIME_FEEDTYPE_LARGE_IMAGE      large image
@constant ADLIME_FEEDTYPE_SMALL_IMAGE      small image
@constant ADLIME_FEEDTYPE_VERTICAL_IMAGE  vertical image
@constant ADLIME_FEEDTYPE_GROUP_IMAGE     group image
@constant ADLIME_FEEDTYPE_VIDEO                     video
*/
typedef NS_ENUM(NSUInteger, AdLimeFeedType) {
    ADLIME_FEEDTYPE_UNKNOWN = 0, // unknown
    ADLIME_FEEDTYPE_LARGE_IMAGE = 1, // large image
    ADLIME_FEEDTYPE_SMALL_IMAGE = 2, // small image
    ADLIME_FEEDTYPE_VERTICAL_IMAGE = 3, // vertical image
    ADLIME_FEEDTYPE_GROUP_IMAGE = 4, // group image
    ADLIME_FEEDTYPE_VIDEO = 5        // video
};

/*!
@class AdLimeFeed
@abstract AdLime custom feed object
*/
@interface AdLimeFeed<T> : NSObject 

/*!
@method initWithAdapter
@abstract init feed object with adapter and origin data
@param adapter  feedlist adapter
@param originData  origin data
@result AdLimeFeedType
*/
- (AdLimeFeed<T> *)initWithAdapter:(AdLimeCustomFeedList<T> *)adapter feed:(T)originData;

/*!
@method getOriginData
@abstract get origin data in feed
@result NSObject
*/
- (NSObject *)getOriginData;

/*!
@method getType
@abstract get feed type
@result AdLimeFeedType
*/
- (AdLimeFeedType)getType;

/*!
@method getAdView
@abstract get ad view in the adlayout
@param layout  ad layout
@result UIView ad view that can be display in screen
*/
- (UIView *)getAdView:(AdLimeNativeAdLayout *)layout;

/*!
@method findFeedinArray
@abstract find feed in feed array
@param originData  originData
@param feedArray  feed array
@result AdLimeFeed
*/
+ (AdLimeFeed *)findFeed:(NSObject *)originData inArray:(NSMutableArray<AdLimeFeed *> *)feedArray;

@end
