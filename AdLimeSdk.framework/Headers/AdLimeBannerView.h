#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeTypes.h"
#import "AdLimeBannerViewDelegate.h"
#import "AdLimeUnityAdPos.h"
#import "AdLimeILineItem.h"
#import "AdLimeNetworkConfigs.h"
#import "AdLimeBannerAdSize.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 The view that displays banner ads.
*/
@interface AdLimeBannerView : UIView

/*!
@property adUnitId
@abstract The banner's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/*!
@brief Initializes and returns a banner view with the specified ad unitId and viewController.
@param adUnitId Banner AdUnit Id on SDK platform.
@param viewController View controller is used by the banner to present full screen content after the user interacts with the ad. The view controller is most commonly the view controller displaying the banner.
@result AdLimeBannerView
*/
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@brief Optional delegate object that receives state change notifications from this BannerView. Typically this is a UIViewController.
*/
@property(nonatomic, weak) id<AdLimeBannerViewDelegate> delegate;
// iOS End

// Unity Start
- (id)initWithBannerClientReference:(AdLimeTypeBannerClientRef _Nullable* _Nullable)bannerClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 BannerClient
@property(nonatomic, assign) AdLimeTypeBannerClientRef _Nullable* _Nullable bannerClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) AdLimeBannerAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) AdLimeBannerAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) AdLimeBannerAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) AdLimeBannerAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) AdLimeBannerAdWillLeaveApplicationCallback willLeaveCallback;
// Unity End

/*!
@method setAdSize
@abstract Set adSize of Banner. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
@param adSize AdLimeBannerAdSize
*/
- (void)setAdSize:(AdLimeBannerAdSize)adSize;

/*!
@method setExpressAdSize
@abstract Set adSize of express ad.
@param adSize AdLimeBannerAdSize
*/
- (void)setExpressAdSize:(CGSize)adSize;

/*!
@method setMuted
@abstract Set whether video play muted, mute by default.
@param muted true-play video muted; false-play video sound
*/
- (void)setMuted:(BOOL)muted;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs AdLimeNetworkConfigs
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
@method isReady
@abstract Returns YES if the bannerView is ready to be displayed. The delegate's  bannerViewDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: banner is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdLimeBannerView
*/
- (void)showAdView:(UIView *)container;

/*!
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result AdLimeILineItem
*/
- (AdLimeILineItem *)getReadyLineItem;

/*!
@method destroy
@abstract destory the banner Ad
*/
- (void)destroy;

// iOS Start
/*!
@method loadAd
@abstract Makes a banner ad request.
*/
- (void)loadAd;
// iOS End

// Unity Start
- (void)setUnityPosition:(AdLimeUnityAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)loadAdUnity;
- (void)showUnity;
- (void)hideUnity;

- (void)removeUnity;

// Need Delete
- (void)showUnity:(AdLimeUnityAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(AdLimeUnityAdPosition)position inNetworks:(nonnull int[])networkIds DEPRECATED_MSG_ATTRIBUTE("");
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(nonnull int[])networkIds DEPRECATED_MSG_ATTRIBUTE("");
// Need Delete
// Unity End

@end
NS_ASSUME_NONNULL_END
