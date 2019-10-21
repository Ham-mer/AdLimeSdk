/*!
@header AdLime
@abstract AdLime  Mobile Ads SDK
@author TaurusX
@version 1.3.5
*/

#import <Foundation/Foundation.h>
#import "AdLimeNetworkConfigs.h"

/*!
@class AdLime
@abstract AdLime
*/
@interface AdLime : NSObject

/*!
@method initWithAppId
@abstract initlize sdk with AppId
@discussion
@param appId  APP ID in TaurusX platform
@result void
*/
+ (void) initWithAppId: (NSString *)appId;
+ (NSString *)getAppId;

/*!
@method setTestMode
@abstract set test mode
@discussion
@param testMode  true: Test model, false:
@result void
*/
+ (void)setTestMode:(BOOL)testMode;

/*!
@method setLogEnable
@abstract set print the log
@discussion
@param enable  true: enable log, false: disable log
@result void
*/
+ (void)setLogEnable:(BOOL)enable;

/*!
@method setGdprConsent
@abstract set Gdpr
@discussion
@param consent  true:
@result void
*/
+ (void) setGdprConsent:(BOOL) consent;
+ (BOOL) isGdprConsent;

/*!
@method setGlobalNetworkConfigs
@abstract set Global NetworkConfigs
@discussion
@param configs network configs
@result void
*/
+ (void)setGlobalNetworkConfigs:(AdLimeNetworkConfigs *)configs;
+ (AdLimeNetworkConfigs *)getGlobalNetworkConfigs;

@end
