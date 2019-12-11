//
//  AdLimeAdType.h
//  Created by AdLimeSdk on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AdLimeAdTypeId) {
    ADLIME_ADTYPE_UNKNOWN = 0,
    ADLIME_ADTYPE_BANNER = 1,
    ADLIME_ADTYPE_INTERSTITIAL = 2,
    ADLIME_ADTYPE_NATIVE = 3,
    ADLIME_ADTYPE_REWARDED_VIDEO = 4,
    ADLIME_ADTYPE_MIXVIEW = 5,
    ADLIME_ADTYPE_MIXFULLSCREEN = 6,
    ADLIME_ADTYPE_SPLASH = 7,
    ADLIME_ADTYPE_FEEDLIST = 8
};

@interface AdLimeAdType : NSObject

@property int type;

- (id)initWithType:(int)type;
- (NSString *)getName;

@end
