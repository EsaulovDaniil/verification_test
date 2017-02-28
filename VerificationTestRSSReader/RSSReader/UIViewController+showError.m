//
//  UIViewController+showError.m
//  VerificationTestRSS
//
//  Created by test on 28.02.17.
//  Copyright © 2017 test. All rights reserved.
//

#import "UIViewController+showError.h"
#import "DialogViewController.h"

@implementation UIViewController (showError)

- (void)showError:(NSError *)err{

	static DialogViewController *controller;
	controller =[DialogViewController new];
	UIView *view = self.view.window.rootViewController.view;
	[controller showInView:view
				 withTitle:NSLocalizedString(@"Ошибка", nil)
				  withText:NSLocalizedString(@"Невозможно загрузить RSS", nil)];
	[view autoresizesSubviews];
}

@end
