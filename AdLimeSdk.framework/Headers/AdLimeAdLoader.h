//
//  AdLimeAdLoader.h
//  AdLimeSdk
//
//  Created by AdLime on 2020/1/9.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeBannerView.h"
#import "AdLimeFeedList.h"
#import "AdLimeInterstitialAd.h"
#import "AdLimeMixViewAd.h"
#import "AdLimeMixFullScreenAd.h"
#import "AdLimeNativeAd.h"
#import "AdLimeRewardedVideoAd.h"
#import "AdLimeSplashAd.h"

NS_ASSUME_NONNULL_BEGIN

/*!
Class contains API for adLoader
*/
@interface AdLimeAdLoader : NSObject

+ (AdLimeBannerView *)getBannerAdView:(NSString *)adUnitId rootViewController: (UIViewController *)viewController;
+ (AdLimeNativeAd *)getNativeAd:(NSString *)adUnitId;
+ (AdLimeInterstitialAd *)getInterstitialAd:(NSString *)adUnitId;
+ (AdLimeRewardedVideoAd *)getRewardedVideoAd:(NSString *)adUnitId;
+ (AdLimeFeedList *)getFeedListAd:(NSString *)adUnitId;
+ (AdLimeSplashAd *)getSplashAd:(NSString *)adUnitId uiWindow: (UIWindow *)window;
+ (AdLimeMixViewAd *)getMixViewAd:(NSString *)adUnitId rootViewController: (UIViewController *)viewController;
+ (AdLimeMixFullScreenAd *)getMixFullScreenAd:(NSString *)adUnitId;

+ (void)destoryAd:(NSString *)adUnitId;


/**
* BannerAdView.
*/
+ (void)loadBanner:(NSString *)adUnitId rootViewController: (UIViewController *)viewController;

+ (void)loadBanner:(NSString *)adUnitId rootViewController: (UIViewController *)viewController withDelegate:(_Nullable id<AdLimeBannerViewDelegate> )delegate;

+ (BOOL) isBannerReady:(NSString *)adUnitId;

+ (void)showBanner: (NSString *)adUnitId viewContainer: (UIView *)viewContainer;

+ (void)showBanner: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withDelegate:(_Nullable id<AdLimeBannerViewDelegate>)delegate;

+ (void)setBanner:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeBannerViewDelegate>)delegate;


/**
* NativeAdView.
*/
+ (void)loadNativeAd:(NSString *)adUnitId;

+ (void)loadNativeAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeNativeAdDelegate> )delegate;

+ (void)loadNativeAd:(NSString *)adUnitId withLayout:(AdLimeNativeAdLayout *)layout;

+ (void)loadNativeAd:(NSString *)adUnitId withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeNativeAdDelegate> )delegate;

+ (BOOL) isNativeAdReady:(NSString *)adUnitId;

+ (void)showNativeAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer;

+ (void)showNativeAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withLayout:(AdLimeNativeAdLayout *)layout;

+ (void)showNativeAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withDelegate:(_Nullable id<AdLimeNativeAdDelegate>)delegate;

+ (void)showNativeAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeNativeAdDelegate>)delegate;

+ (void)setNativeAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeNativeAdDelegate>)delegate;

+ (void)setNativeAd:(NSString *)adUnitId withLayout:(AdLimeNativeAdLayout *)layout;

/**
* InterstitialAd.
*/
+ (void)loadInterstitialAd:(NSString *)adUnitId;

+ (void)loadInterstitialAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeInterstitialAdDelegate> )delegate;


+ (BOOL) isInterstitialAdReady:(NSString *)adUnitId;

+ (void)showInterstitialAd: (NSString *)adUnitId viewController: (nullable UIViewController *)viewController;


+ (void)showInterstitialAd: (NSString *)adUnitId viewController: (nullable UIViewController *)viewController withDelegate:(_Nullable id<AdLimeInterstitialAdDelegate>)delegate;

+ (void)setInterstitialAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeInterstitialAdDelegate>)delegate;

