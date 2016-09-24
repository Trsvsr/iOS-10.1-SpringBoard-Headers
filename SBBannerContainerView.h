//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBBannerContextView;

@interface SBBannerContainerView : UIView
{
    _Bool _modal;
    _Bool _highlighted;
    SBBannerContextView *_bannerView;
    UIView *_backgroundView;
    UIView *_inlayView;
    double _maximumHeight;
    UIView *_inlayContainerView;
}

@property(retain, nonatomic) UIView *inlayContainerView; // @synthesize inlayContainerView=_inlayContainerView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) __weak UIView *inlayView; // @synthesize inlayView=_inlayView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak SBBannerContextView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic, getter=isModal) _Bool modal; // @synthesize modal=_modal;
- (void).cxx_destruct;
- (double)_bannerBottomY;
- (struct CGRect)_inlineContainerFrame;
- (struct CGRect)_backgroundFrame;
- (void)_layoutBackgroundView;
- (void)_layoutInlayContainerView;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

