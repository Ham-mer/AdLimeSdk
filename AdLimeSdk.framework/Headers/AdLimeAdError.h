/*!
@header AdLimeAdError
@abstract error class
@author TaurusX
@version 1.3.5 2019/1017
*/

#import "AdLimeNetwork.h"


/*!
@enum AdLimeAdErrorCode
@abstract error code
@constant ADLIME_ADERROR_INTERNAL_ERROR  interal error
@constant ADLIME_ADERROR_INVALID_REQUEST invalid request
@constant ADLIME_ADERROR_NETWORK_ERROR  network error
@constant ADLIME_ADERROR_NO_FILL no fill
@constant ADLIME_ADERROR_TIMEOUT  timeout
*/
typedef NS_ENUM(NSUInteger, AdLimeAdErrorCode) {
    ADLIME_ADERROR_INTERNAL_ERROR = 0, // internal error
    ADLIME_ADERROR_INVALID_REQUEST = 1, // invalid request include adunit is invalid and Request too frequently etc.
    ADLIME_ADERROR_NETWORK_ERROR = 2, // network error
    ADLIME_ADERROR_NO_FILL = 3, // no fill
    ADLIME_ADERROR_TIMEOUT = 4 // timeout
};


/*!
@class AdLimeAdError
@abstract error class in AdLime
*/
@interface AdLimeAdError : NSObject

+(AdLimeAdError *)InternalError;
+(AdLimeAdError *)InvalidRequest;
+(AdLimeAdError *)NetworkError;
+(AdLimeAdError *)NoFill;
+(AdLimeAdError *)TimeOut;

-(BOOL)isNetworkError;

/*!
@method getCode
@abstract get error code
@param void
@result Error Code
*/
-(AdLimeAdErrorCode)getCode;
-(AdLimeAdError *)appendErrorCode:(int)errorCode;
-(AdLimeAdError *)appendErrorMessage:(NSString *)message;
-(AdLimeAdError *)appendErrorCode:(int)errorCode withMessage:(NSString *)message;

-(AdLimeAdError *)innerMessage:(NSString *)message;
-(AdLimeAdError *)innerNetwork:(AdLimeNetwork *)network;
-(AdLimeAdError *)innerAdUnitName:(NSString *)adUnitName;
-(AdLimeAdError *)innerAdUnitId:(NSString *)adUnitId;
-(AdLimeAdError *)innerLineItemParams:(NSString *)lineItemParams;

-(NSString *)getEventResultValue;

@end
