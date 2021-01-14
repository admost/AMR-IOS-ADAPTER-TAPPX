//
//  TappxBannerViewControllerDelegate.h
//  Framework
//
//  Created by Guybrush Threepwood on 02/07/2020.
//  Copyright © 2020 Tappx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TappxErrorAd.h"
@class TappxBannerViewController;

@protocol TappxBannerViewControllerDelegate <NSObject>
@required
- (nonnull UIViewController *)presentViewController;
@optional
- (void)tappxBannerViewControllerDidFinishLoad:(nonnull TappxBannerViewController *)vc;
- (void)tappxBannerViewControllerDidPress:(nonnull TappxBannerViewController *)vc;
- (void)tappxBannerViewControllerDidFail:(nonnull TappxBannerViewController *)vc withError:(nonnull TappxErrorAd *) error;
- (void)tappxBannerViewControllerDidClose:(nonnull TappxBannerViewController *)vc;
@end
