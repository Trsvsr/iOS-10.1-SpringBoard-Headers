//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface _SBRootFolderLayoutWrapperView : UIView
{
    double _statusBarHeightAdjustment;
    double _headerOffset;
    UIView *_wrappedView;
    struct CGSize _extendedSize;
}

@property(retain, nonatomic) UIView *wrappedView; // @synthesize wrappedView=_wrappedView;
@property(nonatomic) struct CGSize extendedSize; // @synthesize extendedSize=_extendedSize;
@property(nonatomic) double headerOffset; // @synthesize headerOffset=_headerOffset;
@property(nonatomic) double statusBarHeightAdjustment; // @synthesize statusBarHeightAdjustment=_statusBarHeightAdjustment;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)layoutSubviews;

@end

