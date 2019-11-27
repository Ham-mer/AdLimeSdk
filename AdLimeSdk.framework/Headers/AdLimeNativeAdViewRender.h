//
//  AdLimeNativeAdView.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/11/8.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#ifndef AdLimeNativeAdViewRender_h
#define AdLimeNativeAdViewRender_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeNativeAdLayout.h"

@protocol AdLimeNativeAdViewRender<NSObject>

@required
- (UIView *)adLimeGetRootView;

@optional
- (UILabel *)adLimeGetTitle;

@optional
- (UILabel *)adLimeGetSubTitle;

@optional
- (UILabel *)adLimeGetBody;

@optional
- (UILabel *)adLimeGetAdvertiser;

@optional
- (UIView *)adLimeGetCallToAction;

@optional
- (UIView *)adLimeGetIconView;

@optional
- (UIView *)adLimeGetMediaView;

@optional
- (UIView *)adLimeGetAdChoicesView;

@optional
- (UILabel *)adLimeGetRatingLabel;

@optional
- (UIView *)adLimeGetRatingView;

@optional
- (ratingCallback)adLimeGetRatingCallback;

@optional
- (UILabel *)adLimeGetPrice;

@optional
- (UILabel *)adLimeGetStore;

@end

#endif /* AdLimeNativeAdViewRender_h */
