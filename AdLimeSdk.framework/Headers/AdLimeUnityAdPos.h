//
//  AdLimeUnityAdPos.h
//  AdLimeSdk
//
//  Created by AdLimeSdk on 2020/3/29.
//  Copyright © 2020 AdLimeSdk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AdLimeUnityAdPosition) {
    AdLimeUnityAdPos_Custom = -1,      // Custom ad position: (x,y)
    AdLimeUnityAdPos_Top = 0,          // Top of screen.
    AdLimeUnityAdPos_Bottom = 1,       // Bottom of screen.
    AdLimeUnityAdPos_TopLeft = 2,      // Top left of screen.
    AdLimeUnityAdPos_TopRight = 3,     // Top right of screen.
    AdLimeUnityAdPos_BottomLeft = 4,   // Bottom left of screen.
    AdLimeUnityAdPos_BottomRight = 5,  // Bottom right of screen.
    AdLimeUnityAdPos_Center = 6        // Center of screen.
};

@interface AdLimeUnityAdPos : NSObject

+ (NSString *)getPositionDesc:(AdLimeUnityAdPosition)position;

@end

NS_ASSUME_NONNULL_END
