//
//  AdLimeAdUnitInfo.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2019/11/3.
//  Copyright © 2019年 AdLimeSdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdLimeAdType.h"
#import "AdLimeAdContentInfo.h"

@interface AdLimeAdUnitInfo : NSObject

@property (nonatomic, strong) NSString *adUnitId;
@property (nonatomic, strong) NSString *adUnitName;
@property (nonatomic) AdLimeAdTypeId adUnitType;

@property (nonatomic, strong)AdLimeAdContentInfo *adContentInfo;

@end
