//
//  AdLimeTracker.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/12/1.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeTrackerDelegate.h"
#import "AdLimeTypes.h"

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

- (NSMutableArray *)getDelegateArray;

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

@end
