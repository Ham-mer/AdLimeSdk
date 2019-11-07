//
//  AdLimeRewardedVideoAdDelegate.h

//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"
#import "AdLimeRewardItem.h"
@class AdLimeRewardedVideoAd;

/*!
Delegate methods for receiving AdLimeRewardedVideoAd state change messages such as ad request status
*/
@protocol AdLimeRewardedVideoAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidReceiveAd:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the rewarded video ad did  open.
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidOpen:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoWillLeaveApplication:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the rewarded video ad close
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidClose:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
@param adError AdLimeAdError load failed error info
*/
@optional
- (void)adLimeRewardedVideo:(AdLimeRewardedVideoAd *)rewardedVideoAd didFailToReceiveAdWithError:(AdLimeAdError *)adError;

/*!
@brief Tells the delegate that the the rewarded video ad  start play
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidStart:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the the rewarded video ad  start has been play completed
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidComplete:(AdLimeRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the the rewarded video ad  did earn rewarded
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideo:(AdLimeRewardedVideoAd *)rewardedVideoAd didReward:(AdLimeRewardItem *)item;

/*!
@brief Tells the delegate that the the rewarded video ad  did not earn rewarded
@see AdLimeRewardedVideoAd
@param rewardedVideoAd AdLimeRewardedVideoAd object
*/
@optional
- (void)adLimeRewardedVideoDidFailedToReward:(AdLimeRewardedVideoAd *)rewardedVideoAd;

@end
