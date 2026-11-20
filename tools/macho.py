"""Minimal but complete Mach-O parser: fat slices, load commands, chained fixups,
objc metadata (class/ro/method/ivar/property/protocol/category), symbols, cstrings."""
import struct, sys

MH_MAGIC_64 = 0xfeedfacf
LC_SEGMENT_64 = 0x19
LC_SYMTAB = 0x2
LC_DYSYMTAB = 0xb
LC_DYLD_INFO = 0x22
LC_DYLD_INFO_ONLY = 0x80000022
LC_DYLD_CHAINED_FIXUPS = 0x80000034
LC_DYLD_EXPORTS_TRIE = 0x80000033

S_ZEROFILL = 1
S_CSTRING_LITERALS = 2

VM_PROT_WRITE = 2


class Section:
    def __init__(self, name, segname, addr, size, offset, flags, align, nreloc):
        self.name, self.segname = name, segname
        self.addr, self.size, self.offset = addr, size, offset
        self.flags, self.align, self.nreloc = flags, align, nreloc

    def __repr__(self):
        return f"<Sect {self.segname},{self.name} @{self.addr:#x} sz={self.size:#x}>"


class Segment:
    def __init__(self, d, off):
        (self.name, self.vmaddr, self.vmsize, self.fileoff, self.filesize,
         self.maxprot, self.initprot, self.nsects, self.flags) = struct.unpack(
            '<16sQQQQiiII', d[off + 8:off + 72])
        self.name = self.name.rstrip(b'\0').decode('utf-8', 'replace')
        self.sections = []
        p = off + 72
        for _ in range(self.nsects):
            (sname, sseg, saddr, ssize, soff, salign, sreloff, snreloc, sflags,
             _r1, _r2, _r3) = struct.unpack('<16s16sQQIIIIIIII', d[p:p + 80])
            self.sections.append(Section(sname.rstrip(b'\0').decode('utf-8', 'replace'),
                                         sseg.rstrip(b'\0').decode('utf-8', 'replace'),
                                         saddr, ssize, soff, sflags, salign, snreloc))
            p += 80

    def __repr__(self):
        return f"<Seg {self.name} @{self.vmaddr:#x} sz={self.vmsize:#x}>"


