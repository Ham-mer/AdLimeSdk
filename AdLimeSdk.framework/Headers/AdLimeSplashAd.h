//
//  AdLimeSplashAd.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/8/15.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeILineItem.h"
#import "AdLimeSplashAdDelegate.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class AdLimeSplashAd
@abstract AdLime splash Ad class
*/
@interface AdLimeSplashAd : NSObject

/*!
@property adUnitId
@abstract The splash's ad unit ID
*/
@property(nonatomic, strong, readonly) NSString *adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeSplashAd
*/
@property(nonatomic, weak, nullable) id<AdLimeSplashAdDelegate> delegate;

/*!
@method initWithAdUnitId
@abstract initilize splash Ad
@param adUnitId splash Ad ID get from SDK dashboard
@param uiWindow  window for show splash ad
@result AdLimeSplashAd instance
*/
-(id)initWithAdUnitId:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs AdLimeNetworkConfigs
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an splash ad request.
*/
-(void)loadAd;

/*!
@method isReady
@abstract Returns YES if the splash is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
-(BOOL)isReady;

/*!
@method destroy
@abstract destory the ad request.
*/
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
