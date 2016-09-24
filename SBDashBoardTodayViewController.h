//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchEtceteraMultiplexingViewController.h"

#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardBehaviorProviding.h"
#import "SBDashBoardEventHandling.h"
#import "SPUISearchViewControllerDelegate.h"

@class NSMutableSet, NSSet, NSString, SBDashBoardComponent, SBDashBoardPageViewController, UIColor, _UILegibilitySettings;

@interface SBDashBoardTodayViewController : SBSearchEtceteraMultiplexingViewController <SPUISearchViewControllerDelegate, SBDashBoardAppearanceProviding, SBDashBoardBehaviorProviding, SBDashBoardEventHandling>
{
    _Bool _isAuthenticated;
    SBDashBoardComponent *_dateViewComponent;
    id <SBDashBoardTodayViewControllerDelegate> _todayViewControllerDelegate;
    _Bool _showingMultiColumnLayout;
    _Bool _disableScrollingForModalPresentation;
    NSSet *_contentViews;
    NSMutableSet *_scrollingDisabledReasons;
    SBDashBoardPageViewController *_pageController;
}

@property(nonatomic) __weak SBDashBoardPageViewController *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) __weak id <SBDashBoardTodayViewControllerDelegate> todayViewControllerDelegate; // @synthesize todayViewControllerDelegate=_todayViewControllerDelegate;
- (void).cxx_destruct;
- (id)_dateMovingScrollView;
- (double)_restingValueForDateMovingScrollView;
- (double)_maxClippingOffset;
- (id)_searchNavigationBar;
- (id)_contentView;
- (id)_todayViewController;
- (_Bool)_shouldHideDateTimeForZeroWidgetDisplay;
- (double)_desiredAlphaForScrollView:(id)arg1;
- (void)_updateAppearanceForScrollView:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAppearanceForScrollView:(id)arg1;
- (struct CGPoint)_offsetForScrollView:(id)arg1;
- (void)_updateAppearance;
- (void)_updateBehavior;
- (void)_evaluateContentViews;
- (void)_hitCancelButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)_focusSearchFieldWithCompletion:(CDUnknownBlockType)arg1;
- (long long)requestedWallpaperVariantForWidgetBackgroundViews;
- (id)requestedLegibilitySettings;
- (void)_changeSpotlightVisible:(_Bool)arg1 animationBegan:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_changeSpotlightVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)searchFieldDidFocus;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)textSelectionInteractionDidEnd;
- (void)textSelectionInteractionWillBegin;
- (void)presentationControllerDidEndDismissing:(id)arg1;
- (void)presentationControllerDidEndPresenting:(id)arg1;
- (void)_setDashBoardScrollingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)_isDashBoardScrollingDisabled;
- (void)willDeactivateHosting;
- (void)willActivateHosting;
- (unsigned long long)initialPresentationMode;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (_Bool)isWidgetVisible:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

