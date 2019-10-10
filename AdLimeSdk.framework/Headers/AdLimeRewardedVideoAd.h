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

// AdLimeInnerRewardedVideoAdDelegate 必须在这里声明
@interface AdLimeRewardedVideoAd : NSObject<AdLimeInnerRewardedVideoAdDelegate>

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
- (id)initWithAdUnitId:(NSString *)adUnitId;
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

NS_ASSUME_NONNULL_END

@end
