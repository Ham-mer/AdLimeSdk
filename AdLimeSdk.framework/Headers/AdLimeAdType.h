//
//  AdLimeAdType.h
//  Created by AdLimeSdk on 2019/6/15.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AdLimeAdTypeId) {
    ADTYPE_UNKNOWN = 0,
    ADTYPE_BANNER = 1,
    ADTYPE_INTERSTITIAL = 2,
    ADTYPE_NATIVE = 3,
    ADTYPE_REWARDED_VIDEO = 4,
    ADTYPE_MIXVIEW = 5,
    ADTYPE_MIXFULLSCREEN = 6,
    ADTYPE_SPLASH = 7,
    ADTYPE_FEEDLIST = 8
};

@interface AdLimeAdType : NSObject

@property int type;

- (id)initWithType:(int)type;
- (NSString *)getName;

@end
