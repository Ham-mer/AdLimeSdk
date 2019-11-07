//
//  AdLimeILinItem.h
//  Created by AdLimeSdk on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "AdLimeBannerAdSize.h"
#import "AdLimeNetwork.h"

@interface AdLimeILineItem : NSObject

-(NSString *)getName;

-(AdLimeNetwork *)getNetwork;

-(int)getPriority;

-(float)getEcpm;

-(AdLimeBannerAdSize)getBannerAdSize;

-(int)getBannerRefreshInterval;

-(int)getRequestTimeOut;

-(NSDictionary *)getServerExtras;

@end
