//
//  INSDefaultPullToRefresh.h
//  INSPullToRefresh
//
//  Created by Michał Zaborowski on 21.02.2015.
//  Copyright (c) 2015 inspace.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+INSPullToRefresh.h"

@interface INSDefaultPullToRefresh : UIView <INSPullToRefreshBackgroundViewDelegate>
@property (nonnull, nonatomic, strong, readonly) UIActivityIndicatorView *activityIndicator;

- (nonnull instancetype)initWithFrame:(CGRect)frame backImage:(nullable UIImage *)backCircleImage frontImage:(nullable UIImage *)frontCircleImage;

@end
