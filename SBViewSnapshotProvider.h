//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(CDUnknownBlockType)arg2;
- (void)snapshotWithImageBlock:(CDUnknownBlockType)arg1;
- (id)snapshot;
- (id)initWithView:(id)arg1;

@end

