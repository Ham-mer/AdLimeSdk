//
//  AdLimeTrackerDelegate.h
//  Created by Matthew on 2019/7/14.
//

#import "AdLimeTrackerInfo.h"

/*!
Delegate that receives ad loading process of LineItem.
*/
@protocol AdLimeTrackerDelegate<NSObject>

/*!
@brief Notified when start loading ad.
@see AdLimeTrackerInfo
@param trackInfo Info of requested LineItem.
*/
@optional
- (void)adLimeTrackAdRequest:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad loaded success.
 @see AdLimeTrackerInfo
 @param trackInfo Info of loaded LineItem.
 */
@optional
- (void)adLimeTrackAdLoaded:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad is displayed on the page. Displayed means ad was on UI.
 @see AdLimeTrackerInfo
 @param trackInfo Info of displayed LineItem.
 */
@optional
- (void)adLimeTrackAdCallShow:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad was shown. Shown means Network Sdk delegate ad shown.
 @see AdLimeTrackerInfo
 @param trackInfo Info of shown LineItem.
 */
@optional
- (void)adLimeTrackAdShown:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad was clicked.
 @see AdLimeTrackerInfo
 @param trackInfo Info of clicked LineItem.
 */
@optional
- (void)adLimeTrackAdClicked:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad was closed.
 @see AdLimeTrackerInfo
 @param trackInfo Info of closed LineItem.
 */
@optional
- (void)adLimeTrackAdClosed:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when ad failed to load.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem failed to load.
 */
@optional
- (void)adLimeTrackAdFailedToLoad:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad start playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem start playing.
 */
@optional
- (void)adLimeTrackAdVideoStarted:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad finish playing.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem completed playing.
 */
@optional
- (void)adLimeTrackAdVideoCompleted:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad rewarded success.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of rewarded LineItem.
 */
@optional
- (void)adLimeTrackAdRewarded:(AdLimeTrackerInfo *)trackInfo;

/*!
 @brief Notified when RewardedVideo ad failed to rewarded.
 @warning Only delegate for RewardedVideo ad.
 @see AdLimeTrackerInfo
 @param trackInfo Info of LineItem failed to reward.
 */
@optional
- (void)adLimeTrackAdRewardFailed:(AdLimeTrackerInfo *)trackInfo;

@end
