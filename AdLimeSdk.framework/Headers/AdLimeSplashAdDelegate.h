//
//  AdLimeSplashAdDelegate.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/8/15.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeSplashAd;

@protocol AdLimeSplashAdDelegate<NSObject>

@optional
- (void)adLimeSplashDidReceiveAd:(AdLimeSplashAd *)splashAd;

@optional
- (void)adLimeSplash:(AdLimeSplashAd *)splashAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

@optional
- (void)adLimeSplashWillPresentScreen:(AdLimeSplashAd *)splashAd;

@optional
- (void)adLimeSplashDidDismissScreen:(AdLimeSplashAd *)splashAd;

@optional
- (void)adLimeSplashWillLeaveApplication:(AdLimeSplashAd *)splashAd;

@end