class MachO:
    def __init__(self, data, base_off=0, slice_size=None):
        self.d = data
        self.base = base_off
        self.size = slice_size if slice_size is not None else len(data) - base_off
        hdr = self.d[self.base:self.base + 32]
        magic, cpu, sub, ft, ncmds, sizeofcmds, flags, res = struct.unpack('<IiiIIIII', hdr)
        if magic != MH_MAGIC_64:
            raise ValueError(f'not 64-bit mach-o: {magic:#x}')
        self.cputype, self.cpusubtype, self.filetype = cpu, sub, ft
        self.arch = 'arm64e' if (sub & 0xffffff) == 2 else 'arm64'
        self.segments = []
        self.sections = []
        self.ncmds = ncmds
        self.libs = []
        self.uuid = None
        self.symtab = None
        self.chained = None
        self.dyld_info = None
        self.platform = None
        self.exe_seg = None
        p = self.base + 32
        for _ in range(ncmds):
            cmd, cmdsize = struct.unpack('<II', self.d[p:p + 8])
            if cmd == LC_SEGMENT_64:
                seg = Segment(self.d, p)
                self.segments.append(seg)
                self.sections.extend(seg.sections)
                if seg.fileoff == 0 and seg.filesize > 0:
                    self.exe_seg = seg
            elif cmd == LC_SYMTAB:
                symoff, nsyms, stroff, strsize = struct.unpack('<IIII', self.d[p + 8:p + 24])
                self.symtab = (symoff, nsyms, stroff, strsize)
            elif cmd in (LC_DYLD_INFO, LC_DYLD_INFO_ONLY):
                (ross, rosz, binds, bindsz, wbind, wbindsz, lbind, lbindsz,
                 exp, expsz) = struct.unpack('<10I', self.d[p + 8:p + 48])
                self.dyld_info = dict(rebase=(ross, rosz), bind=(binds, bindsz),
                                      weak=(wbind, wbindsz), lazy=(lbind, lbindsz),
                                      export=(exp, expsz))
            elif cmd == LC_DYLD_CHAINED_FIXUPS:
                off, sz = struct.unpack('<II', self.d[p + 8:p + 16])
                self.chained = (off, sz)
            elif cmd == 0xc:
                noff = struct.unpack('<I', self.d[p + 8:p + 12])[0]
                self.libs.append(self.cstr_at(p + noff))
            elif cmd == 0x1b:  # LC_UUID
                self.uuid = self.d[p + 8:p + 24].hex()
            elif cmd == 0x32:  # LC_BUILD_VERSION
                self.platform = struct.unpack('<I', self.d[p + 8:p + 12])[0]
            p += cmdsize

    # ---------- address helpers ----------
    def seg_for_addr(self, addr):
        for s in self.segments:
            if s.vmaddr <= addr < s.vmaddr + s.vmsize:
                return s
        return None

    def off_for_addr(self, addr):
        for s in self.segments:
            if s.vmaddr <= addr < s.vmaddr + s.vmsize:
                if s.fileoff == 0 and s.filesize == 0:
                    return None
                delta = addr - s.vmaddr
                if delta >= s.filesize:
                    return None
                return self.base + s.fileoff + delta
        return None

    def read(self, addr, n):
        o = self.off_for_addr(addr)
        if o is None:
            return b''
        return self.d[o:o + n]

    def u8(self, a):
        b = self.read(a, 1); return b[0] if b else 0

    def u32(self, a):
        b = self.read(a, 4); return struct.unpack('<I', b)[0] if len(b) == 4 else 0

    def s32(self, a):
        b = self.read(a, 4); return struct.unpack('<i', b)[0] if len(b) == 4 else 0

    def u64(self, a):
        b = self.read(a, 8); return struct.unpack('<Q', b)[0] if len(b) == 8 else 0

    def cstr_at(self, off):
        e = self.d.find(b'\0', off)
        if e < 0:
            e = off + 256
        return self.d[off:e].decode('utf-8', 'replace')

    def cstr_addr(self, addr):
        o = self.off_for_addr(addr)
        return self.cstr_at(o) if o is not None else ''

    def section_named(self, seg, name):
        for s in self.sections:
            if s.segname == seg and s.name == name:
                return s
        return None

    # ---------- chained fixups ----------
    # pointer formats
    PTR_ARM64E = (1, 9, 12)
    PTR_64 = (2, 6)

    def load_chained_fixups(self):
        self.cf = dict(imports=[], binds={}, ptr={}, auth={})
        if not self.chained:
            return
        off, sz = self.chained
        base = self.base + off
        d = self.d

        def rd32(o):
            return struct.unpack('<I', d[base + o:base + o + 4])[0]

        (version, starts_off, imports_off, symbols_off, imports_count,
         imports_format, symbols_format) = [rd32(i * 4) for i in range(7)]
        imp_base = base + imports_off
        sym_base = base + symbols_off
        for i in range(imports_count):
            if imports_format == 1:
                v = struct.unpack('<I', d[imp_base + i * 4:imp_base + i * 4 + 4])[0]
                lib, weak, nameoff = v & 0xff, bool((v >> 8) & 1), v >> 9
            elif imports_format == 2:
                v = struct.unpack('<i', d[imp_base + i * 8:imp_base + i * 8 + 4])[0]
                lib, weak, nameoff = v & 0xff, bool((v >> 8) & 1), (v >> 9) & 0x7fffff
            else:
                v = struct.unpack('<I', d[imp_base + i * 16:imp_base + i * 16 + 4])[0]
                nameoff = struct.unpack('<I', d[imp_base + i * 16 + 4:imp_base + i * 16 + 8])[0]
                lib, weak = v & 0xffff, bool((v >> 16) & 1)
            self.cf['imports'].append((lib, weak, self.cstr_at(sym_base + nameoff)))

        def r32a(o):
            return struct.unpack('<I', d[o:o + 4])[0]

        si = base + starts_off
        seg_count = r32a(si)
        for i in range(min(seg_count, 64)):
            seg_off = r32a(si + 4 + i * 4)
            if seg_off == 0 or i >= len(self.segments):
                continue
            se = si + seg_off
            page_size = struct.unpack('<H', d[se + 4:se + 6])[0]
            pointer_format = struct.unpack('<H', d[se + 6:se + 8])[0]
            segment_offset = struct.unpack('<Q', d[se + 8:se + 16])[0]
            page_count = struct.unpack('<H', d[se + 20:se + 22])[0]
            seg = self.segments[i]
            is_arm64e = pointer_format in self.PTR_ARM64E
            self.cf['fmt'] = pointer_format
            for pi in range(min(page_count, 8192)):
                ps = struct.unpack('<H', d[se + 22 + pi * 2:se + 24 + pi * 2])[0]
                if ps == 0xffff:
                    continue
                if ps & 0x8000:
                    # multi-start: overflow list of starts
                    overflow = (ps & 0x7fff)
                    cur = seg.vmaddr + pi * page_size + overflow
                    for _ in range(64):
                        o = self.off_for_addr(cur)
                        if o is None:
                            break
                        nxt = struct.unpack('<H', d[o:o + 2])[0]
                        if nxt == 0xffff:
                            break
                        self._chain_walk(seg.vmaddr + pi * page_size + nxt, is_arm64e, segment_offset)
                        if nxt == 0:
                            break
                        cur = seg.vmaddr + pi * page_size + overflow + 0
                        break
                    continue
                self._chain_walk(seg.vmaddr + pi * page_size + (ps & 0x7fff),
                                 is_arm64e, segment_offset)

    def _chain_walk(self, start, is_arm64e, segment_offset):
        cur = start
        for _ in range(200000):
            o = self.off_for_addr(cur)
            if o is None:
                break
            raw = struct.unpack('<Q', self.d[o:o + 8])[0]
            if is_arm64e:
                auth = (raw >> 63) & 1
                bind = (raw >> 62) & 1
                nxt = (raw >> 51) & 0x7ff
                if bind:
                    ordinal = raw & 0xffff
                    if ordinal < len(self.cf['imports']):
                        self.cf['binds'][cur] = self.cf['imports'][ordinal][2]
                elif auth:
                    self.cf['ptr'][cur] = raw & 0xffffffff
                else:
                    target = raw & 0x7ffffffffff
                    high8 = (raw >> 43) & 0xff
                    self.cf['ptr'][cur] = (high8 << 56) | target
            else:
                bind = (raw >> 63) & 1
                nxt = (raw >> 51) & 0xfff
                if bind:
                    ordinal = raw & 0xffffff
                    if ordinal < len(self.cf['imports']):
                        self.cf['binds'][cur] = self.cf['imports'][ordinal][2]
                else:
                    target = raw & 0xfffffffff
                    high8 = (raw >> 36) & 0xff
                    self.cf['ptr'][cur] = (high8 << 56) | target
            if nxt == 0:
                break
            cur = cur + nxt * 4

    # ---------- symbols ----------
    def load_symbols(self):
        self.symbols = []
        if not self.symtab:
            return
        symoff, nsyms, stroff, strsize = self.symtab
        p = self.base + symoff
        sp = self.base + stroff
        for i in range(nsyms):
            strx, ntype, sect, desc, value = struct.unpack('<IBBhQ', self.d[p:p + 16])
            p += 16
            name = self.cstr_at(sp + strx) if strx else ''
            self.symbols.append(dict(name=name, type=ntype, sect=sect, desc=desc, value=value))

    def func_starts(self):
        """Return sorted list of text addresses from symbol table (local funcs)."""
        out = []
        for s in self.symbols:
            if s['value'] and (s['type'] & 0x0e) == 0x0e and s['sect']:
                out.append((s['value'], s['name']))
        return sorted(out)

    # ---------- cstrings ----------
    def all_cstrings(self):
        out = []
        sec = self.section_named('__TEXT', '__cstring')
        if sec:
            o = self.base + sec.offset
            end = o + sec.size
            cur = o
            while cur < end:
                e = self.d.find(b'\0', cur, end)
                if e < 0:
                    break
                s = self.d[cur:e]
                if s:
                    try:
                        out.append((sec.addr + (cur - o), s.decode('utf-8')))
                    except UnicodeDecodeError:
                        pass
                cur = e + 1
        return out


def load_fat(path):
    d = open(path, 'rb').read()
    magic = struct.unpack('>I', d[:4])[0]
    if magic in (0xcafebabe, 0xbebafeca):
        n = struct.unpack('>I', d[4:8])[0]
        out = []
        for i in range(n):
            ct, cs, off, sz, al = struct.unpack('>iiIII', d[8 + i * 20:8 + i * 20 + 20])
            out.append(MachO(d, off, sz))
        return out
    return [MachO(d, 0, len(d))]
