//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBTestAlertItem : SBAlertItem
{
    _Bool _shouldShowInLockScreen;
    _Bool _forcesModalAlertAppearance;
    _Bool _behavesSuperModally;
    _Bool _allowMenuButtonDismissal;
    _Bool _allowLockScreenDismissal;
    _Bool _reappearsAfterUnlock;
    _Bool _reappearsAfterLock;
    _Bool __dismissesAutomatically;
    NSString *_title;
}

+ (id)alertItemWithShowInLockScreen:(_Bool)arg1 forcesModal:(_Bool)arg2 superModal:(_Bool)arg3;
@property(nonatomic) _Bool _dismissesAutomatically; // @synthesize _dismissesAutomatically=__dismissesAutomatically;
@property(nonatomic) _Bool reappearsAfterLock; // @synthesize reappearsAfterLock=_reappearsAfterLock;
@property(nonatomic) _Bool reappearsAfterUnlock; // @synthesize reappearsAfterUnlock=_reappearsAfterUnlock;
@property(nonatomic) _Bool allowLockScreenDismissal; // @synthesize allowLockScreenDismissal=_allowLockScreenDismissal;
@property(nonatomic) _Bool allowMenuButtonDismissal; // @synthesize allowMenuButtonDismissal=_allowMenuButtonDismissal;
@property(nonatomic) _Bool behavesSuperModally; // @synthesize behavesSuperModally=_behavesSuperModally;
@property(nonatomic) _Bool forcesModalAlertAppearance; // @synthesize forcesModalAlertAppearance=_forcesModalAlertAppearance;
@property(nonatomic) _Bool shouldShowInLockScreen; // @synthesize shouldShowInLockScreen=_shouldShowInLockScreen;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

