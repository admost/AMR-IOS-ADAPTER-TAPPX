//
//  TappxBannerViewController.h
//  Framework
//
//  Created by Guybrush Threepwood on 02/07/2020.
//  Copyright © 2020 Tappx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TappxSettings.h"
#import "TappxBannerViewControllerDelegate.h"

@interface TappxBannerViewController : UIViewController

- (nonnull instancetype)initWithDelegate:(nonnull id<TappxBannerViewControllerDelegate>)delegate
                                 andSize:(TappxBannerSize)size
                             andPosition:(TappxBannerPosition)position;

- (nonnull instancetype)initWithDelegate:(nonnull id<TappxBannerViewControllerDelegate>)delegate
                                 andSize:(TappxBannerSize)size
                             andLocation:(CGPoint)location;

- (nonnull instancetype)initWithDelegate:(nonnull id<TappxBannerViewControllerDelegate>)delegate
                                 andSize:(TappxBannerSize)size
                                 andView:(nonnull UIView *)viewAd;

- (void)load;
- (void)load:(nonnull TappxSettings *)settings;
- (void)removeBanner;
- (void)setRefreshTimeSeconds:(NSInteger)seconds;
- (void)setEnableAutoRefresh:(BOOL)autoRefresh;
- (void)setAnimation:(TappxAnimation)animation;

@end
