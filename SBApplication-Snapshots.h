//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBApplication (Snapshots)
- (struct CGSize)snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2 contentFrame:(struct CGRect *)arg3;
- (struct CGRect)snapshotFrameForClassicInsideBounds:(struct CGRect)arg1 forOrientation:(long long)arg2 scaleFactor:(double *)arg3;
- (id)_screenFromSceneID:(id)arg1;
- (void)_noteSnapshotDidUpdate:(long long)arg1;
- (void)_noteSnapshotDidUpdate;
- (id)_snapshotCreationDeletionQueueForSceneID:(id)arg1;
- (void)_protectedDataDidBecomeAvailable:(id)arg1;
- (void)_saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSnapshotForContext:(id)arg1;
- (void)deleteAllSnapshots;
- (void)createDownscaledSnapshotFromFullSizeSnapshotForMainScene;
- (void)saveSuspendSnapshotForSceneSnapshot:(id)arg1;
- (void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flushSnapshotsForSceneID:(id)arg1;
- (void)flushSnapshotsForAllScenesIncludingAllLegacyImages;
- (void)flushSnapshotsForAllScenes;
@end

