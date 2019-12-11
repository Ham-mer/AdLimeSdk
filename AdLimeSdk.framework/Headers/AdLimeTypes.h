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


/// NativeAdLayout
// 对 Unity 中 NativeAdLayout 的引用。
typedef const void *AdLimeTypeNativeAdLayoutRef;


/// CLConfig
// 对 Unity 中 CLConfig 的引用。
typedef const void *AdLimeTypeCLConfigRef;


/// AdLimeTracker
typedef const void *AdLimeTypeTrackerClientRef;
typedef const void *AdLimeTypeTrackerRef;
// LineItem Track
typedef void (*AdLimeTrackAdRequestCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdLoadedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdFailedToLoadCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
                                                float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdCallShowCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdShownCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdClickedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdClosedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackVideoStartedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackVideoCompletedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackRewardedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackRewardFailedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef,
											 float eCPM, int networkId, char *networkAdUnitId, char *adUnitId, char *adUnitName, int adType);
// AdUnit Track
typedef void (*AdLimeTrackAdUnitRequestCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitLoadedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitFailedToLoadCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitCallShowCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitShownCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitClickedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitClosedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitVideoStartedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitVideoCompletedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitRewardedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
typedef void (*AdLimeTrackAdUnitRewardFailedCallback)(AdLimeTypeTrackerClientRef *trackerClientRef, char *adUnitId, char *adUnitName, int adType);
