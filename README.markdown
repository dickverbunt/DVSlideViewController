# DVSlideViewController

by Dick Verbunt

## What is DVSlideViewController

DVSlideViewController is an view controller, witch allows you to slide view controllers in- and offscreen with a swipe of your finger.

![](https://github.com/dickverbunt/DVSlideViewController/raw/master/Screenshots/DVSlideViewController_Screenshot1.png)
![](https://github.com/dickverbunt/DVSlideViewController/raw/master/Screenshots/DVSlideViewController_Screenshot2.png)


## Getting started

DVSlideViewController includes a demo application, showing how to create and configure an DVSlideViewController.

Essentially, DVSlideViewContoller is a UIViewController subclass.

The files you'll need to copy into your own project are in the 'DVSlideViewController' group in the Xcode project.

1. Add `QuartzCore.framework` to your target
2. Add `DVSlideViewController.h`, `DVSlideViewController.m` and `grayBackground.png` to your project

You also need to include QuartzCore to your project.
The remaining files in the Xcode project are included for demonstration purposes only.

## Working with DVSlideViewController

```objective-c
//DVSlideViewController
- (void)setViewController:(NSArray *)_viewControllers;
- (void)nextViewController;
- (void)prevViewController;
```

If you add `DVSlideViewController.h` to your childViewController `self.slideViewController` will become available.


## Downloading the code

You can [get DVSlideViewController on github](http://github.com/dickverbunt/DVSlideViewController).



## License

DVSlideViewController is released under the MIT-License. So free of charge.


## Support, bugs and feature requests

There is absolutely **no support** offered with this component. You're on your own! If you want to submit a feature request, please do so via [the issue tracker on github](http://github.com/dickverbunt/DVSlideViewController/issues).

If you want to submit a bug report, please also do so via the issue tracker, including a diagnosis of the problem and a suggested fix (in code). If you're using DVSlideViewController, you're a developer - so I expect you to do your homework and provide a fix along with each bug report. You can also submit pull requests or patches.

Please don't submit bug reports without fixes!