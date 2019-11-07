#import "AdLimeNetwork.h"

/*!
@enum AdLimeAdErrorCode
@abstract error code
@constant ADERROR_INTERNAL_ERROR  interal error
@constant ADERROR_INVALID_REQUEST invalid request
@constant ADERROR_NETWORK_ERROR  network error
@constant ADERROR_NO_FILL no fill
@constant ADERROR_TIMEOUT  timeout
*/
typedef NS_ENUM(NSUInteger, AdLimeAdErrorCode) {
    ADERROR_INTERNAL_ERROR = 0, // internal error
    ADERROR_INVALID_REQUEST = 1, // invalid request include adunit is invalid and Request too frequently etc.
    ADERROR_NETWORK_ERROR = 2, // network error
    ADERROR_NO_FILL = 3, // no fill
    ADERROR_TIMEOUT = 4 // timeout
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
