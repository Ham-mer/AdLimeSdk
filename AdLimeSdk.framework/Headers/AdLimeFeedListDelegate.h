//
//  AdLimeFeedListAdDelegate.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/10/9.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeFeedList;
@class AdLimeFeed;

/*!
Delegate methods for receiving AdLimeFeedList state change messages such as ad request status
*/
@protocol AdLimeFeedListDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeInterstitialAd
@param feedList AdLimeFeedList object
*/
@optional
- (void)adLimeFeedListDidReceiveAd:(AdLimeFeedList *)feedList;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeInterstitialAd
@param feedList AdLimeFeedList object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeFeedList:(AdLimeFeedList *)feedList didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a interstitial ad will be presented in screen view
@see AdLimeInterstitialAd
@param feedList AdLimeFeedList object
@param feed AdLimeFeed  object
*/
@optional
- (void)adLimeFeedListWillPresentScreen:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

/*!
@brief Tells the delegate that a feedlist ad will be dismissed from screen
@see AdLimeInterstitialAd
@param feedList AdLimeFeedList object
@param feed AdLimeFeed  object
*/
@optional
- (void)adLimeFeedListDidDismissScreen:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeInterstitialAd
@param feedList AdLimeFeedList object
@param feed AdLimeFeed  object
*/
@optional
- (void)adLimeFeedListWillLeaveApplication:(AdLimeFeedList *)feedList feed:(AdLimeFeed *)feed;

@end
