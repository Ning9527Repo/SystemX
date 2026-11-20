//
//  SBWhitelistCell.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBWhitelistCell.h"

@implementation SBWhitelistCell

// IMP 0x00009974  types @40@0:8q16@24@32
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier {
      ID IVar1;
      undefined auVar2 [16];
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_0001e010;
      local_30 = self;
      IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,3);
      if (IVar1 != 0) {
        auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UISwitch_0001df38);
        objc_msgSend_setWhitelistSwitch_(IVar1,auVar2._8_8_,auVar2._0_8_);
        _objc_release(auVar2._0_8_);
        objc_msgSend_whitelistSwitch(IVar1);
        auVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setAccessoryView_(IVar1,auVar2._8_8_,auVar2._0_8_);
        _objc_release(auVar2._0_8_);
        objc_msgSend_whitelistSwitch(IVar1);
        auVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addTarget_action_forControlEvents_
                  (auVar2._0_8_,auVar2._8_8_,IVar1,PTR_s_switchToggled__0001ddb0,0x1000);
        _objc_release(auVar2._0_8_);
      }
      return IVar1;
}

// IMP 0x00009a3c  types v16@0:8
- (void)prepareForReuse {
      undefined8 extraout_x1;
      undefined auVar1 [16];
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_0001e010;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_prepareForReuse_0001d9f8);
      objc_msgSend_imageView(self);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setImage_(auVar1._0_8_,auVar1._8_8_,0);
      _objc_release(auVar1._0_8_);
      objc_msgSend_setIconLoadToken_(self,extraout_x1,0);
      return;
}

// IMP 0x00009aac  types v24@0:8@16
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier {
      long lVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 extraout_x1;
      undefined auVar5 [16];
      undefined *local_88;
      undefined8 local_80;
      code *local_78;
      undefined *puStack_70;
      undefined8 local_68;
      ID IStack_60;
      undefined8 local_58;
      ID local_50;
      undefined *puStack_48;

      lVar1 = _objc_retain(refreshCellContentsWithSpecifier);
      puStack_48 = PTR_PTR_0001e010;
      local_50 = self;
      _objc_msgSendSuper2(&local_50,PTR_s_refreshCellContentsWithSpecifier_0001da28,lVar1);
      if (lVar1 != 0) {
        objc_msgSend_propertyForKey_(lVar1,extraout_x1,&cf_bundleID);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        uVar4 = auVar5._0_8_;
        objc_msgSend_setAppBundleID_(self,auVar5._8_8_,uVar4);
        objc_msgSend_name(lVar1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_textLabel(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,uVar2);
        _objc_release(auVar5._0_8_);
        _objc_release(uVar2);
        objc_msgSend_detailTextLabel(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,uVar4);
        _objc_release(auVar5._0_8_);
        objc_msgSend_performGetter(lVar1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar3 = objc_msgSend_boolValue();
        objc_msgSend_whitelistSwitch(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setOn_(auVar5._0_8_,auVar5._8_8_,uVar3);
        _objc_release(auVar5._0_8_);
        objc_msgSend_imageView(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setImage_(auVar5._0_8_,auVar5._8_8_,0);
        _objc_release(auVar5._0_8_);
        auVar5 = _objc_retain(uVar4);
        uVar4 = auVar5._0_8_;
        objc_msgSend_setIconLoadToken_(self,auVar5._8_8_,uVar4);
        _dispatch_get_global_queue(9,0);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        local_88 = PTR___NSConcreteStackBlock_00018090;
        local_80 = DAT_00011fc0;
        local_78 = FUN_00009cac;
        puStack_70 = &DAT_000182e8;
        local_68 = uVar4;
        IStack_60 = self;
        local_58 = uVar4;
        uVar4 = _objc_retain(uVar4);
        _dispatch_async(uVar3,&local_88);
        _objc_release(uVar3);
        _objc_release(local_58);
        _objc_release(local_68);
        _objc_release(uVar4);
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
      return;
}

// IMP 0x00009e80  types v24@0:8@16
- (void)switchToggled:(id)switchToggled {
      undefined *puVar1;
      undefined8 uVar2;
      long lVar3;
      undefined auVar4 [16];

      uVar2 = _objc_retain(switchToggled);
      objc_msgSend_specifier(self);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_0001df30;
      if (lVar3 != 0) {
        auVar4 = objc_msgSend_isOn(uVar2);
        objc_msgSend_numberWithBool_(puVar1,auVar4._8_8_,auVar4._0_8_);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_performSetterWithValue_(lVar3,auVar4._8_8_,auVar4._0_8_);
        _objc_release(auVar4._0_8_);
      }
      _objc_release(lVar3);
      _objc_release(uVar2);
      return;
}

// IMP 0x00009f10  types @16@0:8
- (id)whitelistSwitch {
      return *(ID *)(self + (long)_whitelistSwitch);
}

// IMP 0x00009f20  types v24@0:8@16
- (void)setWhitelistSwitch:(id)setWhitelistSwitch {
      _objc_storeStrong(self + (long)_whitelistSwitch,setWhitelistSwitch);
      return;
}

// IMP 0x00009f34  types @16@0:8
- (id)appBundleID {
      return *(ID *)(self + (long)_appBundleID);
}

// IMP 0x00009f44  types v24@0:8@16
- (void)setAppBundleID:(id)setAppBundleID {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009f50  types @16@0:8
- (id)iconLoadToken {
      return *(ID *)(self + (long)_iconLoadToken);
}

// IMP 0x00009f60  types v24@0:8@16
- (void)setIconLoadToken:(id)setIconLoadToken {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009f6c  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_iconLoadToken,0);
      _objc_storeStrong(self + (long)_appBundleID,0);
      _objc_storeStrong(self + (long)_whitelistSwitch,0);
      return;
}

@end
