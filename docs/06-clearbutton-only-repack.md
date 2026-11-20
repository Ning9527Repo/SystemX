# 1.5-8-23 清除按钮单项补丁

本目录保留原版 1.5-8 的完整逆向源码、资源和原始布局。清除按钮补丁只在原版
`SystemBox.dylib` 的两个 fat Mach-O 切片中修改按钮相关指令和常量；Dock 后端、
`DockGlass.metallib`、ClockGlass、设置 bundle 及其他文件不改。

## 可复现重打包

```sh
python3 repack_clearbutton.py \
  patches/clearbutton-1.5-8-23/com.wkk.systembox_1.5-8_iphoneos-arm64e.deb \
  -o com.wkk.systembox_1.5-8-23_iphoneos-arm64e.deb
```

脚本会锁定原始底包 SHA256 和补丁库 SHA256，检查 14 个双架构补丁范围，更新
原有 ad-hoc CodeDirectory 页哈希，并验证除 `SystemBox.dylib` 外所有 payload
文件逐字节一致。`DEBIAN/control` 只将版本改为 `1.5-8-23`；Maintainer 和
Author 保持原版 `wkk`。

本补丁未进行设备安装或真机运行验证。
