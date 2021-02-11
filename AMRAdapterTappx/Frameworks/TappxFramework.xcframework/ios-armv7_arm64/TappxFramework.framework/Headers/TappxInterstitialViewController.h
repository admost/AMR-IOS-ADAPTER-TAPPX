//
//  TappxInterstitialViewController.h
//  Framework
//
//  Created by Guybrush Threepwood on 03/07/2020.
//  Copyright © 2020 Tappx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TappxSettings.h"
#import "TappxInterstitialViewControllerDelegate.h"

@interface TappxInterstitialViewController : UIViewController

- (nonnull instancetype)initWithDelegate:(nonnull id<TappxInterstitialViewControllerDelegate>)delegate;

- (void)setAutoShowWhenReady:(BOOL)autoShow;
- (void)load;
- (void)load:(nonnull TappxSettings *)settings;
- (BOOL)isReady;
- (void)show;
- (void)setAnimation:(TappxAnimation)animation;

@end
