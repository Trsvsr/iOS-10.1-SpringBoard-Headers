//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMPocketStateDelegate.h"

@class CMPocketStateManager, NSString, SBBacklightController, SBLockScreenManager, SBLockStateAggregator, SBQuietModeStateAggregator;

@interface SBNCScreenController : NSObject <CMPocketStateDelegate>
{
    _Bool _turnOnScreenForOutOfPocketEvent;
    unsigned int _powerAssertionID;
    SBBacklightController *_backlightController;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    CMPocketStateManager *_pocketStateManager;
    NSString *_powerAssertionName;
}

@property(nonatomic) unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(copy, nonatomic) NSString *powerAssertionName; // @synthesize powerAssertionName=_powerAssertionName;
@property(nonatomic) _Bool turnOnScreenForOutOfPocketEvent; // @synthesize turnOnScreenForOutOfPocketEvent=_turnOnScreenForOutOfPocketEvent;
@property(retain, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
- (void).cxx_destruct;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)_releasePowerAssertion;
- (void)_createPowerAssertion;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1;
- (_Bool)_isDeviceUILocked;
- (_Bool)_isQuietModeEnabledAndActive;
- (void)_turnOnScreenForPocketMode;
- (void)_turnOnScreen;
- (void)turnOnScreenIfPossibleForNotificationRequest:(id)arg1;
- (void)turnOnScreenForNotificationRequest:(id)arg1;
- (_Bool)canTurnOnScreenForNotificationRequest:(id)arg1;
- (id)initWithBackLightController:(id)arg1 lockScreenManager:(id)arg2 lockStateAggregator:(id)arg3 quietModeStateAggregator:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
