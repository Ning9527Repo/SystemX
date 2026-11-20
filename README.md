# SystemX 1.5-8 · 完整逆向源码

原包 `com.wkk.systembox_1.5-8_iphoneos-arm64e.deb` 的完整反向工程。
5 个 Mach-O（10 个架构切片）全部反编译，35 个类、337 个方法、
576 条 hook 注册点、180,158 行反编译 C。

## 目录

```
src/        重建源码（35 个类 + category + 5 个组件的 hook/主逻辑）
layout/     原包资源，逐字节
Analysis/   反编译全文、hook 表、ObjC 元数据、配置键映射
docs/       架构 / 还原度 / 完整性核验 / hook 全表 / 类清单 / 编译
tools/      本次用的解析器与生成器（可复现）
Makefile    Theos 工程，5 tweak + 1 bundle
```

## 先看哪

1. `docs/00-完整性核验.md` —— 每个二进制多少个类、多少方法、多少 hook，逐项对账。
2. `docs/01-架构.md` —— 五个组件各自拦了什么系统 API。
3. `src/SystemBox/Hooks.xmi` —— 521 条 hook，带原调用地址和替换函数体。

## 实话

方法体是 Ghidra 反编译结果，逻辑 1:1，变量名没整理，本机没有 iOS SDK 所以没编译过。
不含成品 deb。
