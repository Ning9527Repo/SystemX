# 1.5-8-26 主库内嵌圆角

基线 23 主库 SHA256 de2661634217e6ab863808372c119355474ada8f764dbf23518024725e6389ba。
仅 arm64e 运行路径改动；普通 arm64 切片保留业务字节，不作为普通无根版发布。

- __TEXT 0x65000 原有零填充写入 439 字节代码及 C 字符串，不移动 segment/section/fixup。
- __init_offsets 从 0xb360 指向 wrapper；wrapper 先调用原 initializer 一次，再检查网格类和 double getter，然后用原库 MSHookMessageEx 导入装一次。
- IMP 与原库一致使用 paciza，原 IMP 调用 blraaz，栈返回 pacibsp/retab。
- 原 preferences reload 的 0x15918 gate store 改为 BL wrapper；wrapper 先执行原 store，再复用原字典 x19 和 0x33224 double reader 读取 iPadCardSwitcherCornerRadius，原通知链不变。
- __bss 扩展到 0x7f010，仍位于原 __DATA 的 0x80000 结束地址内；0x7f000 保存原 IMP，0x7f008 保存目标值。原 BSS 对象未移动。
- 默认0、关闭、非有限值、非正值透传原 getter；正值最高60。
- 不新增 SystemXCardRadius.dylib/plist；升级后 dpkg 应移除旧版本包拥有的伴生文件。无自动注销。

机器码源 radius.S 和 link.ld；可在 Linux clang/ld.lld 重新生成。实际圆角指令用 Unicorn 回归，PAC 仅建模，不能当设备认证测试。Mac codesign strict 全架构验证，包逐文件差异检查。真实 iOS 效果仍需安装后验证，不宣称 24/25 失效根因已证实。
