//
//  AdLimeMixViewAd.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/10/31.
//  Copyright © 2019 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfigs.h"
#import "AdLimeMixViewAdDelegate.h"
#import "AdLimeNativeAdLayout.h"
#import "AdLimeTypes.h"
#import "AdLimeBannerAdPosition.h"
#import "AdLimeILineItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeMixViewAd : NSObject

/*!
@property adUnitId
@abstract The mixview's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize mixview Ad
@param adUnitId mixview Ad ID in SDK platform
@result AdLimeMixViewAd instance
*/
- (AdLimeMixViewAd *)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeMixViewAd
*/
@property(nonatomic, weak, nullable) id<AdLimeMixViewAdDelegate> delegate;

// Unity Start
- (id)initWithMixViewClientReference:(AdLimeTypeMixViewClientRef _Nullable* _Nullable)mixViewClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 MixViewClient
@property(nonatomic, assign) AdLimeTypeMixViewClientRef _Nullable* _Nullable mixViewClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) AdLimeMixViewAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) AdLimeMixViewAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) AdLimeMixViewAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) AdLimeMixViewAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) AdLimeMixViewAdWillLeaveApplicationCallback willLeaveCallback;
// Unity End

/*!
@method setAdSize
@abstract Set adSize of Banner in MixView. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
@param adSize AdLimeBannerAdSize
*/
- (void)setAdSize:(AdLimeBannerAdSize)adSize;

/*!
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout AdLimeMixViewAdLayout
*/
- (void)setNativeAdLayout:(AdLimeNativeAdLayout *)layout;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs AdLimeNetworkConfigs
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an native ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  NativeAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result AdLimeILineItem
*/
- (AdLimeILineItem *)getReadyLineItem;

/*!
@method getAdView
@abstract get native ad View for display, AdLimeNativeAdLayout has be set native before
*/
- (UIView *)getAdView;

/*!
@method getAdView
@abstract get native ad View for display
@param layout AdLimeMixViewAdLayout
*/
- (UIView *)getAdView:(AdLimeNativeAdLayout *)layout;

/*!
@method showAdView, AdLimeNativeAdLayout has be set native before
@abstract showAdView in center of container
@param container the container to show AdView
*/
- (void)showAdView:(UIView *)container;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdView
 @param layout AdLimeMixViewAdLayout for render NativeAd
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(AdLimeNativeAdLayout *)layout;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(AdLimeBannerAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;
- (void)showUnityRelative:(AdLimeBannerAdPosition)position withX:(int)x andY:(int)y;

- (void)setUnityPosition:(AdLimeBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;
- (void)setUnityPositionRelative:(AdLimeBannerAdPosition)position withX:(int)x andY:(int)y;

- (void)hideUnity;

- (void)removeUnity;
// Unity End

@end

NS_ASSUME_NONNULL_END
