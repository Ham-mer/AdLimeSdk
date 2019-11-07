//
//  AdLimeMixViewAd.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/10/31.
//  Copyright © 2019 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfigs.h"
#import "AdLimeMixViewAdDelegate.h"
#import "AdLimeNativeAdLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeMixViewAd : NSObject

/*!
@property adUnitId
@abstract The mixview's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize mixview Ad
@param adUnitId mixview Ad ID in SDK platform
@result AdLimeMixViewAd instance
*/
- (AdLimeMixViewAd *)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeMixViewAd
*/
@property(nonatomic, weak, nullable) id<AdLimeMixViewAdDelegate> delegate;

/*!
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout AdLimeMixViewAdLayout
*/
- (void)setNativeAdLayout:(AdLimeNativeAdLayout *)layout;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs AdLimeNetworkConfigs
*/
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an native ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the native ad is ready to be displayed. The delegate's  NativeAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method getAdView
@abstract get native ad View for display, layout has be set native before
*/
- (UIView *)getAdView;

/*!
@method getAdView
@abstract get native ad View for display
@param layout AdLimeMixViewAdLayout
*/

- (UIView *)getAdView:(AdLimeNativeAdLayout *)layout;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
