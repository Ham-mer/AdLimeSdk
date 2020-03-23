//
//  AdLimeTypes.h

//
// 定义了与 Unity 交互的一些类型和广告回调接口。


/// Common
typedef const void *AdLimeTypeRef;


/// BannerAd
// 对 Unity 中 BannerAd 和 BannerAdClient 的引用。
typedef const void *AdLimeTypeBannerClientRef;
typedef const void *AdLimeTypeBannerAdRef;
// iOS AdLimeBannerAd 加载后回调 Unity 的接口。
typedef void (*AdLimeBannerAdDidReceiveAdCallback)(AdLimeTypeBannerClientRef *bannerClient);
typedef void (*AdLimeBannerAdDidFailToReceiveAdWithErrorCallback)(AdLimeTypeBannerClientRef *bannerClient, int error, char *message);
typedef void (*AdLimeBannerAdWillPresentScreenCallback)(AdLimeTypeBannerClientRef *bannerClient);
typedef void (*AdLimeBannerAdDidDismissScreenCallback)(AdLimeTypeBannerClientRef *bannerClient);
typedef void (*AdLimeBannerAdWillLeaveApplicationCallback)(AdLimeTypeBannerClientRef *bannerClient);


/// InterstitialAd
// 对 Unity 中 InterstitialAd 和 InterstitialClient 的引用。
typedef const void *AdLimeTypeInterstitialClientRef;
typedef const void *AdLimeTypeInterstitialAdRef;
// iOS AdLimeInterstitialAd 加载后回调 Unity 的接口。
typedef void (*AdLimeInterstitialDidReceiveAdCallback)(AdLimeTypeInterstitialClientRef *interstitialClient);
typedef void (*AdLimeInterstitialDidFailToReceiveAdWithErrorCallback)(AdLimeTypeInterstitialClientRef *interstitialClient, int error, char *message);
typedef void (*AdLimeInterstitialWillPresentScreenCallback)(AdLimeTypeInterstitialClientRef *interstitialClient);
typedef void (*AdLimeInterstitialDidDismissScreenCallback)(AdLimeTypeInterstitialClientRef *interstitialClient);
typedef void (*AdLimeInterstitialWillLeaveApplicationCallback)(AdLimeTypeInterstitialClientRef *interstitialClient);


/// RewardedVideoAd
// 对 Unity 中 RewardedVideoAd 和 RewardedVideoClient 的引用。
typedef const void *AdLimeTypeRewardedVideoClientRef;
typedef const void *AdLimeTypeRewardedVideoAdRef;
// iOS AdLimeRewardedVideoAd 加载后回调 Unity 的接口。
typedef void (*AdLimeRewardVideoDidReceiveAdCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoDidOpenCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoWillLeaveApplicationCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoDidCloseCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoDidFailToReceiveAdWithErrorCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient, int error, char *message);
typedef void (*AdLimeRewardVideoDidStartCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoDidCompleteCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*AdLimeRewardVideoDidRewardCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient, char *rewardType, int rewardAmount);
typedef void (*AdLimeRewardVideoDidFailedToRewardCallback)(AdLimeTypeRewardedVideoClientRef *rewardedVideoClient);

/// RewardItem
typedef const void *AdLimeTypeRewardItemRef;


/// MixViewAd
// 对 Unity 中 MixViewAd 和 MixViewClient 的引用。
typedef const void *AdLimeTypeMixViewClientRef;
typedef const void *AdLimeTypeMixViewAdRef;
// iOS AdLimeMixViewAd 加载后回调 Unity 的接口。
typedef void (*AdLimeMixViewAdDidReceiveAdCallback)(AdLimeTypeMixViewClientRef *mixViewClient);
typedef void (*AdLimeMixViewAdDidFailToReceiveAdWithErrorCallback)(AdLimeTypeMixViewClientRef *mixViewClient, int error, char *message);
typedef void (*AdLimeMixViewAdWillPresentScreenCallback)(AdLimeTypeMixViewClientRef *mixViewClient);
typedef void (*AdLimeMixViewAdDidDismissScreenCallback)(AdLimeTypeMixViewClientRef *mixViewClient);
typedef void (*AdLimeMixViewAdWillLeaveApplicationCallback)(AdLimeTypeMixViewClientRef *mixViewClient);


/// MixFullScreenAd
// 对 Unity 中 MixFullScreenAd 和 MixFullScreenClient 的引用。
typedef const void *AdLimeTypeMixFullScreenClientRef;
typedef const void *AdLimeTypeMixFullScreenAdRef;
// iOS AdLimeMixFullScreenAd 加载后回调 Unity 的接口。
typedef void (*AdLimeMixFullScreenAdDidReceiveAdCallback)(AdLimeTypeMixFullScreenClientRef *mixFullScreenClient);
typedef void (*AdLimeMixFullScreenAdDidFailToReceiveAdWithErrorCallback)(AdLimeTypeMixFullScreenClientRef *mixFullScreenClient, int error, char *message);
typedef void (*AdLimeMixFullScreenAdWillPresentScreenCallback)(AdLimeTypeMixFullScreenClientRef *mixFullScreenClient);
typedef void (*AdLimeMixFullScreenAdDidDismissScreenCallback)(AdLimeTypeMixFullScreenClientRef *mixFullScreenClient);
typedef void (*AdLimeMixFullScreenAdWillLeaveApplicationCallback)(AdLimeTypeMixFullScreenClientRef *mixFullScreenClient);


/// LineItem
typedef const void *AdLimeTypeLineItemRef;
/// AdUnit
typedef const void *AdLimeTypeAdUnitRef;


/// NativeAdLayout
typedef const void *AdLimeTypeNativeAdLayoutRef;


/// CLConfig
typedef const void *AdLimeTypeCLConfigRef;


/// NetworkConfigs
typedef const void *AdLimeTypeNetworkConfigsRef;
typedef const void *AdLimeTypeNetworkConfigRef;


/// Segment
typedef const void *AdLimeTypeSegmentRef;


/// TrackerInfo
typedef const void *AdLimeTypeTrackerInfoRef;
/// AdUnitInfo
typedef const void *AdLimeTypeAdUnitInfoRef;
/// AdContentInfo
typedef const void *AdLimeTypeAdContentInfoRef;


/// AdLimeTracker
typedef const void *AdLimeTypeTrackerClientRef;
typedef const void *AdLimeTypeTrackerRef;
// LineItem Track
typedef void (*AdLimeTrackAdRequestCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdLoadedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdFailedToLoadCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdCallShowCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdShownCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdClickedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackAdClosedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackVideoStartedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackVideoCompletedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackRewardedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
typedef void (*AdLimeTrackRewardFailedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeTrackerInfoRef *trackerInfoRef);
// AdUnit Track
typedef void (*AdLimeTrackAdUnitRequestCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitLoadedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitFailedToLoadCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitCallShowCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitShownCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitClickedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitClosedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitVideoStartedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitVideoCompletedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitRewardedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);
typedef void (*AdLimeTrackAdUnitRewardFailedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, AdLimeTypeAdUnitInfoRef *adUnitInfoRef);

