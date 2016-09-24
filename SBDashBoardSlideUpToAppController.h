//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBAppViewHostRequester.h"
#import "SBAssistantObserver.h"
#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardViewTransitionSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableArray, NSSet, NSString, SBApplication, SBBestAppSuggestion, SBBounceSettings, SBLockScreenSettings, SBMainWorkspaceTransaction, SBNotificationCenterBounceAnimator, UIColor, UIPanGestureRecognizer, UIView, _UILegibilitySettings;

@interface SBDashBoardSlideUpToAppController : NSObject <UIGestureRecognizerDelegate, BSTransactionObserver, SBAppViewHostRequester, _UISettingsKeyObserver, SBAssistantObserver, SBDashBoardViewTransitionSource, SBDashBoardAppearanceProviding>
{
    SBLockScreenSettings *_testSettings;
    NSMutableArray *_deferredAppUpdateBlocks;
    _Bool _executingDeferredAppUpdateBlocks;
    double _currentYOffset;
    SBApplication *_targetApp;
    SBBestAppSuggestion *_targetAppInfo;
    SBMainWorkspaceTransaction *_launchAppTransaction;
    UIView *_clippingView;
    UIView *_appDefaultImageView;
    UIView *_appBackgroundView;
    UIPanGestureRecognizer *_slideUpToAppGestureRecognizer;
    SBBounceSettings *_bounceSettings;
    SBNotificationCenterBounceAnimator *_slideDownBounceAnimator;
    id <SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting> _delegate;
    unsigned long long _state;
}

@property(nonatomic, getter=_state, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SBDashBoardSlideUpToAppControllerDelegate><SBDashBoardViewPresenting> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_slideUpToAppGestureRecognizer;
- (void).cxx_destruct;
- (void)_setSlideUpToAppGestureRecognizer:(id)arg1;
- (struct CGRect)_slideUpToAppGrabberZoneForGrabber:(id)arg1;
- (id)_instantiateDynamicAnimationForTargetValue:(double)arg1 withInitialVelocity:(double)arg2;
- (id)_siriViewController;
- (struct CGRect)_screenBounds;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)assistant:(id)arg1 viewWillDisappear:(long long)arg2;
- (void)_finishSlideDownGesture;
- (void)_performTargetAppContinuity;
- (void)_performCallContinuity;
- (void)_performSiriContinuity;
- (void)_finishSlideUpGesture;
- (void)_translateSlidingViewByY:(double)arg1;
- (void)_prepareForSlideUpAnimation;
- (void)_animateSlideUpWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateSlideDownWithVelocity:(struct CGPoint)arg1 bounce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_endSlideWithYTranslation:(double)arg1 velocity:(struct CGPoint)arg2 cancelled:(_Bool)arg3;
- (void)_updateSlideWithYTranslation:(double)arg1;
- (void)_beginSlideWithYTranslation:(double)arg1;
- (void)_slideUpToAppRecognizerDidPan:(id)arg1;
- (void)_activateApp:(id)arg1 withAppInfo:(id)arg2 andURL:(id)arg3 animated:(_Bool)arg4;
- (void)_activateTargetAppAnimated:(_Bool)arg1;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_setTargetApp:(id)arg1 withAppSuggestion:(id)arg2;
- (void)_updateSlideUpToAppControllerWithCurrentSuggestedApp;
- (void)_suggestedAppDidChange:(id)arg1;
- (void)_resetToInitialState;
- (void)cancelTransition;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)_setupSlideUpToAppGesture;
- (void)_setupSubviews;
@property(readonly, nonatomic, getter=isSliding) _Bool sliding;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

