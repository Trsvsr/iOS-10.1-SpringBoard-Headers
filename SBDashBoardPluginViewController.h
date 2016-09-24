//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBLockScreenPluginDelegate.h"

@class NSString, SBLockScreenPlugin;

@interface SBDashBoardPluginViewController : SBDashBoardViewControllerBase <SBLockScreenPluginDelegate>
{
    SBLockScreenPlugin *_plugin;
}

@property(readonly, nonatomic) SBLockScreenPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_updateLegibility;
- (_Bool)handleEvent:(id)arg1;
- (void)pluginAppearanceDidChange:(id)arg1;
- (id)appearanceIdentifier;
- (id)dashBoardIdentifier;
- (long long)presentationType;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationStyle;
- (id)displayLayoutElementIdentifier;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLockScreenPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

