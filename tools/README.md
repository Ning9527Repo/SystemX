# 复现步骤

```bash
# 1. 解包
ar x com.wkk.systembox_1.5-8_iphoneos-arm64e.deb && tar xzf data.tar.gz

# 2. 元数据（纯 Python，chained fixups + 相对方法表）
python3 extract_meta.py <解包目录> ../out/meta

# 3. 拆分架构切片后交给 Ghidra 10.4 无头反编译
#    Dec.java.py 会先把 __objc_stubs 里的选择器映射成函数名
analyzeHeadless proj name -import slice.macho -scriptPath . \
    -postScript Dec.java.py input.json out.c

# 4. hook 表（寄存器前向模拟，解析 objc_getClass + selref）
python3 extract_hooks.py <解包目录> hooks.json

# 5. 生成源码树
python3 index_decompiled.py ../out/decompiled ../out/funcs.json
python3 generate_source.py
```
