//
//  AdLimeFeedList.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/9/18.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdLimeFeedListDelegate.h"
#import "AdLimeNativeAdLayout.h"
#import "AdLimeFeed.h"
#import "AdLimeNetworkConfigs.h"

@interface AdLimeFeedList : NSObject

@property(nonatomic, readonly, nonnull) NSString *adUnitId;

- (AdLimeFeedList *)initWithAdUnitId:(NSString *)adUnitId;
@property(nonatomic, weak, nullable) id<AdLimeFeedListDelegate> delegate;

- (void)setCount:(int)count;
- (void)setNetworkConfigs:(AdLimeNetworkConfigs *)configs;
- (void)setHE;
- (void)loadAd;
- (BOOL)isReady;
- (NSMutableArray<AdLimeFeed *> *)getFeedArray;
- (void)destroy;

@end
