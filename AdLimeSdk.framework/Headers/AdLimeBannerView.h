/*!
@header AdLimeBannerView
@abstract Banner View headler
@author TaurusX
@version 1.3.5
*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeTypes.h"
#import "AdLimeBannerViewDelegate.h"
#import "AdLimeBannerAdPosition.h"
#import "AdLimeILineItem.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class AdLimeBannerView
@abstract Banner View class
*/
@interface AdLimeBannerView : UIView

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize banner Ad
@discussion
@param adUnitId banner Ad ID in TaurusX platform
@param viewController the viewcontroller to display banner
@result AdLimeBannerView instance
*/
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@property delegate
@abstract delegate for AdLimeBannerView event
*/
@property(nonatomic, weak) id<AdLimeBannerViewDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithBannerClientReference:(AdLimeTypeBannerClientRef _Nullable* _Nullable)bannerClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 BannerClient
@property(nonatomic, assign) AdLimeTypeBannerClientRef _Nullable* _Nullable bannerClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) AdLimeBannerAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) AdLimeBannerAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) AdLimeBannerAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) AdLimeBannerAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) AdLimeBannerAdWillLeaveApplicationCallback willLeaveCallback;
/// Unity End

/*!
@method setNetworkConfigs
@abstract set network configs
@discussion
@param configs banner Ad ID
@result void
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;
/*!
@method setHE
@abstract set hight ecpm mode
@discussion
@param void
@result void
*/
- (void)setHE;
/*!
@method isReady
@abstract check banner ad is ready
@discussion
@param void
@result true: banner is ready, false: no banner
*/
- (BOOL)isReady;
/*!
@method destroy
@abstract destory the banner Ad
@discussion
@param void
@result void
*/
- (void)destroy;

/// iOS Start
/*!
@method loadAd
@abstract load banner Ad
@discussion
@param void
@result void
*/
- (void)loadAd;
/// iOS End

/// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(AdLimeBannerAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(AdLimeBannerAdPosition)position inNetworks:(nonnull int[])networkIds DEPRECATED_MSG_ATTRIBUTE("");
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(nonnull int[])networkIds DEPRECATED_MSG_ATTRIBUTE("");

- (void)setUnityPosition:(AdLimeBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)hideUnity;

- (void)removeUnity;
/// Unity End

@end
NS_ASSUME_NONNULL_END
