//
//  AdLimeInnerMixFullScreenAdDelegate.h
//  Created by AdLimeSdk on 2019/10/20.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdError.h"

@protocol AdLimeInnerMixFullScreenAdDelegate<NSObject>

- (void)mixFullScreenAdDidReceiveAd:(NSString *)lineItemId;
- (void)mixFullScreenAd:(NSString *)lineItemId didFailToReceiveAdWithError:(AdLimeAdError *)adError;
- (void)mixFullScreenAdWillPresentScreen:(NSString *)lineItemId;
- (void)mixFullScreenAdDidDismissScreen:(NSString *)lineItemId;
- (void)mixFullScreenAdWillLeaveApplication:(NSString *)lineItemId;

@end
