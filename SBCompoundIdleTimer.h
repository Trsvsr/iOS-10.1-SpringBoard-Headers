//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIdleTimer.h"
#import "SBIdleTimerDelegate.h"

@class NSArray, NSString;

@interface SBCompoundIdleTimer : NSObject <SBIdleTimerDelegate, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;
    NSArray *_timers;
    unsigned long long _currentTimerIdx;
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isTimerCurrent:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerDidReceiveUserEvent:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (id)idleTimerForExtension;
- (_Bool)isEqualToTimer:(id)arg1;
- (void)reset;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimers:(id)arg1 copy:(_Bool)arg2;
- (id)initWithTimers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

