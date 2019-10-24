#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfigs.h"

/*!
Class contains logic that applies to the SDK as a whole.
*/
@interface AdLime : NSObject

/*!
@brief Initialize SDK with App Id.
@param appId App ID in SDK platform.
*/
+ (void)initWithAppId: (NSString *)appId;

/*!
 @brief Get the App Id used in initialization.
 @return NSString
 */
+ (NSString *)getAppId;

/*!
 @brief Set whether user consent GDPR. You can setGdprConsent at anytime if user changed their choices.
 @param consent YES if user consent, NO otherwise
 */
+ (void)setGdprConsent:(BOOL) consent;

/*!
 @brief Indicates whether user consent GDPR.
 @result BOOL
 */
+ (BOOL)isGdprConsent;

/*!
@brief Set whether to request test ads from SDK.
@warning Test mode will not effect Network ad requesting.
@param testMode YES if request test ads, NO otherwise
*/
+ (void)setTestMode:(BOOL)testMode;

/*!
 @brief Set whether to print log on Xcode console output.
 @param enable YES if print log, NO otherwise
 */
+ (void)setLogEnable:(BOOL)enable;

/*!
 @brief Set global NetworkConfigs, the config will be sent to Network SDK.
 @warning Please set configs before load ads.
 @see AdLimeNetworkConfigs
 @param configs Global NetworkConfigs of Networks.
 */
+ (void)setGlobalNetworkConfigs:(AdLimeNetworkConfigs *)configs;

/*!
 @brief Get setted global NetworkConfigs.
 @result AdLimeNetworkConfigs
 */
+ (AdLimeNetworkConfigs *)getGlobalNetworkConfigs;

@end
