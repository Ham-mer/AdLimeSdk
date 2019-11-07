#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeTypes.h"
#import "AdLimeInterstitialAdDelegate.h"
#import "AdLimeInnerInterstitialAdDelegate.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class AdLimeInterstitialAd
@abstract AdLime Interstitial Ad class
*/
@interface AdLimeInterstitialAd : NSObject<AdLimeInnerInterstitialAdDelegate>

/*!
@property adUnitId
@abstract The interstitial's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize interstitial Ad
@param adUnitId interstitial Ad ID in SDK platform
@result AdLimeInterstitialAd instance
*/
- (AdLimeInterstitialAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeInterstitialAd
*/
@property(nonatomic, weak) id<AdLimeInterstitialAdDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithInterstitialClientReference:(AdLimeTypeInterstitialClientRef _Nullable* _Nullable)interstitialClient adUnitId:(NSString *)adUnitId;
/// A reference to the Unity interstitial client.
@property(nonatomic, assign) AdLimeTypeInterstitialClientRef _Nullable* _Nullable interstitialClient;
/// The ad callback into Unity.
@property(nonatomic, assign) AdLimeInterstitialDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) AdLimeInterstitialDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) AdLimeInterstitialWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) AdLimeInterstitialDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) AdLimeInterstitialWillLeaveApplicationCallback willLeaveCallback;
/// Unity End

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs AdLimeNetworkConfigs
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
@method setHE
@abstract set hight ecpm mode
*/
- (void)setHE;

/*!
@method setCL
@abstract set cycle load model
@param cacheCount NSInteger cached ad count
*/
- (void)setCL:(int)cacheCount;

/*!
@method loadAd
@abstract Makes an interstitial ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the interstitial is ready to be displayed. The delegate's  interstitialAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

/*!
@method showFromViewController
@abstract Presents the interstitial ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the interstitial and restored when done. After the interstitial has been removed, the delegate's interstitialDidDismissScreen: will be called.
*/
- (void)showFromViewController:(nullable UIViewController *)viewController;


/// Unity Start
- (void)showUnity;
- (void)showUnity:(nullable int [])networkIds;
/// Unity End

@end

NS_ASSUME_NONNULL_END
