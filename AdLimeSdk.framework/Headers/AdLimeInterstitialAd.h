/*!
@header AdLimeInterstitialAd
@abstract AdLime Interstitial Ad
@author TaurusX
@version 1.3.5
*/

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

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize interstitial Ad
@discussion
@param adUnitId interstitial Ad ID in TaurusX platform
@result AdLimeInterstitialAd instance
*/
- (AdLimeInterstitialAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract delegate for AdLimeInterstitialAd event
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

- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;
- (void)setHE;
- (void)setCL:(int)cacheCount;
- (void)loadAd;
- (BOOL)isReady;
- (void)destroy;

/// iOS Start
- (void)showFromViewController:(nullable UIViewController *)viewController;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(nullable int [])networkIds;
/// Unity End

@end

NS_ASSUME_NONNULL_END
