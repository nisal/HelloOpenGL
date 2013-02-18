//
//  AppDelegate.h
//  HelloOpenGL
//
//  Created by Omkar on 18/02/13.
//  Copyright (c) 2013 Omkar Nisal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
OpenGLView* _glView;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@end
