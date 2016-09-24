//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBCornerAnimatingImageView, UIImage;

@interface SBSwitcherSnapshotImageView : UIView
{
    SBCornerAnimatingImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    _Bool _usesNonuniformScaling;
    _Bool _hasOpaqueContents;
}

@property(nonatomic) _Bool hasOpaqueContents; // @synthesize hasOpaqueContents=_hasOpaqueContents;
@property(nonatomic) _Bool usesNonuniformScaling; // @synthesize usesNonuniformScaling=_usesNonuniformScaling;
- (void).cxx_destruct;
- (void)_updateCornerRadius;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (struct CGAffineTransform)scalingTransform;
- (void)layoutSubviews;
@property(nonatomic) double cornerRadius;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end

