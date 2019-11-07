//
//  AdLimeMixViewAdDelegate.h
//  Created by AdLimeSdk on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeMixViewAd;

/*!
Delegate methods for receiving AdLimeMixViewAd state change messages such as ad request status
*/
@protocol AdLimeMixViewAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeMixViewAd
@param mixviewAd AdLimeMixViewAd object
*/
@optional
- (void)adLimeMixViewAdDidReceiveAd:(AdLimeMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeMixViewAd
@param mixviewAd AdLimeMixViewAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeMixViewAd:(AdLimeMixViewAd *)mixViewAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a mixview ad will be presented in screen view
@see AdLimeMixViewAd
@param mixviewAd AdLimeMixViewAd object
*/
@optional
- (void)adLimeMixViewAdWillPresentScreen:(AdLimeMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that a mixview ad will be dismissed
@see AdLimeMixViewAd
@param mixviewAd AdLimeMixViewAd object
*/
@optional
- (void)adLimeMixViewAdDidDismissScreen:(AdLimeMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeMixViewAd
@param mixviewAd AdLimeMixViewAd object
*/
@optional
- (void)adLimeMixViewAdWillLeaveApplication:(AdLimeMixViewAd *)mixViewAd;

@end
