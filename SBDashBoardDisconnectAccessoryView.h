//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "_UIActionSliderDelegate.h"

@class NSString, UIImageView, UILabel, UIView, _UIActionSlider;

@interface SBDashBoardDisconnectAccessoryView : SBDashBoardViewBase <_UIActionSliderDelegate>
{
    UIView *_topContentView;
    UIImageView *_warningImageView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_disconnectClippingView;
    UIImageView *_disconnectImageView;
    _UIActionSlider *_actionSlider;
    id <SBDisconnectAccessoryViewDelegate> _delegate;
    long long _actionType;
}

@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak id <SBDisconnectAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
