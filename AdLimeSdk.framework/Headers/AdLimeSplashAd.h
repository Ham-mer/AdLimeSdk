//
//  AdLimeSplashAd.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/8/15.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeILineItem.h"
#import "AdLimeSplashAdDelegate.h"
#import "AdLimeNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdLimeSplashAd : NSObject

@property(nonatomic, strong, readonly) NSString *adUnitId;
@property(nonatomic, weak, nullable) id<AdLimeSplashAdDelegate> delegate;

-(id)initWithAdUnitId:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;

- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;

-(void)loadAd;
-(BOOL)isReady;
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
