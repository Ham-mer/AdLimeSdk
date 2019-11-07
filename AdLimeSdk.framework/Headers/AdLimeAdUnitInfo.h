//
//  AdLimeAdUnitInfo.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/11/3.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdType.h"

@interface AdLimeAdUnitInfo : NSObject

- (NSString *)getAdUnitId;
- (NSString *)getAdUnitName;
- (AdLimeAdTypeId)getAdUnitType;

@end
