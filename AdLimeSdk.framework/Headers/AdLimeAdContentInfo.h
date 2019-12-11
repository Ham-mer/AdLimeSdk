//
//  AdLimeAdContentInfo.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/11/28.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(int, AdLimeAdIsApp) {
    ADLIME_AD_ISAPP_YES = 0,      //yes
    ADLIME_AD_ISAPP_NO = 1,        //no
    ADLIME_AD_ISAPP_UNKNOWN = 2,  // unknown
};

typedef NS_ENUM(int, AdLimeAdContentType) {
    ADLIME_AD_CONTENT_TYPE_UNKNOWN = 0,          // unknown
    ADLIME_AD_CONTENT_TYPE_LARGE_IMAGE = 1,      //large image
    ADLIME_AD_CONTENT_TYPE_SMALL_IMAGE = 2,      //small image
    ADLIME_AD_CONTENT_TYPE_SMALL_IMAGE_VERTICAL = 3, //small image vertical
    ADLIME_AD_CONTENT_TYPE_GROUP_IMAGE = 4,       //group image
    ADLIME_AD_CONTENT_TYPE_VIDEO                  //video
};

@interface AdLimeAdContentInfo : NSObject

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *subTitle;
@property(nonatomic, strong) NSString *body;
@property(nonatomic, strong) NSString *advertiser;
@property(nonatomic, strong) NSString *callToAction;

@property(nonatomic) AdLimeAdIsApp isApp;
@property(nonatomic) AdLimeAdContentType contentType;

@property(nonatomic, strong) NSString *iconUrl;
@property(nonatomic, strong) NSString *imageUrl;
@property(nonatomic, strong) NSString *videoUrl;
@property(nonatomic, strong) NSString *clickUrl;

@property(nonatomic, strong) NSString *rating;
@property(nonatomic, strong) NSString *store;
@property(nonatomic, strong) NSString *price;

@end


@interface AdLimeBannerData : AdLimeAdContentInfo

@end

@interface AdLimeNativeData : AdLimeAdContentInfo

@end

@interface AdLimeInterstitialData : AdLimeAdContentInfo

@end

@interface AdLimeRewardedVideoData : AdLimeAdContentInfo

@end

@interface AdLimeFeedData : AdLimeAdContentInfo

@end

@interface AdLimeSplashData : AdLimeAdContentInfo

@end
