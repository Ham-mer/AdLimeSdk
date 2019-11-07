//
//  AdLimeNetwork.h
//  Created by AdLimeSdk on 2019/6/15.
//

#import <Foundation/Foundation.h>

/*!
 Id of Network supported by SDK.
 */
typedef NS_ENUM(NSInteger, AdLimeNetworkId) {
    UNKNOWN = 0,
    ADCOLONY = 1,
    ADMOB = 2,
    APPLOVIN = 3,
    CHARTBOOST = 4,
    FACEBOOK = 5,
    IRON_SOURCE = 6,
    MOPUB = 7,
    UNITY = 8,
    DSPMOB = 9,
    FYBER = 10,
    INMOBI = 11,
    VUNGLE = 12,
    DFP = 13,
    CREATIVE = 14,
    DAP = 15,
    BAIDU = 16,
    DISPLAYIO = 17,
    TOUTIAO = 18,
    GDT = 19,
    AMAZON = 20,
    FLURRY = 21,
    TAPJOY = 22,
    _360 = 23,
    XiaoMi = 24,
    _4399 = 25,
    OPPO = 26,
    VIVO = 27,
    MOBVISTA = 28,
    NEND = 29,
	ADGENERATION = 30,
	MAIO = 31,
    ALIGAMES = 32,
    CRITEO = 33,
    ZHONGHUI_ADS = 34,
    TMS = 35,
    FIVE = 36,
};

/*!
 Network supported by SDK.
 */
@interface AdLimeNetwork : NSObject

/*!
 @brief Id of Network.
 @see AdLimeNetworkId
 */
@property int mid;

/*!
 @brief Name of Network.
 */
@property NSString *name;

+(AdLimeNetwork *)fromId: (int) networkId;
+(NSString *)getName: (int)networkId;

@end
