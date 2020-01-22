//
//  AdLimeTrackerInfo.h
//  Created by AdLimeSdk on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "AdLimeILineItem.h"
#import "AdLimeAdContentInfo.h"


/*!
Info of LineItem when tracking loading ad process.
*/
@interface AdLimeTrackerInfo : NSObject

/*!
 @brief Id of SDK platform AdUnit.
 */
@property NSString *adUnitId;

/*!
 @brief Name of SDK platform AdUnit.
 */
@property NSString *adUnitName;

/*!
@brief Id of SDK platform LineItem.
*/
@property NSString *lineItemId;

/*!
@brief Id identiy one LineItem request process, from load, fill to imp and click. This id wil recreate when LineItem load every time.
*/
@property NSString *lineItemRequestId;

/*!
 @brief AdType of LienItem. For example: Banner, Interstitial, Native and so on.
 */
@property int adType;

/*!
 @brief Id of Network the LineItem belonged.
 @see AdLimeNetworkId
 */
@property int networkId;

/*!
 @brief AdUnitId of LineItem. For example: AdMob AdUnit ID, Facebook Placement ID and so on.
 */
@property NSString *networkAdUnitId;

/*!
 @brief eCPM of LineItem
 */
@property float eCPM;

@property (nonatomic, strong) AdLimeAdContentInfo *adContentInfo;

- (AdLimeTrackerInfo *)initWithLineItem:(AdLimeILineItem *)iLineItem 
                    lineItemRequestId:(NSString *)lineItemRequestId;

- (AdLimeTrackerInfo *)initWithLineItem:(AdLimeILineItem *)iLineItem 
                    lineItemRequestId:(NSString *)lineItemRequestId
                        adContentInfo:(AdLimeAdContentInfo *)contentInfo;

@end
