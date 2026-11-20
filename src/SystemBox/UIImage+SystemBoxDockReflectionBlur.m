#import <UIKit/UIKit.h>

@interface UIImage (SystemBoxDockReflectionBlur)
- (id)systemBox_dockReflectionGaussianBlurImage;
@end

@implementation UIImage (SystemBoxDockReflectionBlur)

// IMP 0x00009894
- (id)systemBox_dockReflectionGaussianBlurImage {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      long lVar6;
      long lVar7;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined auVar8 [16];

      uVar2 = _objc_retainAutorelease();
      auVar8 = objc_msgSend_CGImage();
      uVar5 = auVar8._8_8_;
      if (auVar8._0_8_ == 0) {
        uVar5 = _objc_retain(uVar2);
        goto LAB_00009a18;
      }
      if (DAT_000704e8 != -1) {
        _dispatch_once(&DAT_000704e8,&PTR___NSConcreteGlobalBlock_00064528);
        uVar5 = extraout_x1_01;
      }
      objc_msgSend_imageWithCGImage_(PTR__OBJC_CLASS___CIImage_0006f870,uVar5,auVar8._0_8_);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      uVar3 = auVar8._0_8_;
      objc_msgSend_filterWithName_(PTR__OBJC_CLASS___CIFilter_0006f878,auVar8._8_8_,&cf_CIGaussianBlur);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      uVar4 = auVar8._0_8_;
      objc_msgSend_setValue_forKey_
                (uVar4,auVar8._8_8_,uVar3,*(undefined8 *)PTR__kCIInputImageKey_00064360);
      objc_msgSend_setValue_forKey_
                (uVar4,extraout_x1,&PTR__OBJC_CLASS___NSConstantDoubleNumber_00069080,
                 *(undefined8 *)PTR__kCIInputRadiusKey_00064368);
      objc_msgSend_outputImage(uVar4);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_extent(uVar3);
      objc_msgSend_imageByCroppingToRect_(uVar5);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = DAT_000704e0;
      if (lVar6 == 0) {
    LAB_000099e4:
        uVar5 = _objc_retain(uVar2);
      }
      else {
        objc_msgSend_extent(uVar3);
        lVar7 = objc_msgSend_createCGImage_fromRect_(uVar5,extraout_x1_00,lVar6);
        puVar1 = PTR__OBJC_CLASS___UIImage_0006f880;
        if (lVar7 == 0) goto LAB_000099e4;
        uVar5 = objc_msgSend_scale(uVar2);
        auVar8 = objc_msgSend_imageOrientation(uVar2);
        objc_msgSend_imageWithCGImage_scale_orientation_(uVar5,puVar1,auVar8._8_8_,lVar7,auVar8._0_8_);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(lVar7);
      }
      _objc_release(lVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
    LAB_00009a18:
      _objc_autoreleaseReturnValue(uVar5);
      return;
}

@end