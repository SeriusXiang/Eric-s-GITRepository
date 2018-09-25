//
//  AppDelegate.h
//  GITLearn
//
//  Created by xiangyi on 2018/9/25.
//  Copyright © 2018年 xiangyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

