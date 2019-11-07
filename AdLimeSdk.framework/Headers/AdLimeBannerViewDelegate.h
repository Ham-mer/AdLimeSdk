//
//  AdLimeBannerViewDelegate.h
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
@class AdLimeBannerView;

/*!
Delegate methods for receiving AdLimeBannerView state change messages such as ad request status
*/
@protocol AdLimeBannerViewDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see AdLimeBannerView
@param bannerView AdLimeBannerView object
*/
@optional
- (void)adLimeBannerDidReceiveAd:(AdLimeBannerView *)bannerView;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeBannerView
@param bannerView AdLimeBannerView object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeBanner:(AdLimeBannerView *)bannerView didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that a banner ad will be presented in screen view
@see AdLimeBannerView
@param bannerView AdLimeBannerView object
*/
@optional
- (void)adLimeBannerWillPresentScreen:(AdLimeBannerView *)bannerView;

/*!
@brief Tells the delegate that a banner ad will be dismissed
@see AdLimeBannerView
@param bannerView AdLimeBannerView object
*/
@optional
- (void)adLimeBannerDidDismissScreen:(AdLimeBannerView *)bannerView;

/*!
@brief Tells the delegate that the user click will open another app, such as banner ad be clicked
@see AdLimeBannerView
@param bannerView AdLimeBannerView object
*/
@optional
- (void)adLimeBannerWillLeaveApplication:(AdLimeBannerView *)bannerView;

@end
