# SystemX 1.5-8-25：安全延迟网格圆角伴生库

本入口不编译逆向还原的旧项目；只用 macOS Xcode 编译 `src/CardRadius/CardRadius.m`，再以仓库的 `repack_clearbutton.py` 复现 1.5-8-23 底包，并增量打包。

- 原始 deb / donor 的 SHA-256 必须匹配原脚本白名单；donor 仅提供 14 段补丁与签名模板，不作为完整 vendor 替身。
- 所有旧 payload 保留；仅 `Desktop.plist` 插入一个 `PSSliderCell`。新增 `SystemXCardRadius.dylib` 及仅 SpringBoard 的 filter。
- 默认 `iPadCardSwitcherCornerRadius=0` 表示沿用系统原值；只有 `com.wkk.systembox` 的 `iPadCardSwitcherEnabled` 开启且圆角为有效正数时生效，范围 0–60。
- 读取原 Prefs 使用的 RootHide `jbroot(NSString *)` 路径，监听其真实 Darwin 通知 `com.wkk.systembox.prefschanged`；不改旧设置控制器。
- 只 hook `SBGridLayoutSwitcherModifier -_cornerRadius`，安装前验证返回 double、self/selector 参数编码及参数数量；精确类门控，未知子类透传。原 getter 始终先调用，系统仍负责过渡插值。
- 接口依据为 iOS 17.0 SpringBoard 私有头声明，尚无目标机实际调用/视觉证据；方法缺失或 ABI 不匹配时不安装，保持原行为。不是全局卡片 setter，更不是材质 block。
- 不 hook 全局 UIView/CALayer，不变更大小、间距、标题、动画、清除胶囊。
- `Version: 1.5-8-25`；`Author` / `Maintainer: Ning&wkk`。
- CI 仅 `workflow_dispatch`。编译参数明确 `-arch arm64e`，验收 Mach-O subtype 必须为 `0x80000002`，不允许改 header 冒充 arm64e。
- 保留原包两 slice 的 RootHide 私有依赖；本产物不是通用普通 rootless arm64 包，未提供该适配。
- 无安装、注入、注销或执行维护脚本步骤。

## 本地静态与打包验证

```sh
cc tools/test_radius_policy.c -lm -o /tmp/test_radius_policy
/tmp/test_radius_policy
python3 tools/package_card_radius.py --library build/SystemXCardRadius.dylib --output build/com.wkk.systembox_1.5-8-25_iphoneos-arm64e.deb
python3 tools/verify_card_radius.py --package build/com.wkk.systembox_1.5-8-25_iphoneos-arm64e.deb --report build/verification.json
```

签名验证为内嵌 CodeDirectory 代码页哈希验证；云端同时用 Apple `codesign --verify --strict` 验伴生库。静态通过与构建通过不等于已在设备验证效果或稳定性。
