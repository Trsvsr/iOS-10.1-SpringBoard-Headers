//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "SBVolumePressBandit.h"

@class BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SBBulletinBannerController : NSObject <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit>
{
    NSMutableArray *_bulletinQueue;
    BBObserver *_observer;
    NSMutableSet *_sectionIDsToPend;
    _Bool _quietModeEnabled;
    id <SBUIBannerTarget> _bannerTarget;
    NSMutableDictionary *_bulletinIdentifierToBannerContextCache;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void).cxx_destruct;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (void)_syncLockScreenDismissalsForSeedBulletin:(id)arg1 additionalBulletins:(id)arg2;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)arg1;
- (void)_showTestBanner:(_Bool)arg1;
- (void)_removeNextBulletinIfNecessary;
- (void)_queueBulletin:(id)arg1;
- (_Bool)_replaceBulletin:(id)arg1;
- (void)_removeBulletin:(id)arg1;
- (unsigned long long)_indexOfQueuedBulletinID:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)_bannerContextForBulletin:(id)arg1;
- (void)removeAllCachedBanners;
- (void)removeCachedBannerForBulletinID:(id)arg1;
- (void)cacheBannerForBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modallyPresentBannerForBulletin:(id)arg1 action:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

