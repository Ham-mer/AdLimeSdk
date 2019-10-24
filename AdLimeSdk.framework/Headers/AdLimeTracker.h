//
//  AdLimeTracker.h
//  Created by Matthew on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "AdLimeTrackerDelegate.h"
#import "AdLimeILineItem.h"
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
@property(nonatomic, assign) AdLimeTrackAdRequestCallback adRequestCallback;
@property(nonatomic, assign) AdLimeTrackAdLoadedCallback adLoadedCallback;
@property(nonatomic, assign) AdLimeTrackAdCallShowCallback adCallShowCallback;
@property(nonatomic, assign) AdLimeTrackAdShownCallback adShownCallback;
@property(nonatomic, assign) AdLimeTrackAdClickedCallback adClickedCallback;
@property(nonatomic, assign) AdLimeTrackAdClosedCallback adClosedCallback;
@property(nonatomic, assign) AdLimeTrackAdFailedToLoadCallback adFailedToLoadCallback;
@property(nonatomic, assign) AdLimeTrackVideoStartedCallback videoStartedCallback;
@property(nonatomic, assign) AdLimeTrackVideoCompletedCallback videoCompletedCallback;
@property(nonatomic, assign) AdLimeTrackRewardedCallback rewardedCallback;
@property(nonatomic, assign) AdLimeTrackRewardFailedCallback rewardFailedCallback;


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

@end
