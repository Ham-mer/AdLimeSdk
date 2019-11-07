//
//  AdLimeSplashAdDelegate.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/8/15.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeSplashAd;

/*!
Delegate methods for receiving AdLimeSplashAd state change messages such as ad request status
*/
@protocol AdLimeSplashAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeSplashAd
@param splashAd AdLimeSplashAd object
*/
@optional
- (void)adLimeSplashDidReceiveAd:(AdLimeSplashAd *)splashAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeSplashAd
@param splashAd AdLimeSplashAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeSplash:(AdLimeSplashAd *)splashAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a splash ad will be presented in screen view
@see AdLimeSplashAd
@param splashAd AdLimeSplashAd object
*/
@optional
- (void)adLimeSplashWillPresentScreen:(AdLimeSplashAd *)splashAd;

/*!
@brief Tells the delegate that a splash ad will be dismissed
@see AdLimeSplashAd
@param splashAd AdLimeSplashAd object
*/
@optional
- (void)adLimeSplashDidDismissScreen:(AdLimeSplashAd *)splashAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeSplashAd
@param splashAd AdLimeSplashAd object
*/
@optional
- (void)adLimeSplashWillLeaveApplication:(AdLimeSplashAd *)splashAd;

@end
