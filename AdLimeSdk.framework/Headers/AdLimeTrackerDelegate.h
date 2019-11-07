//
//  AdLimeTrackerDelegate.h
//  Created by AdLimeSdk on 2019/7/14.
//

#import "AdLimeTrackerInfo.h"
#import "AdLimeAdUnitInfo.h"

/*!
Delegate that receives ad loading process of LineItem.
*/
@protocol AdLimeTrackerDelegate<NSObject>

/*!
@brief Notified when start loading ad LineItem.
@see AdLimeTrackerInfo
@param trackInfo Info of requested LineItem.
*/
@optional
- (void)adLimeTrackAdRequest:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem loaded success.
 @see AdLimeTrackerInfo
 @param trackInfo Info of loaded LineItem.
 */
@optional
- (void)adLimeTrackAdLoaded:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem failed to load.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem failed to load.
 */
@optional
- (void)adLimeTrackAdFailedToLoad:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem is displayed on the page. Displayed means ad was on UI.
 @see AdLimeTrackerInfo
 @param trackInfo Info of displayed LineItem.
 */
@optional
- (void)adLimeTrackAdCallShow:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was shown. Shown means Network Sdk delegate ad shown.
 @see AdLimeTrackerInfo
 @param trackInfo Info of shown LineItem.
 */
@optional
- (void)adLimeTrackAdShown:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was clicked.
 @see AdLimeTrackerInfo
 @param trackInfo Info of clicked LineItem.
 */
@optional
- (void)adLimeTrackAdClicked:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad LineItem was closed.
 @see AdLimeTrackerInfo
 @param trackInfo Info of closed LineItem.
 */
@optional
- (void)adLimeTrackAdClosed:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem start playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem start playing.
 */
@optional
- (void)adLimeTrackAdVideoStarted:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem finish playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem completed playing.
 */
@optional
- (void)adLimeTrackAdVideoCompleted:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem rewarded success.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of rewarded LineItem.
 */
@optional
- (void)adLimeTrackAdRewarded:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad LineItem failed to rewarded.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem failed to reward.
 */
@optional
- (void)adLimeTrackAdRewardFailed:(AdLimeTrackerInfo *)trackInfo;




/*!
 @brief Notified when start loading AdUnit.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of requested AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitRequest:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit loaded success.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of loaded AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitLoaded:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit failed to load.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of AdUnit failed to load.
 */
@optional
- (void)adLimeTrackAdUnitFailedToLoad:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit is displayed on the page. Displayed means ad was on UI.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of displayed AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitCallShow:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was shown. Shown means Network Sdk delegate ad shown.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of shown AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitShown:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was clicked.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of clicked AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitClicked:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when AdUnit was closed.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of closed AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitClosed:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit start playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of AdUnit start playing.
 */
@optional
- (void)adLimeTrackAdUnitVideoStarted:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit finish playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of AdUnit completed playing.
 */
@optional
- (void)adLimeTrackAdUnitVideoCompleted:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit rewarded success.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of rewarded AdUnit.
 */
@optional
- (void)adLimeTrackAdUnitRewarded:(AdLimeAdUnitInfo *)adUnitInfo;

/*!
 @brief Notified when RewardedVideo AdUnit failed to rewarded.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeAdUnitInfo
 @param adUnitInfo Info of AdUnit failed to reward.
 */
@optional
- (void)adLimeTrackAdUnitRewardFailed:(AdLimeAdUnitInfo *)adUnitInfo;

@end
