//
//  AdLimeTrackerInfo.h
//  Created by Matthew on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "AdLimeILineItem.h"

/*!
Info of LineItem when tracking loading ad process.
*/
@interface AdLimeTrackerInfo : NSObject

/*!
 @brief eCPM of LineItem
 */
@property float eCPM;

/*!
 @brief Id of Network the LineItem belonged.
 @see AdLimeNetworkId
 */
@property int networkId;

/*!
 @brief AdUnitId of LineItem. For example: AdMob AdUnit ID, Facebook Placenent ID and so on.
 */
@property NSString *lineItemAdUnitId;

/*!
 @brief AdUnitId of SDK platform AdUnit.
 */
@property NSString *adUnitId;

/*!
 @brief AdType of LienItem. For example: Banner, Interstitial, Native and so on.
 */
@property int adType;

- (AdLimeTrackerInfo *)initWithLineItem:(AdLimeILineItem *)lineItem;

@end
