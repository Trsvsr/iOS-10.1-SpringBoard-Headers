//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBStarkSessionConfiguring.h"

@class AVExternalDevice, CRCarPlayAppPolicyEvaluator, CRVehicleInformation, FBSDisplay, NSMutableDictionary, NSSet, NSString, UIScreen, UITraitCollection;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring>
{
    CRVehicleInformation *_vehicleInformation;
    AVExternalDevice *_device;
    unsigned long long _interactionAffordances;
    long long _layoutJustification;
    FBSDisplay *_display;
    UIScreen *_screen;
    double _screenScale;
    _Bool _screenSupportsFocus;
    struct CGRect _screenBounds;
    UITraitCollection *_traitCollection;
    _Bool _connectedWirelessly;
    _Bool _knownVehicle;
    _Bool _OEMIconVisible;
    _Bool _pairedVehicle;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
    _Bool _acBackSupported;
    NSString *_layoutId;
    NSSet *__simulatedAccessoryProtocols;
}

+ (id)configurationForSettingsLayoutWithId:(id)arg1 onScreen:(id)arg2;
+ (id)configurationForSettingsLayoutWithId:(id)arg1;
@property(retain, nonatomic) NSSet *_simulatedAccessoryProtocols; // @synthesize _simulatedAccessoryProtocols=__simulatedAccessoryProtocols;
@property(retain, nonatomic) NSString *layoutId; // @synthesize layoutId=_layoutId;
@property(nonatomic, getter=isACBackSupported) _Bool acBackSupported; // @synthesize acBackSupported=_acBackSupported;
- (void).cxx_destruct;
- (void)_setSimulatedAccessoryProtocols:(id)arg1;
@property(nonatomic, getter=isPairedVehicle) _Bool pairedVehicle;
@property(nonatomic, getter=isKnownVehicle) _Bool knownVehicle;
@property(nonatomic, getter=isGeoSupported) _Bool geoSupported;
- (id)policyForApp:(id)arg1;
@property(readonly, nonatomic, getter=isOEMIconVisible) _Bool OEMIconVisible;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property(readonly, nonatomic, getter=isAmbientBrightnessNighttime) _Bool ambientBrightnessNighttime;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) struct CGRect screenBounds;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) FBSDisplay *display;
@property(readonly, nonatomic) _Bool screenSupportsFocus;
@property(readonly, nonatomic) long long layoutJustification;
@property(readonly, nonatomic) unsigned long long interactionAffordances;
@property(readonly, nonatomic) AVExternalDevice *device;
- (id)_init;
- (id)initWithVehicleInformation:(id)arg1 device:(id)arg2 screen:(id)arg3 display:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
