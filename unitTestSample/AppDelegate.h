//
//  AppDelegate.h
//  unitTestSample
//
//  Created by Nazifa Najish on 5/4/18.
//  Copyright © 2018 Techment. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

