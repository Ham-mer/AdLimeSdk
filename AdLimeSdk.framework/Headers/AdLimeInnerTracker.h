//
//  AdLimeInnerTracker.h
//  Created by AdLimeSdk on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "AdLimeTrackerDelegate.h"
#import "AdLimeILineItem.h"
#import "AdLimeAdUnit.h"
#import "AdLimeTypes.h"
#import "AdLimeAdError.h"
#import "AdLimeAdContentInfo.h"

/*!
Track loading ad process of every LineItem.
*/
@interface AdLimeInnerTracker : NSObject

+ (AdLimeInnerTracker *)getInstance;

- (void)trackAdRequest:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdLoaded:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;

- (void)trackAdCallShow:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adContentInfo:(AdLimeAdContentInfo *)adContentInfo;
// 为了兼容 Mediation_GDT 旧版本的 Splash，需要保留此方法
- (void)trackAdCallShow:(AdLimeILineItem *)lineItem adContentInfo:(AdLimeAdContentInfo *)adContentInfo;

- (void)trackAdShown:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdClicked:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adContentInfo:(AdLimeAdContentInfo *)adContentInfo;
- (void)trackAdClosed:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdFailedToLoad:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adError:(AdLimeAdError *)adError;
- (void)trackVideoStarted:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackVideoCompleted:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackRewarded:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackRewardFailed:(AdLimeILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;

- (void)trackAdUnitRequest:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitLoaded:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitCallShow:(AdLimeAdUnit *)adUnit adContentInfo:(AdLimeAdContentInfo *)adContentInfo;;
- (void)trackAdUnitShown:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitClicked:(AdLimeAdUnit *)adUnit adContentInfo:(AdLimeAdContentInfo *)adContentInfo;;
- (void)trackAdUnitClosed:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitFailedToLoad:(AdLimeAdUnit *)adUnit adError:(AdLimeAdError *)adError;
- (void)trackAdUnitVideoStarted:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitVideoCompleted:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitRewarded:(AdLimeAdUnit *)adUnit;
- (void)trackAdUnitRewardFailed:(AdLimeAdUnit *)adUnit;

@end
