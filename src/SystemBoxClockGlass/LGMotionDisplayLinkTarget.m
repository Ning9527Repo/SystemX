//
//  LGMotionDisplayLinkTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGMotionDisplayLinkTarget.h"

@implementation LGMotionDisplayLinkTarget

// IMP 0x00015fd4  types v24@0:8@16
- (void)tick:(id)tick {
      undefined8 uVar1;
      undefined8 extraout_x1;
      double dVar2;
      double dVar3;

      uVar1 = _objc_retain(tick);
      dVar2 = (double)objc_msgSend_targetTimestamp();
      dVar3 = (double)objc_msgSend_timestamp(uVar1);
      if (dVar3 < dVar2) {
        objc_msgSend_targetTimestamp(uVar1);
        objc_msgSend_timestamp(uVar1);
      }
      FUN_0001603c();
      objc_msgSend_setPaused_(uVar1,extraout_x1,1);
      _objc_release(uVar1);
      return;
}

@end