/**
* RewardedVideoAd.
*/
+ (void)loadRewardedVideoAd:(NSString *)adUnitId;
+ (void)loadRewardedVideoAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeRewardedVideoAdDelegate> )delegate;
+ (BOOL) isRewardedVideoAdReady:(NSString *)adUnitId;
+ (void)showRewardedVideoAd: (NSString *)adUnitId viewController: (nullable UIViewController *)viewController;
+ (void)showRewardedVideoAd: (NSString *)adUnitId viewController: (nullable UIViewController *)viewController withDelegate:(_Nullable id<AdLimeRewardedVideoAdDelegate>)delegate;
+ (void)setRewardedVideoAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeRewardedVideoAdDelegate>)delegate;

/**
* FeedListAd.
*/
+ (void)loadFeedListAd:(NSString *)adUnitId;
+ (void)loadFeedListAd:(NSString *)adUnitId count: (int)count;

+ (void)loadFeedListAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeFeedListDelegate> )delegate;

+ (void)loadFeedListAd:(NSString *)adUnitId count: (int)count withDelegate:(_Nullable id<AdLimeFeedListDelegate> )delegate;

+ (BOOL) isFeedListAdReady:(NSString *)adUnitId;

+ (NSArray<AdLimeFeed *> *)getFeedListAds:(NSString *)adUnitId;

+ (NSArray<AdLimeFeed *> *)getFeedListAds:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeFeedListDelegate> )delegate;

+ (void)setFeedListAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeFeedListDelegate>)delegate;

/**
* SplashAd.
*/
+ (void)loadSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;
+ (void)loadSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow withDelegate:(_Nullable id<AdLimeSplashAdDelegate> )delegate;
+ (BOOL) isSplashAdReady:(NSString *)adUnitId;
+ (void)setSplashAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeSplashAdDelegate>)delegate;


/**
* MixViewAd.
*/
+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController: (UIViewController *)viewController;

+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController: (UIViewController *)viewController withDelegate:(_Nullable id<AdLimeMixViewAdDelegate> )delegate;

+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController: (UIViewController *)viewController withLayout:(AdLimeNativeAdLayout *)layout;

+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController: (UIViewController *)viewController withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeMixViewAdDelegate> )delegate;

+ (BOOL) isMixViewAdReady:(NSString *)adUnitId;

+ (void)showMixViewAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer;

+ (void)showMixViewAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withLayout:(AdLimeNativeAdLayout *)layout;

+ (void)showMixViewAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withDelegate:(_Nullable id<AdLimeMixViewAdDelegate>)delegate;

+ (void)showMixViewAd: (NSString *)adUnitId viewContainer: (UIView *)viewContainer withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeMixViewAdDelegate>)delegate;

+ (void)setMixViewAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeMixViewAdDelegate>)delegate;

+ (void)setMixViewAd:(NSString *)adUnitId withLayout:(AdLimeNativeAdLayout *)layout;

/**
* MixFullScreenAd.
*/
+ (void)loadMixFullScreenAd:(NSString *)adUnitId;

+ (void)loadMixFullScreenAd:(NSString *)adUnitId withLayout:(AdLimeNativeAdLayout *)layout;

+ (void)loadMixFullScreenAd:(NSString *)adUnitId withDelegate:(id<AdLimeMixFullScreenAdDelegate> )delegate;

+ (void)loadMixFullScreenAd:(NSString *)adUnitId withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeMixFullScreenAdDelegate> )delegate;

+ (BOOL) isMixFullScreenAdReady:(NSString *)adUnitId;

+ (void)showMixFullScreenAd: (NSString *)adUnitId viewController: (UIViewController *)viewController;

+ (void)showMixFullScreenAd: (NSString *)adUnitId viewController: (UIViewController *)viewController withLayout:(AdLimeNativeAdLayout *)layout;


+ (void)showMixFullScreenAd: (NSString *)adUnitId viewController: (UIViewController *)viewController withDelegate:(_Nullable id<AdLimeMixFullScreenAdDelegate>)delegate;

+ (void)showMixFullScreenAd: (NSString *)adUnitId viewController: (UIViewController *)viewController withLayout:(nullable AdLimeNativeAdLayout *)layout andDelegate:(_Nullable id<AdLimeMixFullScreenAdDelegate>)delegate;

+ (void)setMixFullScreenAd:(NSString *)adUnitId withDelegate:(_Nullable id<AdLimeMixFullScreenAdDelegate>)delegate;
+ (void)setMixFullScreenAd:(NSString *)adUnitId withLayout:(AdLimeNativeAdLayout *)layout;


@end

NS_ASSUME_NONNULL_END
