//
//  AdLimeNativeAd.h
//  Created by AdLimeSdk on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeNativeAdDelegate.h"
#import "AdLimeNativeAdLayout.h"
#import "AdLimeNetworkConfigs.h"
#import "AdLimeILineItem.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class AdLimeNativeAd
@abstract AdLime native Ad class
*/
@interface AdLimeNativeAd : NSObject

/*!
@property adUnitId
@abstract The native's ad unit ID
*/
@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/*!
@method initWithAdUnitId
@abstract initilize native Ad
@param adUnitId native Ad ID in SDK platform
@result AdLimeNativeAd instance
*/
- (AdLimeNativeAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this AdLimeNativeAd
*/
@property(nonatomic, weak, nullable) id<AdLimeNativeAdDelegate> delegate;

/*!
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout AdLimeNativeAdLayout
*/
- (void)setNativeAdLayout:(AdLimeNativeAdLayout *)layout;

/*!
@method setExpressAdSize
@abstract Set adSize of express ad.
@param adSize AdLimeBannerAdSize
*/
- (void)setExpressAdSize:(CGSize)adSize;

/*!
@method setMuted
@abstract Set whether video play muted, mute by default.
@param muted true-play video muted; false-play video sound
*/
- (void)setMuted:(BOOL)muted;

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
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result AdLimeILineItem
*/
- (AdLimeILineItem *)getReadyLineItem;

/*!
@method getAdView
@abstract get native ad View for display, layout has be set native before
*/
- (UIView *)getAdView;

/*!
@method getAdView
@abstract get native ad View for display
@param layout AdLimeNativeAdLayout
*/
- (UIView *)getAdView:(AdLimeNativeAdLayout *)layout;

/*!
@method showAdView, AdLimeNativeAdLayout has be set native before
@abstract showAdView in center of container
@param container the container to show AdView
*/
- (void)showAdView:(UIView *)container;

/*!
@method showAdView
@abstract showAdView in center of container
@param container the container to show AdView
 @param layout AdLimeMixViewAdLayout for render NativeAd
*/
- (void)showAdView:(UIView *)container nativeAdLayout:(AdLimeNativeAdLayout *)layout;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
