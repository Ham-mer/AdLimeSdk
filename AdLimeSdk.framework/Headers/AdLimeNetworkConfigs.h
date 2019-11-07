//
//  AdLimeNetworkConfigs.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/10/8.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfig.h"

/*!
@class AdLimeNetworkConfigs
@abstract NetworkConfigs enable set special config of Network.
*/
@interface AdLimeNetworkConfigs : NSObject

/*!
@method addConfig
@abstract Add a config to NetworkConfigs.
@param config AdLimeNetworkConfig
*/
-(void)addConfig:(AdLimeNetworkConfig *)config;

/*!
@method getNetworkConfig
@abstract Gets the third-party network config
@param clazz The config class name
@result The third-party network config
*/
-(NSObject *)getNetworkConfig:(Class)clazz;

/*!
@method getNetworkConfigOrGlobal
@abstract Gets the third-party or global network config
@param clazz The config class name
@result The network config
*/
-(NSObject *)getNetworkConfigOrGlobal:(Class)clazz;

/*!
@method getGlobalNetworkConfig
@abstract Gets the global network config
@param clazz The config class name
@result The global network config
*/
+(NSObject *)getGlobalNetworkConfig:(Class)clazz;

@end
