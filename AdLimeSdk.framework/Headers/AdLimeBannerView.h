//
//  AdLimeBannerAd.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeTypes.h"
#import "AdLimeBannerViewDelegate.h"
#import "AdLimeBannerAdPosition.h"
#import "AdLimeILineItem.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeBannerView : UIView

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
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

- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;
- (void)setHE;
- (BOOL)isReady;
- (void)destroy;

/// iOS Start
- (void)loadAd;
/// iOS End

/// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(AdLimeBannerAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(AdLimeBannerAdPosition)position inNetworks:(nonnull int[])networkIds;
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(nonnull int[])networkIds;

- (void)setUnityPosition:(AdLimeBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)hideUnity;

- (void)removeUnity;
/// Unity End

@end
NS_ASSUME_NONNULL_END
