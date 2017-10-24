//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBLockScreenView;

@protocol SBLockScreenViewDelegate <NSObject>
- (_Bool)lockScreenViewIsCurrentlyBeingDisplayed;
- (void)resetCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)addCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)removeCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (_Bool)isAllowingWallpaperBlurUpdates;
- (_Bool)wantsToShowStatusBarTime;
- (_Bool)shouldShowSlideToUnlockTextImmediately;
- (NSString *)effectiveCustomSlideToUnlockText;
- (_Bool)lockScreenViewPhonePluginIsActive;
- (void)lockScreenView:(SBLockScreenView *)arg1 didEndScrollingOnPage:(long long)arg2;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(_Bool)arg2;
- (void)lockScreenViewDidBeginScrolling:(SBLockScreenView *)arg1;
- (void)lockScreenView:(SBLockScreenView *)arg1 didScrollToPage:(long long)arg2;
@end
