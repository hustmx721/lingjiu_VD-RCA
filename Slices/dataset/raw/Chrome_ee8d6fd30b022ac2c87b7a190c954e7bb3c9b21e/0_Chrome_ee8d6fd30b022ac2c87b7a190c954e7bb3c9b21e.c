bool CaptureVisibleTabFunction::CaptureSnapshotFromBackingStore(
     BackingStore* backing_store) {
 
   skia::PlatformCanvas temp_canvas;
  if (!backing_store->CopyFromBackingStore(gfx::Rect(backing_store->size()),
                                            &temp_canvas)) {
     return false;
   }
  SendResultFromBitmap(
      temp_canvas.getTopPlatformDevice().accessBitmap(false));
  return true;
}
