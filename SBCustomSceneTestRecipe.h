//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBScene, NSString;

@interface SBCustomSceneTestRecipe : NSObject <SBTestRecipe>
{
    FBScene *_scene;
}

+ (id)title;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

