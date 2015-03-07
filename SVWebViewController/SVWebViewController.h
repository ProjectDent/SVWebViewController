//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

@class SVWebViewController;

@protocol SVWebViewControllerActivityDelegate

- (void)webViewControllerDidBeginNetworkActivity:(SVWebViewController *)webViewController;
- (void)webViewControllerDidFinishNetworkActivity:(SVWebViewController *)webViewController;

@end

@interface SVWebViewController : UIViewController

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL*)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

@property (nonatomic, weak) id<UIWebViewDelegate> delegate;
@property (nonatomic, weak) id <SVWebViewControllerActivityDelegate> activityDelegate;

@end
