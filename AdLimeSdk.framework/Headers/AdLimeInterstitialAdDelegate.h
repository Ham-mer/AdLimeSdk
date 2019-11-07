//
//  AdLimeInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeInterstitialAd;

/*!
Delegate methods for receiving AdLimeInterstitialAd state change messages such as ad request status
*/
@protocol AdLimeInterstitialAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeInterstitialAd
@param interstitialAd AdLimeInterstitialAd object
*/
@optional
- (void)adLimeInterstitialDidReceiveAd:(AdLimeInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeInterstitialAd
@param interstitialAd AdLimeInterstitialAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeInterstitial:(AdLimeInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a interstitial ad will be presented in full screen view.
@see AdLimeInterstitialAd
@param interstitialAd AdLimeInterstitialAd object
*/
@optional
- (void)adLimeInterstitialWillPresentScreen:(AdLimeInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that a interstitial ad will be dismissed from full screen
@see AdLimeInterstitialAd
@param interstitialAd AdLimeInterstitialAd object
*/
@optional
- (void)adLimeInterstitialDidDismissScreen:(AdLimeInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeInterstitialAd
@param interstitialAd AdLimeInterstitialAd object
*/
@optional
- (void)adLimeInterstitialWillLeaveApplication:(AdLimeInterstitialAd *)interstitialAd;

@end
