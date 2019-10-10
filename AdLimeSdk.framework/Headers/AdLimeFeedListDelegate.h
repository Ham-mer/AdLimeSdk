//
//  AdLimeFeedListAdDelegate.h
//  WeSdkiOS
//
//  Created by 王航 on 2019/10/9.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeFeedList;
@class AdLimeFeed;

@protocol AdLimeFeedListDelegate<NSObject>

@optional
- (void)adLimeFeedListDidReceiveAd:(AdLimeFeedList *)feedList;

@optional
- (void)adLimeFeedList:(AdLimeFeedList *)feedList didFailToReceiveAdWithError:(AdLimeAdError *)adError;

@optional
- (void)adLimeFeedListWillPresentScreen:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

@optional
- (void)adLimeFeedListDidDismissScreen:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

@optional
- (void)adLimeFeedListWillLeaveApplication:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

@end
