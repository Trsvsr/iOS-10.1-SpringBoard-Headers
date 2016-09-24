//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSArray, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeAppsToRemoteAlert : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    UIView *_alertContextHostView;
    NSArray *_accessoryHostWrappers;
}

- (void).cxx_destruct;
- (_Bool)_shouldDismissBanner;
- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

