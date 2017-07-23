//
//  TWebViewConfig.h
//  TWebView
//
//  Created by 邵伟男 on 2017/7/23.
//  Copyright © 2017年 邵伟男. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TWebViewDelegate;

@interface TWebViewConfig : NSObject

@property (nonatomic, weak) id<TWebViewDelegate> commonDelegate;
@property (nonatomic, weak) id<TWebViewDelegate> delegate;
@property (nonatomic, assign) BOOL forceOverrideCookie;
@property (nonatomic, assign) BOOL showProgressView;
@property (nonatomic, assign) UIColor *progressTintColor;
@property (nonatomic, copy) NSString *confirmTitle;
@property (nonatomic, copy) NSString *cancelTitle;
@property (nonatomic, copy) NSString *lodingDefaultTitle;
@property (nonatomic, copy) NSString *successDefaultTitle;
@property (nonatomic, copy) NSString *failedDefaultTitle;

@end
