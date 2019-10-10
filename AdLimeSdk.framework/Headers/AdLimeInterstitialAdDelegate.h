//
//  AdLimeInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeInterstitialAd;

@protocol AdLimeInterstitialAdDelegate<NSObject>

@optional
- (void)adLimeInterstitialDidReceiveAd:(AdLimeInterstitialAd *)interstitialAd;

@optional
- (void)adLimeInterstitial:(AdLimeInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

@optional
- (void)adLimeInterstitialWillPresentScreen:(AdLimeInterstitialAd *)interstitialAd;

@optional
- (void)adLimeInterstitialDidDismissScreen:(AdLimeInterstitialAd *)interstitialAd;

@optional
- (void)adLimeInterstitialWillLeaveApplication:(AdLimeInterstitialAd *)interstitialAd;

@end
