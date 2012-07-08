//
//  DVSlideViewController.h
//  ToolBar
//
//  Created by Dick Verbunt on 6/11/12.
//  Copyright (c) 2012 Dickverbunt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DVSlideViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, retain) NSMutableArray *viewControllers;
@property (nonatomic, readonly) NSUInteger selectedIndex;
@property (nonatomic, assign) CGFloat scaleFactor;

- (id)init;
- (void)nextViewController;
- (void)prevViewController;

@end


//Making the parrent slideViewController available in the UIViewController
@interface UIViewController (DVSlideViewController)

@property (nonatomic, readonly, retain) DVSlideViewController *slideViewController;

@end