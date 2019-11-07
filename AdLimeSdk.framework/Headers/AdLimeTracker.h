//
//  AdLimeTracker.h
//  Created by AdLimeSdk on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "AdLimeTrackerDelegate.h"
#import "AdLimeILineItem.h"
#import "AdLimeAdUnitInfo.h"
#import "AdLimeTypes.h"
#import "AdLimeAdError.h"

/*!
Track loading ad process of every LineItem.
*/
@interface AdLimeTracker : NSObject

/*!
@brief Get AdLimeTracker Instance.
@return AdLimeTracker
*/
+ (AdLimeTracker *)getInstance;

/*!
@brief Register delegate to listen ad loading process of LineItem.
@warning Register delegate before loading ads.
@param delegate AdLimeTrackerDelegate that receives ad loading process event
*/
- (void)registerDelegate: (id <AdLimeTrackerDelegate>)delegate;

/*!
@brief UnRegister delegate when app exit of finish listening ad loading.
@param delegate AdLimeTrackerDelegate registered before.
*/
- (void)unRegisterDelegate: (id <AdLimeTrackerDelegate>)delegate;


// Unity Start
// A reference to the Unity tracker client.
@property(nonatomic, assign) AdLimeTypeTrackerClientRef *trackerClient;
// The tracker callback into Unity.
// LineItem Track
@property(nonatomic, assign) AdLimeTrackAdRequestCallback adRequestCallback;
@property(nonatomic, assign) AdLimeTrackAdLoadedCallback adLoadedCallback;
@property(nonatomic, assign) AdLimeTrackAdFailedToLoadCallback adFailedToLoadCallback;
@property(nonatomic, assign) AdLimeTrackAdCallShowCallback adCallShowCallback;
@property(nonatomic, assign) AdLimeTrackAdShownCallback adShownCallback;
@property(nonatomic, assign) AdLimeTrackAdClickedCallback adClickedCallback;
@property(nonatomic, assign) AdLimeTrackAdClosedCallback adClosedCallback;
@property(nonatomic, assign) AdLimeTrackVideoStartedCallback videoStartedCallback;
@property(nonatomic, assign) AdLimeTrackVideoCompletedCallback videoCompletedCallback;
@property(nonatomic, assign) AdLimeTrackRewardedCallback rewardedCallback;
@property(nonatomic, assign) AdLimeTrackRewardFailedCallback rewardFailedCallback;
// AdUnit Track
@property(nonatomic, assign) AdLimeTrackAdUnitRequestCallback adUnitRequestCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitLoadedCallback adUnitLoadedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitFailedToLoadCallback adUnitFailedToLoadCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitCallShowCallback adUnitCallShowCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitShownCallback adUnitShownCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitClickedCallback adUnitClickedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitClosedCallback adUnitClosedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitVideoStartedCallback adUnitVideoStartedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitVideoCompletedCallback adUnitVideoCompletedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitRewardedCallback adUnitRewardedCallback;
@property(nonatomic, assign) AdLimeTrackAdUnitRewardFailedCallback adUnitRewardFailedCallback;
// Unity End

- (void)trackAdRequest:(AdLimeILineItem *)lineItem;
- (void)trackAdLoaded:(AdLimeILineItem *)lineItem;
- (void)trackAdCallShow:(AdLimeILineItem *)lineItem;
- (void)trackAdShown:(AdLimeILineItem *)lineItem;
- (void)trackAdClicked:(AdLimeILineItem *)lineItem;
- (void)trackAdClosed:(AdLimeILineItem *)lineItem;
- (void)trackAdFailedToLoad:(AdLimeILineItem *)lineItem adError:(AdLimeAdError *)adError;
- (void)trackVideoStarted:(AdLimeILineItem *)lineItem;
- (void)trackVideoCompleted:(AdLimeILineItem *)lineItem;
- (void)trackRewarded:(AdLimeILineItem *)lineItem;
- (void)trackRewardFailed:(AdLimeILineItem *)lineItem;

- (void)trackAdUnitRequest:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitLoaded:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitCallShow:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitShown:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitClicked:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitClosed:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitFailedToLoad:(AdLimeAdUnitInfo *)adUnit adError:(AdLimeAdError *)adError;
- (void)trackAdUnitVideoStarted:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitVideoCompleted:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitRewarded:(AdLimeAdUnitInfo *)adUnit;
- (void)trackAdUnitRewardFailed:(AdLimeAdUnitInfo *)adUnit;

@end
