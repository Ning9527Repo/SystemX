//
//  SBCustomDesktopIconPhotoPickerDelegate.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBCustomDesktopIconPhotoPickerDelegate.h"

@implementation SBCustomDesktopIconPhotoPickerDelegate

// IMP 0x0000a414  types v32@0:8@16@24
- (void)picker:(id)picker didFinishPicking:(id)didFinishPicking {
      long lVar1;
      undefined8 uVar2;
      long lVar3;
      undefined8 uVar4;
      ulong uVar5;
      undefined8 uVar6;
      undefined auVar7 [16];
      undefined auVar8 [16];
      undefined *local_78;
      undefined8 local_70;
      code *local_68;
      undefined *puStack_60;
      undefined8 local_58;

      auVar7 = _objc_retain(didFinishPicking);
      objc_msgSend_dismissViewControllerAnimated_completion_(picker,auVar7._8_8_,1,0);
      objc_msgSend_firstObject(auVar7._0_8_);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        objc_msgSend_bundleIdentifier(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        lVar3 = objc_msgSend_length();
        if (lVar3 != 0) {
          objc_msgSend_itemProvider(lVar1);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          auVar8 = _objc_opt_class(PTR__OBJC_CLASS___UIImage_0006f880);
          uVar5 = objc_msgSend_canLoadObjectOfClass_(uVar4,auVar8._8_8_,auVar8._0_8_);
          _objc_release(uVar4);
          _objc_release(uVar2);
          if ((uVar5 & 1) == 0) goto LAB_0000a574;
          objc_msgSend_bundleIdentifier(self);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_itemProvider(lVar1);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          uVar6 = _objc_opt_class(PTR__OBJC_CLASS___UIImage_0006f880);
          local_78 = PTR___NSConcreteStackBlock_00064200;
          local_70 = DAT_00053640;
          local_68 = FUN_0000a61c;
          puStack_60 = &DAT_00064578;
          auVar8 = _objc_retain(uVar2);
          uVar2 = auVar8._0_8_;
          local_58 = uVar2;
          objc_msgSend_loadObjectOfClass_completionHandler_(uVar4,auVar8._8_8_,uVar6,&local_78);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(local_58);
        }
        _objc_release(uVar2);
      }
    LAB_0000a574:
      _objc_release(lVar1);
      _objc_release(auVar7._0_8_);
      return;
}

// IMP 0x0000af6c  types @16@0:8
- (id)bundleIdentifier {
      return *(ID *)(self + 8);
}

// IMP 0x0000af74  types v24@0:8@16
- (void)setBundleIdentifier:(id)setBundleIdentifier {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x0000af7c  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + 8,0);
      return;
    }



    // 0000af88  decompile failed
}

@end
