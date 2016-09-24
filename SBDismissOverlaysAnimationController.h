//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@interface SBDismissOverlaysAnimationController : SBUIAnimationController
{
    unsigned long long _dismissOptions;
}

+ (unsigned long long)_overlayToDismissForOptions:(unsigned long long)arg1;
+ (_Bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dismissOptions; // @synthesize dismissOptions=_dismissOptions;
- (id)animationSettings;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

