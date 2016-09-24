//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionContext.h"

@class NSSet, SBWorkspaceApplication, SBWorkspaceEntity;

@interface SBWorkspaceApplicationTransitionContext : SBWorkspaceTransitionContext
{
    CDUnknownBlockType _resultBlock;
    _Bool _background;
    _Bool _fencesAnimations;
    _Bool _alwaysRunsWatchdog;
    _Bool _waitsForSceneUpdates;
    _Bool _sentActivationResult;
    long long _interfaceOrientation;
    long long _preferredInterfaceOrientation;
}

@property(nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) _Bool waitsForSceneUpdates; // @synthesize waitsForSceneUpdates=_waitsForSceneUpdates;
@property(nonatomic) _Bool alwaysRunsWatchdog; // @synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog;
@property(nonatomic) _Bool fencesAnimations; // @synthesize fencesAnimations=_fencesAnimations;
@property(nonatomic, getter=isBackground) _Bool background; // @synthesize background=_background;
- (void).cxx_destruct;
- (double)_watchdogScaleFactorForApplication:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)_realActivatingEntity;
- (id)_display;
- (id)executionContextForApplication:(id)arg1;
- (id)sceneClientSettingsForApplication:(id)arg1 withSceneSettings:(id)arg2;
- (id)sceneTransitionContextForApplication:(id)arg1;
- (id)sceneSettingsForApplication:(id)arg1;
- (id)sceneIdentifierForApplication:(id)arg1;
- (void)finalize;
- (long long)_lockedInterfaceOrientation;
- (id)previousApplicationForBundleID:(id)arg1;
- (id)previousApplicationForLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSSet *previousApplications;
- (id)applicationForBundleID:(id)arg1;
- (id)previousEntityForLayoutRole:(long long)arg1;
- (void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)entityForLayoutRole:(long long)arg1;
- (void)setEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)applicationForLayoutRole:(long long)arg1;
- (void)setApplication:(id)arg1 forLayoutRole:(long long)arg2;
@property(retain, nonatomic) SBWorkspaceApplication *activatingApplication; // @dynamic activatingApplication;
@property(retain, nonatomic) SBWorkspaceEntity *activatingEntity; // @dynamic activatingEntity;
@property(readonly, copy, nonatomic) NSSet *applications;
- (void)sendActivationResultErrorCode:(long long)arg1 reason:(id)arg2;
- (_Bool)hasSentActivationResult;
- (void)dealloc;
- (id)init;

@end

