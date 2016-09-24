//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject
{
    NSMutableDictionary *_appToSheetMap;
    UIWindow *_presentationWindow;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)sheetWantsProgress;
- (id)applicationForTopSheet;
- (void)dismissSheetsForApplication:(id)arg1;
- (void)dismissAllSheets;
- (_Bool)isShowingSheetsForApplication:(id)arg1;
- (_Bool)isShowingSheets;
- (void)sendStatusBarOrientationWillChangeToSheets:(long long)arg1 duration:(float)arg2;
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(_Bool)arg3 animated:(_Bool)arg4;
- (void)dismissSheetView:(id)arg1 animated:(_Bool)arg2;
- (void)_tearDownSheet:(id)arg1;
- (void)presentSheetView:(id)arg1 animated:(_Bool)arg2;
- (id)init;

@end

