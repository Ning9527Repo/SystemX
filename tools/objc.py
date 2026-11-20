"""ObjC metadata extraction from Mach-O (chained-fixup aware, relative method lists)."""
import struct

RO_META = 1
RO_ROOT = 2


class ObjCParser:
    def __init__(self, m):
        self.m = m
        self.ptr = {}
        if getattr(m, 'cf', None):
            self.ptr = m.cf.get('ptr', {})
        self.classes = []
        self.categories = []
        self.protocols = []
        self.selrefs = []
        self.classrefs = []
        sr = m.section_named('__DATA', '__objc_selrefs') or m.section_named('__DATA_CONST', '__objc_selrefs')
        self._selref_lo = sr.addr if sr else -1
        self._selref_hi = (sr.addr + sr.size) if sr else -1

    # resolve a pointer slot (chained fixup aware, lazy decode)
    def P(self, addr):
        if addr in self.ptr:
            return self.ptr[addr]
        raw = self.m.u64(addr)
        if raw == 0:
            return 0
        if addr in self.m.cf['binds']:
            return 0
        fmt = self.m.cf.get('fmt', 6)
        if fmt in (1, 9, 12):
            if (raw >> 62) & 1:
                return 0
            t = (raw & 0xffffffff) if (raw >> 63) & 1 else (raw & 0x7ffffffffff)
        else:
            if (raw >> 63) & 1:
                return 0
            t = raw & 0xfffffffff
        if t and self.m.off_for_addr(t) is not None:
            return t
        return raw

    def bind_name(self, addr):
        return self.m.cf['binds'].get(addr)

    def p_at(self, addr):
        return self.P(addr)

    def cstr_p(self, addr):
        t = self.P(addr)
        return self.m.cstr_addr(t) if t else ''

    def is_selref(self, addr):
        return self._selref_lo <= addr < self._selref_hi

    def sel_name(self, addr):
        if self.is_selref(addr):
            addr = self.P(addr)
        return self.m.cstr_addr(addr) if addr else ''

    # ---- method list ----
    def parse_method_list(self, addr):
        out = []
        if not addr:
            return out
        entsize_flags = self.m.u32(addr)
        count = self.m.u32(addr + 4)
        rel = bool(entsize_flags & 0x80000000)
        entsize = entsize_flags & 0xfffc
        if rel:
            p = addr + 8
            for i in range(count):
                e = p + i * entsize
                name_off = self.m.s32(e)
                types_off = self.m.s32(e + 4)
                imp_off = self.m.s32(e + 8)
                name = self.sel_name(e + name_off) if name_off else ''
                types = self.m.cstr_addr(e + 4 + types_off) if types_off else ''
                imp = e + 8 + imp_off if imp_off else 0
                out.append(dict(name=name, types=types, imp=imp))
        else:
            p = addr + 8
            for i in range(count):
                e = p + i * entsize
                name_p = self.P(e)
                types_p = self.P(e + 8)
                imp = self.P(e + 16)
                out.append(dict(name=self.m.cstr_addr(name_p), types=self.m.cstr_addr(types_p),
                                imp=imp))
        return out

    def parse_ivar_list(self, addr):
        out = []
        if not addr:
            return out
        entsize = self.m.u32(addr)
        count = self.m.u32(addr + 4)
        p = addr + 8
        for i in range(count):
            e = p + i * entsize
            off_p = self.P(e)
            name_p = self.P(e + 8)
            types_p = self.P(e + 16)
            align = self.m.u32(e + 24)
            size = self.m.u32(e + 28)
            off = self.m.u32(off_p) if off_p else 0
            if off > 0xffff:
                off = off & 0xffffffff
            out.append(dict(name=self.m.cstr_addr(name_p), types=self.m.cstr_addr(types_p),
                            offset=off, align=align, size=size))
        return out

    def parse_property_list(self, addr):
        out = []
        if not addr:
            return out
        entsize = self.m.u32(addr)
        count = self.m.u32(addr + 4)
        p = addr + 8
        for i in range(count):
            e = p + i * entsize
            name_p = self.P(e)
            attrs_p = self.P(e + 8)
            out.append(dict(name=self.m.cstr_addr(name_p), attrs=self.m.cstr_addr(attrs_p)))
        return out

    def parse_protocol_list(self, addr):
        out = []
        if not addr:
            return out
        cnt = self.m.u64(addr)
        for i in range(min(cnt, 200)):
            q = self.P(addr + 8 + i * 8)
            if q:
                pr = self.parse_protocol(q)
                out.append(pr['name'])
        return out

    def parse_protocol(self, addr):
        name_p = self.P(addr + 8)
        protos = self.parse_protocol_list(self.p_at(addr + 16))
        inst = self.parse_method_list(self.p_at(addr + 24))
        cls = self.parse_method_list(self.p_at(addr + 32))
        opt_inst = self.parse_method_list(self.p_at(addr + 40))
        opt_cls = self.parse_method_list(self.p_at(addr + 48))
        return dict(addr=addr, name=self.m.cstr_addr(name_p), protocols=protos,
                    instance=inst, classm=cls, opt_instance=opt_inst, opt_class=opt_cls)

    def parse_class(self, addr):
        # class_t { isa, superclass, cache, vtable, data }
        isa = self.P(addr)
        sup = self.P(addr + 8)
        data = self.P(addr + 32)
        if not data:
            return None
        # data & ~7 -> class_ro_t
        ro = data & 0x7fffffffff
        flags = self.m.u32(ro)
        instance_start = self.m.u32(ro + 4)
        instance_size = self.m.u32(ro + 8)
        ivar_layout_p = self.P(ro + 12) if False else 0
        l = self.m.read(ro + 12, 4)
        name_p = self.P(ro + 24)
        methods_p = self.P(ro + 32)
        protos_p = self.P(ro + 40)
        ivars_p = self.P(ro + 48)
        weak_ivar_p = self.P(ro + 56)
        props_p = self.P(ro + 64)
        name = self.m.cstr_addr(name_p)
        return dict(addr=addr, name=name, ro=ro, flags=flags,
                    instance_start=instance_start, instance_size=instance_size,
                    superclass_addr=sup,
                    superclass=self.slot_class_name(addr + 8),
                    methods=self.parse_method_list(methods_p),
                    protocols=self.parse_protocol_list(protos_p),
                    ivars=self.parse_ivar_list(ivars_p),
                    properties=self.parse_property_list(props_p),
                    class_methods_ptr=0)

    def slot_class_name(self, slot):
        bn = self.bind_name(slot)
        if bn:
            for pre in ('_OBJC_CLASS_$_', '_OBJC_METACLASS_$_'):
                if bn.startswith(pre):
                    return bn[len(pre):]
            return bn
        return self.class_name_at(self.P(slot))

    def class_name_at(self, addr):
        if not addr:
            return None
        bn = self.bind_name(addr)
        if bn:
            for pre in ('_OBJC_CLASS_$_', '_OBJC_METACLASS_$_'):
                if bn.startswith(pre):
                    return bn[len(pre):]
            return bn
        try:
            d = self.P(addr + 32)
            if not d:
                return None
            ro = d & 0x7fffffffff
            return self.m.cstr_addr(self.P(ro + 24))
        except Exception:
            return None

    def parse_category(self, addr):
        name_p = self.P(addr)
        cls_p = self.P(addr + 8)
        inst_p = self.P(addr + 16)
        cls_m_p = self.P(addr + 24)
        protos_p = self.P(addr + 32)
        props_p = self.P(addr + 40)
        return dict(addr=addr, name=self.m.cstr_addr(name_p),
                    class_name=self.slot_class_name(addr + 8),
                    instance=self.parse_method_list(inst_p),
                    classm=self.parse_method_list(cls_m_p),
                    protocols=self.parse_protocol_list(protos_p),
                    properties=self.parse_property_list(props_p) if props_p else [])

    def run(self):
        m = self.m
        cl = m.section_named('__DATA', '__objc_classlist') or m.section_named('__DATA_CONST', '__objc_classlist')
        if cl:
            n = cl.size // 8
            for i in range(n):
                a = self.P(cl.addr + i * 8)
                if a:
                    c = self.parse_class(a)
                    if c and c['name']:
                        self.classes.append(c)
        cat = m.section_named('__DATA', '__objc_catlist') or m.section_named('__DATA_CONST', '__objc_catlist')
        if cat:
            n = cat.size // 8
            for i in range(n):
                a = self.P(cat.addr + i * 8)
                if a:
                    self.categories.append(self.parse_category(a))
        pr = m.section_named('__DATA', '__objc_protolist') or m.section_named('__DATA_CONST', '__objc_protolist')
        if pr:
            n = pr.size // 8
            for i in range(n):
                a = self.P(pr.addr + i * 8)
                if a:
                    self.protocols.append(self.parse_protocol(a))
        sr = m.section_named('__DATA', '__objc_selrefs') or m.section_named('__DATA_CONST', '__objc_selrefs')
        if sr:
            for i in range(sr.size // 8):
                self.selrefs.append(self.cstr_p(sr.addr + i * 8))
        cr = m.section_named('__DATA', '__objc_classrefs') or m.section_named('__DATA_CONST', '__objc_classrefs')
        if cr:
            for i in range(cr.size // 8):
                self.classrefs.append(self.class_name_at(self.P(cr.addr + i * 8)))
        return self


def type_encoding_to_signature(types):
    """Convert ObjC type encoding to a readable method signature."""
    if not types:
        return ('void', [])
    s = types
    i = 0
    # skip offsets / qualifiers
    while i < len(s) and s[i] in 'rnNoORV':
        i += 1
    if i < len(s) and s[i] in '+-':
        i += 1
    while i < len(s) and s[i].isdigit():
        i += 1
    ret, i = parse_type(s, i)
    while i < len(s) and s[i].isdigit():
        i += 1
    args = []
    while i < len(s):
        if s[i] == '"':
            j = s.find('"', i + 1)
            i = j + 1 if j > 0 else len(s)
            continue
        while i < len(s) and s[i].isdigit():
            i += 1
        if i >= len(s):
            break
        t, i = parse_type(s, i)
        args.append(t)
    return (ret, args)


def parse_type(s, i):
    if i >= len(s):
        return ('id', i)
    c = s[i]
    simple = {'c': 'char', 'C': 'unsigned char', 's': 'short', 'S': 'unsigned short',
              'i': 'int', 'I': 'unsigned int', 'l': 'long', 'L': 'unsigned long',
              'q': 'long long', 'Q': 'unsigned long long', 'f': 'float', 'd': 'double',
              'B': 'BOOL', 'v': 'void', '*': 'char *', ':': 'SEL', '#': 'Class',
              '?': 'void *', 'T': 'uint64_t', 'D': 'long double'}
    if c in simple:
        return (simple[c], i + 1)
    if c == '@':
        i += 1
        if i < len(s) and s[i] == '?':
            return ('id /* block */', i + 1)
        if i < len(s) and s[i] == '"':
            j = s.find('"', i + 1)
            name = s[i + 1:j]
            return (name + ' *', j + 1)
        return ('id', i)
    if c == '^':
        t, i = parse_type(s, i + 1)
        return (t + ' *', i)
    if c == '{':
        depth = 0
        j = i
        while j < len(s):
            if s[j] == '{':
                depth += 1
            elif s[j] == '}':
                depth -= 1
                if depth == 0:
                    break
            j += 1
        body = s[i + 1:j]
        name = body.split('=')[0]
        return (name, j + 1)
    if c == '[':
        j = s.find(']', i)
        body = s[i + 1:j]
        n = ''
        k = 0
        while k < len(body) and body[k].isdigit():
            n += body[k]; k += 1
        t, _ = parse_type(body, k)
        return (f'{t}[{n}]', j + 1)
    if c == '(':
        j = s.find(')', i)
        return ('union', j + 1)
    if c == 'b':
        j = i + 1
        while j < len(s) and s[j].isdigit():
            j += 1
        return ('uint32_t', j)
    if c == '@?':
        return ('id', i + 2)
    return ('id', i + 1)
