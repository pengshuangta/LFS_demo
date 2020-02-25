//
//  AppDelegate.h
//  LFS_demo
//
//  Created by 彭双塔 on 2020/2/25.
//  Copyright © 2020 pst. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

