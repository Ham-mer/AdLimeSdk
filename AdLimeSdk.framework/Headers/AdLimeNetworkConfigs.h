//
//  AdLimeNetworkConfigs.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/10/8.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfig.h"

@interface AdLimeNetworkConfigs : NSObject

-(void)addConfig:(AdLimeNetworkConfig *)config;
-(NSObject *)getNetworkConfig:(Class)clazz;
-(NSObject *)getNetworkConfigOrGlobal:(Class)clazz;
+(NSObject *)getGlobalNetworkConfig:(Class)clazz;

@end
