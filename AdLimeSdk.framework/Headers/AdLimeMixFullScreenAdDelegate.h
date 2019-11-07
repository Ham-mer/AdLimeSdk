//
//  AdLimeMixFullScreenAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeMixFullScreenAd;

/*!
Delegate methods for receiving AdLimeMixFullScreenAd state change messages such as ad request status
*/
@protocol AdLimeMixFullScreenAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeMixFullScreenAd
@param mixFullScreenAd AdLimeMixFullScreenAd object
*/
@optional
- (void)adLimeMixFullScreenAdDidReceiveAd:(AdLimeMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeMixFullScreenAd
@param mixFullScreenAd AdLimeMixFullScreenAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeMixFullScreenAd:(AdLimeMixFullScreenAd *)mixFullScreenAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a mixFullScreen ad will be presented in full screen view.
@see AdLimeMixFullScreenAd
@param mixFullScreenAd AdLimeMixFullScreenAd object
*/
@optional
- (void)adLimeMixFullScreenAdWillPresentScreen:(AdLimeMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that a mixFullScreen ad will be dismissed from full screen
@see AdLimeMixFullScreenAd
@param mixFullScreenAd AdLimeMixFullScreenAd object
*/
@optional
- (void)adLimeMixFullScreenAdDidDismissScreen:(AdLimeMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeMixFullScreenAd
@param mixFullScreenAd AdLimeMixFullScreenAd object
*/
@optional
- (void)adLimeMixFullScreenAdWillLeaveApplication:(AdLimeMixFullScreenAd *)mixFullScreenAd;

@end
