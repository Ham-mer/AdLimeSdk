//
//  AdLimeNativeAdDelegate.h
//  Created by AdLimeSdk on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeNativeAd;

/*!
Delegate methods for receiving AdLimeNativeAd state change messages such as ad request status
*/
@protocol AdLimeNativeAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeNativeAd
@param nativeAd AdLimeNativeAd object
*/
@optional
- (void)adLimeNativeAdDidReceiveAd:(AdLimeNativeAd *)nativeAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeNativeAd
@param nativeAd AdLimeNativeAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeNativeAd:(AdLimeNativeAd *)nativeAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a native ad will be presented in screen view
@see AdLimeNativeAd
@param nativeAd AdLimeNativeAd object
*/
@optional
- (void)adLimeNativeAdWillPresentScreen:(AdLimeNativeAd *)nativeAd;

/*!
@brief Tells the delegate that a native ad will be dismissed
@see AdLimeNativeAd
@param nativeAd AdLimeNativeAd object
*/
@optional
- (void)adLimeNativeAdDidDismissScreen:(AdLimeNativeAd *)nativeAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeNativeAd
@param nativeAd AdLimeNativeAd object
*/
@optional
- (void)adLimeNativeAdWillLeaveApplication:(AdLimeNativeAd *)nativeAd;

@end
