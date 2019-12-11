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

- (void)trackAdRequest:(AdLimeILineItem *)lineItem;
- (void)trackAdLoaded:(AdLimeILineItem *)lineItem;
- (void)trackAdCallShow:(AdLimeILineItem *)lineItem adContentInfo:(AdLimeAdContentInfo *)adContentInfo;
- (void)trackAdShown:(AdLimeILineItem *)lineItem;
- (void)trackAdClicked:(AdLimeILineItem *)lineItem adContentInfo:(AdLimeAdContentInfo *)adContentInfo;
- (void)trackAdClosed:(AdLimeILineItem *)lineItem;
- (void)trackAdFailedToLoad:(AdLimeILineItem *)lineItem adError:(AdLimeAdError *)adError;
- (void)trackVideoStarted:(AdLimeILineItem *)lineItem;
- (void)trackVideoCompleted:(AdLimeILineItem *)lineItem;
- (void)trackRewarded:(AdLimeILineItem *)lineItem;
- (void)trackRewardFailed:(AdLimeILineItem *)lineItem;

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
