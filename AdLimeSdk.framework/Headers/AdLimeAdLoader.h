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

+ (AdLimeBannerView *)getBannerAdView:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (AdLimeNativeAd *)getNativeAd:(NSString *)adUnitId;
+ (AdLimeInterstitialAd *)getInterstitialAd:(NSString *)adUnitId;
+ (AdLimeRewardedVideoAd *)getRewardedVideoAd:(NSString *)adUnitId;
+ (AdLimeSplashAd *)getSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)window;
+ (AdLimeFeedList *)getFeedListAd:(NSString *)adUnitId;
+ (AdLimeMixViewAd *)getMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (AdLimeMixFullScreenAd *)getMixFullScreenAd:(NSString *)adUnitId;

+ (void)destoryAd:(NSString *)adUnitId;

/**
* BannerAdView
*/
+ (void)loadBanner:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (BOOL)isBannerReady:(NSString *)adUnitId;
+ (void)showBanner:(NSString *)adUnitId container:(UIView *)container;

/**
* NativeAd
*/
+ (void)loadNativeAd:(NSString *)adUnitId;
+ (void)showNativeAd:(NSString *)adUnitId container:(UIView *)container nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;

+ (void)loadNativeAd:(NSString *)adUnitId nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;
+ (void)showNativeAd:(NSString *)adUnitId container:(UIView *)container;

+ (BOOL)isNativeAdReady:(NSString *)adUnitId;

/**
* InterstitialAd.
*/
+ (void)loadInterstitialAd:(NSString *)adUnitId;
+ (BOOL)isInterstitialAdReady:(NSString *)adUnitId;
+ (void)showInterstitialAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

/**
* RewardedVideoAd.
*/
+ (void)loadRewardedVideoAd:(NSString *)adUnitId;
+ (BOOL)isRewardedVideoAdReady:(NSString *)adUnitId;
+ (void)showRewardedVideoAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

/**
* SplashAd.
*/
+ (void)loadSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;
+ (BOOL)isSplashAdReady:(NSString *)adUnitId;

/**
* FeedListAd.
*/
+ (void)loadFeedListAd:(NSString *)adUnitId;
+ (void)loadFeedListAd:(NSString *)adUnitId count:(int)count;
+ (BOOL)isFeedListAdReady:(NSString *)adUnitId;
+ (NSArray<AdLimeFeed *> *)getFeedListAds:(NSString *)adUnitId;

/**
* MixViewAd.
*/
+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (void)showMixViewAd:(NSString *)adUnitId container:(UIView *)container nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;

+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;
+ (void)showMixViewAd:(NSString *)adUnitId container:(UIView *)container;

+ (BOOL)isMixViewAdReady:(NSString *)adUnitId;

/**
* MixFullScreenAd.
*/
+ (void)loadMixFullScreenAd:(NSString *)adUnitId;
+ (void)showMixFullScreenAd:(NSString *)adUnitId viewController:(UIViewController *)viewController nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;

+ (void)loadMixFullScreenAd:(NSString *)adUnitId nativeAdLayout:(AdLimeNativeAdLayout * _Nullable)layout;
+ (void)showMixFullScreenAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

+ (BOOL)isMixFullScreenAdReady:(NSString *)adUnitId;

@end

NS_ASSUME_NONNULL_END
