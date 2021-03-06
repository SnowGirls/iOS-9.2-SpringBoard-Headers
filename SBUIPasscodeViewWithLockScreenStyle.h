//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIView<SBUIPasscodeLockView>, _UIBackdropView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropView *_blurView;
    double _blurRadius;
    _Bool _blurEnabled;
}

@property(readonly, retain, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // @synthesize passcodeView=_passcodeView;
- (void)setBlurEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(CDUnknownBlockType)arg3;

@end

