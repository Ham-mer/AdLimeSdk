//
//  AdLimeRewardedVideoAd.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeTypes.h"
#import "AdLimeRewardedVideoAdDelegate.h"
#import "AdLimeInnerRewardedVideoAdDelegate.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class AdLimeRewardedVideoAd
@abstract AdLime rewarded video Ad class
*/
@interface AdLimeRewardedVideoAd : NSObject<AdLimeInnerRewardedVideoAdDelegate>

/*!
@property adUnitId
@abstract The rewardedVideo's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize rewarded video Ad
@param adUnitId rewarded video Ad ID get from  SDK dashboard
@result AdLimeRewardedVideoAd instance
*/
- (id)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeRewardedVideoAd
*/
@property(nonatomic, weak, nullable) id<AdLimeRewardedVideoAdDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithRewardedVideoClientReference:(AdLimeTypeRewardedVideoClientRef _Nullable* _Nullable)rewardedVideoClient adUnitId:(NSString *)adUnitId;
@property(nonatomic, assign) AdLimeTypeRewardedVideoClientRef _Nullable *_Nullable rewardedVideoClient;
/// The ad callback into Unity.
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidReceiveAdCallback didReceivedCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidOpenCallback didOpenCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoWillLeaveApplicationCallback willLeaveCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidCloseCallback didCloseCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidFailToReceiveAdWithErrorCallback didFailToReceiveAdCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidStartCallback didStartCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidCompleteCallback didCompleteCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidRewardCallback didRewardCallback;
@property(nonatomic, assign, nullable) AdLimeRewardVideoDidFailedToRewardCallback didFailedToRewardCallback;
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
@abstract Makes an rewarded video ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the rewarded video is ready to be displayed. The delegate's  rewardedVideoAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

/// iOS Start
/*!
@method showFromViewController
@abstract Presents the rewarded video ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the rewarded and restored when done. After the interstitial has been removed, the delegate's rewardedVideoDidDismissScreen: will be called.
*/
- (void)showFromViewController:(nullable UIViewController *)viewController;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(nullable int [])networkIds;
/// Unity End

NS_ASSUME_NONNULL_END

@end
