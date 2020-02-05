//
//  AdLimeILinItem.h
//  Created by AdLimeSdk on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "AdLimeBannerAdSize.h"
#import "AdLimeNetwork.h"
#import "AdLimeIAdUnit.h"

@interface AdLimeILineItem : NSObject

-(NSString *)getName;

-(AdLimeNetwork *)getNetwork;

-(int)getPriority;

-(float)getEcpm;

-(AdLimeBannerAdSize)getBannerAdSize;

// ms
-(int)getBannerRefreshInterval;

// ms
-(int)getRequestTimeOut;

-(NSDictionary *)getServerExtras;

// Belonged AdUnit
-(AdLimeIAdUnit *)getAdUnit;

@end
