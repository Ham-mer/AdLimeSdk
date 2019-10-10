//
//  AdLimeInteractiveArea.h
//  AdLimeSdk
//
//  Created by Matthew on 2019/8/7.
//  Copyright © 2019年 AdLime. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AdLimeInteractiveArea : NSObject

// 将所有元素作为点击区域
+(AdLimeInteractiveArea *)allArea;

// 通过 builder.addXxx 将元素添加到点击区域
+(AdLimeInteractiveArea *)builder;

// 添加元素到点击区域
-(AdLimeInteractiveArea *)addTitle;
-(AdLimeInteractiveArea *)addSubTitle;
-(AdLimeInteractiveArea *)addBody;
-(AdLimeInteractiveArea *)addAdvertiser;
-(AdLimeInteractiveArea *)addCallToAction;
-(AdLimeInteractiveArea *)addIcon;
-(AdLimeInteractiveArea *)addMediaView;
-(AdLimeInteractiveArea *)addAdChoices;
-(AdLimeInteractiveArea *)addRatingView;
-(AdLimeInteractiveArea *)addRatingLabel;
-(AdLimeInteractiveArea *)addPrice;
-(AdLimeInteractiveArea *)addStore;
-(AdLimeInteractiveArea *)addRootView;

// 点击区域是否包括 Xxx
-(BOOL)hasTitle;
-(BOOL)hasSubTitle;
-(BOOL)hasBody;
-(BOOL)hasAdvertiser;
-(BOOL)hasCallToAction;
-(BOOL)hasIcon;
-(BOOL)hasMediaView;
-(BOOL)hasAdChoices;
-(BOOL)hasRatingView;
-(BOOL)hasRatingLabel;
-(BOOL)hasPrice;
-(BOOL)hasStore;
-(BOOL)hasRootView;

@end
