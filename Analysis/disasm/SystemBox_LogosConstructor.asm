// Logos constructor 0x0000af88 - 0x000128a8
// Ghidra could not decompile this 29,036-byte function; the annotated
// disassembly is the ground truth. Every MSHookMessageEx call is labelled
// with the class/selector recovered from the register state.
0000af88  stp      d9, d8, [sp, #-0x70]!
0000af8c  stp      x28, x27, [sp, #0x10]
0000af90  stp      x26, x25, [sp, #0x20]
0000af94  stp      x24, x23, [sp, #0x30]
0000af98  stp      x22, x21, [sp, #0x40]
0000af9c  stp      x20, x19, [sp, #0x50]
0000afa0  stp      x29, x30, [sp, #0x60]
0000afa4  add      x29, sp, #0x60
0000afa8  sub      sp, sp, #0x7a0
0000afac  adrp     x8, #0x64000
0000afb0  ldr      x8, [x8, #0x268]
0000afb4  ldr      x8, [x8]
0000afb8  stur     x8, [x29, #-0x70]
0000afbc  bl       #0x46314
0000afc0  str      x0, [sp, #0x70]
0000afc4  adrp     x8, #0x6f000
0000afc8  ldr      x0, [x8, #0x8a0]
0000afcc  bl       #0x486a0
0000afd0  mov      x29, x29
0000afd4  bl       #0x46428
0000afd8  mov      x19, x0
0000afdc  bl       #0x46e40
0000afe0  mov      x29, x29
0000afe4  bl       #0x46428
0000afe8  mov      x27, x0
0000afec  mov      x0, x19
0000aff0  bl       #0x463f8
0000aff4  adrp     x2, #0x65000
0000aff8  add      x2, x2, #0x328
0000affc  mov      x0, x27
0000b000  bl       #0x48280
0000b004  mov      x19, x0
0000b008  adrp     x2, #0x65000
0000b00c  add      x2, x2, #0x348
0000b010  mov      x0, x27
0000b014  bl       #0x48280
0000b018  mov      x20, x0
0000b01c  adrp     x2, #0x65000
0000b020  add      x2, x2, #0x368
0000b024  mov      x0, x27
0000b028  bl       #0x48280
0000b02c  mov      x21, x0
0000b030  adrp     x2, #0x65000
0000b034  add      x2, x2, #0x388
0000b038  mov      x0, x27
0000b03c  bl       #0x48280
0000b040  adrp     x22, #0x70000
0000b044  strb     w0, [x22, #0x590]
0000b048  adrp     x2, #0x65000
0000b04c  add      x2, x2, #0x3a8
0000b050  mov      x0, x27
0000b054  bl       #0x48280
0000b058  adrp     x8, #0x70000
0000b05c  strb     w0, [x8, #0x591]
0000b060  orr      w8, w19, w20
0000b064  orr      w8, w8, w21
0000b068  ldrb     w9, [x22, #0x590]
0000b06c  cmp      w9, #0
0000b070  cset     w9, ne
0000b074  orr      w8, w8, w9
0000b078  orr      w8, w8, w0
0000b07c  tbz      w8, #0, #0xbf00
0000b080  adrp     x8, #0x6f000
0000b084  ldr      x0, [x8, #0x940]
0000b088  bl       #0x46b80
0000b08c  mov      x29, x29
0000b090  bl       #0x46428
0000b094  mov      x19, x0
0000b098  adrp     x0, #0x66000
0000b09c  add      x0, x0, #0x988
0000b0a0  str      x27, [sp, #0x58]
0000b0a4  bl       #0x46140
0000b0a8  mov      x29, x29
0000b0ac  bl       #0x46428
0000b0b0  mov      x23, x0
0000b0b4  bl       #0x48560
0000b0b8  cbz      x0, #0xb0c8
0000b0bc  mov      x0, x19
0000b0c0  mov      x2, x23
0000b0c4  bl       #0x468c0
0000b0c8  str      w21, [sp, #0x40]
0000b0cc  str      w20, [sp, #0x38]
0000b0d0  movi     v0.16b, #0
0000b0d4  str      q0, [sp, #0x6c0]
0000b0d8  str      q0, [sp, #0x6b0]
0000b0dc  str      q0, [sp, #0x6a0]
0000b0e0  str      q0, [sp, #0x690]
0000b0e4  adrp     x0, #0x69000
0000b0e8  add      x0, x0, #0x458
0000b0ec  add      x2, sp, #0x690
0000b0f0  add      x3, sp, #0x290
0000b0f4  mov      w4, #0x10
0000b0f8  bl       #0x47480
0000b0fc  mov      x20, x0
0000b100  cbz      x0, #0xb17c
0000b104  ldr      x8, [sp, #0x6a0]
0000b108  ldr      x24, [x8]
0000b10c  adrp     x21, #0x69000
0000b110  add      x21, x21, #0x458
0000b114  mov      x25, #0
0000b118  ldr      x8, [sp, #0x6a0]
0000b11c  ldr      x8, [x8]
0000b120  cmp      x8, x24
0000b124  b.eq     #0xb130
0000b128  mov      x0, x21
0000b12c  bl       #0x4635c
0000b130  ldr      x8, [sp, #0x698]
0000b134  ldr      x22, [x8, x25, lsl #3]
0000b138  mov      x0, x19
0000b13c  mov      x2, x22
0000b140  bl       #0x47220
0000b144  tbnz     w0, #0, #0xb154
0000b148  mov      x0, x19
0000b14c  mov      x2, x22
0000b150  bl       #0x468c0
0000b154  add      x25, x25, #1
0000b158  cmp      x20, x25
0000b15c  b.ne     #0xb118
0000b160  add      x2, sp, #0x690
0000b164  add      x3, sp, #0x290
0000b168  mov      x0, x21
0000b16c  mov      w4, #0x10
0000b170  bl       #0x47480
0000b174  mov      x20, x0
0000b178  cbnz     x0, #0xb114
0000b17c  movi     v0.16b, #0
0000b180  stp      q0, q0, [sp, #0x170]
0000b184  stp      q0, q0, [sp, #0x150]
0000b188  mov      x0, x19
0000b18c  bl       #0x46404
0000b190  mov      x21, x0
0000b194  add      x2, sp, #0x150
0000b198  add      x3, sp, #0x190
0000b19c  mov      w4, #0x10
0000b1a0  bl       #0x47480
0000b1a4  mov      x20, x0
0000b1a8  cbz      x0, #0xb26c
0000b1ac  ldr      x8, [sp, #0x160]
0000b1b0  ldr      x25, [x8]
0000b1b4  adrp     x26, #0x6f000
0000b1b8  adrp     x28, #0x6f000
0000b1bc  mov      x27, #0
0000b1c0  ldr      x8, [sp, #0x160]
0000b1c4  ldr      x8, [x8]
0000b1c8  cmp      x8, x25
0000b1cc  b.eq     #0xb1d8
0000b1d0  mov      x0, x21
0000b1d4  bl       #0x4635c
0000b1d8  ldr      x8, [sp, #0x158]
0000b1dc  ldr      x2, [x8, x27, lsl #3]
0000b1e0  ldr      x0, [x26, #0x980]
0000b1e4  bl       #0x47580
0000b1e8  mov      x29, x29
0000b1ec  bl       #0x46428
0000b1f0  mov      x22, x0
0000b1f4  bl       #0x48560
0000b1f8  cbz      x0, #0xb224
0000b1fc  ldr      x0, [x28, #0x828]
0000b200  bl       #0x462f0
0000b204  mov      x2, x22
0000b208  mov      w3, #4
0000b20c  bl       #0x47ee0
0000b210  mov      x24, x0
0000b214  bl       #0x48560
0000b218  cbnz     x0, #0xb25c
0000b21c  mov      x0, x24
0000b220  bl       #0x463f8
0000b224  mov      x0, x22
0000b228  bl       #0x463f8
0000b22c  add      x27, x27, #1
0000b230  cmp      x20, x27
0000b234  b.ne     #0xb1c0
0000b238  add      x2, sp, #0x150
0000b23c  add      x3, sp, #0x190
0000b240  mov      x0, x21
0000b244  mov      w4, #0x10
0000b248  bl       #0x47480
0000b24c  mov      x20, x0
0000b250  cbnz     x0, #0xb1bc
0000b254  mov      x24, #0
0000b258  b        #0xb264
0000b25c  mov      x0, x22
0000b260  bl       #0x463f8
0000b264  ldr      x27, [sp, #0x58]
0000b268  b        #0xb270
0000b26c  mov      x24, #0
0000b270  mov      x0, x21
0000b274  bl       #0x463f8
0000b278  mov      x0, x23
0000b27c  bl       #0x463f8
0000b280  mov      x0, x21
0000b284  bl       #0x463f8
0000b288  mov      x0, x24
0000b28c  bl       #0x48560
0000b290  cbz      x0, #0xbea4
0000b294  adrp     x2, #0x66000
0000b298  add      x2, x2, #0x868
0000b29c  adrp     x3, #0x66000
0000b2a0  add      x3, x3, #0x888
0000b2a4  mov      x0, x24
0000b2a8  bl       #0x4a600
0000b2ac  mov      x29, x29
0000b2b0  bl       #0x46428
0000b2b4  mov      x19, x0
0000b2b8  mov      x0, x24
0000b2bc  bl       #0x463f8
0000b2c0  movi     v0.16b, #0
0000b2c4  stp      q0, q0, [sp, #0x130]
0000b2c8  stp      q0, q0, [sp, #0x110]
0000b2cc  adrp     x2, #0x66000
0000b2d0  add      x2, x2, #0x8a8
0000b2d4  mov      x0, x19
0000b2d8  bl       #0x47100
0000b2dc  mov      x29, x29
0000b2e0  bl       #0x46428
0000b2e4  mov      x23, x0
0000b2e8  add      x2, sp, #0x110
0000b2ec  sub      x3, x29, #0xf0
0000b2f0  mov      w4, #0x10
0000b2f4  bl       #0x47480
0000b2f8  mov      x20, x0
0000b2fc  cbz      x0, #0xb3a8
0000b300  ldr      x8, [sp, #0x120]
0000b304  ldr      x28, [x8]
0000b308  adrp     x22, #0x66000
0000b30c  add      x22, x22, #0x8c8
0000b310  adrp     x24, #0x64000
0000b314  add      x24, x24, #0xee8
0000b318  mov      x27, #0
0000b31c  ldr      x8, [sp, #0x120]
0000b320  ldr      x8, [x8]
0000b324  cmp      x8, x28
0000b328  b.eq     #0xb334
0000b32c  mov      x0, x23
0000b330  bl       #0x4635c
0000b334  ldr      x8, [sp, #0x118]
0000b338  ldr      x0, [x8, x27, lsl #3]
0000b33c  bl       #0x2f2f8
0000b340  mov      x29, x29
0000b344  bl       #0x46428
0000b348  mov      x21, x0
0000b34c  mov      x2, x22
0000b350  bl       #0x48a20
0000b354  mov      x29, x29
0000b358  bl       #0x46428
0000b35c  mov      x25, x0
0000b360  mov      x2, x24
0000b364  bl       #0x48280
0000b368  mov      x26, x0
0000b36c  mov      x0, x25
0000b370  bl       #0x463f8
0000b374  tbnz     w26, #0, #0xb3c0
0000b378  mov      x0, x21
0000b37c  bl       #0x463f8
0000b380  add      x27, x27, #1
0000b384  cmp      x20, x27
0000b388  b.ne     #0xb31c
0000b38c  add      x2, sp, #0x110
0000b390  sub      x3, x29, #0xf0
0000b394  mov      x0, x23
0000b398  mov      w4, #0x10
0000b39c  bl       #0x47480
0000b3a0  mov      x20, x0
0000b3a4  cbnz     x0, #0xb318
0000b3a8  mov      x0, x23
0000b3ac  bl       #0x463f8
0000b3b0  mov      x0, x19
0000b3b4  bl       #0x463f8
0000b3b8  ldr      x27, [sp, #0x58]
0000b3bc  b        #0xbf00
0000b3c0  adrp     x2, #0x66000
0000b3c4  add      x2, x2, #0x8e8
0000b3c8  mov      x0, x21
0000b3cc  bl       #0x48a20
0000b3d0  mov      x29, x29
0000b3d4  bl       #0x46428
0000b3d8  mov      x22, x0
0000b3dc  adrp     x2, #0x66000
0000b3e0  add      x2, x2, #0x908
0000b3e4  ldr      x27, [sp, #0x58]
0000b3e8  bl       #0x48280
0000b3ec  mov      x20, x0
0000b3f0  mov      x0, x22
0000b3f4  bl       #0x463f8
0000b3f8  adrp     x2, #0x66000
0000b3fc  add      x2, x2, #0x928
0000b400  mov      x0, x21
0000b404  bl       #0x48a20
0000b408  mov      x29, x29
0000b40c  bl       #0x46428
0000b410  mov      x24, x0
0000b414  adrp     x2, #0x64000
0000b418  add      x2, x2, #0xf08
0000b41c  bl       #0x48280
0000b420  mov      x22, x0
0000b424  mov      x0, x24
0000b428  bl       #0x463f8
0000b42c  adrp     x2, #0x66000
0000b430  add      x2, x2, #0x948
0000b434  mov      x0, x21
0000b438  bl       #0x48a20
0000b43c  mov      x29, x29
0000b440  bl       #0x46428
0000b444  mov      x24, x0
0000b448  adrp     x2, #0x64000
0000b44c  add      x2, x2, #0xf08
0000b450  bl       #0x48280
0000b454  mov      x25, x0
0000b458  mov      x0, x24
0000b45c  bl       #0x463f8
0000b460  and      w8, w20, w22
0000b464  and      w20, w8, w25
0000b468  mov      x0, x21
0000b46c  bl       #0x463f8
0000b470  mov      x0, x23
0000b474  bl       #0x463f8
0000b478  mov      x0, x19
0000b47c  bl       #0x463f8
0000b480  cmp      w20, #1
0000b484  b.ne     #0xbf00
0000b488  movi     v0.16b, #0
0000b48c  stp      q0, q0, [sp, #0x110]
0000b490  stp      q0, q0, [sp, #0x130]
0000b494  adrp     x0, #0x66000
0000b498  add      x0, x0, #0xae8
0000b49c  bl       #0x46140
0000b4a0  mov      x29, x29
0000b4a4  bl       #0x46428
0000b4a8  mov      x19, x0
0000b4ac  adrp     x8, #0x6f000
0000b4b0  ldr      x0, [x8, #0x910]
0000b4b4  bl       #0x47640
0000b4b8  mov      x29, x29
0000b4bc  bl       #0x46428
0000b4c0  mov      x21, x0
0000b4c4  mov      x2, x19
0000b4c8  mov      x3, #0
0000b4cc  bl       #0x472a0
0000b4d0  mov      x29, x29
0000b4d4  bl       #0x46428
0000b4d8  mov      x20, x0
0000b4dc  mov      x0, x21
0000b4e0  bl       #0x463f8
0000b4e4  adrp     x8, #0x6f000
0000b4e8  ldr      x0, [x8, #0x940]
0000b4ec  bl       #0x46b80
0000b4f0  mov      x29, x29
0000b4f4  bl       #0x46428
0000b4f8  mov      x21, x0
0000b4fc  movi     v0.16b, #0
0000b500  stp      q0, q0, [sp, #0x170]
0000b504  stp      q0, q0, [sp, #0x150]
0000b508  mov      x0, x20
0000b50c  bl       #0x46404
0000b510  mov      x22, x0
0000b514  add      x2, sp, #0x150
0000b518  add      x3, sp, #0x290
0000b51c  mov      w4, #0x10
0000b520  bl       #0x47480
0000b524  mov      x23, x0
0000b528  cbz      x0, #0xb5b8
0000b52c  ldr      x8, [sp, #0x160]
0000b530  ldr      x25, [x8]
0000b534  mov      x26, #0
0000b538  ldr      x8, [sp, #0x160]
0000b53c  ldr      x8, [x8]
0000b540  cmp      x8, x25
0000b544  b.eq     #0xb550
0000b548  mov      x0, x22
0000b54c  bl       #0x4635c
0000b550  ldr      x8, [sp, #0x158]
0000b554  ldr      x24, [x8, x26, lsl #3]
0000b558  mov      x0, x24
0000b55c  bl       #0x48560
0000b560  cbz      x0, #0xb590
0000b564  mov      x0, x19
0000b568  mov      x2, x24
0000b56c  bl       #0x4a560
0000b570  mov      x29, x29
0000b574  bl       #0x46428
0000b578  mov      x24, x0
0000b57c  mov      x0, x21
0000b580  mov      x2, x24
0000b584  bl       #0x468c0
0000b588  mov      x0, x24
0000b58c  bl       #0x463f8
0000b590  add      x26, x26, #1
0000b594  cmp      x23, x26
0000b598  b.ne     #0xb538
0000b59c  add      x2, sp, #0x150
0000b5a0  add      x3, sp, #0x290
0000b5a4  mov      x0, x22
0000b5a8  mov      w4, #0x10
0000b5ac  bl       #0x47480
0000b5b0  mov      x23, x0
0000b5b4  cbnz     x0, #0xb534
0000b5b8  mov      x0, x22
0000b5bc  bl       #0x463f8
0000b5c0  mov      x0, x21
0000b5c4  bl       #0x473e0
0000b5c8  mov      x23, x0
0000b5cc  mov      x0, x21
0000b5d0  bl       #0x463f8
0000b5d4  mov      x0, x22
0000b5d8  bl       #0x463f8
0000b5dc  mov      x0, x19
0000b5e0  bl       #0x463f8
0000b5e4  add      x2, sp, #0x110
0000b5e8  add      x3, sp, #0x190
0000b5ec  str      x23, [sp, #0x28]
0000b5f0  mov      x0, x23
0000b5f4  mov      w4, #0x10
0000b5f8  bl       #0x47480
0000b5fc  mov      x21, x0
0000b600  cbz      x0, #0xbef8
0000b604  str      wzr, [sp, #0x8c]
0000b608  adrp     x22, #0x6f000
0000b60c  ldr      x8, [sp, #0x120]
0000b610  adrp     x23, #0x66000
0000b614  add      x23, x23, #0x868
0000b618  ldr      x24, [x8]
0000b61c  adrp     x25, #0x66000
0000b620  add      x25, x25, #0x888
0000b624  adrp     x26, #0x66000
0000b628  add      x26, x26, #0x8a8
0000b62c  str      x24, [sp, #8]
0000b630  str      xzr, [sp, #0x30]
0000b634  ldr      x8, [sp, #0x120]
0000b638  ldr      x8, [x8]
0000b63c  cmp      x8, x24
0000b640  b.eq     #0xb64c
0000b644  ldr      x0, [sp, #0x28]
0000b648  bl       #0x4635c
0000b64c  ldr      x8, [sp, #0x118]
0000b650  ldr      x9, [sp, #0x30]
0000b654  ldr      x2, [x8, x9, lsl #3]
0000b658  ldr      x0, [x22, #0x828]
0000b65c  mov      w3, #4
0000b660  mov      x4, #0
0000b664  bl       #0x4a680
0000b668  mov      x29, x29
0000b66c  bl       #0x46428
0000b670  mov      x19, x0
0000b674  bl       #0x48560
0000b678  cbz      x0, #0xbbdc
0000b67c  mov      x0, x19
0000b680  mov      x2, x23
0000b684  mov      x3, x25
0000b688  bl       #0x4a600
0000b68c  mov      x29, x29
0000b690  bl       #0x46428
0000b694  mov      x20, x0
0000b698  mov      x0, x19
0000b69c  bl       #0x463f8
0000b6a0  movi     v0.16b, #0
0000b6a4  stp      q0, q0, [sp, #0xf0]
0000b6a8  stp      q0, q0, [sp, #0xd0]
0000b6ac  str      x20, [sp, #0x20]
0000b6b0  mov      x0, x20
0000b6b4  mov      x2, x26
0000b6b8  bl       #0x47100
0000b6bc  mov      x29, x29
0000b6c0  bl       #0x46428
0000b6c4  add      x2, sp, #0xd0
0000b6c8  sub      x3, x29, #0xf0
0000b6cc  str      x0, [sp, #0x48]
0000b6d0  mov      w4, #0x10
0000b6d4  bl       #0x47480
0000b6d8  cbz      x0, #0xbbcc
0000b6dc  ldr      x8, [sp, #0xe0]
0000b6e0  ldr      x8, [x8]
0000b6e4  stp      x21, x8, [sp, #0x10]
0000b6e8  str      x0, [sp, #0x50]
0000b6ec  mov      x26, #0
0000b6f0  adrp     x20, #0x66000
0000b6f4  add      x20, x20, #0xa48
0000b6f8  adrp     x21, #0x66000
0000b6fc  add      x21, x21, #0xa68
0000b700  adrp     x22, #0x66000
0000b704  add      x22, x22, #0xa88
0000b708  ldr      x24, [sp, #0x18]
0000b70c  ldr      x8, [sp, #0xe0]
0000b710  ldr      x8, [x8]
0000b714  cmp      x8, x24
0000b718  b.eq     #0xb724
0000b71c  ldr      x0, [sp, #0x48]
0000b720  bl       #0x4635c
0000b724  ldr      x8, [sp, #0xd8]
0000b728  ldr      x0, [x8, x26, lsl #3]
0000b72c  bl       #0x2f2f8
0000b730  mov      x29, x29
0000b734  bl       #0x46428
0000b738  str      x0, [sp, #0x60]
0000b73c  mov      x2, x20
0000b740  bl       #0x48a20
0000b744  mov      x29, x29
0000b748  bl       #0x46428
0000b74c  mov      x19, x0
0000b750  bl       #0x48680
0000b754  mov      x29, x29
0000b758  bl       #0x46428
0000b75c  mov      x23, x0
0000b760  mov      x0, x19
0000b764  bl       #0x463f8
0000b768  str      x23, [sp, #0x78]
0000b76c  mov      x0, x23
0000b770  mov      x2, x21
0000b774  bl       #0x48280
0000b778  tbnz     w0, #0, #0xb7a0
0000b77c  ldr      x0, [sp, #0x78]
0000b780  mov      x2, x22
0000b784  bl       #0x48280
0000b788  tbnz     w0, #0, #0xb7a0
0000b78c  ldr      x0, [sp, #0x78]
0000b790  adrp     x2, #0x66000
0000b794  add      x2, x2, #0xaa8
0000b798  bl       #0x48280
0000b79c  tbz      w0, #0, #0xb7c4
0000b7a0  ldr      x0, [sp, #0x78]
0000b7a4  bl       #0x463f8
0000b7a8  ldr      x0, [sp, #0x60]
0000b7ac  bl       #0x463f8
0000b7b0  add      x26, x26, #1
0000b7b4  ldr      x8, [sp, #0x50]
0000b7b8  cmp      x26, x8
0000b7bc  b.ne     #0xb70c
0000b7c0  b        #0xbb94
0000b7c4  movi     v0.16b, #0
0000b7c8  stp      q0, q0, [sp, #0xb0]
0000b7cc  stp      q0, q0, [sp, #0x90]
0000b7d0  ldr      x0, [sp, #0x60]
0000b7d4  adrp     x2, #0x66000
0000b7d8  add      x2, x2, #0xac8
0000b7dc  bl       #0x48a20
0000b7e0  mov      x29, x29
0000b7e4  bl       #0x46428
0000b7e8  mov      x19, x0
0000b7ec  adrp     x8, #0x6f000
0000b7f0  ldr      x0, [x8, #0x920]
0000b7f4  bl       #0x4aca0
0000b7f8  mov      x29, x29
0000b7fc  bl       #0x46428
0000b800  mov      x20, x0
0000b804  mov      x0, x19
0000b808  mov      x2, x20
0000b80c  bl       #0x470e0
0000b810  mov      x29, x29
0000b814  bl       #0x46428
0000b818  mov      x21, x0
0000b81c  mov      x0, x20
0000b820  bl       #0x463f8
0000b824  mov      x0, x19
0000b828  bl       #0x463f8
0000b82c  add      x2, sp, #0x90
0000b830  add      x3, sp, #0x690
0000b834  str      x21, [sp, #0x68]
0000b838  mov      x0, x21
0000b83c  mov      w4, #0x10
0000b840  bl       #0x47480
0000b844  mov      x24, x0
0000b848  cbz      x0, #0xbb64
0000b84c  ldr      x8, [sp, #0xa0]
0000b850  ldr      x8, [x8]
0000b854  str      x8, [sp, #0x80]
0000b858  mov      x27, #0
0000b85c  ldr      x8, [sp, #0xa0]
0000b860  ldr      x8, [x8]
0000b864  ldr      x9, [sp, #0x80]
0000b868  cmp      x8, x9
0000b86c  b.eq     #0xb878
0000b870  ldr      x0, [sp, #0x68]
0000b874  bl       #0x4635c
0000b878  ldr      x8, [sp, #0x98]
0000b87c  ldr      x22, [x8, x27, lsl #3]
0000b880  mov      x0, x22
0000b884  bl       #0x48560
0000b888  cbz      x0, #0xbb3c
0000b88c  adrp     x8, #0x6f000
0000b890  ldr      x0, [x8, #0x988]
0000b894  mov      x2, x22
0000b898  bl       #0x47120
0000b89c  mov      x29, x29
0000b8a0  bl       #0x46428
0000b8a4  mov      x25, x0
0000b8a8  bl       #0x49240
0000b8ac  mov      x29, x29
0000b8b0  bl       #0x46428
0000b8b4  mov      x19, x0
0000b8b8  bl       #0x48680
0000b8bc  mov      x29, x29
0000b8c0  bl       #0x46428
0000b8c4  mov      x21, x0
0000b8c8  mov      x0, x19
0000b8cc  bl       #0x463f8
0000b8d0  mov      x0, x25
0000b8d4  bl       #0x47c40
0000b8d8  mov      x29, x29
0000b8dc  bl       #0x46428
0000b8e0  mov      x19, x0
0000b8e4  bl       #0x48680
0000b8e8  mov      x29, x29
0000b8ec  bl       #0x46428
0000b8f0  mov      x23, x0
0000b8f4  mov      x0, x19
0000b8f8  bl       #0x463f8
0000b8fc  mov      x0, x21
0000b900  adrp     x2, #0x66000
0000b904  add      x2, x2, #0xb08
0000b908  bl       #0x48280
0000b90c  tbnz     w0, #0, #0xb924
0000b910  mov      x0, x21
0000b914  adrp     x2, #0x66000
0000b918  add      x2, x2, #0xb28
0000b91c  bl       #0x48280
0000b920  cbz      w0, #0xb9fc
0000b924  mov      x0, x23
0000b928  bl       #0x48560
0000b92c  cbz      x0, #0xb9fc
0000b930  mov      x0, x25
0000b934  bl       #0x48b20
0000b938  mov      x29, x29
0000b93c  bl       #0x46428
0000b940  mov      x20, x0
0000b944  bl       #0x48680
0000b948  mov      x29, x29
0000b94c  bl       #0x46428
0000b950  mov      x28, x0
0000b954  cmp      x0, #0
0000b958  adrp     x8, #0x64000
0000b95c  add      x8, x8, #0xfa8
0000b960  csel     x0, x8, x0, eq
0000b964  bl       #0x46404
0000b968  mov      x19, x0
0000b96c  mov      x0, x28
0000b970  bl       #0x463f8
0000b974  mov      x0, x20
0000b978  bl       #0x463f8
0000b97c  mov      x0, x23
0000b980  adrp     x2, #0x66000
0000b984  add      x2, x2, #0xb48
0000b988  bl       #0x48280
0000b98c  tbnz     w0, #0, #0xbeac
0000b990  mov      x0, x23
0000b994  adrp     x2, #0x66000
0000b998  add      x2, x2, #0xb68
0000b99c  bl       #0x48280
0000b9a0  cbz      w0, #0xb9f4
0000b9a4  mov      x0, x19
0000b9a8  adrp     x2, #0x66000
0000b9ac  add      x2, x2, #0xb88
0000b9b0  bl       #0x48280
0000b9b4  tbnz     w0, #0, #0xbeac
0000b9b8  mov      x0, x19
0000b9bc  adrp     x2, #0x66000
0000b9c0  add      x2, x2, #0xba8
0000b9c4  bl       #0x47bc0
0000b9c8  mov      x20, x0
0000b9cc  mov      x0, x19
0000b9d0  bl       #0x463f8
0000b9d4  mov      x0, x23
0000b9d8  bl       #0x463f8
0000b9dc  mov      x0, x21
0000b9e0  bl       #0x463f8
0000b9e4  mov      x0, x25
0000b9e8  bl       #0x463f8
0000b9ec  tbz      w20, #0, #0xba14
0000b9f0  b        #0xbecc
0000b9f4  mov      x0, x19
0000b9f8  bl       #0x463f8
0000b9fc  mov      x0, x23
0000ba00  bl       #0x463f8
0000ba04  mov      x0, x21
0000ba08  bl       #0x463f8
0000ba0c  mov      x0, x25
0000ba10  bl       #0x463f8
0000ba14  adrp     x8, #0x6f000
0000ba18  ldr      x0, [x8, #0x988]
0000ba1c  mov      x2, x22
0000ba20  bl       #0x47120
0000ba24  mov      x29, x29
0000ba28  bl       #0x46428
0000ba2c  mov      x21, x0
0000ba30  bl       #0x48b20
0000ba34  mov      x29, x29
0000ba38  bl       #0x46428
0000ba3c  mov      x19, x0
0000ba40  cmp      x0, #0
0000ba44  adrp     x8, #0x64000
0000ba48  add      x8, x8, #0xfa8
0000ba4c  csel     x0, x8, x0, eq
0000ba50  bl       #0x46404
0000ba54  mov      x22, x0
0000ba58  mov      x0, x19
0000ba5c  bl       #0x463f8
0000ba60  mov      x0, x21
0000ba64  bl       #0x49240
0000ba68  mov      x29, x29
0000ba6c  bl       #0x46428
0000ba70  mov      x23, x0
0000ba74  bl       #0x48680
0000ba78  mov      x29, x29
0000ba7c  bl       #0x46428
0000ba80  mov      x25, x0
0000ba84  adrp     x2, #0x66000
0000ba88  add      x2, x2, #0xb28
0000ba8c  bl       #0x48280
0000ba90  cbz      w0, #0xbaec
0000ba94  mov      x0, x21
0000ba98  bl       #0x47c40
0000ba9c  mov      x29, x29
0000baa0  bl       #0x46428
0000baa4  mov      x19, x0
0000baa8  bl       #0x48680
0000baac  mov      x29, x29
0000bab0  bl       #0x46428
0000bab4  mov      x20, x0
0000bab8  adrp     x2, #0x66000
0000babc  add      x2, x2, #0xbc8
0000bac0  bl       #0x48280
0000bac4  cbz      w0, #0xbaf4
0000bac8  mov      x0, x22
0000bacc  bl       #0x48560
0000bad0  cbz      x0, #0xbafc
0000bad4  mov      x0, x22
0000bad8  adrp     x2, #0x66000
0000badc  add      x2, x2, #0xbe8
0000bae0  bl       #0x48280
0000bae4  mov      x28, x0
0000bae8  b        #0xbb00
0000baec  mov      w28, #0
0000baf0  b        #0xbb10
0000baf4  mov      w28, #0
0000baf8  b        #0xbb00
0000bafc  mov      w28, #1
0000bb00  mov      x0, x20
0000bb04  bl       #0x463f8
0000bb08  mov      x0, x19
0000bb0c  bl       #0x463f8
0000bb10  mov      x0, x25
0000bb14  bl       #0x463f8
0000bb18  mov      x0, x23
0000bb1c  bl       #0x463f8
0000bb20  mov      x0, x22
0000bb24  bl       #0x463f8
0000bb28  mov      x0, x21
0000bb2c  bl       #0x463f8
0000bb30  ldr      w8, [sp, #0x8c]
0000bb34  orr      w8, w28, w8
0000bb38  str      w8, [sp, #0x8c]
0000bb3c  add      x27, x27, #1
0000bb40  cmp      x24, x27
0000bb44  b.ne     #0xb85c
0000bb48  add      x2, sp, #0x90
0000bb4c  add      x3, sp, #0x690
0000bb50  ldr      x0, [sp, #0x68]
0000bb54  mov      w4, #0x10
0000bb58  bl       #0x47480
0000bb5c  mov      x24, x0
0000bb60  cbnz     x0, #0xb858
0000bb64  ldr      x0, [sp, #0x68]
0000bb68  bl       #0x463f8
0000bb6c  ldr      x27, [sp, #0x58]
0000bb70  adrp     x20, #0x66000
0000bb74  add      x20, x20, #0xa48
0000bb78  adrp     x21, #0x66000
0000bb7c  add      x21, x21, #0xa68
0000bb80  adrp     x22, #0x66000
0000bb84  add      x22, x22, #0xa88
0000bb88  ldr      x0, [sp, #0x78]
0000bb8c  ldr      x24, [sp, #0x18]
0000bb90  b        #0xb7a4
0000bb94  add      x2, sp, #0xd0
0000bb98  sub      x3, x29, #0xf0
0000bb9c  ldr      x0, [sp, #0x48]
0000bba0  mov      w4, #0x10
0000bba4  bl       #0x47480
0000bba8  ldp      x24, x21, [sp, #8]
0000bbac  adrp     x22, #0x6f000
0000bbb0  adrp     x23, #0x66000
0000bbb4  add      x23, x23, #0x868
0000bbb8  adrp     x25, #0x66000
0000bbbc  add      x25, x25, #0x888
0000bbc0  adrp     x26, #0x66000
0000bbc4  add      x26, x26, #0x8a8
0000bbc8  cbnz     x0, #0xb6e8
0000bbcc  ldr      x0, [sp, #0x48]
0000bbd0  bl       #0x463f8
0000bbd4  ldr      x0, [sp, #0x20]
0000bbd8  b        #0xbbe0
0000bbdc  mov      x0, x19
0000bbe0  bl       #0x463f8
0000bbe4  ldr      x8, [sp, #0x30]
0000bbe8  add      x8, x8, #1
0000bbec  str      x8, [sp, #0x30]
0000bbf0  cmp      x8, x21
0000bbf4  b.ne     #0xb634
0000bbf8  add      x2, sp, #0x110
0000bbfc  add      x3, sp, #0x190
0000bc00  ldr      x0, [sp, #0x28]
0000bc04  mov      w4, #0x10
0000bc08  bl       #0x47480
0000bc0c  mov      x21, x0
0000bc10  cbnz     x0, #0xb630
0000bc14  ldr      x0, [sp, #0x28]
0000bc18  bl       #0x463f8
0000bc1c  adrp     x8, #0x70000
0000bc20  adrp     x9, #0x70000
0000bc24  ldr      w10, [sp, #0x8c]
0000bc28  tbz      w10, #0, #0xbf00
0000bc2c  ldrb     w8, [x8, #0x590]
0000bc30  ldrb     w9, [x9, #0x591]
0000bc34  orr      w8, w8, w9
0000bc38  cbnz     w8, #0xbf4c
0000bc3c  ldr      x27, [sp, #0x58]
0000bc40  bl       #0x12b20
0000bc44  ldr      w8, [sp, #0x40]
0000bc48  cbz      w8, #0xc048
0000bc4c  adrp     x0, #0x53000
0000bc50  add      x0, x0, #0xceb
0000bc54  bl       #0x46380
0000bc58  adrp     x8, #0x6e000
0000bc5c  ldr      x1, [x8, #0xc48]
0000bc60  adrp     x2, #0x14000
0000bc64  add      x2, x2, #0x5ec
0000bc68  adrp     x3, #0x70000
0000bc6c  add      x3, x3, #0x5c0
0000bc70  bl       #0x460a4   ; MSHookMessageEx(PHAssetCollection, px_isUserCreated, IMP=0x145ec)
0000bc74  adrp     x0, #0x53000
0000bc78  add      x0, x0, #0xcfd
0000bc7c  bl       #0x46380
0000bc80  adrp     x8, #0x6f000
0000bc84  ldr      x19, [x8, #0x420]
0000bc88  adrp     x2, #0x14000
0000bc8c  add      x2, x2, #0x60c
0000bc90  adrp     x3, #0x70000
0000bc94  add      x3, x3, #0x5c8
0000bc98  mov      x1, x19
0000bc9c  bl       #0x460a4   ; MSHookMessageEx(PUDeletePhotosActionController, shouldSkipDeleteConfirmation, IMP=0x1460c)
0000bca0  adrp     x0, #0x53000
0000bca4  add      x0, x0, #0xd1c
0000bca8  bl       #0x46380
0000bcac  adrp     x2, #0x14000
0000bcb0  add      x2, x2, #0x62c
0000bcb4  adrp     x3, #0x70000
0000bcb8  add      x3, x3, #0x5d0
0000bcbc  mov      x1, x19
0000bcc0  bl       #0x460a4   ; MSHookMessageEx(PXPhotoKitDeletePhotosActionController, shouldSkipDeleteConfirmation, IMP=0x1462c)
0000bcc4  adrp     x0, #0x53000
0000bcc8  add      x0, x0, #0xd43
0000bccc  bl       #0x46380
0000bcd0  adrp     x8, #0x6f000
0000bcd4  ldr      x1, [x8, #0x2d0]
0000bcd8  adrp     x2, #0x14000
0000bcdc  add      x2, x2, #0x64c
0000bce0  adrp     x3, #0x70000
0000bce4  add      x3, x3, #0x5d8
0000bce8  bl       #0x460a4   ; MSHookMessageEx(PUOneUpBarsController, setShouldShowScrubber:, IMP=0x1464c)
0000bcec  adrp     x0, #0x53000
0000bcf0  add      x0, x0, #0xd59
0000bcf4  bl       #0x46380
0000bcf8  mov      x19, x0
0000bcfc  adrp     x8, #0x6f000
0000bd00  ldr      x1, [x8]
0000bd04  adrp     x2, #0x14000
0000bd08  add      x2, x2, #0x66c
0000bd0c  adrp     x3, #0x70000
0000bd10  add      x3, x3, #0x5e0
0000bd14  bl       #0x460a4   ; MSHookMessageEx(PUTabbedLibrarySettings, setEnableSearchTab:, IMP=0x1466c)
0000bd18  adrp     x8, #0x6e000
0000bd1c  ldr      x1, [x8, #0xff8]
0000bd20  adrp     x2, #0x14000
0000bd24  add      x2, x2, #0x68c
0000bd28  adrp     x3, #0x70000
0000bd2c  add      x3, x3, #0x5e8
0000bd30  mov      x0, x19
0000bd34  bl       #0x460a4   ; MSHookMessageEx(PUTabbedLibrarySettings, setEnableForYouTab:, IMP=0x1468c)
0000bd38  adrp     x0, #0x53000
0000bd3c  add      x0, x0, #0xd71
0000bd40  bl       #0x46380
0000bd44  mov      x19, x0
0000bd48  adrp     x8, #0x6d000
0000bd4c  ldr      x1, [x8, #0x8d0]
0000bd50  adrp     x2, #0x14000
0000bd54  add      x2, x2, #0x6ac
0000bd58  adrp     x3, #0x70000
0000bd5c  add      x3, x3, #0x5f0
0000bd60  bl       #0x460a4   ; MSHookMessageEx(PXPhotoKitCollectionsDataSourceManager, _containsAnyAssets:, IMP=0x146ac)
0000bd64  adrp     x8, #0x6d000
0000bd68  ldr      x1, [x8, #0xf38]
0000bd6c  adrp     x2, #0x14000
0000bd70  add      x2, x2, #0x730
0000bd74  adrp     x3, #0x70000
0000bd78  add      x3, x3, #0x5f8
0000bd7c  mov      x0, x19
0000bd80  bl       #0x460a4   ; MSHookMessageEx(PXPhotoKitCollectionsDataSourceManager, containsAnyAssets:, IMP=0x14730)
0000bd84  adrp     x0, #0x53000
0000bd88  add      x0, x0, #0xd98
0000bd8c  bl       #0x46380
0000bd90  adrp     x8, #0x6e000
0000bd94  ldr      x1, [x8, #0x538]
0000bd98  adrp     x2, #0x14000
0000bd9c  add      x2, x2, #0x7b4
0000bda0  adrp     x3, #0x70000
0000bda4  add      x3, x3, #0x600
0000bda8  bl       #0x460a4   ; MSHookMessageEx(PXPhotoKitCollectionsDataSourceManagerConfiguration, includePeopleAlbum, IMP=0x147b4)
0000bdac  adrp     x0, #0x53000
0000bdb0  add      x0, x0, #0xdcc
0000bdb4  bl       #0x46380
0000bdb8  adrp     x8, #0x6d000
0000bdbc  ldr      x1, [x8, #0xc10]
0000bdc0  adrp     x2, #0x14000
0000bdc4  add      x2, x2, #0x7d4
0000bdc8  adrp     x3, #0x70000
0000bdcc  add      x3, x3, #0x608
0000bdd0  bl       #0x460a4   ; MSHookMessageEx(PXPhotosViewModel, allowsSelectAllAction, IMP=0x147d4)
0000bdd4  adrp     x0, #0x53000
0000bdd8  add      x0, x0, #0xdde
0000bddc  bl       #0x46380
0000bde0  adrp     x8, #0x6d000
0000bde4  ldr      x1, [x8, #0x9c0]
0000bde8  adrp     x2, #0x14000
0000bdec  add      x2, x2, #0x7f4
0000bdf0  adrp     x3, #0x70000
0000bdf4  add      x3, x3, #0x610
0000bdf8  bl       #0x460a4   ; MSHookMessageEx(PUUserTransformView, _setPreferredMaximumZoomScale:, IMP=0x147f4)
0000bdfc  adrp     x0, #0x53000
0000be00  add      x0, x0, #0xdf2
0000be04  bl       #0x46380
0000be08  adrp     x8, #0x6d000
0000be0c  ldr      x1, [x8, #0xc00]
0000be10  adrp     x2, #0x14000
0000be14  add      x2, x2, #0x818
0000be18  adrp     x3, #0x70000
0000be1c  add      x3, x3, #0x618
0000be20  bl       #0x460a4   ; MSHookMessageEx(PXVerticalSwipeGestureRecognizerHelper, allowSwipeUp, IMP=0x14818)
0000be24  adrp     x0, #0x53000
0000be28  add      x0, x0, #0xe19
0000be2c  bl       #0x46380
0000be30  mov      x19, x0
0000be34  adrp     x8, #0x6e000
0000be38  ldr      x1, [x8, #0x8c8]
0000be3c  adrp     x2, #0x14000
0000be40  add      x2, x2, #0x838
0000be44  adrp     x3, #0x70000
0000be48  add      x3, x3, #0x620
0000be4c  bl       #0x460a4   ; MSHookMessageEx(PXCuratedLibraryZoomLevelControl, layoutSubviews, IMP=0x14838)
0000be50  adrp     x8, #0x6d000
0000be54  ldr      x1, [x8, #0xae8]
0000be58  adrp     x2, #0x14000
0000be5c  add      x2, x2, #0x88c
0000be60  adrp     x3, #0x70000
0000be64  add      x3, x3, #0x628
0000be68  mov      x0, x19
0000be6c  bl       #0x460a4   ; MSHookMessageEx(PXCuratedLibraryZoomLevelControl, _updateSubviews, IMP=0x1488c)
0000be70  adrp     x8, #0x6f000
0000be74  ldr      x1, [x8, #0x280]
0000be78  adrp     x2, #0x14000
0000be7c  add      x2, x2, #0x8e0
0000be80  adrp     x3, #0x70000
0000be84  add      x3, x3, #0x630
0000be88  mov      x0, x19
0000be8c  bl       #0x460a4   ; MSHookMessageEx(PXCuratedLibraryZoomLevelControl, setSelectedZoomLevel:, IMP=0x148e0)
0000be90  ldr      x27, [sp, #0x58]
0000be94  bl       #0x45f6c
0000be98  adrp     x2, #0x14000
0000be9c  add      x2, x2, #0x934
0000bea0  b        #0xc028
0000bea4  mov      x0, x24
0000bea8  b        #0xbefc
0000beac  mov      x0, x19
0000beb0  bl       #0x463f8
0000beb4  mov      x0, x23
0000beb8  bl       #0x463f8
0000bebc  mov      x0, x21
0000bec0  bl       #0x463f8
0000bec4  mov      x0, x25
0000bec8  bl       #0x463f8
0000becc  ldr      x0, [sp, #0x68]
0000bed0  bl       #0x463f8
0000bed4  ldr      x0, [sp, #0x78]
0000bed8  bl       #0x463f8
0000bedc  ldr      x0, [sp, #0x60]
0000bee0  bl       #0x463f8
0000bee4  ldr      x0, [sp, #0x48]
0000bee8  bl       #0x463f8
0000beec  ldr      x0, [sp, #0x20]
0000bef0  bl       #0x463f8
0000bef4  ldr      x27, [sp, #0x58]
0000bef8  ldr      x0, [sp, #0x28]
0000befc  bl       #0x463f8
0000bf00  mov      x0, x27
0000bf04  bl       #0x463f8
0000bf08  ldr      x0, [sp, #0x70]
0000bf0c  bl       #0x46308
0000bf10  ldur     x8, [x29, #-0x70]
0000bf14  adrp     x9, #0x64000
0000bf18  ldr      x9, [x9, #0x268]
0000bf1c  ldr      x9, [x9]
0000bf20  cmp      x9, x8
0000bf24  b.ne     #0xe3e8
0000bf28  add      sp, sp, #0x7a0
0000bf2c  ldp      x29, x30, [sp, #0x60]
0000bf30  ldp      x20, x19, [sp, #0x50]
0000bf34  ldp      x22, x21, [sp, #0x40]
0000bf38  ldp      x24, x23, [sp, #0x30]
0000bf3c  ldp      x26, x25, [sp, #0x20]
0000bf40  ldp      x28, x27, [sp, #0x10]
0000bf44  ldp      d9, d8, [sp], #0x70
0000bf48  ret      
0000bf4c  ldr      x27, [sp, #0x58]
0000bf50  bl       #0x128a8
0000bf54  adrp     x0, #0x53000
0000bf58  add      x0, x0, #0xc6a
0000bf5c  bl       #0x46380
0000bf60  adrp     x8, #0x6f000
0000bf64  ldr      x1, [x8, #0x290]
0000bf68  adrp     x2, #0x12000
0000bf6c  add      x2, x2, #0x914
0000bf70  adrp     x3, #0x70000
0000bf74  add      x3, x3, #0x598
0000bf78  bl       #0x460a4   ; MSHookMessageEx(_UICollectionViewListLayoutSectionConfiguration, setSeparatorStyle:, IMP=0x12914)
0000bf7c  adrp     x0, #0x53000
0000bf80  add      x0, x0, #0xc9a
0000bf84  bl       #0x46380
0000bf88  mov      x19, x0
0000bf8c  adrp     x8, #0x6d000
0000bf90  ldr      x1, [x8, #0xad0]
0000bf94  adrp     x2, #0x12000
0000bf98  add      x2, x2, #0x964
0000bf9c  adrp     x3, #0x70000
0000bfa0  add      x3, x3, #0x5a0
0000bfa4  bl       #0x460a4   ; MSHookMessageEx(UITableViewCell, _updateSeparatorContent, IMP=0x12964)
0000bfa8  adrp     x8, #0x6d000
0000bfac  ldr      x1, [x8, #0xad8]
0000bfb0  adrp     x2, #0x12000
0000bfb4  add      x2, x2, #0x9b0
0000bfb8  adrp     x3, #0x70000
0000bfbc  add      x3, x3, #0x5a8
0000bfc0  mov      x0, x19
0000bfc4  bl       #0x460a4   ; MSHookMessageEx(UITableViewCell, _updateSeparatorContent:, IMP=0x129b0)
0000bfc8  adrp     x0, #0x53000
0000bfcc  add      x0, x0, #0xcaa
0000bfd0  bl       #0x46380
0000bfd4  adrp     x8, #0x6d000
0000bfd8  ldr      x1, [x8, #0xca0]
0000bfdc  adrp     x2, #0x12000
0000bfe0  add      x2, x2, #0x9fc
0000bfe4  adrp     x3, #0x70000
0000bfe8  add      x3, x3, #0x5b0
0000bfec  bl       #0x460a4   ; MSHookMessageEx(_UICollectionViewListSeparatorView, applyLayoutAttributes:, IMP=0x129fc)
0000bff0  adrp     x0, #0x53000
0000bff4  add      x0, x0, #0xccd
0000bff8  bl       #0x46380
0000bffc  adrp     x8, #0x6e000
0000c000  ldr      x1, [x8, #0x8c8]
0000c004  adrp     x2, #0x12000
0000c008  add      x2, x2, #0xaa8
0000c00c  adrp     x3, #0x70000
0000c010  add      x3, x3, #0x5b8
0000c014  bl       #0x460a4   ; MSHookMessageEx(_UITableViewCellSeparatorView, layoutSubviews, IMP=0x12aa8)
0000c018  ldr      x27, [sp, #0x58]
0000c01c  bl       #0x45f6c
0000c020  adrp     x2, #0x12000
0000c024  add      x2, x2, #0x8a8
0000c028  adrp     x3, #0x64000
0000c02c  add      x3, x3, #0xf48
0000c030  mov      x1, #0
0000c034  mov      x4, #0
0000c038  mov      w5, #4
0000c03c  ldr      x27, [sp, #0x58]
0000c040  bl       #0x45f60
0000c044  b        #0xbf00
0000c048  adrp     x8, #0x70000
0000c04c  ldrb     w8, [x8, #0x638]
0000c050  cbz      w8, #0xc190
0000c054  adrp     x0, #0x53000
0000c058  add      x0, x0, #0xe3a
0000c05c  bl       #0x46380
0000c060  adrp     x8, #0x6e000
0000c064  ldr      x1, [x8, #0xfe0]
0000c068  adrp     x2, #0x15000
0000c06c  add      x2, x2, #0xcc
0000c070  adrp     x3, #0x70000
0000c074  add      x3, x3, #0x640
0000c078  bl       #0x460a4   ; MSHookMessageEx(UICalloutBarButton, setDividerOffset:, IMP=0x150cc)
0000c07c  adrp     x0, #0x53000
0000c080  add      x0, x0, #0xc9a
0000c084  bl       #0x46380
0000c088  mov      x19, x0
0000c08c  adrp     x8, #0x6d000
0000c090  ldr      x1, [x8, #0xad0]
0000c094  adrp     x2, #0x15000
0000c098  add      x2, x2, #0xdc
0000c09c  adrp     x3, #0x70000
0000c0a0  add      x3, x3, #0x648
0000c0a4  bl       #0x460a4   ; MSHookMessageEx(UITableViewCell, _updateSeparatorContent, IMP=0x150dc)
0000c0a8  adrp     x8, #0x6d000
0000c0ac  ldr      x1, [x8, #0xad8]
0000c0b0  adrp     x2, #0x15000
0000c0b4  add      x2, x2, #0xe0
0000c0b8  adrp     x3, #0x70000
0000c0bc  add      x3, x3, #0x650
0000c0c0  mov      x0, x19
0000c0c4  bl       #0x460a4   ; MSHookMessageEx(UITableViewCell, _updateSeparatorContent:, IMP=0x150e0)
0000c0c8  adrp     x0, #0x53000
0000c0cc  add      x0, x0, #0xe4d
0000c0d0  bl       #0x46380
0000c0d4  adrp     x8, #0x6d000
0000c0d8  ldr      x1, [x8, #0xa08]
0000c0dc  adrp     x2, #0x15000
0000c0e0  add      x2, x2, #0xe4
0000c0e4  adrp     x3, #0x70000
0000c0e8  add      x3, x3, #0x658
0000c0ec  bl       #0x460a4   ; MSHookMessageEx(_UIAlertControllerInterfaceActionGroupView, _shouldShowSeparatorAboveActionsSequenceView, IMP=0x150e4)
0000c0f0  adrp     x0, #0x53000
0000c0f4  add      x0, x0, #0xc6a
0000c0f8  bl       #0x46380
0000c0fc  adrp     x8, #0x6f000
0000c100  ldr      x1, [x8, #0x290]
0000c104  adrp     x2, #0x15000
0000c108  add      x2, x2, #0xec
0000c10c  adrp     x3, #0x70000
0000c110  add      x3, x3, #0x660
0000c114  bl       #0x460a4   ; MSHookMessageEx(_UICollectionViewListLayoutSectionConfiguration, setSeparatorStyle:, IMP=0x150ec)
0000c118  adrp     x0, #0x53000
0000c11c  add      x0, x0, #0xe78
0000c120  bl       #0x46380
0000c124  adrp     x8, #0x6d000
0000c128  ldr      x1, [x8, #0x850]
0000c12c  adrp     x2, #0x15000
0000c130  add      x2, x2, #0xfc
0000c134  adrp     x3, #0x70000
0000c138  add      x3, x3, #0x668
0000c13c  bl       #0x460a4   ; MSHookMessageEx(_UIInterfaceActionSeparatableSequenceView, _addSeparatorToStackAndMutableArray:preferSectionStyle:, IMP=0x150fc)
0000c140  adrp     x0, #0x53000
0000c144  add      x0, x0, #0xea2
0000c148  bl       #0x46380
0000c14c  adrp     x8, #0x6e000
0000c150  ldr      x1, [x8, #0xf40]
0000c154  adrp     x2, #0x15000
0000c158  add      x2, x2, #0x100
0000c15c  adrp     x3, #0x70000
0000c160  add      x3, x3, #0x670
0000c164  bl       #0x460a4   ; MSHookMessageEx(_UIInterfaceActionBlankSeparatorView, setConstantAxisDimension:, IMP=0x15100)
0000c168  adrp     x0, #0x53000
0000c16c  add      x0, x0, #0xec7
0000c170  bl       #0x46380
0000c174  adrp     x8, #0x6d000
0000c178  ldr      x1, [x8, #0xca8]
0000c17c  adrp     x2, #0x15000
0000c180  add      x2, x2, #0x110
0000c184  adrp     x3, #0x70000
0000c188  add      x3, x3, #0x678
0000c18c  bl       #0x460a4   ; MSHookMessageEx(_UIVisualEffectContentView, applyRequestedFilterEffects, IMP=0x15110)
0000c190  ldr      w8, [sp, #0x38]
0000c194  cbz      w8, #0xc420
0000c198  adrp     x0, #0x65000
0000c19c  add      x0, x0, #0x3c8
0000c1a0  bl       #0x460b0
0000c1a4  mov      x19, x0
0000c1a8  cbz      x0, #0xc22c
0000c1ac  adrp     x8, #0x6e000
0000c1b0  ldr      x20, [x8, #0x8c8]
0000c1b4  mov      x0, x19
0000c1b8  mov      x1, x20
0000c1bc  bl       #0x461c4
0000c1c0  cbz      x0, #0xc22c
0000c1c4  adrp     x8, #0x6f000
0000c1c8  ldr      x0, [x8, #0x8a8]
0000c1cc  bl       #0x4ac40
0000c1d0  mov      x29, x29
0000c1d4  bl       #0x46428
0000c1d8  adrp     x9, #0x70000
0000c1dc  ldr      x8, [x9, #0x588]
0000c1e0  str      x0, [x9, #0x588]
0000c1e4  mov      x0, x8
0000c1e8  bl       #0x463f8
0000c1ec  adrp     x2, #0x15000
0000c1f0  add      x2, x2, #0x114
0000c1f4  adrp     x3, #0x70000
0000c1f8  add      x3, x3, #0x680
0000c1fc  mov      x0, x19
0000c200  mov      x1, x20
0000c204  bl       #0x460a4   ; MSHookMessageEx(_UIScrollViewScrollIndicator, layoutSubviews, IMP=0x15114)
0000c208  bl       #0x45f6c
0000c20c  adrp     x2, #0x15000
0000c210  add      x2, x2, #0x140
0000c214  adrp     x3, #0x64000
0000c218  add      x3, x3, #0xf48
0000c21c  mov      x1, #0
0000c220  mov      x4, #0
0000c224  mov      w5, #4
0000c228  bl       #0x45f60
0000c22c  adrp     x0, #0x65000
0000c230  add      x0, x0, #0x3e8
0000c234  bl       #0x460b0
0000c238  cbz      x0, #0xc380
0000c23c  adrp     x0, #0x65000
0000c240  add      x0, x0, #0x408
0000c244  bl       #0x460b0
0000c248  cbz      x0, #0xc380
0000c24c  adrp     x0, #0x53000
0000c250  add      x0, x0, #0xf17
0000c254  bl       #0x46380
0000c258  adrp     x8, #0x6e000
0000c25c  ldr      x1, [x8, #0x650]
0000c260  adrp     x2, #0x15000
0000c264  add      x2, x2, #0x1a8
0000c268  adrp     x3, #0x70000
0000c26c  add      x3, x3, #0x688
0000c270  bl       #0x460a4   ; MSHookMessageEx(PSKeyboardNavigationSearchController, initWithSearchResultsController:, IMP=0x151a8)
0000c274  adrp     x0, #0x53000
0000c278  add      x0, x0, #0xeff
0000c27c  bl       #0x46380
0000c280  mov      x19, x0
0000c284  adrp     x8, #0x6e000
0000c288  ldr      x1, [x8, #0x558]
0000c28c  adrp     x2, #0x15000
0000c290  add      x2, x2, #0x24c
0000c294  adrp     x3, #0x70000
0000c298  add      x3, x3, #0x690
0000c29c  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, init, IMP=0x1524c)
0000c2a0  adrp     x8, #0x6e000
0000c2a4  ldr      x1, [x8, #0x928]
0000c2a8  adrp     x2, #0x15000
0000c2ac  add      x2, x2, #0x290
0000c2b0  adrp     x3, #0x70000
0000c2b4  add      x3, x3, #0x698
0000c2b8  mov      x0, x19
0000c2bc  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, loadView, IMP=0x15290)
0000c2c0  adrp     x8, #0x6f000
0000c2c4  ldr      x1, [x8, #0x768]
0000c2c8  adrp     x2, #0x15000
0000c2cc  add      x2, x2, #0x2bc
0000c2d0  adrp     x3, #0x70000
0000c2d4  add      x3, x3, #0x6a0
0000c2d8  mov      x0, x19
0000c2dc  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, viewDidLayoutSubviews, IMP=0x152bc)
0000c2e0  adrp     x8, #0x6f000
0000c2e4  ldr      x1, [x8, #0x758]
0000c2e8  adrp     x2, #0x15000
0000c2ec  add      x2, x2, #0x2e8
0000c2f0  adrp     x3, #0x70000
0000c2f4  add      x3, x3, #0x6a8
0000c2f8  mov      x0, x19
0000c2fc  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, viewDidAppear:, IMP=0x152e8)
0000c300  adrp     x8, #0x6f000
0000c304  ldr      x1, [x8, #0x2e8]
0000c308  adrp     x2, #0x15000
0000c30c  add      x2, x2, #0x314
0000c310  adrp     x3, #0x70000
0000c314  add      x3, x3, #0x6b0
0000c318  mov      x0, x19
0000c31c  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, setSpotlightSearchController:, IMP=0x15314)
0000c320  adrp     x8, #0x6f000
0000c324  ldr      x1, [x8, #0x470]
0000c328  adrp     x2, #0x15000
0000c32c  add      x2, x2, #0x38c
0000c330  adrp     x3, #0x70000
0000c334  add      x3, x3, #0x6b8
0000c338  mov      x0, x19
0000c33c  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, spotlightSearchController, IMP=0x1538c)
0000c340  adrp     x8, #0x6d000
0000c344  ldr      x1, [x8, #0xf90]
0000c348  adrp     x2, #0x15000
0000c34c  add      x2, x2, #0x3c4
0000c350  adrp     x3, #0x70000
0000c354  add      x3, x3, #0x6c0
0000c358  mov      x0, x19
0000c35c  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, continueSearchInSettingsWithTerm:, IMP=0x153c4)
0000c360  adrp     x8, #0x6d000
0000c364  ldr      x1, [x8, #0x8e8]
0000c368  adrp     x2, #0x15000
0000c36c  add      x2, x2, #0x434
0000c370  adrp     x3, #0x70000
0000c374  add      x3, x3, #0x6c8
0000c378  mov      x0, x19
0000c37c  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, _delayedSpotlightSearch, IMP=0x15434)
0000c380  adrp     x8, #0x70000
0000c384  ldrb     w8, [x8, #0x6d0]
0000c388  ldr      x27, [sp, #0x58]
0000c38c  cbnz     w8, #0xc3a8
0000c390  adrp     x8, #0x70000
0000c394  ldrb     w8, [x8, #0x6d1]
0000c398  cbnz     w8, #0xc3a8
0000c39c  adrp     x8, #0x70000
0000c3a0  ldrb     w8, [x8, #0x6d2]
0000c3a4  cbz      w8, #0xbf00
0000c3a8  adrp     x8, #0x71000
0000c3ac  ldr      x8, [x8, #0x898]
0000c3b0  cmn      x8, #1
0000c3b4  b.ne     #0x120ac
0000c3b8  adrp     x0, #0x53000
0000c3bc  add      x0, x0, #0xf3c
0000c3c0  bl       #0x46380
0000c3c4  bl       #0x4647c
0000c3c8  mov      x19, x0
0000c3cc  adrp     x8, #0x6d000
0000c3d0  ldr      x1, [x8, #0x870]
0000c3d4  adrp     x2, #0x15000
0000c3d8  add      x2, x2, #0x450
0000c3dc  adrp     x3, #0x70000
0000c3e0  add      x3, x3, #0x6d8
0000c3e4  bl       #0x460a4   ; MSHookMessageEx(None, _applicationIconImageForBundleIdentifier:format:, IMP=0x15450)
0000c3e8  adrp     x8, #0x6d000
0000c3ec  ldr      x1, [x8, #0x878]
0000c3f0  adrp     x2, #0x15000
0000c3f4  add      x2, x2, #0x518
0000c3f8  adrp     x3, #0x70000
0000c3fc  add      x3, x3, #0x6e0
0000c400  mov      x0, x19
0000c404  bl       #0x460a4   ; MSHookMessageEx(PSUIPrefsListController, _applicationIconImageForBundleIdentifier:format:scale:, IMP=0x15518)
0000c408  adrp     x0, #0x64000
0000c40c  ldr      x0, [x0, #0x278]
0000c410  adrp     x1, #0x64000
0000c414  add      x1, x1, #0x5a8
0000c418  bl       #0x46200
0000c41c  b        #0xb3b8
0000c420  adrp     x0, #0x65000
0000c424  add      x0, x0, #0x428
0000c428  bl       #0x460b0
0000c42c  mov      x20, x0
0000c430  cbz      x0, #0xc468
0000c434  adrp     x8, #0x6e000
0000c438  ldr      x19, [x8, #0xcd0]
0000c43c  mov      x0, x20
0000c440  mov      x1, x19
0000c444  bl       #0x461c4
0000c448  cbz      x0, #0xc468
0000c44c  adrp     x2, #0x16000
0000c450  add      x2, x2, #0x3c
0000c454  adrp     x3, #0x70000
0000c458  add      x3, x3, #0x6e8
0000c45c  mov      x0, x20
0000c460  mov      x1, x19
0000c464  bl       #0x460a4   ; MSHookMessageEx(SBSystemApertureController, registerElement:, IMP=0x1603c)
0000c468  adrp     x0, #0x65000
0000c46c  add      x0, x0, #0x448
0000c470  bl       #0x460b0
0000c474  mov      x19, x0
0000c478  adrp     x0, #0x65000
0000c47c  add      x0, x0, #0x468
0000c480  bl       #0x460b0
0000c484  cbz      x20, #0xc4ec
0000c488  cbz      x19, #0xc4ec
0000c48c  mov      x21, x0
0000c490  cbz      x0, #0xc4ec
0000c494  adrp     x0, #0x65000
0000c498  add      x0, x0, #0x488
0000c49c  bl       #0x460b0
0000c4a0  cbz      x0, #0xc4ec
0000c4a4  adrp     x8, #0x6f000
0000c4a8  ldr      x20, [x8, #0x438]
0000c4ac  mov      x0, x19
0000c4b0  mov      x1, x20
0000c4b4  bl       #0x461c4
0000c4b8  cbz      x0, #0xc4ec
0000c4bc  adrp     x8, #0x6e000
0000c4c0  ldr      x1, [x8, #0xff0]
0000c4c4  mov      x0, x21
0000c4c8  bl       #0x461c4
0000c4cc  cbz      x0, #0xc4ec
0000c4d0  adrp     x2, #0x16000
0000c4d4  add      x2, x2, #0x27c
0000c4d8  adrp     x3, #0x70000
0000c4dc  add      x3, x3, #0x6f0
0000c4e0  mov      x0, x19
0000c4e4  mov      x1, x20
0000c4e8  bl       #0x460a4   ; MSHookMessageEx(SBSystemActionPreviewCoordinator, showPreviewForAction:withContext:, IMP=0x1627c)
0000c4ec  adrp     x8, #0x70000
0000c4f0  ldrb     w8, [x8, #0x490]
0000c4f4  adrp     x9, #0x70000
0000c4f8  ldrb     w9, [x9, #0x494]
0000c4fc  adrp     x10, #0x70000
0000c500  ldrb     w10, [x10, #0x6f8]
0000c504  adrp     x11, #0x70000
0000c508  ldrb     w11, [x11, #0x6f9]
0000c50c  mov      w26, #1
0000c510  cbnz     w8, #0xc554
0000c514  adrp     x12, #0x70000
0000c518  ldrb     w12, [x12, #0x492]
0000c51c  cbnz     w12, #0xc554
0000c520  adrp     x12, #0x70000
0000c524  ldrb     w12, [x12, #0x493]
0000c528  cbnz     w12, #0xc554
0000c52c  cbnz     w9, #0xc554
0000c530  cbnz     w10, #0xc554
0000c534  cbnz     w11, #0xc554
0000c538  adrp     x12, #0x70000
0000c53c  ldrb     w12, [x12, #0x6fa]
0000c540  cbnz     w12, #0xc554
0000c544  adrp     x12, #0x70000
0000c548  ldrb     w12, [x12, #0x6fb]
0000c54c  cmp      w12, #0
0000c550  cset     w26, ne
0000c554  adrp     x12, #0x70000
0000c558  ldrb     w12, [x12, #0x491]
0000c55c  orr      w8, w12, w8
0000c560  orr      w8, w8, w9
0000c564  orr      w8, w8, w10
0000c568  orr      w8, w8, w11
0000c56c  cmp      w8, #0
0000c570  cset     w25, ne
0000c574  adrp     x8, #0x70000
0000c578  ldrb     w8, [x8, #0x6fc]
0000c57c  cmp      w8, #0
0000c580  cset     w8, ne
0000c584  str      w8, [sp, #0x78]
0000c588  adrp     x8, #0x70000
0000c58c  ldrb     w8, [x8, #0x6fe]
0000c590  adrp     x9, #0x70000
0000c594  ldrb     w9, [x9, #0x6ff]
0000c598  orr      w8, w8, w9
0000c59c  cbnz     w8, #0xc5b4
0000c5a0  adrp     x8, #0x70000
0000c5a4  ldrb     w8, [x8, #0x700]
0000c5a8  cmp      w8, #0
0000c5ac  cset     w8, ne
0000c5b0  b        #0xc5b8
0000c5b4  mov      w8, #1
0000c5b8  str      w8, [sp, #0x80]
0000c5bc  adrp     x8, #0x70000
0000c5c0  adrp     x9, #0x70000
0000c5c4  ldrb     w9, [x9, #0x701]
0000c5c8  mov      w10, #1
0000c5cc  str      w10, [sp, #0x8c]
0000c5d0  cbnz     w9, #0xc600
0000c5d4  adrp     x9, #0x70000
0000c5d8  ldrb     w9, [x9, #0x702]
0000c5dc  cbnz     w9, #0xc600
0000c5e0  adrp     x9, #0x70000
0000c5e4  ldrb     w9, [x9, #0x703]
0000c5e8  cbnz     w9, #0xc600
0000c5ec  adrp     x9, #0x70000
0000c5f0  ldrb     w9, [x9, #0x704]
0000c5f4  cmp      w9, #0
0000c5f8  cset     w9, ne
0000c5fc  str      w9, [sp, #0x8c]
0000c600  ldrb     w8, [x8, #0x6fd]
0000c604  str      w8, [sp, #0x68]
0000c608  adrp     x8, #0x70000
0000c60c  ldr      w8, [x8, #0x708]
0000c610  sub      w9, w8, #1
0000c614  adrp     x8, #0x70000
0000c618  ldr      d0, [x8, #0x298]
0000c61c  fmov     d1, #2.00000000
0000c620  fcmp     d0, d1
0000c624  fmov     d1, #0.50000000
0000c628  fccmp    d0, d1, #8, ls
0000c62c  fmov     d1, #1.00000000
0000c630  fcsel    d8, d0, d1, ge
0000c634  adrp     x8, #0x70000
0000c638  ldrb     w8, [x8, #0x70c]
0000c63c  str      w8, [sp, #0x60]
0000c640  adrp     x8, #0x70000
0000c644  ldrb     w8, [x8, #0x70d]
0000c648  cmp      w8, #0
0000c64c  cset     w23, ne
0000c650  adrp     x8, #0x70000
0000c654  ldrb     w24, [x8, #0x70e]
0000c658  adrp     x8, #0x70000
0000c65c  ldrb     w8, [x8, #0x70f]
0000c660  cmp      w8, #0
0000c664  mov      w8, #0x64
0000c668  str      w9, [sp, #0x48]
0000c66c  ccmp     w9, w8, #0, eq
0000c670  cset     w8, lo
0000c674  str      w8, [sp, #0x50]
0000c678  adrp     x0, #0x65000
0000c67c  add      x0, x0, #0x4a8
0000c680  bl       #0x460b0
0000c684  mov      x19, x0
0000c688  adrp     x0, #0x65000
0000c68c  add      x0, x0, #0x4c8
0000c690  bl       #0x460b0
0000c694  cbz      x19, #0xc6d0
0000c698  mov      x20, x0
0000c69c  adrp     x8, #0x6e000
0000c6a0  ldr      x21, [x8, #0xb78]
0000c6a4  mov      x0, x19
0000c6a8  mov      x1, x21
0000c6ac  bl       #0x461c4
0000c6b0  cbz      x0, #0xe378
0000c6b4  adrp     x2, #0x16000
0000c6b8  add      x2, x2, #0x3d0
0000c6bc  adrp     x3, #0x70000
0000c6c0  add      x3, x3, #0x710
0000c6c4  mov      x0, x19
0000c6c8  mov      x1, x21
0000c6cc  bl       #0x460a4   ; MSHookMessageEx(SBUIController, possiblyWakeForPowerStatusChangeWithUnlockSource:, IMP=0x163d0)
0000c6d0  adrp     x8, #0x70000
0000c6d4  ldrb     w8, [x8, #0x728]
0000c6d8  cbz      w8, #0xc750
0000c6dc  adrp     x0, #0x53000
0000c6e0  add      x0, x0, #0xfd5
0000c6e4  bl       #0x46380
0000c6e8  mov      x20, x0
0000c6ec  adrp     x8, #0x6d000
0000c6f0  ldr      x1, [x8, #0xe10]
0000c6f4  adrp     x2, #0x16000
0000c6f8  add      x2, x2, #0x4bc
0000c6fc  adrp     x3, #0x70000
0000c700  add      x3, x3, #0x730
0000c704  bl       #0x460a4   ; MSHookMessageEx(SBNCScreenController, canTurnOnScreenForNotificationRequest:, IMP=0x164bc)
0000c708  adrp     x8, #0x6d000
0000c70c  ldr      x19, [x8, #0xa70]
0000c710  adrp     x2, #0x16000
0000c714  add      x2, x2, #0x540
0000c718  adrp     x3, #0x70000
0000c71c  add      x3, x3, #0x738
0000c720  mov      x0, x20
0000c724  mov      x1, x19
0000c728  bl       #0x460a4   ; MSHookMessageEx(SBNCScreenController, _turnOnScreen, IMP=0x16540)
0000c72c  adrp     x0, #0x53000
0000c730  add      x0, x0, #0xfea
0000c734  bl       #0x46380
0000c738  adrp     x2, #0x16000
0000c73c  add      x2, x2, #0x55c
0000c740  adrp     x3, #0x70000
0000c744  add      x3, x3, #0x740
0000c748  mov      x1, x19
0000c74c  bl       #0x460a4   ; MSHookMessageEx(SBLockScreenNotificationListController, _turnOnScreen, IMP=0x1655c)
0000c750  adrp     x8, #0x70000
0000c754  ldrb     w8, [x8, #0x748]
0000c758  cbz      w8, #0xc7a4
0000c75c  adrp     x0, #0x65000
0000c760  add      x0, x0, #0x4e8
0000c764  bl       #0x460b0
0000c768  cbz      x0, #0xc7a4
0000c76c  adrp     x0, #0x65000
0000c770  add      x0, x0, #0x508
0000c774  bl       #0x460b0
0000c778  cbz      x0, #0xc7a4
0000c77c  adrp     x0, #0x54000
0000c780  add      x0, x0, #0x11
0000c784  bl       #0x46380
0000c788  adrp     x8, #0x6d000
0000c78c  ldr      x1, [x8, #0xe08]
0000c790  adrp     x2, #0x16000
0000c794  add      x2, x2, #0x578
0000c798  adrp     x3, #0x70000
0000c79c  add      x3, x3, #0x750
0000c7a0  bl       #0x460a4   ; MSHookMessageEx(SBNCSoundController, canPlaySoundForNotificationRequest:, IMP=0x16578)
0000c7a4  adrp     x8, #0x70000
0000c7a8  ldrb     w8, [x8, #0x758]
0000c7ac  cbz      w8, #0xc868
0000c7b0  adrp     x0, #0x54000
0000c7b4  add      x0, x0, #0x37
0000c7b8  mov      w1, #2
0000c7bc  bl       #0x4623c
0000c7c0  adrp     x0, #0x54000
0000c7c4  add      x0, x0, #0x7d
0000c7c8  mov      w1, #2
0000c7cc  bl       #0x4623c
0000c7d0  adrp     x8, #0x6f000
0000c7d4  ldr      x0, [x8, #0x8a0]
0000c7d8  adrp     x2, #0x65000
0000c7dc  add      x2, x2, #0x528
0000c7e0  bl       #0x46e80
0000c7e4  mov      x29, x29
0000c7e8  bl       #0x46428
0000c7ec  mov      x19, x0
0000c7f0  cbz      x0, #0xc808
0000c7f4  mov      x0, x19
0000c7f8  bl       #0x48300
0000c7fc  tbnz     w0, #0, #0xc808
0000c800  mov      x0, x19
0000c804  bl       #0x485a0
0000c808  adrp     x0, #0x65000
0000c80c  add      x0, x0, #0x548
0000c810  bl       #0x460b0
0000c814  cbz      x0, #0xc860
0000c818  adrp     x0, #0x65000
0000c81c  add      x0, x0, #0x568
0000c820  bl       #0x460b0
0000c824  cbz      x0, #0xc860
0000c828  adrp     x0, #0x65000
0000c82c  add      x0, x0, #0x588
0000c830  bl       #0x460b0
0000c834  cbz      x0, #0xc860
0000c838  adrp     x0, #0x54000
0000c83c  add      x0, x0, #0x106
0000c840  bl       #0x46380
0000c844  adrp     x8, #0x6f000
0000c848  ldr      x1, [x8, #0x238]
0000c84c  adrp     x2, #0x16000
0000c850  add      x2, x2, #0x6ac
0000c854  adrp     x3, #0x70000
0000c858  add      x3, x3, #0x760
0000c85c  bl       #0x460a4   ; MSHookMessageEx(RPScreenRecorder, setRecording:, IMP=0x166ac)
0000c860  mov      x0, x19
0000c864  bl       #0x463f8
0000c868  adrp     x8, #0x70000
0000c86c  ldrb     w8, [x8, #0x768]
0000c870  cbz      w8, #0xc974
0000c874  adrp     x0, #0x54000
0000c878  add      x0, x0, #0x147
0000c87c  bl       #0x46380
0000c880  mov      x19, x0
0000c884  adrp     x8, #0x6e000
0000c888  ldr      x1, [x8, #0x4b8]
0000c88c  adrp     x2, #0x16000
0000c890  add      x2, x2, #0x7f8
0000c894  adrp     x3, #0x70000
0000c898  add      x3, x3, #0x770
0000c89c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderControllerConfiguration, ignoresOverscrollOnLastPageOrientations, IMP=0x167f8)
0000c8a0  adrp     x8, #0x6f000
0000c8a4  ldr      x1, [x8, #0x98]
0000c8a8  adrp     x2, #0x16000
0000c8ac  add      x2, x2, #0x818
0000c8b0  adrp     x3, #0x70000
0000c8b4  add      x3, x3, #0x778
0000c8b8  mov      x0, x19
0000c8bc  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderControllerConfiguration, setIgnoresOverscrollOnLastPageOrientations:, IMP=0x16818)
0000c8c0  adrp     x0, #0x54000
0000c8c4  add      x0, x0, #0x16b
0000c8c8  bl       #0x46380
0000c8cc  adrp     x8, #0x6d000
0000c8d0  ldr      x1, [x8, #0xa68]
0000c8d4  adrp     x2, #0x16000
0000c8d8  add      x2, x2, #0x834
0000c8dc  adrp     x3, #0x70000
0000c8e0  add      x3, x3, #0x780
0000c8e4  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, _trailingCustomPageCount, IMP=0x16834)
0000c8e8  adrp     x0, #0x54000
0000c8ec  add      x0, x0, #0x17c
0000c8f0  bl       #0x46380
0000c8f4  mov      x19, x0
0000c8f8  adrp     x8, #0x6e000
0000c8fc  ldr      x1, [x8, #0x700]
0000c900  adrp     x2, #0x16000
0000c904  add      x2, x2, #0x914
0000c908  adrp     x3, #0x70000
0000c90c  add      x3, x3, #0x788
0000c910  bl       #0x460a4   ; MSHookMessageEx(SBIconController, isAppLibraryAllowed, IMP=0x16914)
0000c914  adrp     x8, #0x6e000
0000c918  ldr      x1, [x8, #0x708]
0000c91c  adrp     x2, #0x16000
0000c920  add      x2, x2, #0x934
0000c924  adrp     x3, #0x70000
0000c928  add      x3, x3, #0x790
0000c92c  mov      x0, x19
0000c930  bl       #0x460a4   ; MSHookMessageEx(SBIconController, isAppLibrarySupported, IMP=0x16934)
0000c934  adrp     x8, #0x6e000
0000c938  ldr      x1, [x8, #0x448]
0000c93c  adrp     x2, #0x16000
0000c940  add      x2, x2, #0x954
0000c944  adrp     x3, #0x70000
0000c948  add      x3, x3, #0x798
0000c94c  mov      x0, x19
0000c950  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:rootFolderController:didOverscrollOnLastPageByAmount:, IMP=0x16954)
0000c954  adrp     x8, #0x6e000
0000c958  ldr      x1, [x8, #0x440]
0000c95c  adrp     x2, #0x16000
0000c960  add      x2, x2, #0x9f8
0000c964  adrp     x3, #0x70000
0000c968  add      x3, x3, #0x7a0
0000c96c  mov      x0, x19
0000c970  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:rootFolderController:didEndOverscrollOnLastPageWithVelocity:translation:, IMP=0x169f8)
0000c974  adrp     x8, #0x70000
0000c978  ldrb     w8, [x8, #0x7a8]
0000c97c  cbz      w8, #0xcb38
0000c980  adrp     x0, #0x65000
0000c984  add      x0, x0, #0x5a8
0000c988  bl       #0x460b0
0000c98c  cbnz     x0, #0xc9c0
0000c990  adrp     x0, #0x65000
0000c994  add      x0, x0, #0x5c8
0000c998  bl       #0x460b0
0000c99c  cbnz     x0, #0xc9c0
0000c9a0  adrp     x0, #0x65000
0000c9a4  add      x0, x0, #0x5e8
0000c9a8  bl       #0x460b0
0000c9ac  cbnz     x0, #0xc9c0
0000c9b0  adrp     x0, #0x65000
0000c9b4  add      x0, x0, #0x608
0000c9b8  bl       #0x460b0
0000c9bc  cbz      x0, #0xcb38
0000c9c0  adrp     x0, #0x54000
0000c9c4  add      x0, x0, #0x147
0000c9c8  bl       #0x46380
0000c9cc  mov      x19, x0
0000c9d0  adrp     x8, #0x6e000
0000c9d4  ldr      x1, [x8, #0x4b0]
0000c9d8  adrp     x2, #0x16000
0000c9dc  add      x2, x2, #0xaa4
0000c9e0  adrp     x3, #0x70000
0000c9e4  add      x3, x3, #0x7b0
0000c9e8  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderControllerConfiguration, ignoresOverscrollOnFirstPageOrientations, IMP=0x16aa4)
0000c9ec  adrp     x8, #0x6f000
0000c9f0  ldr      x1, [x8, #0x90]
0000c9f4  adrp     x2, #0x16000
0000c9f8  add      x2, x2, #0xac4
0000c9fc  adrp     x3, #0x70000
0000ca00  add      x3, x3, #0x7b8
0000ca04  mov      x0, x19
0000ca08  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderControllerConfiguration, setIgnoresOverscrollOnFirstPageOrientations:, IMP=0x16ac4)
0000ca0c  adrp     x0, #0x54000
0000ca10  add      x0, x0, #0x18d
0000ca14  bl       #0x46380
0000ca18  adrp     x8, #0x6d000
0000ca1c  ldr      x1, [x8, #0x868]
0000ca20  adrp     x2, #0x16000
0000ca24  add      x2, x2, #0xae0
0000ca28  adrp     x3, #0x70000
0000ca2c  add      x3, x3, #0x7c0
0000ca30  bl       #0x460a4   ; MSHookMessageEx(SBMainDisplayPolicyAggregator, _allowsCapabilityTodayViewWithExplanation:, IMP=0x16ae0)
0000ca34  adrp     x0, #0x54000
0000ca38  add      x0, x0, #0x1ab
0000ca3c  bl       #0x46380
0000ca40  mov      x19, x0
0000ca44  adrp     x8, #0x6e000
0000ca48  ldr      x1, [x8, #0x840]
0000ca4c  adrp     x2, #0x16000
0000ca50  add      x2, x2, #0xb00
0000ca54  adrp     x3, #0x70000
0000ca58  add      x3, x3, #0x7c8
0000ca5c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderController, isTodayViewPageHidden, IMP=0x16b00)
0000ca60  adrp     x8, #0x6f000
0000ca64  ldr      x1, [x8, #0x378]
0000ca68  adrp     x2, #0x16000
0000ca6c  add      x2, x2, #0xb20
0000ca70  adrp     x3, #0x70000
0000ca74  add      x3, x3, #0x7d0
0000ca78  mov      x0, x19
0000ca7c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderController, setTodayViewPageHidden:, IMP=0x16b20)
0000ca80  adrp     x0, #0x54000
0000ca84  add      x0, x0, #0x17c
0000ca88  bl       #0x46380
0000ca8c  mov      x19, x0
0000ca90  adrp     x8, #0x6d000
0000ca94  ldr      x1, [x8, #0xa10]
0000ca98  adrp     x2, #0x16000
0000ca9c  add      x2, x2, #0xb40
0000caa0  adrp     x3, #0x70000
0000caa4  add      x3, x3, #0x7d8
0000caa8  bl       #0x460a4   ; MSHookMessageEx(SBIconController, _shouldTodayViewController:receiveTouch:, IMP=0x16b40)
0000caac  adrp     x8, #0x6d000
0000cab0  ldr      x1, [x8, #0xb58]
0000cab4  adrp     x2, #0x16000
0000cab8  add      x2, x2, #0xbe8
0000cabc  adrp     x3, #0x70000
0000cac0  add      x3, x3, #0x7e0
0000cac4  mov      x0, x19
0000cac8  bl       #0x460a4   ; MSHookMessageEx(SBIconController, activateTodayViewWithCompletion:, IMP=0x16be8)
0000cacc  adrp     x8, #0x6e000
0000cad0  ldr      x1, [x8, #0xbf0]
0000cad4  adrp     x2, #0x16000
0000cad8  add      x2, x2, #0xc6c
0000cadc  adrp     x3, #0x70000
0000cae0  add      x3, x3, #0x7e8
0000cae4  mov      x0, x19
0000cae8  bl       #0x460a4   ; MSHookMessageEx(SBIconController, presentTodayOverlayForIconManager:, IMP=0x16c6c)
0000caec  adrp     x0, #0x54000
0000caf0  add      x0, x0, #0x1c2
0000caf4  bl       #0x46380
0000caf8  mov      x19, x0
0000cafc  adrp     x8, #0x6e000
0000cb00  ldr      x1, [x8, #0xbe8]
0000cb04  adrp     x2, #0x16000
0000cb08  add      x2, x2, #0xcdc
0000cb0c  adrp     x3, #0x70000
0000cb10  add      x3, x3, #0x7f0
0000cb14  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, presentTodayOverlayForIconDragManager:, IMP=0x16cdc)
0000cb18  adrp     x8, #0x6e000
0000cb1c  ldr      x1, [x8, #0xbe0]
0000cb20  adrp     x2, #0x16000
0000cb24  add      x2, x2, #0xd4c
0000cb28  adrp     x3, #0x70000
0000cb2c  add      x3, x3, #0x7f8
0000cb30  mov      x0, x19
0000cb34  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, presentTodayOverlay, IMP=0x16d4c)
0000cb38  adrp     x8, #0x70000
0000cb3c  ldrb     w8, [x8, #0x800]
0000cb40  cbz      w8, #0xcb8c
0000cb44  adrp     x0, #0x54000
0000cb48  add      x0, x0, #0x1d1
0000cb4c  mov      w1, #2
0000cb50  bl       #0x4623c
0000cb54  adrp     x0, #0x65000
0000cb58  add      x0, x0, #0x628
0000cb5c  bl       #0x460b0
0000cb60  cbz      x0, #0xcb8c
0000cb64  adrp     x0, #0x54000
0000cb68  add      x0, x0, #0x20d
0000cb6c  bl       #0x46380
0000cb70  adrp     x8, #0x6e000
0000cb74  ldr      x1, [x8, #0x8c8]
0000cb78  adrp     x2, #0x16000
0000cb7c  add      x2, x2, #0xd68
0000cb80  adrp     x3, #0x70000
0000cb84  add      x3, x3, #0x808
0000cb88  bl       #0x460a4   ; MSHookMessageEx(WGShortLookStyleButton, layoutSubviews, IMP=0x16d68)
0000cb8c  adrp     x8, #0x70000
0000cb90  ldrb     w8, [x8, #0x810]
0000cb94  cbz      w8, #0xcbd0
0000cb98  adrp     x0, #0x65000
0000cb9c  add      x0, x0, #0x648
0000cba0  bl       #0x460b0
0000cba4  cbz      x0, #0xcbd0
0000cba8  adrp     x0, #0x54000
0000cbac  add      x0, x0, #0x224
0000cbb0  bl       #0x46380
0000cbb4  adrp     x8, #0x6d000
0000cbb8  ldr      x1, [x8, #0x9b0]
0000cbbc  adrp     x2, #0x16000
0000cbc0  add      x2, x2, #0xdb0
0000cbc4  adrp     x3, #0x70000
0000cbc8  add      x3, x3, #0x818
0000cbcc  bl       #0x460a4   ; MSHookMessageEx(SBHLibrarySearchController, _searchPresentationProgressForOffset:, IMP=0x16db0)
0000cbd0  cbz      w25, #0xcc30
0000cbd4  adrp     x0, #0x65000
0000cbd8  add      x0, x0, #0x668
0000cbdc  bl       #0x460b0
0000cbe0  cbz      x0, #0xcc30
0000cbe4  adrp     x0, #0x54000
0000cbe8  add      x0, x0, #0x23f
0000cbec  bl       #0x46380
0000cbf0  mov      x19, x0
0000cbf4  adrp     x8, #0x6e000
0000cbf8  ldr      x1, [x8, #0xe10]
0000cbfc  adrp     x2, #0x16000
0000cc00  add      x2, x2, #0xdd0
0000cc04  adrp     x3, #0x70000
0000cc08  add      x3, x3, #0x820
0000cc0c  bl       #0x460a4   ; MSHookMessageEx(SBSearchGesture, searchScrollViewShouldRecognize:, IMP=0x16dd0)
0000cc10  adrp     x8, #0x6e000
0000cc14  ldr      x1, [x8, #0xd60]
0000cc18  adrp     x2, #0x16000
0000cc1c  add      x2, x2, #0xff8
0000cc20  adrp     x3, #0x70000
0000cc24  add      x3, x3, #0x828
0000cc28  mov      x0, x19
0000cc2c  bl       #0x460a4   ; MSHookMessageEx(SBSearchGesture, revealAnimated:, IMP=0x16ff8)
0000cc30  adrp     x8, #0x70000
0000cc34  ldrb     w8, [x8, #0x830]
0000cc38  cbz      w8, #0xcc98
0000cc3c  adrp     x0, #0x65000
0000cc40  add      x0, x0, #0x688
0000cc44  bl       #0x460b0
0000cc48  cbz      x0, #0xcc98
0000cc4c  adrp     x0, #0x54000
0000cc50  add      x0, x0, #0x24f
0000cc54  bl       #0x46380
0000cc58  mov      x19, x0
0000cc5c  adrp     x8, #0x6d000
0000cc60  ldr      x1, [x8, #0x890]
0000cc64  adrp     x2, #0x17000
0000cc68  add      x2, x2, #0x30
0000cc6c  adrp     x3, #0x70000
0000cc70  add      x3, x3, #0x838
0000cc74  bl       #0x460a4   ; MSHookMessageEx(SBCoverSheetSystemGesturesDelegate, _canPresentGestureBegin, IMP=0x17030)
0000cc78  adrp     x8, #0x6e000
0000cc7c  ldr      x1, [x8, #0x2a0]
0000cc80  adrp     x2, #0x17000
0000cc84  add      x2, x2, #0x7c
0000cc88  adrp     x3, #0x70000
0000cc8c  add      x3, x3, #0x840
0000cc90  mov      x0, x19
0000cc94  bl       #0x460a4   ; MSHookMessageEx(SBCoverSheetSystemGesturesDelegate, gestureRecognizerShouldBegin:, IMP=0x1707c)
0000cc98  adrp     x8, #0x70000
0000cc9c  ldrb     w8, [x8, #0x848]
0000cca0  cbz      w8, #0xcedc
0000cca4  adrp     x0, #0x65000
0000cca8  add      x0, x0, #0x6a8
0000ccac  bl       #0x460b0
0000ccb0  cbz      x0, #0xcedc
0000ccb4  adrp     x0, #0x65000
0000ccb8  add      x0, x0, #0x6c8
0000ccbc  bl       #0x460b0
0000ccc0  cbz      x0, #0xcedc
0000ccc4  adrp     x0, #0x54000
0000ccc8  add      x0, x0, #0x272
0000cccc  bl       #0x46380
0000ccd0  mov      x21, x0
0000ccd4  adrp     x8, #0x6d000
0000ccd8  ldr      x1, [x8, #0x9e0]
0000ccdc  adrp     x2, #0x17000
0000cce0  add      x2, x2, #0x164
0000cce4  adrp     x3, #0x70000
0000cce8  add      x3, x3, #0x850
0000ccec  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, _shouldAllowControlCenterGesture, IMP=0x17164)
0000ccf0  adrp     x8, #0x6e000
0000ccf4  ldr      x19, [x8, #0x2a0]
0000ccf8  adrp     x2, #0x17000
0000ccfc  add      x2, x2, #0x1b0
0000cd00  adrp     x3, #0x70000
0000cd04  add      x3, x3, #0x858
0000cd08  mov      x0, x21
0000cd0c  mov      x1, x19
0000cd10  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, gestureRecognizerShouldBegin:, IMP=0x171b0)
0000cd14  adrp     x8, #0x6e000
0000cd18  ldr      x20, [x8, #0x290]
0000cd1c  adrp     x2, #0x17000
0000cd20  add      x2, x2, #0x298
0000cd24  adrp     x3, #0x70000
0000cd28  add      x3, x3, #0x860
0000cd2c  mov      x0, x21
0000cd30  mov      x1, x20
0000cd34  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, gestureRecognizer:shouldReceiveTouch:, IMP=0x17298)
0000cd38  adrp     x8, #0x6d000
0000cd3c  ldr      x1, [x8, #0x938]
0000cd40  adrp     x2, #0x17000
0000cd44  add      x2, x2, #0x3a4
0000cd48  adrp     x3, #0x70000
0000cd4c  add      x3, x3, #0x868
0000cd50  mov      x0, x21
0000cd54  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, _handleStatusBarPullDownGesture:, IMP=0x173a4)
0000cd58  adrp     x8, #0x6e000
0000cd5c  ldr      x1, [x8, #0x2d0]
0000cd60  adrp     x2, #0x17000
0000cd64  add      x2, x2, #0x414
0000cd68  adrp     x3, #0x70000
0000cd6c  add      x3, x3, #0x870
0000cd70  mov      x0, x21
0000cd74  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongue:shouldReceiveTouch:, IMP=0x17414)
0000cd78  adrp     x8, #0x6e000
0000cd7c  ldr      x1, [x8, #0x2f0]
0000cd80  adrp     x2, #0x17000
0000cd84  add      x2, x2, #0x4bc
0000cd88  adrp     x3, #0x70000
0000cd8c  add      x3, x3, #0x878
0000cd90  mov      x0, x21
0000cd94  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongueOrPullEnabled:forGestureRecognizer:, IMP=0x174bc)
0000cd98  adrp     x8, #0x6e000
0000cd9c  ldr      x1, [x8, #0x2d8]
0000cda0  adrp     x2, #0x17000
0000cda4  add      x2, x2, #0x564
0000cda8  adrp     x3, #0x70000
0000cdac  add      x3, x3, #0x880
0000cdb0  mov      x0, x21
0000cdb4  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongue:shouldShowTongueOnFirstSwipeWithEdgeLocation:, IMP=0x17564)
0000cdb8  adrp     x8, #0x6e000
0000cdbc  ldr      x1, [x8, #0x2c8]
0000cdc0  adrp     x2, #0x17000
0000cdc4  add      x2, x2, #0x5f8
0000cdc8  adrp     x3, #0x70000
0000cdcc  add      x3, x3, #0x888
0000cdd0  mov      x0, x21
0000cdd4  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongue:shouldAllowSecondSwipeWithEdgeLocation:, IMP=0x175f8)
0000cdd8  adrp     x8, #0x6e000
0000cddc  ldr      x1, [x8, #0x2e0]
0000cde0  adrp     x2, #0x17000
0000cde4  add      x2, x2, #0x68c
0000cde8  adrp     x3, #0x70000
0000cdec  add      x3, x3, #0x890
0000cdf0  mov      x0, x21
0000cdf4  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongueBeganPulling:withDistance:andVelocity:andGesture:, IMP=0x1768c)
0000cdf8  adrp     x8, #0x6e000
0000cdfc  ldr      x1, [x8, #0x2f8]
0000ce00  adrp     x2, #0x17000
0000ce04  add      x2, x2, #0x738
0000ce08  adrp     x3, #0x70000
0000ce0c  add      x3, x3, #0x898
0000ce10  mov      x0, x21
0000ce14  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongueUpdatedPulling:withDistance:andVelocity:andGesture:, IMP=0x17738)
0000ce18  adrp     x8, #0x6e000
0000ce1c  ldr      x1, [x8, #0x2e8]
0000ce20  adrp     x2, #0x17000
0000ce24  add      x2, x2, #0x7e4
0000ce28  adrp     x3, #0x70000
0000ce2c  add      x3, x3, #0x8a0
0000ce30  mov      x0, x21
0000ce34  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongueEndedPulling:withDistance:andVelocity:andGesture:, IMP=0x177e4)
0000ce38  adrp     x0, #0x54000
0000ce3c  add      x0, x0, #0x28c
0000ce40  bl       #0x46380
0000ce44  mov      x21, x0
0000ce48  adrp     x2, #0x17000
0000ce4c  add      x2, x2, #0x890
0000ce50  adrp     x3, #0x70000
0000ce54  add      x3, x3, #0x8a8
0000ce58  mov      x1, x19
0000ce5c  bl       #0x460a4   ; MSHookMessageEx(SBGrabberTongue, gestureRecognizerShouldBegin:, IMP=0x17890)
0000ce60  adrp     x2, #0x17000
0000ce64  add      x2, x2, #0x978
0000ce68  adrp     x3, #0x70000
0000ce6c  add      x3, x3, #0x8b0
0000ce70  mov      x0, x21
0000ce74  mov      x1, x20
0000ce78  bl       #0x460a4   ; MSHookMessageEx(SBGrabberTongue, gestureRecognizer:shouldReceiveTouch:, IMP=0x17978)
0000ce7c  adrp     x8, #0x6d000
0000ce80  ldr      x1, [x8, #0x9f0]
0000ce84  adrp     x2, #0x17000
0000ce88  add      x2, x2, #0xa8c
0000ce8c  adrp     x3, #0x70000
0000ce90  add      x3, x3, #0x8b8
0000ce94  mov      x0, x21
0000ce98  bl       #0x460a4   ; MSHookMessageEx(SBGrabberTongue, _shouldReceiveTouch:, IMP=0x17a8c)
0000ce9c  adrp     x8, #0x6d000
0000cea0  ldr      x1, [x8, #0xa60]
0000cea4  adrp     x2, #0x17000
0000cea8  add      x2, x2, #0xb74
0000ceac  adrp     x3, #0x70000
0000ceb0  add      x3, x3, #0x8c0
0000ceb4  mov      x0, x21
0000ceb8  bl       #0x460a4   ; MSHookMessageEx(SBGrabberTongue, _tongueOrPullEnabledForGestureRecognizer:, IMP=0x17b74)
0000cebc  adrp     x8, #0x6d000
0000cec0  ldr      x1, [x8, #0x930]
0000cec4  adrp     x2, #0x17000
0000cec8  add      x2, x2, #0xc5c
0000cecc  adrp     x3, #0x70000
0000ced0  add      x3, x3, #0x8c8
0000ced4  mov      x0, x21
0000ced8  bl       #0x460a4   ; MSHookMessageEx(SBGrabberTongue, _handlePullGesture:, IMP=0x17c5c)
0000cedc  adrp     x0, #0x65000
0000cee0  add      x0, x0, #0x6e8
0000cee4  bl       #0x460b0
0000cee8  mov      x19, x0
0000ceec  cbz      x0, #0xcf24
0000cef0  adrp     x8, #0x6e000
0000cef4  ldr      x20, [x8, #0x38]
0000cef8  mov      x0, x19
0000cefc  mov      x1, x20
0000cf00  bl       #0x461c4
0000cf04  cbz      x0, #0xcf24
0000cf08  adrp     x2, #0x17000
0000cf0c  add      x2, x2, #0xd30
0000cf10  adrp     x3, #0x70000
0000cf14  add      x3, x3, #0x8d0
0000cf18  mov      x0, x19
0000cf1c  mov      x1, x20
0000cf20  bl       #0x460a4   ; MSHookMessageEx(SBHomeGestureFinalDestinationSwitcherModifier, currentFinalDestination, IMP=0x17d30)
0000cf24  adrp     x8, #0x70000
0000cf28  ldrb     w8, [x8, #0x8d8]
0000cf2c  cbz      w8, #0xcf8c
0000cf30  adrp     x0, #0x65000
0000cf34  add      x0, x0, #0x708
0000cf38  bl       #0x460b0
0000cf3c  cbz      x0, #0xcf8c
0000cf40  adrp     x0, #0x54000
0000cf44  add      x0, x0, #0x2ca
0000cf48  bl       #0x46380
0000cf4c  mov      x19, x0
0000cf50  adrp     x8, #0x6f000
0000cf54  ldr      x1, [x8, #0x468]
0000cf58  adrp     x2, #0x17000
0000cf5c  add      x2, x2, #0xd64
0000cf60  adrp     x3, #0x70000
0000cf64  add      x3, x3, #0x8e0
0000cf68  bl       #0x460a4   ; MSHookMessageEx(SBTodayViewController, spotlightPresenterAllowsPullToSearch:, IMP=0x17d64)
0000cf6c  adrp     x8, #0x6e000
0000cf70  ldr      x1, [x8, #0xbd8]
0000cf74  adrp     x2, #0x17000
0000cf78  add      x2, x2, #0xde8
0000cf7c  adrp     x3, #0x70000
0000cf80  add      x3, x3, #0x8e8
0000cf84  mov      x0, x19
0000cf88  bl       #0x460a4   ; MSHookMessageEx(SBTodayViewController, presentSpotlightAnimated:, IMP=0x17de8)
0000cf8c  adrp     x8, #0x70000
0000cf90  ldrb     w8, [x8, #0x8f0]
0000cf94  adrp     x9, #0x70000
0000cf98  ldrb     w9, [x9, #0x498]
0000cf9c  orr      w8, w8, w9
0000cfa0  cbz      w8, #0xcfec
0000cfa4  adrp     x0, #0x65000
0000cfa8  add      x0, x0, #0x728
0000cfac  bl       #0x460b0
0000cfb0  cbnz     x0, #0xcfc4
0000cfb4  adrp     x0, #0x65000
0000cfb8  add      x0, x0, #0x608
0000cfbc  bl       #0x460b0
0000cfc0  cbz      x0, #0xcfec
0000cfc4  adrp     x0, #0x54000
0000cfc8  add      x0, x0, #0x17c
0000cfcc  bl       #0x46380
0000cfd0  adrp     x8, #0x6e000
0000cfd4  ldr      x1, [x8, #0x290]
0000cfd8  adrp     x2, #0x17000
0000cfdc  add      x2, x2, #0xe04
0000cfe0  adrp     x3, #0x70000
0000cfe4  add      x3, x3, #0x8f8
0000cfe8  bl       #0x460a4   ; MSHookMessageEx(SBIconController, gestureRecognizer:shouldReceiveTouch:, IMP=0x17e04)
0000cfec  adrp     x8, #0x70000
0000cff0  ldrb     w8, [x8, #0x900]
0000cff4  cbz      w8, #0xd1c8
0000cff8  adrp     x0, #0x64000
0000cffc  add      x0, x0, #0xfe8
0000d000  bl       #0x460b0
0000d004  cbz      x0, #0xd1c8
0000d008  adrp     x0, #0x65000
0000d00c  add      x0, x0, #0x748
0000d010  bl       #0x460b0
0000d014  cbz      x0, #0xd1c8
0000d018  adrp     x0, #0x54000
0000d01c  add      x0, x0, #0x17c
0000d020  bl       #0x46380
0000d024  mov      x19, x0
0000d028  adrp     x8, #0x6e000
0000d02c  ldr      x1, [x8, #0x420]
0000d030  adrp     x2, #0x17000
0000d034  add      x2, x2, #0xf18
0000d038  adrp     x3, #0x70000
0000d03c  add      x3, x3, #0x908
0000d040  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:applicationShortcutItemsForIconView:, IMP=0x17f18)
0000d044  adrp     x8, #0x6e000
0000d048  ldr      x1, [x8, #0x450]
0000d04c  adrp     x2, #0x17000
0000d050  add      x2, x2, #0xfc4
0000d054  adrp     x3, #0x70000
0000d058  add      x3, x3, #0x910
0000d05c  mov      x0, x19
0000d060  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:shouldActivateApplicationShortcutItem:atIndex:forIconView:, IMP=0x17fc4)
0000d064  adrp     x8, #0x6e000
0000d068  ldr      x1, [x8, #0x430]
0000d06c  adrp     x2, #0x18000
0000d070  add      x2, x2, #0xa4
0000d074  adrp     x3, #0x70000
0000d078  add      x3, x3, #0x918
0000d07c  mov      x0, x19
0000d080  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:launchIconForIconView:withActions:, IMP=0x180a4)
0000d084  adrp     x8, #0x6e000
0000d088  ldr      x1, [x8, #0x438]
0000d08c  adrp     x2, #0x18000
0000d090  add      x2, x2, #0x194
0000d094  adrp     x3, #0x70000
0000d098  add      x3, x3, #0x920
0000d09c  mov      x0, x19
0000d0a0  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:launchIconForIconView:withActions:modifierFlags:, IMP=0x18194)
0000d0a4  adrp     x0, #0x53000
0000d0a8  add      x0, x0, #0x862
0000d0ac  bl       #0x46380
0000d0b0  mov      x19, x0
0000d0b4  adrp     x8, #0x6e000
0000d0b8  ldr      x1, [x8, #0xe88]
0000d0bc  adrp     x2, #0x18000
0000d0c0  add      x2, x2, #0x294
0000d0c4  adrp     x3, #0x70000
0000d0c8  add      x3, x3, #0x928
0000d0cc  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setApplicationShortcutItems:, IMP=0x18294)
0000d0d0  adrp     x8, #0x6f000
0000d0d4  ldr      x1, [x8, #0x410]
0000d0d8  adrp     x2, #0x18000
0000d0dc  add      x2, x2, #0x304
0000d0e0  adrp     x3, #0x70000
0000d0e4  add      x3, x3, #0x930
0000d0e8  mov      x0, x19
0000d0ec  bl       #0x460a4   ; MSHookMessageEx(SBIconView, shouldActivateApplicationShortcutItem:atIndex:, IMP=0x18304)
0000d0f0  adrp     x8, #0x6e000
0000d0f4  ldr      x1, [x8, #0x2a0]
0000d0f8  adrp     x2, #0x18000
0000d0fc  add      x2, x2, #0x390
0000d100  adrp     x3, #0x70000
0000d104  add      x3, x3, #0x938
0000d108  mov      x0, x19
0000d10c  bl       #0x460a4   ; MSHookMessageEx(SBIconView, gestureRecognizerShouldBegin:, IMP=0x18390)
0000d110  adrp     x0, #0x54000
0000d114  add      x0, x0, #0x1c2
0000d118  bl       #0x46380
0000d11c  mov      x19, x0
0000d120  adrp     x8, #0x6e000
0000d124  ldr      x1, [x8, #0x478]
0000d128  adrp     x2, #0x18000
0000d12c  add      x2, x2, #0x474
0000d130  adrp     x3, #0x70000
0000d134  add      x3, x3, #0x940
0000d138  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, iconView:shouldActivateApplicationShortcutItem:atIndex:, IMP=0x18474)
0000d13c  adrp     x8, #0x6e000
0000d140  ldr      x1, [x8, #0xc98]
0000d144  adrp     x2, #0x18000
0000d148  add      x2, x2, #0x52c
0000d14c  adrp     x3, #0x70000
0000d150  add      x3, x3, #0x948
0000d154  mov      x0, x19
0000d158  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, reasonToDisallowTapOnIconView:, IMP=0x1852c)
0000d15c  adrp     x8, #0x6e000
0000d160  ldr      x1, [x8, #0xac8]
0000d164  adrp     x2, #0x18000
0000d168  add      x2, x2, #0x5e4
0000d16c  adrp     x3, #0x70000
0000d170  add      x3, x3, #0x950
0000d174  mov      x0, x19
0000d178  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, openFolderIcon:location:animated:withCompletion:, IMP=0x185e4)
0000d17c  adrp     x0, #0x53000
0000d180  add      x0, x0, #0xfb0
0000d184  bl       #0x46380
0000d188  mov      x19, x0
0000d18c  adrp     x8, #0x6d000
0000d190  ldr      x1, [x8, #0xb38]
0000d194  adrp     x2, #0x18000
0000d198  add      x2, x2, #0x7d4
0000d19c  adrp     x3, #0x70000
0000d1a0  add      x3, x3, #0x958
0000d1a4  bl       #0x460a4   ; MSHookMessageEx(SBUIController, activateApplication:, IMP=0x187d4)
0000d1a8  adrp     x8, #0x6d000
0000d1ac  ldr      x1, [x8, #0xb40]
0000d1b0  adrp     x2, #0x18000
0000d1b4  add      x2, x2, #0x848
0000d1b8  adrp     x3, #0x70000
0000d1bc  add      x3, x3, #0x960
0000d1c0  mov      x0, x19
0000d1c4  bl       #0x460a4   ; MSHookMessageEx(SBUIController, activateApplication:fromIcon:location:activationSettings:actions:, IMP=0x18848)
0000d1c8  adrp     x8, #0x70000
0000d1cc  ldrb     w8, [x8, #0x968]
0000d1d0  cbz      w8, #0xd20c
0000d1d4  adrp     x0, #0x65000
0000d1d8  add      x0, x0, #0x768
0000d1dc  bl       #0x460b0
0000d1e0  cbz      x0, #0xd20c
0000d1e4  adrp     x0, #0x54000
0000d1e8  add      x0, x0, #0x2fb
0000d1ec  bl       #0x46380
0000d1f0  adrp     x8, #0x6e000
0000d1f4  ldr      x1, [x8, #0x8c8]
0000d1f8  adrp     x2, #0x18000
0000d1fc  add      x2, x2, #0x944
0000d200  adrp     x3, #0x70000
0000d204  add      x3, x3, #0x970
0000d208  bl       #0x460a4   ; MSHookMessageEx(SBFolderBackgroundView, layoutSubviews, IMP=0x18944)
0000d20c  adrp     x8, #0x70000
0000d210  ldrb     w8, [x8, #0x978]
0000d214  cbz      w8, #0xd2dc
0000d218  adrp     x0, #0x65000
0000d21c  add      x0, x0, #0x788
0000d220  bl       #0x460b0
0000d224  cbz      x0, #0xd2dc
0000d228  adrp     x0, #0x54000
0000d22c  add      x0, x0, #0x312
0000d230  bl       #0x46380
0000d234  mov      x19, x0
0000d238  adrp     x8, #0x6e000
0000d23c  ldr      x1, [x8, #0xec8]
0000d240  adrp     x2, #0x18000
0000d244  add      x2, x2, #0x9a4
0000d248  adrp     x3, #0x70000
0000d24c  add      x3, x3, #0x980
0000d250  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, setBackgroundView:, IMP=0x189a4)
0000d254  adrp     x8, #0x6d000
0000d258  ldr      x1, [x8, #0xa98]
0000d25c  adrp     x2, #0x18000
0000d260  add      x2, x2, #0xa10
0000d264  adrp     x3, #0x70000
0000d268  add      x3, x3, #0x988
0000d26c  mov      x0, x19
0000d270  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, _updateCurrentBackgroundStyle, IMP=0x18a10)
0000d274  adrp     x8, #0x6f000
0000d278  ldr      x1, [x8, #0x6c0]
0000d27c  adrp     x2, #0x18000
0000d280  add      x2, x2, #0xa3c
0000d284  adrp     x3, #0x70000
0000d288  add      x3, x3, #0x990
0000d28c  mov      x0, x19
0000d290  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, updateImageAnimated:, IMP=0x18a3c)
0000d294  adrp     x8, #0x6e000
0000d298  ldr      x1, [x8, #0x8c8]
0000d29c  adrp     x2, #0x18000
0000d2a0  add      x2, x2, #0xa68
0000d2a4  adrp     x3, #0x70000
0000d2a8  add      x3, x3, #0x998
0000d2ac  mov      x0, x19
0000d2b0  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, layoutSubviews, IMP=0x18a68)
0000d2b4  mov      w8, #0x4076
0000d2b8  movk     w8, #0x3a, lsl #16
0000d2bc  str      w8, [sp, #0x290]
0000d2c0  adrp     x8, #0x6d000
0000d2c4  ldr      x1, [x8, #0xa30]
0000d2c8  adrp     x2, #0x18000
0000d2cc  add      x2, x2, #0xa94
0000d2d0  add      x3, sp, #0x290
0000d2d4  mov      x0, x19
0000d2d8  bl       #0x461a0
0000d2dc  adrp     x8, #0x70000
0000d2e0  ldrb     w8, [x8, #0x9a0]
0000d2e4  cbz      w8, #0xd470
0000d2e8  adrp     x0, #0x65000
0000d2ec  add      x0, x0, #0x7a8
0000d2f0  bl       #0x460b0
0000d2f4  cbz      x0, #0xd470
0000d2f8  adrp     x0, #0x54000
0000d2fc  add      x0, x0, #0x33f
0000d300  bl       #0x46380
0000d304  mov      x19, x0
0000d308  adrp     x8, #0x6e000
0000d30c  ldr      x1, [x8, #0xf0]
0000d310  adrp     x2, #0x18000
0000d314  add      x2, x2, #0xb20
0000d318  adrp     x3, #0x70000
0000d31c  add      x3, x3, #0x9a8
0000d320  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, didMoveToWindow, IMP=0x18b20)
0000d324  adrp     x8, #0x6e000
0000d328  ldr      x1, [x8, #0x8c8]
0000d32c  adrp     x2, #0x18000
0000d330  add      x2, x2, #0xb78
0000d334  adrp     x3, #0x70000
0000d338  add      x3, x3, #0x9b0
0000d33c  mov      x0, x19
0000d340  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, layoutSubviews, IMP=0x18b78)
0000d344  adrp     x0, #0x54000
0000d348  add      x0, x0, #0x328
0000d34c  bl       #0x46380
0000d350  mov      x19, x0
0000d354  adrp     x8, #0x6e000
0000d358  ldr      x1, [x8, #0xe70]
0000d35c  adrp     x2, #0x18000
0000d360  add      x2, x2, #0xbd0
0000d364  adrp     x3, #0x70000
0000d368  add      x3, x3, #0x9b8
0000d36c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, setAllowsEditing:, IMP=0x18bd0)
0000d370  adrp     x8, #0x6f000
0000d374  ldr      x1, [x8, #0x2d8]
0000d378  adrp     x2, #0x18000
0000d37c  add      x2, x2, #0xbf0
0000d380  adrp     x3, #0x70000
0000d384  add      x3, x3, #0x9c0
0000d388  mov      x0, x19
0000d38c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, setShowsEditUI:animated:, IMP=0x18bf0)
0000d390  adrp     x8, #0x6d000
0000d394  ldr      x1, [x8, #0xc08]
0000d398  adrp     x2, #0x18000
0000d39c  add      x2, x2, #0xc10
0000d3a0  adrp     x3, #0x70000
0000d3a4  add      x3, x3, #0x9c8
0000d3a8  mov      x0, x19
0000d3ac  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, allowsEditing, IMP=0x18c10)
0000d3b0  adrp     x8, #0x6d000
0000d3b4  ldr      x1, [x8, #0xa50]
0000d3b8  adrp     x2, #0x18000
0000d3bc  add      x2, x2, #0xc30
0000d3c0  adrp     x3, #0x70000
0000d3c4  add      x3, x3, #0x9d0
0000d3c8  mov      x0, x19
0000d3cc  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, _textRectForBounds:, IMP=0x18c30)
0000d3d0  adrp     x8, #0x6f000
0000d3d4  ldr      x1, [x8, #0x5e8]
0000d3d8  adrp     x2, #0x18000
0000d3dc  add      x2, x2, #0xc6c
0000d3e0  adrp     x3, #0x70000
0000d3e4  add      x3, x3, #0x9d8
0000d3e8  mov      x0, x19
0000d3ec  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, textRectForBounds:, IMP=0x18c6c)
0000d3f0  adrp     x8, #0x6e000
0000d3f4  ldr      x1, [x8, #0x160]
0000d3f8  adrp     x2, #0x18000
0000d3fc  add      x2, x2, #0xca8
0000d400  adrp     x3, #0x70000
0000d404  add      x3, x3, #0x9e0
0000d408  mov      x0, x19
0000d40c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, editingRectForBounds:, IMP=0x18ca8)
0000d410  adrp     x8, #0x6d000
0000d414  ldr      x1, [x8, #0xdb0]
0000d418  adrp     x2, #0x18000
0000d41c  add      x2, x2, #0xce4
0000d420  adrp     x3, #0x70000
0000d424  add      x3, x3, #0x9e8
0000d428  mov      x0, x19
0000d42c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, borderRectForBounds:, IMP=0x18ce4)
0000d430  adrp     x8, #0x6d000
0000d434  ldr      x1, [x8, #0xe68]
0000d438  adrp     x2, #0x18000
0000d43c  add      x2, x2, #0xd20
0000d440  adrp     x3, #0x70000
0000d444  add      x3, x3, #0x9f0
0000d448  mov      x0, x19
0000d44c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, clearButtonRectForBounds:, IMP=0x18d20)
0000d450  adrp     x8, #0x6f000
0000d454  ldr      x1, [x8, #0x450]
0000d458  adrp     x2, #0x18000
0000d45c  add      x2, x2, #0xd5c
0000d460  adrp     x3, #0x70000
0000d464  add      x3, x3, #0x9f8
0000d468  mov      x0, x19
0000d46c  bl       #0x460a4   ; MSHookMessageEx(SBFolderTitleTextField, sizeThatFits:, IMP=0x18d5c)
0000d470  adrp     x8, #0x70000
0000d474  ldrb     w8, [x8, #0xa00]
0000d478  cbz      w8, #0xd768
0000d47c  adrp     x0, #0x64000
0000d480  add      x0, x0, #0xfe8
0000d484  bl       #0x460b0
0000d488  cbz      x0, #0xd768
0000d48c  adrp     x0, #0x53000
0000d490  add      x0, x0, #0x862
0000d494  bl       #0x46380
0000d498  mov      x20, x0
0000d49c  adrp     x8, #0x54000
0000d4a0  add      x8, x8, #0x34c
0000d4a4  adrp     x9, #0x54000
0000d4a8  add      x9, x9, #0x34e
0000d4ac  stp      x8, x9, [sp, #0x190]
0000d4b0  adrp     x8, #0x54000
0000d4b4  add      x8, x8, #0x359
0000d4b8  adrp     x9, #0x53000
0000d4bc  add      x9, x9, #0x859
0000d4c0  stp      x8, x9, [sp, #0x1a0]
0000d4c4  adrp     x8, #0x54000
0000d4c8  add      x8, x8, #0x35b
0000d4cc  stp      x8, x9, [sp, #0x1b0]
0000d4d0  adrp     x1, #0x54000
0000d4d4  add      x1, x1, #0x35d
0000d4d8  add      x2, sp, #0x190
0000d4dc  mov      w3, #3
0000d4e0  bl       #0x461ac
0000d4e4  adrp     x19, #0x54000
0000d4e8  add      x19, x19, #0x36e
0000d4ec  str      x19, [sp]
0000d4f0  adrp     x2, #0x54000
0000d4f4  add      x2, x2, #0x369
0000d4f8  add      x0, sp, #0x290
0000d4fc  mov      w1, #0x400
0000d500  bl       #0x464d0
0000d504  adrp     x8, #0x6f000
0000d508  ldr      x1, [x8, #0x3e0]
0000d50c  adrp     x2, #0x9000
0000d510  add      x2, x2, #0x860
0000d514  add      x3, sp, #0x290
0000d518  mov      x0, x20
0000d51c  bl       #0x461a0
0000d520  str      x19, [sp]
0000d524  adrp     x2, #0x54000
0000d528  add      x2, x2, #0x370
0000d52c  add      x0, sp, #0x290
0000d530  mov      w1, #0x400
0000d534  bl       #0x464d0
0000d538  adrp     x8, #0x6f000
0000d53c  ldr      x1, [x8, #0x2a8]
0000d540  adrp     x2, #0x9000
0000d544  add      x2, x2, #0x884
0000d548  add      x3, sp, #0x290
0000d54c  mov      x0, x20
0000d550  bl       #0x461a0
0000d554  mov      w8, #0x4076
0000d558  movk     w8, #0x3a, lsl #16
0000d55c  str      w8, [sp, #0x290]
0000d560  adrp     x8, #0x6f000
0000d564  ldr      x1, [x8, #0x3a8]
0000d568  adrp     x2, #0x18000
0000d56c  add      x2, x2, #0xd94
0000d570  add      x3, sp, #0x290
0000d574  mov      x0, x20
0000d578  bl       #0x461a0
0000d57c  adrp     x8, #0x6e000
0000d580  ldr      x1, [x8, #0x578]
0000d584  adrp     x2, #0x18000
0000d588  add      x2, x2, #0xea8
0000d58c  adrp     x3, #0x70000
0000d590  add      x3, x3, #0xa08
0000d594  mov      x0, x20
0000d598  bl       #0x460a4   ; MSHookMessageEx(SBIconView, initWithConfigurationOptions:listLayoutProvider:, IMP=0x18ea8)
0000d59c  adrp     x8, #0x6e000
0000d5a0  ldr      x19, [x8, #0x8c8]
0000d5a4  adrp     x2, #0x18000
0000d5a8  add      x2, x2, #0xf00
0000d5ac  adrp     x3, #0x70000
0000d5b0  add      x3, x3, #0xa10
0000d5b4  mov      x0, x20
0000d5b8  mov      x1, x19
0000d5bc  bl       #0x460a4   ; MSHookMessageEx(SBIconView, layoutSubviews, IMP=0x18f00)
0000d5c0  adrp     x0, #0x54000
0000d5c4  add      x0, x0, #0x376
0000d5c8  bl       #0x46380
0000d5cc  mov      x21, x0
0000d5d0  adrp     x8, #0x6e000
0000d5d4  ldr      x1, [x8, #0x990]
0000d5d8  adrp     x2, #0x18000
0000d5dc  add      x2, x2, #0xff0
0000d5e0  adrp     x3, #0x70000
0000d5e4  add      x3, x3, #0xa18
0000d5e8  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, makeIconView, IMP=0x18ff0)
0000d5ec  adrp     x8, #0x6d000
0000d5f0  ldr      x20, [x8, #0xef8]
0000d5f4  adrp     x2, #0x19000
0000d5f8  add      x2, x2, #0x5c
0000d5fc  adrp     x3, #0x70000
0000d600  add      x3, x3, #0xa20
0000d604  mov      x0, x21
0000d608  mov      x1, x20
0000d60c  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, configureIconView:forIcon:, IMP=0x1905c)
0000d610  adrp     x8, #0x6e000
0000d614  ldr      x1, [x8, #0xe0]
0000d618  adrp     x2, #0x19000
0000d61c  add      x2, x2, #0x104
0000d620  adrp     x3, #0x70000
0000d624  add      x3, x3, #0xa28
0000d628  mov      x0, x21
0000d62c  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, didAddIconView:, IMP=0x19104)
0000d630  adrp     x2, #0x19000
0000d634  add      x2, x2, #0x188
0000d638  adrp     x3, #0x70000
0000d63c  add      x3, x3, #0xa30
0000d640  mov      x0, x21
0000d644  mov      x1, x19
0000d648  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, layoutSubviews, IMP=0x19188)
0000d64c  adrp     x0, #0x54000
0000d650  add      x0, x0, #0x385
0000d654  bl       #0x46380
0000d658  mov      x21, x0
0000d65c  adrp     x2, #0x19000
0000d660  add      x2, x2, #0x1d4
0000d664  adrp     x3, #0x70000
0000d668  add      x3, x3, #0xa38
0000d66c  mov      x1, x20
0000d670  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockIconListView, configureIconView:forIcon:, IMP=0x191d4)
0000d674  adrp     x2, #0x19000
0000d678  add      x2, x2, #0x270
0000d67c  adrp     x3, #0x70000
0000d680  add      x3, x3, #0xa40
0000d684  mov      x0, x21
0000d688  mov      x1, x19
0000d68c  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockIconListView, layoutSubviews, IMP=0x19270)
0000d690  adrp     x0, #0x54000
0000d694  add      x0, x0, #0x3a0
0000d698  bl       #0x46380
0000d69c  mov      x21, x0
0000d6a0  adrp     x2, #0x19000
0000d6a4  add      x2, x2, #0x2a4
0000d6a8  adrp     x3, #0x70000
0000d6ac  add      x3, x3, #0xa48
0000d6b0  mov      x1, x20
0000d6b4  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsViewController, configureIconView:forIcon:, IMP=0x192a4)
0000d6b8  adrp     x8, #0x6e000
0000d6bc  ldr      x1, [x8, #0x130]
0000d6c0  adrp     x2, #0x19000
0000d6c4  add      x2, x2, #0x33c
0000d6c8  adrp     x3, #0x70000
0000d6cc  add      x3, x3, #0xa50
0000d6d0  mov      x0, x21
0000d6d4  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsViewController, dockViewDidBecomeVisible, IMP=0x1933c)
0000d6d8  adrp     x0, #0x54000
0000d6dc  add      x0, x0, #0x3c8
0000d6e0  bl       #0x46380
0000d6e4  adrp     x2, #0x19000
0000d6e8  add      x2, x2, #0x3cc
0000d6ec  adrp     x3, #0x70000
0000d6f0  add      x3, x3, #0xa58
0000d6f4  mov      x1, x19
0000d6f8  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockView, layoutSubviews, IMP=0x193cc)
0000d6fc  adrp     x0, #0x54000
0000d700  add      x0, x0, #0x3db
0000d704  bl       #0x46380
0000d708  mov      x19, x0
0000d70c  adrp     x8, #0x6d000
0000d710  ldr      x1, [x8, #0x9a0]
0000d714  adrp     x2, #0x19000
0000d718  add      x2, x2, #0x490
0000d71c  adrp     x3, #0x70000
0000d720  add      x3, x3, #0xa60
0000d724  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconZoomAnimator, _prepareAnimation, IMP=0x19490)
0000d728  adrp     x8, #0x6d000
0000d72c  ldr      x1, [x8, #0x9b8]
0000d730  adrp     x2, #0x19000
0000d734  add      x2, x2, #0x508
0000d738  adrp     x3, #0x70000
0000d73c  add      x3, x3, #0xa68
0000d740  mov      x0, x19
0000d744  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconZoomAnimator, _setAnimationFraction:, IMP=0x19508)
0000d748  adrp     x8, #0x6d000
0000d74c  ldr      x1, [x8, #0x898]
0000d750  adrp     x2, #0x19000
0000d754  add      x2, x2, #0x590
0000d758  adrp     x3, #0x70000
0000d75c  add      x3, x3, #0xa70
0000d760  mov      x0, x19
0000d764  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconZoomAnimator, _cleanupAnimation, IMP=0x19590)
0000d768  orr      w8, w23, w24
0000d76c  tbz      w8, #0, #0xd9b0
0000d770  adrp     x0, #0x64000
0000d774  add      x0, x0, #0xfe8
0000d778  bl       #0x460b0
0000d77c  cbz      x0, #0xd9b0
0000d780  adrp     x0, #0x65000
0000d784  add      x0, x0, #0x7c8
0000d788  bl       #0x460b0
0000d78c  cbz      x0, #0xd9b0
0000d790  adrp     x0, #0x53000
0000d794  add      x0, x0, #0x862
0000d798  bl       #0x46380
0000d79c  mov      x23, x0
0000d7a0  mov      w8, #0x4076
0000d7a4  movk     w8, #0x3a, lsl #16
0000d7a8  str      w8, [sp, #0x290]
0000d7ac  adrp     x8, #0x6d000
0000d7b0  ldr      x1, [x8, #0xa38]
0000d7b4  adrp     x2, #0x19000
0000d7b8  add      x2, x2, #0x65c
0000d7bc  add      x3, sp, #0x290
0000d7c0  bl       #0x461a0
0000d7c4  adrp     x8, #0x6e000
0000d7c8  ldr      x22, [x8, #0x8c8]
0000d7cc  adrp     x2, #0x19000
0000d7d0  add      x2, x2, #0xbfc
0000d7d4  adrp     x3, #0x70000
0000d7d8  add      x3, x3, #0xa78
0000d7dc  mov      x0, x23
0000d7e0  mov      x1, x22
0000d7e4  bl       #0x460a4   ; MSHookMessageEx(SBIconView, layoutSubviews, IMP=0x19bfc)
0000d7e8  adrp     x8, #0x6d000
0000d7ec  ldr      x1, [x8, #0xaa0]
0000d7f0  adrp     x2, #0x19000
0000d7f4  add      x2, x2, #0xc78
0000d7f8  adrp     x3, #0x70000
0000d7fc  add      x3, x3, #0xa80
0000d800  mov      x0, x23
0000d804  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _updateIconImageViewAnimated:, IMP=0x19c78)
0000d808  adrp     x8, #0x6e000
0000d80c  ldr      x19, [x8, #0xf0]
0000d810  adrp     x2, #0x19000
0000d814  add      x2, x2, #0xca4
0000d818  adrp     x3, #0x70000
0000d81c  add      x3, x3, #0xa88
0000d820  mov      x0, x23
0000d824  mov      x1, x19
0000d828  bl       #0x460a4   ; MSHookMessageEx(SBIconView, didMoveToWindow, IMP=0x19ca4)
0000d82c  adrp     x8, #0x6e000
0000d830  ldr      x20, [x8, #0xe8]
0000d834  adrp     x2, #0x19000
0000d838  add      x2, x2, #0xcf8
0000d83c  adrp     x3, #0x70000
0000d840  add      x3, x3, #0xa90
0000d844  mov      x0, x23
0000d848  mov      x1, x20
0000d84c  bl       #0x460a4   ; MSHookMessageEx(SBIconView, didMoveToSuperview, IMP=0x19cf8)
0000d850  adrp     x8, #0x6f000
0000d854  ldr      x24, [x8, #0x50]
0000d858  adrp     x2, #0x19000
0000d85c  add      x2, x2, #0xd4c
0000d860  adrp     x3, #0x70000
0000d864  add      x3, x3, #0xa98
0000d868  mov      x0, x23
0000d86c  mov      x1, x24
0000d870  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setHidden:, IMP=0x19d4c)
0000d874  adrp     x8, #0x6e000
0000d878  ldr      x25, [x8, #0xe78]
0000d87c  adrp     x2, #0x19000
0000d880  add      x2, x2, #0xd8c
0000d884  adrp     x3, #0x70000
0000d888  add      x3, x3, #0xaa0
0000d88c  mov      x0, x23
0000d890  mov      x1, x25
0000d894  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setAlpha:, IMP=0x19d8c)
0000d898  adrp     x8, #0x6e000
0000d89c  ldr      x21, [x8, #0xbb0]
0000d8a0  adrp     x2, #0x19000
0000d8a4  add      x2, x2, #0xde4
0000d8a8  adrp     x3, #0x70000
0000d8ac  add      x3, x3, #0xaa8
0000d8b0  mov      x0, x23
0000d8b4  mov      x1, x21
0000d8b8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, prepareForReuse, IMP=0x19de4)
0000d8bc  adrp     x0, #0x54000
0000d8c0  add      x0, x0, #0x3f4
0000d8c4  bl       #0x46380
0000d8c8  mov      x23, x0
0000d8cc  adrp     x2, #0x19000
0000d8d0  add      x2, x2, #0xe18
0000d8d4  adrp     x3, #0x70000
0000d8d8  add      x3, x3, #0xab0
0000d8dc  mov      x1, x22
0000d8e0  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, layoutSubviews, IMP=0x19e18)
0000d8e4  adrp     x8, #0x6f000
0000d8e8  ldr      x1, [x8, #0x70]
0000d8ec  adrp     x2, #0x19000
0000d8f0  add      x2, x2, #0xe8c
0000d8f4  adrp     x3, #0x70000
0000d8f8  add      x3, x3, #0xab8
0000d8fc  mov      x0, x23
0000d900  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, setIcon:, IMP=0x19e8c)
0000d904  adrp     x8, #0x6f000
0000d908  ldr      x1, [x8, #0x6c0]
0000d90c  adrp     x2, #0x19000
0000d910  add      x2, x2, #0xf90
0000d914  adrp     x3, #0x70000
0000d918  add      x3, x3, #0xac0
0000d91c  mov      x0, x23
0000d920  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, updateImageAnimated:, IMP=0x19f90)
0000d924  adrp     x2, #0x19000
0000d928  add      x2, x2, #0xfe8
0000d92c  adrp     x3, #0x70000
0000d930  add      x3, x3, #0xac8
0000d934  mov      x0, x23
0000d938  mov      x1, x24
0000d93c  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, setHidden:, IMP=0x19fe8)
0000d940  adrp     x2, #0x1a000
0000d944  add      x2, x2, #0x4c
0000d948  adrp     x3, #0x70000
0000d94c  add      x3, x3, #0xad0
0000d950  mov      x0, x23
0000d954  mov      x1, x25
0000d958  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, setAlpha:, IMP=0x1a04c)
0000d95c  adrp     x2, #0x1a000
0000d960  add      x2, x2, #0xc4
0000d964  adrp     x3, #0x70000
0000d968  add      x3, x3, #0xad8
0000d96c  mov      x0, x23
0000d970  mov      x1, x19
0000d974  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, didMoveToWindow, IMP=0x1a0c4)
0000d978  adrp     x2, #0x1a000
0000d97c  add      x2, x2, #0x11c
0000d980  adrp     x3, #0x70000
0000d984  add      x3, x3, #0xae0
0000d988  mov      x0, x23
0000d98c  mov      x1, x20
0000d990  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, didMoveToSuperview, IMP=0x1a11c)
0000d994  adrp     x2, #0x1a000
0000d998  add      x2, x2, #0x174
0000d99c  adrp     x3, #0x70000
0000d9a0  add      x3, x3, #0xae8
0000d9a4  mov      x0, x23
0000d9a8  mov      x1, x21
0000d9ac  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, prepareForReuse, IMP=0x1a174)
0000d9b0  adrp     x0, #0x65000
0000d9b4  add      x0, x0, #0x7e8
0000d9b8  bl       #0x460b0
0000d9bc  cbz      x0, #0xdabc
0000d9c0  adrp     x8, #0x71000
0000d9c4  ldr      x8, [x8, #0x8e0]
0000d9c8  cmn      x8, #1
0000d9cc  b.ne     #0x12094
0000d9d0  adrp     x0, #0x54000
0000d9d4  add      x0, x0, #0x404
0000d9d8  bl       #0x46380
0000d9dc  mov      x19, x0
0000d9e0  adrp     x8, #0x6e000
0000d9e4  ldr      x1, [x8, #0xf0]
0000d9e8  adrp     x2, #0x1a000
0000d9ec  add      x2, x2, #0x1dc
0000d9f0  adrp     x3, #0x70000
0000d9f4  add      x3, x3, #0xaf0
0000d9f8  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, didMoveToWindow, IMP=0x1a1dc)
0000d9fc  adrp     x8, #0x6e000
0000da00  ldr      x1, [x8, #0xe8]
0000da04  adrp     x2, #0x1a000
0000da08  add      x2, x2, #0x270
0000da0c  adrp     x3, #0x70000
0000da10  add      x3, x3, #0xaf8
0000da14  mov      x0, x19
0000da18  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, didMoveToSuperview, IMP=0x1a270)
0000da1c  adrp     x8, #0x6e000
0000da20  ldr      x1, [x8, #0x8c8]
0000da24  adrp     x2, #0x1a000
0000da28  add      x2, x2, #0x304
0000da2c  adrp     x3, #0x70000
0000da30  add      x3, x3, #0xb00
0000da34  mov      x0, x19
0000da38  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, layoutSubviews, IMP=0x1a304)
0000da3c  adrp     x8, #0x6f000
0000da40  ldr      x1, [x8, #0x50]
0000da44  adrp     x2, #0x1a000
0000da48  add      x2, x2, #0x334
0000da4c  adrp     x3, #0x70000
0000da50  add      x3, x3, #0xb08
0000da54  mov      x0, x19
0000da58  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, setHidden:, IMP=0x1a334)
0000da5c  adrp     x8, #0x6f000
0000da60  ldr      x1, [x8, #0x40]
0000da64  adrp     x2, #0x1a000
0000da68  add      x2, x2, #0x380
0000da6c  adrp     x3, #0x70000
0000da70  add      x3, x3, #0xb10
0000da74  mov      x0, x19
0000da78  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, setFrame:, IMP=0x1a380)
0000da7c  adrp     x8, #0x6e000
0000da80  ldr      x1, [x8, #0xef0]
0000da84  adrp     x2, #0x1a000
0000da88  add      x2, x2, #0x490
0000da8c  adrp     x3, #0x70000
0000da90  add      x3, x3, #0xb18
0000da94  mov      x0, x19
0000da98  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, setBounds:, IMP=0x1a490)
0000da9c  adrp     x8, #0x6e000
0000daa0  ldr      x1, [x8, #0xf18]
0000daa4  adrp     x2, #0x1a000
0000daa8  add      x2, x2, #0x5a0
0000daac  adrp     x3, #0x70000
0000dab0  add      x3, x3, #0xb20
0000dab4  mov      x0, x19
0000dab8  bl       #0x460a4   ; MSHookMessageEx(MTMaterialView, setCenter:, IMP=0x1a5a0)
0000dabc  adrp     x8, #0x70000
0000dac0  ldrb     w8, [x8, #0x6d0]
0000dac4  adrp     x19, #0x70000
0000dac8  adrp     x20, #0x70000
0000dacc  cbnz     w8, #0xdae0
0000dad0  ldrb     w8, [x19, #0x6d1]
0000dad4  cbnz     w8, #0xdae0
0000dad8  ldrb     w8, [x20, #0x6d2]
0000dadc  cbz      w8, #0xe6c0
0000dae0  adrp     x0, #0x64000
0000dae4  add      x0, x0, #0xfe8
0000dae8  bl       #0x460b0
0000daec  cbz      x0, #0xe6c0
0000daf0  adrp     x0, #0x65000
0000daf4  add      x0, x0, #0x748
0000daf8  bl       #0x460b0
0000dafc  cbz      x0, #0xe6c0
0000db00  adrp     x8, #0x71000
0000db04  ldr      x8, [x8, #0x898]
0000db08  cmn      x8, #1
0000db0c  b.ne     #0x120dc
0000db10  ldrb     w8, [x19, #0x6d1]
0000db14  ldrb     w9, [x20, #0x6d2]
0000db18  orr      w8, w8, w9
0000db1c  cbz      w8, #0xdb24
0000db20  bl       #0x155f4
0000db24  adrp     x0, #0x53000
0000db28  add      x0, x0, #0x862
0000db2c  bl       #0x46380
0000db30  mov      x20, x0
0000db34  bl       #0x4647c
0000db38  mov      x19, x0
0000db3c  adrp     x8, #0x6d000
0000db40  ldr      x1, [x8, #0xc80]
0000db44  adrp     x2, #0x1a000
0000db48  add      x2, x2, #0x644
0000db4c  adrp     x3, #0x70000
0000db50  add      x3, x3, #0xb28
0000db54  mov      x0, x20
0000db58  bl       #0x460a4   ; MSHookMessageEx(SBIconView, applicationShortcutItems, IMP=0x1a644)
0000db5c  adrp     x8, #0x6e000
0000db60  ldr      x1, [x8, #0xe88]
0000db64  adrp     x2, #0x1a000
0000db68  add      x2, x2, #0x6ac
0000db6c  adrp     x3, #0x70000
0000db70  add      x3, x3, #0xb30
0000db74  mov      x0, x20
0000db78  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setApplicationShortcutItems:, IMP=0x1a6ac)
0000db7c  adrp     x8, #0x6f000
0000db80  ldr      x1, [x8, #0x410]
0000db84  adrp     x2, #0x1a000
0000db88  add      x2, x2, #0x71c
0000db8c  adrp     x3, #0x70000
0000db90  add      x3, x3, #0xb38
0000db94  mov      x0, x20
0000db98  bl       #0x460a4   ; MSHookMessageEx(SBIconView, shouldActivateApplicationShortcutItem:atIndex:, IMP=0x1a71c)
0000db9c  adrp     x8, #0x6d000
0000dba0  ldr      x1, [x8, #0xb50]
0000dba4  adrp     x2, #0x1a000
0000dba8  add      x2, x2, #0x7b0
0000dbac  adrp     x3, #0x70000
0000dbb0  add      x3, x3, #0xb40
0000dbb4  mov      x0, x19
0000dbb8  bl       #0x460a4   ; MSHookMessageEx(458752, activateShortcut:withBundleIdentifier:forIconView:, IMP=0x1a7b0)
0000dbbc  adrp     x0, #0x54000
0000dbc0  add      x0, x0, #0x1c2
0000dbc4  bl       #0x46380
0000dbc8  adrp     x8, #0x6e000
0000dbcc  ldr      x1, [x8, #0x478]
0000dbd0  adrp     x2, #0x1a000
0000dbd4  add      x2, x2, #0x87c
0000dbd8  adrp     x3, #0x70000
0000dbdc  add      x3, x3, #0xb48
0000dbe0  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, iconView:shouldActivateApplicationShortcutItem:atIndex:, IMP=0x1a87c)
0000dbe4  adrp     x0, #0x54000
0000dbe8  add      x0, x0, #0x17c
0000dbec  bl       #0x46380
0000dbf0  adrp     x8, #0x6e000
0000dbf4  ldr      x1, [x8, #0x450]
0000dbf8  adrp     x2, #0x1a000
0000dbfc  add      x2, x2, #0x93c
0000dc00  adrp     x3, #0x70000
0000dc04  add      x3, x3, #0xb50
0000dc08  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:shouldActivateApplicationShortcutItem:atIndex:forIconView:, IMP=0x1a93c)
0000dc0c  adrp     x0, #0x54000
0000dc10  add      x0, x0, #0x2e0
0000dc14  bl       #0x46380
0000dc18  mov      x19, x0
0000dc1c  adrp     x8, #0x6e000
0000dc20  ldr      x1, [x8, #0xdc0]
0000dc24  adrp     x2, #0x1a000
0000dc28  add      x2, x2, #0xa24
0000dc2c  adrp     x3, #0x70000
0000dc30  add      x3, x3, #0xb58
0000dc34  bl       #0x460a4   ; MSHookMessageEx(SBSApplicationShortcutItem, sbh_isSystemShortcut, IMP=0x1aa24)
0000dc38  adrp     x8, #0x6e000
0000dc3c  ldr      x1, [x8, #0xdc8]
0000dc40  adrp     x2, #0x1a000
0000dc44  add      x2, x2, #0xa6c
0000dc48  adrp     x3, #0x70000
0000dc4c  add      x3, x3, #0xb60
0000dc50  mov      x0, x19
0000dc54  bl       #0x460a4   ; MSHookMessageEx(SBSApplicationShortcutItem, sbh_shortcutSection, IMP=0x1aa6c)
0000dc58  adrp     x0, #0x53000
0000dc5c  add      x0, x0, #0xf3c
0000dc60  bl       #0x46380
0000dc64  bl       #0x4647c
0000dc68  adrp     x8, #0x6d000
0000dc6c  ldr      x1, [x8, #0x878]
0000dc70  adrp     x2, #0x1a000
0000dc74  add      x2, x2, #0xab4
0000dc78  adrp     x3, #0x70000
0000dc7c  add      x3, x3, #0xb68
0000dc80  bl       #0x460a4   ; MSHookMessageEx(None, _applicationIconImageForBundleIdentifier:format:scale:, IMP=0x1aab4)
0000dc84  adrp     x0, #0x54000
0000dc88  add      x0, x0, #0x413
0000dc8c  bl       #0x46380
0000dc90  mov      x19, x0
0000dc94  adrp     x8, #0x6f000
0000dc98  ldr      x1, [x8, #0x168]
0000dc9c  adrp     x2, #0x1a000
0000dca0  add      x2, x2, #0xb84
0000dca4  adrp     x3, #0x70000
0000dca8  add      x3, x3, #0xb70
0000dcac  bl       #0x460a4   ; MSHookMessageEx(NCNotificationViewController, setNotificationRequest:, IMP=0x1ab84)
0000dcb0  adrp     x8, #0x6d000
0000dcb4  ldr      x1, [x8, #0xab0]
0000dcb8  adrp     x2, #0x1a000
0000dcbc  add      x2, x2, #0xc24
0000dcc0  adrp     x3, #0x70000
0000dcc4  add      x3, x3, #0xb78
0000dcc8  mov      x0, x19
0000dccc  bl       #0x460a4   ; MSHookMessageEx(NCNotificationViewController, _updateLookView:withTitleFromProvidedStaticContent:, IMP=0x1ac24)
0000dcd0  adrp     x8, #0x6f000
0000dcd4  ldr      x1, [x8, #0x6a0]
0000dcd8  adrp     x2, #0x1a000
0000dcdc  add      x2, x2, #0xcf0
0000dce0  adrp     x3, #0x70000
0000dce4  add      x3, x3, #0xb80
0000dce8  mov      x0, x19
0000dcec  bl       #0x460a4   ; MSHookMessageEx(NCNotificationViewController, updateContent, IMP=0x1acf0)
0000dcf0  adrp     x0, #0x54000
0000dcf4  add      x0, x0, #0x430
0000dcf8  bl       #0x46380
0000dcfc  adrp     x8, #0x6d000
0000dd00  ldr      x19, [x8, #0xec0]
0000dd04  adrp     x2, #0x1a000
0000dd08  add      x2, x2, #0xd94
0000dd0c  adrp     x3, #0x70000
0000dd10  add      x3, x3, #0xb88
0000dd14  mov      x1, x19
0000dd18  bl       #0x460a4   ; MSHookMessageEx(NCNotificationRequestContentProvider, communicationAvatar, IMP=0x1ad94)
0000dd1c  adrp     x0, #0x54000
0000dd20  add      x0, x0, #0x455
0000dd24  bl       #0x46380
0000dd28  adrp     x2, #0x1a000
0000dd2c  add      x2, x2, #0xde0
0000dd30  adrp     x3, #0x70000
0000dd34  add      x3, x3, #0xb90
0000dd38  mov      x1, x19
0000dd3c  bl       #0x460a4   ; MSHookMessageEx(NCNotificationRequestCoalescingContentProvider, communicationAvatar, IMP=0x1ade0)
0000dd40  adrp     x0, #0x54000
0000dd44  add      x0, x0, #0x484
0000dd48  bl       #0x46380
0000dd4c  mov      x19, x0
0000dd50  adrp     x8, #0x6e000
0000dd54  ldr      x1, [x8, #0x628]
0000dd58  adrp     x2, #0x1a000
0000dd5c  add      x2, x2, #0xe2c
0000dd60  adrp     x3, #0x70000
0000dd64  add      x3, x3, #0xb98
0000dd68  bl       #0x460a4   ; MSHookMessageEx(NCAvatarView, initWithNotificationRequest:, IMP=0x1ae2c)
0000dd6c  adrp     x8, #0x6e000
0000dd70  ldr      x1, [x8, #0x630]
0000dd74  adrp     x2, #0x1a000
0000dd78  add      x2, x2, #0xe70
0000dd7c  adrp     x3, #0x70000
0000dd80  add      x3, x3, #0xba0
0000dd84  mov      x0, x19
0000dd88  bl       #0x460a4   ; MSHookMessageEx(NCAvatarView, initWithNotificationRequest:compatibleWithInitialTraitCollection:, IMP=0x1ae70)
0000dd8c  adrp     x8, #0x6e000
0000dd90  ldr      x1, [x8, #0x638]
0000dd94  adrp     x2, #0x1a000
0000dd98  add      x2, x2, #0xeb4
0000dd9c  adrp     x3, #0x70000
0000dda0  add      x3, x3, #0xba8
0000dda4  mov      x0, x19
0000dda8  bl       #0x460a4   ; MSHookMessageEx(NCAvatarView, initWithNotificationRequest:pointSize:compatibleWithInitialTraitCollection:, IMP=0x1aeb4)
0000ddac  adrp     x0, #0x54000
0000ddb0  add      x0, x0, #0x491
0000ddb4  bl       #0x46380
0000ddb8  mov      x19, x0
0000ddbc  adrp     x8, #0x6e000
0000ddc0  ldr      x1, [x8, #0x5e8]
0000ddc4  adrp     x2, #0x1a000
0000ddc8  add      x2, x2, #0xef8
0000ddcc  adrp     x3, #0x70000
0000ddd0  add      x3, x3, #0xbb0
0000ddd4  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, initWithIconView:, IMP=0x1aef8)
0000ddd8  adrp     x8, #0x6e000
0000dddc  ldr      x1, [x8, #0x5f0]
0000dde0  adrp     x2, #0x1a000
0000dde4  add      x2, x2, #0xf44
0000dde8  adrp     x3, #0x70000
0000ddec  add      x3, x3, #0xbb8
0000ddf0  mov      x0, x19
0000ddf4  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, initWithIconView:andIntegerIndicatorBadgeWithCount:, IMP=0x1af44)
0000ddf8  adrp     x8, #0x6f000
0000ddfc  ldr      x1, [x8, #0x88]
0000de00  adrp     x2, #0x1a000
0000de04  add      x2, x2, #0xf90
0000de08  adrp     x3, #0x70000
0000de0c  add      x3, x3, #0xbc0
0000de10  mov      x0, x19
0000de14  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, setIconView:, IMP=0x1af90)
0000de18  adrp     x8, #0x6e000
0000de1c  ldr      x1, [x8, #0xed0]
0000de20  adrp     x2, #0x1b000
0000de24  add      x2, x2, #4
0000de28  adrp     x3, #0x70000
0000de2c  add      x3, x3, #0xbc8
0000de30  mov      x0, x19
0000de34  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, setBadgeViews:, IMP=0x1b004)
0000de38  adrp     x8, #0x6e000
0000de3c  ldr      x21, [x8, #0x8c8]
0000de40  adrp     x2, #0x1b000
0000de44  add      x2, x2, #0x70
0000de48  adrp     x3, #0x70000
0000de4c  add      x3, x3, #0xbd0
0000de50  mov      x0, x19
0000de54  mov      x1, x21
0000de58  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, layoutSubviews, IMP=0x1b070)
0000de5c  adrp     x0, #0x54000
0000de60  add      x0, x0, #0x4a2
0000de64  bl       #0x46380
0000de68  mov      x20, x0
0000de6c  adrp     x8, #0x6e000
0000de70  ldr      x1, [x8, #0x5f8]
0000de74  adrp     x2, #0x1b000
0000de78  add      x2, x2, #0xa4
0000de7c  adrp     x3, #0x70000
0000de80  add      x3, x3, #0xbd8
0000de84  bl       #0x460a4   ; MSHookMessageEx(NCImageBrandingBadge, initWithImage:, IMP=0x1b0a4)
0000de88  adrp     x8, #0x6e000
0000de8c  ldr      x1, [x8, #0xed8]
0000de90  adrp     x2, #0x1b000
0000de94  add      x2, x2, #0x168
0000de98  adrp     x3, #0x70000
0000de9c  add      x3, x3, #0xbe0
0000dea0  mov      x0, x20
0000dea4  bl       #0x460a4   ; MSHookMessageEx(NCImageBrandingBadge, setBadgedIconView:, IMP=0x1b168)
0000dea8  adrp     x8, #0x6f000
0000deac  ldr      x19, [x8, #0xa0]
0000deb0  adrp     x2, #0x1b000
0000deb4  add      x2, x2, #0x248
0000deb8  adrp     x3, #0x70000
0000debc  add      x3, x3, #0xbe8
0000dec0  mov      x0, x20
0000dec4  mov      x1, x19
0000dec8  bl       #0x460a4   ; MSHookMessageEx(NCImageBrandingBadge, setImage:, IMP=0x1b248)
0000decc  adrp     x0, #0x54000
0000ded0  add      x0, x0, #0x4b7
0000ded4  bl       #0x46380
0000ded8  adrp     x8, #0x6f000
0000dedc  ldr      x20, [x8, #0x318]
0000dee0  adrp     x2, #0x1b000
0000dee4  add      x2, x2, #0x300
0000dee8  adrp     x3, #0x70000
0000deec  add      x3, x3, #0xbf0
0000def0  mov      x1, x20
0000def4  bl       #0x460a4   ; MSHookMessageEx(NCNotificationShortLookView, setSubordinateIcon:, IMP=0x1b300)
0000def8  adrp     x0, #0x54000
0000defc  add      x0, x0, #0x4d3
0000df00  bl       #0x46380
0000df04  adrp     x2, #0x1b000
0000df08  add      x2, x2, #0x398
0000df0c  adrp     x3, #0x70000
0000df10  add      x3, x3, #0xbf8
0000df14  mov      x1, x20
0000df18  bl       #0x460a4   ; MSHookMessageEx(NCNotificationLongLookView, setSubordinateIcon:, IMP=0x1b398)
0000df1c  adrp     x0, #0x54000
0000df20  add      x0, x0, #0x4ee
0000df24  bl       #0x46380
0000df28  adrp     x2, #0x1b000
0000df2c  add      x2, x2, #0x430
0000df30  adrp     x3, #0x70000
0000df34  add      x3, x3, #0xc00
0000df38  mov      x1, x20
0000df3c  bl       #0x460a4   ; MSHookMessageEx(NCExpandedPlatterView, setSubordinateIcon:, IMP=0x1b430)
0000df40  adrp     x0, #0x54000
0000df44  add      x0, x0, #0x504
0000df48  bl       #0x46380
0000df4c  adrp     x2, #0x1b000
0000df50  add      x2, x2, #0x4c8
0000df54  adrp     x3, #0x70000
0000df58  add      x3, x3, #0xc08
0000df5c  mov      x1, x20
0000df60  bl       #0x460a4   ; MSHookMessageEx(NCNotificationContentView, setSubordinateIcon:, IMP=0x1b4c8)
0000df64  adrp     x0, #0x54000
0000df68  add      x0, x0, #0x51e
0000df6c  bl       #0x46380
0000df70  mov      x23, x0
0000df74  adrp     x2, #0x1b000
0000df78  add      x2, x2, #0x560
0000df7c  adrp     x3, #0x70000
0000df80  add      x3, x3, #0xc10
0000df84  mov      x1, x20
0000df88  bl       #0x460a4   ; MSHookMessageEx(NCNotificationSeamlessContentView, setSubordinateIcon:, IMP=0x1b560)
0000df8c  adrp     x8, #0x6d000
0000df90  ldr      x22, [x8, #0x8c0]
0000df94  adrp     x2, #0x1b000
0000df98  add      x2, x2, #0x5f8
0000df9c  adrp     x3, #0x70000
0000dfa0  add      x3, x3, #0xc18
0000dfa4  mov      x0, x23
0000dfa8  mov      x1, x22
0000dfac  bl       #0x460a4   ; MSHookMessageEx(NCNotificationSeamlessContentView, _configureBadgeIconViewIfNecessary, IMP=0x1b5f8)
0000dfb0  adrp     x2, #0x1b000
0000dfb4  add      x2, x2, #0x660
0000dfb8  adrp     x3, #0x70000
0000dfbc  add      x3, x3, #0xc20
0000dfc0  mov      x0, x23
0000dfc4  mov      x1, x21
0000dfc8  bl       #0x460a4   ; MSHookMessageEx(NCNotificationSeamlessContentView, layoutSubviews, IMP=0x1b660)
0000dfcc  adrp     x0, #0x54000
0000dfd0  add      x0, x0, #0x540
0000dfd4  bl       #0x46380
0000dfd8  mov      x23, x0
0000dfdc  adrp     x2, #0x1b000
0000dfe0  add      x2, x2, #0x6c8
0000dfe4  adrp     x3, #0x70000
0000dfe8  add      x3, x3, #0xc28
0000dfec  mov      x1, x20
0000dff0  bl       #0x460a4   ; MSHookMessageEx(NCNotificationRichContentView, setSubordinateIcon:, IMP=0x1b6c8)
0000dff4  adrp     x2, #0x1b000
0000dff8  add      x2, x2, #0x760
0000dffc  adrp     x3, #0x70000
0000e000  add      x3, x3, #0xc30
0000e004  mov      x0, x23
0000e008  mov      x1, x22
0000e00c  bl       #0x460a4   ; MSHookMessageEx(NCNotificationRichContentView, _configureBadgeIconViewIfNecessary, IMP=0x1b760)
0000e010  adrp     x2, #0x1b000
0000e014  add      x2, x2, #0x7c8
0000e018  adrp     x3, #0x70000
0000e01c  add      x3, x3, #0xc38
0000e020  mov      x0, x23
0000e024  mov      x1, x21
0000e028  bl       #0x460a4   ; MSHookMessageEx(NCNotificationRichContentView, None, IMP=0x1b7c8)
0000e02c  adrp     x0, #0x54000
0000e030  add      x0, x0, #0x55e
0000e034  bl       #0x46380
0000e038  mov      x22, x0
0000e03c  adrp     x8, #0x6f000
0000e040  ldr      x1, [x8, #0x278]
0000e044  adrp     x2, #0x1b000
0000e048  add      x2, x2, #0x830
0000e04c  adrp     x3, #0x70000
0000e050  add      x3, x3, #0xc40
0000e054  bl       #0x460a4   ; MSHookMessageEx(NCDigestMosaicFeaturedNotificationContentView, setSectionIdentifier:, IMP=0x1b830)
0000e058  adrp     x2, #0x1b000
0000e05c  add      x2, x2, #0x8b8
0000e060  adrp     x3, #0x70000
0000e064  add      x3, x3, #0xc48
0000e068  mov      x0, x22
0000e06c  mov      x1, x20
0000e070  bl       #0x460a4   ; MSHookMessageEx(NCDigestMosaicFeaturedNotificationContentView, setSubordinateIcon:, IMP=0x1b8b8)
0000e074  adrp     x0, #0x54000
0000e078  add      x0, x0, #0x58c
0000e07c  bl       #0x46380
0000e080  mov      x20, x0
0000e084  adrp     x8, #0x6d000
0000e088  ldr      x1, [x8, #0x9c8]
0000e08c  adrp     x2, #0x1b000
0000e090  add      x2, x2, #0x950
0000e094  adrp     x3, #0x70000
0000e098  add      x3, x3, #0xc50
0000e09c  bl       #0x460a4   ; MSHookMessageEx(NCFullScreenStagingBannerView, _setSubordinateIcon:, IMP=0x1b950)
0000e0a0  adrp     x8, #0x6d000
0000e0a4  ldr      x1, [x8, #0x8c8]
0000e0a8  adrp     x2, #0x1b000
0000e0ac  add      x2, x2, #0x9e8
0000e0b0  adrp     x3, #0x70000
0000e0b4  add      x3, x3, #0xc58
0000e0b8  mov      x0, x20
0000e0bc  bl       #0x460a4   ; MSHookMessageEx(NCFullScreenStagingBannerView, _configureBadgedIconViewIfNecessary, IMP=0x1b9e8)
0000e0c0  adrp     x2, #0x1b000
0000e0c4  add      x2, x2, #0xa50
0000e0c8  adrp     x3, #0x70000
0000e0cc  add      x3, x3, #0xc60
0000e0d0  mov      x0, x20
0000e0d4  mov      x1, x21
0000e0d8  bl       #0x460a4   ; MSHookMessageEx(NCFullScreenStagingBannerView, None, IMP=0x1ba50)
0000e0dc  adrp     x0, #0x54000
0000e0e0  add      x0, x0, #0x5aa
0000e0e4  bl       #0x46380
0000e0e8  mov      x20, x0
0000e0ec  adrp     x8, #0x6e000
0000e0f0  ldr      x1, [x8, #0x588]
0000e0f4  adrp     x2, #0x1b000
0000e0f8  add      x2, x2, #0xab8
0000e0fc  adrp     x3, #0x70000
0000e100  add      x3, x3, #0xc68
0000e104  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherSpaceTitleItem, initWithDisplayItem:, IMP=0x1bab8)
0000e108  adrp     x2, #0x1b000
0000e10c  add      x2, x2, #0xafc
0000e110  adrp     x3, #0x70000
0000e114  add      x3, x3, #0xc70
0000e118  mov      x0, x20
0000e11c  mov      x1, x19
0000e120  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherSpaceTitleItem, None, IMP=0x1bafc)
0000e124  adrp     x0, #0x54000
0000e128  add      x0, x0, #0x5c8
0000e12c  bl       #0x46380
0000e130  adrp     x8, #0x6d000
0000e134  ldr      x1, [x8, #0x8b8]
0000e138  adrp     x2, #0x1b000
0000e13c  add      x2, x2, #0xbd0
0000e140  adrp     x3, #0x70000
0000e144  add      x3, x3, #0xc78
0000e148  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherSpaceTitleItemController, _computeHeaderItems, IMP=0x1bbd0)
0000e14c  adrp     x0, #0x54000
0000e150  add      x0, x0, #0x5f0
0000e154  bl       #0x46380
0000e158  mov      x20, x0
0000e15c  adrp     x8, #0x6e000
0000e160  ldr      x1, [x8, #0x5b0]
0000e164  adrp     x2, #0x1b000
0000e168  add      x2, x2, #0xcf4
0000e16c  adrp     x3, #0x70000
0000e170  add      x3, x3, #0xc80
0000e174  bl       #0x460a4   ; MSHookMessageEx(SBApplicationBlurContentView, initWithFrame:bundleIdentifier:icon:targetViewToBlur:initialIconScale:, IMP=0x1bcf4)
0000e178  adrp     x8, #0x6e000
0000e17c  ldr      x1, [x8, #0x5b8]
0000e180  adrp     x2, #0x1b000
0000e184  add      x2, x2, #0xdf8
0000e188  adrp     x3, #0x70000
0000e18c  add      x3, x3, #0xc88
0000e190  mov      x0, x20
0000e194  bl       #0x460a4   ; MSHookMessageEx(SBApplicationBlurContentView, initWithFrame:bundleIdentifier:targetViewToBlur:, IMP=0x1bdf8)
0000e198  adrp     x8, #0x6e000
0000e19c  ldr      x1, [x8, #0x5c0]
0000e1a0  adrp     x2, #0x1b000
0000e1a4  add      x2, x2, #0xedc
0000e1a8  adrp     x3, #0x70000
0000e1ac  add      x3, x3, #0xc90
0000e1b0  mov      x0, x20
0000e1b4  bl       #0x460a4   ; MSHookMessageEx(SBApplicationBlurContentView, initWithFrame:bundleIdentifier:targetViewToBlur:initialIconScale:, IMP=0x1bedc)
0000e1b8  adrp     x2, #0x1b000
0000e1bc  add      x2, x2, #0xfd0
0000e1c0  adrp     x3, #0x70000
0000e1c4  add      x3, x3, #0xc98
0000e1c8  mov      x0, x20
0000e1cc  mov      x1, x21
0000e1d0  bl       #0x460a4   ; MSHookMessageEx(SBApplicationBlurContentView, None, IMP=0x1bfd0)
0000e1d4  mov      w0, #2
0000e1d8  mov      w1, #0x11
0000e1dc  mov      w2, #0
0000e1e0  mov      w3, #0
0000e1e4  bl       #0x45a7c
0000e1e8  cbz      w0, #0xe3ec
0000e1ec  adrp     x0, #0x65000
0000e1f0  add      x0, x0, #0x808
0000e1f4  bl       #0x460b0
0000e1f8  cbz      x0, #0xe3ec
0000e1fc  adrp     x0, #0x65000
0000e200  add      x0, x0, #0x828
0000e204  bl       #0x460b0
0000e208  cbz      x0, #0xe3ec
0000e20c  adrp     x0, #0x54000
0000e210  add      x0, x0, #0x60d
0000e214  bl       #0x46380
0000e218  adrp     x8, #0x6e000
0000e21c  ldr      x1, [x8, #0x3f8]
0000e220  adrp     x2, #0x1b000
0000e224  add      x2, x2, #0xffc
0000e228  adrp     x3, #0x70000
0000e22c  add      x3, x3, #0xca0
0000e230  bl       #0x460a4   ; MSHookMessageEx(SBIcon, iconImageWithInfo:, IMP=0x1bffc)
0000e234  adrp     x0, #0x54000
0000e238  add      x0, x0, #0x614
0000e23c  bl       #0x46380
0000e240  mov      x22, x0
0000e244  adrp     x8, #0x6e000
0000e248  ldr      x19, [x8, #0x280]
0000e24c  adrp     x2, #0x1c000
0000e250  add      x2, x2, #0xa0
0000e254  adrp     x3, #0x70000
0000e258  add      x3, x3, #0xca8
0000e25c  mov      x1, x19
0000e260  bl       #0x460a4   ; MSHookMessageEx(SBLeafIcon, generateIconImageWithInfo:, IMP=0x1c0a0)
0000e264  adrp     x8, #0x6f000
0000e268  ldr      x20, [x8, #0x670]
0000e26c  adrp     x2, #0x1c000
0000e270  add      x2, x2, #0x144
0000e274  adrp     x3, #0x70000
0000e278  add      x3, x3, #0xcb0
0000e27c  mov      x0, x22
0000e280  mov      x1, x20
0000e284  bl       #0x460a4   ; MSHookMessageEx(SBLeafIcon, unmaskedIconImageWithInfo:, IMP=0x1c144)
0000e288  adrp     x0, #0x54000
0000e28c  add      x0, x0, #0x61f
0000e290  bl       #0x46380
0000e294  mov      x22, x0
0000e298  adrp     x8, #0x6f000
0000e29c  ldr      x1, [x8, #0x78]
0000e2a0  adrp     x2, #0x1c000
0000e2a4  add      x2, x2, #0x1e8
0000e2a8  adrp     x3, #0x70000
0000e2ac  add      x3, x3, #0xcb8
0000e2b0  bl       #0x460a4   ; MSHookMessageEx(SBHClockApplicationIconImageView, setIcon:location:animated:, IMP=0x1c1e8)
0000e2b4  adrp     x8, #0x6d000
0000e2b8  ldr      x1, [x8, #0xf60]
0000e2bc  adrp     x2, #0x1c000
0000e2c0  add      x2, x2, #0x290
0000e2c4  adrp     x3, #0x70000
0000e2c8  add      x3, x3, #0xcc0
0000e2cc  mov      x0, x22
0000e2d0  bl       #0x460a4   ; MSHookMessageEx(SBHClockApplicationIconImageView, contentsImage, IMP=0x1c290)
0000e2d4  adrp     x8, #0x6f000
0000e2d8  ldr      x1, [x8, #0x478]
0000e2dc  adrp     x2, #0x1c000
0000e2e0  add      x2, x2, #0x33c
0000e2e4  adrp     x3, #0x70000
0000e2e8  add      x3, x3, #0xcc8
0000e2ec  mov      x0, x22
0000e2f0  bl       #0x460a4   ; MSHookMessageEx(SBHClockApplicationIconImageView, squareContentsImage, IMP=0x1c33c)
0000e2f4  adrp     x8, #0x6f000
0000e2f8  ldr      x1, [x8, #0x6e0]
0000e2fc  adrp     x2, #0x1c000
0000e300  add      x2, x2, #0x3e8
0000e304  adrp     x3, #0x70000
0000e308  add      x3, x3, #0xcd0
0000e30c  mov      x0, x22
0000e310  bl       #0x460a4   ; MSHookMessageEx(SBHClockApplicationIconImageView, updateUnanimated, IMP=0x1c3e8)
0000e314  adrp     x2, #0x1c000
0000e318  add      x2, x2, #0x414
0000e31c  adrp     x3, #0x70000
0000e320  add      x3, x3, #0xcd8
0000e324  mov      x0, x22
0000e328  mov      x1, x21
0000e32c  bl       #0x460a4   ; MSHookMessageEx(SBHClockApplicationIconImageView, None, IMP=0x1c414)
0000e330  adrp     x0, #0x54000
0000e334  add      x0, x0, #0x640
0000e338  bl       #0x46380
0000e33c  mov      x21, x0
0000e340  adrp     x2, #0x1c000
0000e344  add      x2, x2, #0x440
0000e348  adrp     x3, #0x70000
0000e34c  add      x3, x3, #0xce0
0000e350  mov      x1, x19
0000e354  bl       #0x460a4   ; MSHookMessageEx(SBHCalendarApplicationIcon, generateIconImageWithInfo:, IMP=0x1c440)
0000e358  adrp     x2, #0x1c000
0000e35c  add      x2, x2, #0x4e4
0000e360  adrp     x3, #0x70000
0000e364  add      x3, x3, #0xce8
0000e368  mov      x0, x21
0000e36c  mov      x1, x20
0000e370  bl       #0x460a4   ; MSHookMessageEx(SBHCalendarApplicationIcon, unmaskedIconImageWithInfo:, IMP=0x1c4e4)
0000e374  b        #0xe6c0
0000e378  cbz      x20, #0xc6d0
0000e37c  adrp     x8, #0x6d000
0000e380  ldr      x21, [x8, #0x7f0]
0000e384  mov      x0, x19
0000e388  mov      x1, x21
0000e38c  bl       #0x461c4
0000e390  cbz      x0, #0xc6d0
0000e394  adrp     x8, #0x6f000
0000e398  ldr      x22, [x8, #0x648]
0000e39c  mov      x0, x20
0000e3a0  mov      x1, x22
0000e3a4  bl       #0x461c4
0000e3a8  cbz      x0, #0xc6d0
0000e3ac  adrp     x2, #0x16000
0000e3b0  add      x2, x2, #0x3ec
0000e3b4  adrp     x3, #0x70000
0000e3b8  add      x3, x3, #0x718
0000e3bc  mov      x0, x19
0000e3c0  mov      x1, x21
0000e3c4  bl       #0x460a4   ; MSHookMessageEx(generateIconImageWithInfo:, ACPowerChanged, IMP=0x163ec)
0000e3c8  adrp     x2, #0x16000
0000e3cc  add      x2, x2, #0x470
0000e3d0  adrp     x3, #0x70000
0000e3d4  add      x3, x3, #0x720
0000e3d8  mov      x0, x20
0000e3dc  mov      x1, x22
0000e3e0  bl       #0x460a4   ; MSHookMessageEx(unmaskedIconImageWithInfo:, turnOnScreenFullyWithBacklightSource:, IMP=0x16470)
0000e3e4  b        #0xc6d0
0000e3e8  bl       #0x46170
0000e3ec  adrp     x8, #0x6f000
0000e3f0  ldr      x0, [x8, #0x8a8]
0000e3f4  bl       #0x4ac40
0000e3f8  mov      x29, x29
0000e3fc  bl       #0x46428
0000e400  adrp     x9, #0x70000
0000e404  ldr      x8, [x9, #0x548]
0000e408  str      x0, [x9, #0x548]
0000e40c  mov      x0, x8
0000e410  bl       #0x463f8
0000e414  adrp     x8, #0x6f000
0000e418  ldr      x0, [x8, #0x8a8]
0000e41c  bl       #0x4ac40
0000e420  mov      x29, x29
0000e424  bl       #0x46428
0000e428  adrp     x9, #0x70000
0000e42c  ldr      x8, [x9, #0x550]
0000e430  str      x0, [x9, #0x550]
0000e434  mov      x0, x8
0000e438  bl       #0x463f8
0000e43c  adrp     x0, #0x54000
0000e440  add      x0, x0, #0x65b
0000e444  bl       #0x46380
0000e448  mov      x20, x0
0000e44c  adrp     x8, #0x6e000
0000e450  ldr      x1, [x8, #0x620]
0000e454  adrp     x2, #0x1c000
0000e458  add      x2, x2, #0x588
0000e45c  adrp     x3, #0x70000
0000e460  add      x3, x3, #0xcf0
0000e464  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, initWithName:iconImageInfo:, IMP=0x1c588)
0000e468  adrp     x8, #0x6e000
0000e46c  ldr      x1, [x8, #0x4d0]
0000e470  adrp     x2, #0x1c000
0000e474  add      x2, x2, #0x5dc
0000e478  adrp     x3, #0x70000
0000e47c  add      x3, x3, #0xcf8
0000e480  mov      x0, x20
0000e484  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, imageForIcon:, IMP=0x1c5dc)
0000e488  adrp     x8, #0x6e000
0000e48c  ldr      x1, [x8, #0x4d8]
0000e490  adrp     x2, #0x1c000
0000e494  add      x2, x2, #0x68c
0000e498  adrp     x3, #0x70000
0000e49c  add      x3, x3, #0xd00
0000e4a0  mov      x0, x20
0000e4a4  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, imageForIcon:options:, IMP=0x1c68c)
0000e4a8  adrp     x8, #0x6e000
0000e4ac  ldr      x1, [x8, #0xc78]
0000e4b0  adrp     x2, #0x1c000
0000e4b4  add      x2, x2, #0x74c
0000e4b8  adrp     x3, #0x70000
0000e4bc  add      x3, x3, #0xd08
0000e4c0  mov      x0, x20
0000e4c4  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, realImageForIcon:, IMP=0x1c74c)
0000e4c8  adrp     x8, #0x6e000
0000e4cc  ldr      x1, [x8, #0xc80]
0000e4d0  adrp     x2, #0x1c000
0000e4d4  add      x2, x2, #0x7fc
0000e4d8  adrp     x3, #0x70000
0000e4dc  add      x3, x3, #0xd10
0000e4e0  mov      x0, x20
0000e4e4  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, realImageForIcon:options:, IMP=0x1c7fc)
0000e4e8  adrp     x8, #0x6f000
0000e4ec  ldr      x1, [x8, #0x678]
0000e4f0  adrp     x2, #0x1c000
0000e4f4  add      x2, x2, #0x8bc
0000e4f8  adrp     x3, #0x70000
0000e4fc  add      x3, x3, #0xd18
0000e500  mov      x0, x20
0000e504  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, unmaskedImageForIcon:, IMP=0x1c8bc)
0000e508  adrp     x8, #0x6f000
0000e50c  ldr      x1, [x8, #0x680]
0000e510  adrp     x2, #0x1c000
0000e514  add      x2, x2, #0x960
0000e518  adrp     x3, #0x70000
0000e51c  add      x3, x3, #0xd20
0000e520  mov      x0, x20
0000e524  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, unmaskedImageForIcon:options:, IMP=0x1c960)
0000e528  adrp     x8, #0x6e000
0000e52c  ldr      x1, [x8, #0xda8]
0000e530  adrp     x2, #0x1c000
0000e534  add      x2, x2, #0xa14
0000e538  adrp     x3, #0x70000
0000e53c  add      x3, x3, #0xd28
0000e540  mov      x0, x20
0000e544  bl       #0x460a4   ; MSHookMessageEx(SBHIconImageCache, sb_iconImageForIcon:, IMP=0x1ca14)
0000e548  adrp     x0, #0x54000
0000e54c  add      x0, x0, #0x66d
0000e550  bl       #0x46380
0000e554  mov      x22, x0
0000e558  bl       #0x4647c
0000e55c  adrp     x8, #0x6e000
0000e560  ldr      x20, [x8, #0x300]
0000e564  adrp     x2, #0x1c000
0000e568  add      x2, x2, #0xac4
0000e56c  adrp     x3, #0x70000
0000e570  add      x3, x3, #0xd30
0000e574  mov      x1, x20
0000e578  bl       #0x460a4   ; MSHookMessageEx(None, gridCellImageOfSize:forIcon:iconImageInfo:, IMP=0x1cac4)
0000e57c  adrp     x8, #0x6e000
0000e580  ldr      x1, [x8, #0x558]
0000e584  adrp     x2, #0x1c000
0000e588  add      x2, x2, #0xbc0
0000e58c  adrp     x3, #0x70000
0000e590  add      x3, x3, #0xd38
0000e594  mov      x0, x22
0000e598  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageCache, init, IMP=0x1cbc0)
0000e59c  adrp     x8, #0x6e000
0000e5a0  ldr      x1, [x8, #0x600]
0000e5a4  adrp     x2, #0x1c000
0000e5a8  add      x2, x2, #0xc14
0000e5ac  adrp     x3, #0x70000
0000e5b0  add      x3, x3, #0xd40
0000e5b4  mov      x0, x22
0000e5b8  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageCache, initWithListLayout:, IMP=0x1cc14)
0000e5bc  adrp     x8, #0x6e000
0000e5c0  ldr      x1, [x8, #0x608]
0000e5c4  adrp     x2, #0x1c000
0000e5c8  add      x2, x2, #0xc68
0000e5cc  adrp     x3, #0x70000
0000e5d0  add      x3, x3, #0xd48
0000e5d4  mov      x0, x22
0000e5d8  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageCache, initWithListLayout:sharedCache:, IMP=0x1cc68)
0000e5dc  adrp     x2, #0x1c000
0000e5e0  add      x2, x2, #0xcbc
0000e5e4  adrp     x3, #0x70000
0000e5e8  add      x3, x3, #0xd50
0000e5ec  mov      x0, x22
0000e5f0  mov      x1, x20
0000e5f4  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageCache, gridCellImageOfSize:forIcon:iconImageInfo:, IMP=0x1ccbc)
0000e5f8  adrp     x0, #0x54000
0000e5fc  add      x0, x0, #0x684
0000e600  bl       #0x46380
0000e604  adrp     x2, #0x1c000
0000e608  add      x2, x2, #0xdbc
0000e60c  adrp     x3, #0x70000
0000e610  add      x3, x3, #0xd58
0000e614  mov      x1, x20
0000e618  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageSharedCache, gridCellImageOfSize:forIcon:iconImageInfo:, IMP=0x1cdbc)
0000e61c  adrp     x0, #0x54000
0000e620  add      x0, x0, #0x3f4
0000e624  bl       #0x46380
0000e628  mov      x20, x0
0000e62c  adrp     x8, #0x6f000
0000e630  ldr      x1, [x8, #0x70]
0000e634  adrp     x2, #0x1c000
0000e638  add      x2, x2, #0xebc
0000e63c  adrp     x3, #0x70000
0000e640  add      x3, x3, #0xd60
0000e644  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, setIcon:, IMP=0x1cebc)
0000e648  adrp     x8, #0x6e000
0000e64c  ldr      x1, [x8, #0xbb0]
0000e650  adrp     x2, #0x1c000
0000e654  add      x2, x2, #0xf30
0000e658  adrp     x3, #0x70000
0000e65c  add      x3, x3, #0xd68
0000e660  mov      x0, x20
0000e664  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, prepareForReuse, IMP=0x1cf30)
0000e668  adrp     x2, #0x1c000
0000e66c  add      x2, x2, #0xf64
0000e670  adrp     x3, #0x70000
0000e674  add      x3, x3, #0xd70
0000e678  mov      x0, x20
0000e67c  mov      x1, x21
0000e680  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, None, IMP=0x1cf64)
0000e684  adrp     x8, #0x6f000
0000e688  ldr      x1, [x8, #0x6c0]
0000e68c  adrp     x2, #0x1c000
0000e690  add      x2, x2, #0xf90
0000e694  adrp     x3, #0x70000
0000e698  add      x3, x3, #0xd78
0000e69c  mov      x0, x20
0000e6a0  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, updateImageAnimated:, IMP=0x1cf90)
0000e6a4  adrp     x2, #0x1c000
0000e6a8  add      x2, x2, #0xfbc
0000e6ac  adrp     x3, #0x70000
0000e6b0  add      x3, x3, #0xd80
0000e6b4  mov      x0, x20
0000e6b8  mov      x1, x19
0000e6bc  bl       #0x460a4   ; MSHookMessageEx(SBIconImageView, None, IMP=0x1cfbc)
0000e6c0  adrp     x8, #0x70000
0000e6c4  ldrb     w8, [x8, #0x704]
0000e6c8  cbz      w8, #0xe7b0
0000e6cc  adrp     x0, #0x64000
0000e6d0  add      x0, x0, #0xfe8
0000e6d4  bl       #0x460b0
0000e6d8  cbz      x0, #0xe7b0
0000e6dc  adrp     x0, #0x65000
0000e6e0  add      x0, x0, #0x748
0000e6e4  bl       #0x460b0
0000e6e8  cbz      x0, #0xe7b0
0000e6ec  adrp     x0, #0x53000
0000e6f0  add      x0, x0, #0x862
0000e6f4  bl       #0x46380
0000e6f8  mov      x20, x0
0000e6fc  bl       #0x4647c
0000e700  mov      x19, x0
0000e704  adrp     x8, #0x6d000
0000e708  ldr      x1, [x8, #0xc80]
0000e70c  adrp     x2, #0x1d000
0000e710  add      x2, x2, #0xdc
0000e714  adrp     x3, #0x70000
0000e718  add      x3, x3, #0xd88
0000e71c  mov      x0, x20
0000e720  bl       #0x460a4   ; MSHookMessageEx(SBIconView, applicationShortcutItems, IMP=0x1d0dc)
0000e724  adrp     x8, #0x6e000
0000e728  ldr      x1, [x8, #0xe88]
0000e72c  adrp     x2, #0x1d000
0000e730  add      x2, x2, #0x144
0000e734  adrp     x3, #0x70000
0000e738  add      x3, x3, #0xd90
0000e73c  mov      x0, x20
0000e740  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setApplicationShortcutItems:, IMP=0x1d144)
0000e744  adrp     x8, #0x6d000
0000e748  ldr      x1, [x8, #0xb50]
0000e74c  adrp     x2, #0x1d000
0000e750  add      x2, x2, #0x1b4
0000e754  adrp     x3, #0x70000
0000e758  add      x3, x3, #0xd98
0000e75c  mov      x0, x19
0000e760  bl       #0x460a4   ; MSHookMessageEx(None, activateShortcut:withBundleIdentifier:forIconView:, IMP=0x1d1b4)
0000e764  adrp     x0, #0x54000
0000e768  add      x0, x0, #0x2e0
0000e76c  bl       #0x46380
0000e770  mov      x19, x0
0000e774  adrp     x8, #0x6e000
0000e778  ldr      x1, [x8, #0xdc0]
0000e77c  adrp     x2, #0x1d000
0000e780  add      x2, x2, #0x3ac
0000e784  adrp     x3, #0x70000
0000e788  add      x3, x3, #0xda0
0000e78c  bl       #0x460a4   ; MSHookMessageEx(SBSApplicationShortcutItem, sbh_isSystemShortcut, IMP=0x1d3ac)
0000e790  adrp     x8, #0x6e000
0000e794  ldr      x1, [x8, #0xdc8]
0000e798  adrp     x2, #0x1d000
0000e79c  add      x2, x2, #0x3f4
0000e7a0  adrp     x3, #0x70000
0000e7a4  add      x3, x3, #0xda8
0000e7a8  mov      x0, x19
0000e7ac  bl       #0x460a4   ; MSHookMessageEx(SBSApplicationShortcutItem, sbh_shortcutSection, IMP=0x1d3f4)
0000e7b0  adrp     x8, #0x70000
0000e7b4  ldrb     w8, [x8, #0xdb0]
0000e7b8  cbz      w8, #0xe950
0000e7bc  adrp     x0, #0x65000
0000e7c0  add      x0, x0, #0x848
0000e7c4  bl       #0x460b0
0000e7c8  cbz      x0, #0xe950
0000e7cc  adrp     x0, #0x65000
0000e7d0  add      x0, x0, #0x868
0000e7d4  bl       #0x460b0
0000e7d8  cbz      x0, #0xe950
0000e7dc  adrp     x0, #0x65000
0000e7e0  add      x0, x0, #0x888
0000e7e4  bl       #0x460b0
0000e7e8  cbz      x0, #0xe950
0000e7ec  adrp     x0, #0x54000
0000e7f0  add      x0, x0, #0x6a1
0000e7f4  bl       #0x46380
0000e7f8  adrp     x8, #0x6d000
0000e7fc  ldr      x1, [x8, #0xdd0]
0000e800  adrp     x2, #0x1d000
0000e804  add      x2, x2, #0x43c
0000e808  adrp     x3, #0x70000
0000e80c  add      x3, x3, #0xdb8
0000e810  bl       #0x460a4   ; MSHookMessageEx(SBIconLabelImageParametersBuilder, buildParameters, IMP=0x1d43c)
0000e814  adrp     x0, #0x54000
0000e818  add      x0, x0, #0x6f7
0000e81c  bl       #0x46380
0000e820  bl       #0x4647c
0000e824  adrp     x8, #0x6e000
0000e828  ldr      x19, [x8, #0x400]
0000e82c  adrp     x2, #0x1d000
0000e830  add      x2, x2, #0x49c
0000e834  adrp     x3, #0x70000
0000e838  add      x3, x3, #0xdc0
0000e83c  mov      x1, x19
0000e840  bl       #0x460a4   ; MSHookMessageEx(None, iconLabelViewWithSettings:imageParameters:forIconView:, IMP=0x1d49c)
0000e844  adrp     x0, #0x54000
0000e848  add      x0, x0, #0x6c3
0000e84c  bl       #0x46380
0000e850  mov      x20, x0
0000e854  adrp     x8, #0x6d000
0000e858  ldr      x1, [x8, #0xe18]
0000e85c  adrp     x2, #0x1d000
0000e860  add      x2, x2, #0x574
0000e864  adrp     x3, #0x70000
0000e868  add      x3, x3, #0xdc8
0000e86c  bl       #0x460a4   ; MSHookMessageEx(SBIconLabelViewDefaultFactory, canUseIconSimpleLabelViewToDisplayLabelWithSettings:imageParameters:forIconView:, IMP=0x1d574)
0000e870  adrp     x2, #0x1d000
0000e874  add      x2, x2, #0x648
0000e878  adrp     x3, #0x70000
0000e87c  add      x3, x3, #0xdd0
0000e880  mov      x0, x20
0000e884  mov      x1, x19
0000e888  bl       #0x460a4   ; MSHookMessageEx(SBIconLabelViewDefaultFactory, iconLabelViewWithSettings:imageParameters:forIconView:, IMP=0x1d648)
0000e88c  adrp     x0, #0x54000
0000e890  add      x0, x0, #0x70e
0000e894  bl       #0x46380
0000e898  bl       #0x4647c
0000e89c  mov      x19, x0
0000e8a0  adrp     x8, #0x6e000
0000e8a4  ldr      x1, [x8, #0x8e8]
0000e8a8  adrp     x2, #0x1d000
0000e8ac  add      x2, x2, #0x720
0000e8b0  adrp     x3, #0x70000
0000e8b4  add      x3, x3, #0xdd8
0000e8b8  bl       #0x460a4   ; MSHookMessageEx(None, legibilityStrengthForLegibilityStyle:, IMP=0x1d720)
0000e8bc  adrp     x8, #0x6e000
0000e8c0  ldr      x1, [x8, #0x9e8]
0000e8c4  adrp     x2, #0x1d000
0000e8c8  add      x2, x2, #0x740
0000e8cc  adrp     x3, #0x70000
0000e8d0  add      x3, x3, #0xde0
0000e8d4  mov      x0, x19
0000e8d8  bl       #0x460a4   ; MSHookMessageEx(iconLabelViewWithSettings:imageParameters:forIconView:, needsLegibilityImageForParameters:, IMP=0x1d740)
0000e8dc  adrp     x0, #0x54000
0000e8e0  add      x0, x0, #0x71f
0000e8e4  bl       #0x46380
0000e8e8  adrp     x8, #0x6f000
0000e8ec  ldr      x19, [x8, #0x6b8]
0000e8f0  adrp     x2, #0x1d000
0000e8f4  add      x2, x2, #0x7c4
0000e8f8  adrp     x3, #0x70000
0000e8fc  add      x3, x3, #0xde8
0000e900  mov      x1, x19
0000e904  bl       #0x460a4   ; MSHookMessageEx(SBIconLegibilityLabelView, updateIconLabelWithSettings:imageParameters:, IMP=0x1d7c4)
0000e908  adrp     x0, #0x54000
0000e90c  add      x0, x0, #0x6e1
0000e910  bl       #0x46380
0000e914  adrp     x2, #0x1d000
0000e918  add      x2, x2, #0x864
0000e91c  adrp     x3, #0x70000
0000e920  add      x3, x3, #0xdf0
0000e924  mov      x1, x19
0000e928  bl       #0x460a4   ; MSHookMessageEx(SBIconSimpleLabelView, updateIconLabelWithSettings:imageParameters:, IMP=0x1d864)
0000e92c  adrp     x0, #0x54000
0000e930  add      x0, x0, #0x739
0000e934  bl       #0x46380
0000e938  adrp     x2, #0x1d000
0000e93c  add      x2, x2, #0x904
0000e940  adrp     x3, #0x70000
0000e944  add      x3, x3, #0xdf8
0000e948  mov      x1, x19
0000e94c  bl       #0x460a4   ; MSHookMessageEx(SBIconSuggestionLabelView, updateIconLabelWithSettings:imageParameters:, IMP=0x1d904)
0000e950  adrp     x8, #0x70000
0000e954  ldrb     w8, [x8, #0xe00]
0000e958  cbz      w8, #0xe9a8
0000e95c  adrp     x0, #0x54000
0000e960  add      x0, x0, #0x491
0000e964  bl       #0x46380
0000e968  mov      x19, x0
0000e96c  adrp     x8, #0x6e000
0000e970  ldr      x1, [x8, #0xed0]
0000e974  adrp     x2, #0x1d000
0000e978  add      x2, x2, #0x9a4
0000e97c  adrp     x3, #0x70000
0000e980  add      x3, x3, #0xe08
0000e984  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, setBadgeViews:, IMP=0x1d9a4)
0000e988  adrp     x8, #0x6e000
0000e98c  ldr      x1, [x8, #0x8c8]
0000e990  adrp     x2, #0x1d000
0000e994  add      x2, x2, #0xbf8
0000e998  adrp     x3, #0x70000
0000e99c  add      x3, x3, #0xe10
0000e9a0  mov      x0, x19
0000e9a4  bl       #0x460a4   ; MSHookMessageEx(NCBadgedIconView, layoutSubviews, IMP=0x1dbf8)
0000e9a8  cbz      w26, #0xea40
0000e9ac  adrp     x0, #0x65000
0000e9b0  add      x0, x0, #0x668
0000e9b4  bl       #0x460b0
0000e9b8  cbz      x0, #0xea40
0000e9bc  adrp     x0, #0x65000
0000e9c0  add      x0, x0, #0x6a8
0000e9c4  bl       #0x460b0
0000e9c8  cbz      x0, #0xea40
0000e9cc  adrp     x0, #0x54000
0000e9d0  add      x0, x0, #0x23f
0000e9d4  bl       #0x46380
0000e9d8  adrp     x8, #0x6e000
0000e9dc  ldr      x1, [x8, #0xd60]
0000e9e0  adrp     x2, #0x1d000
0000e9e4  add      x2, x2, #0xc24
0000e9e8  adrp     x3, #0x70000
0000e9ec  add      x3, x3, #0xe18
0000e9f0  bl       #0x460a4   ; MSHookMessageEx(SBSearchGesture, revealAnimated:, IMP=0x1dc24)
0000e9f4  adrp     x0, #0x54000
0000e9f8  add      x0, x0, #0x16b
0000e9fc  bl       #0x46380
0000ea00  mov      x19, x0
0000ea04  adrp     x8, #0x6e000
0000ea08  ldr      x1, [x8, #0xf0]
0000ea0c  adrp     x2, #0x1d000
0000ea10  add      x2, x2, #0xc60
0000ea14  adrp     x3, #0x70000
0000ea18  add      x3, x3, #0xe20
0000ea1c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, didMoveToWindow, IMP=0x1dc60)
0000ea20  adrp     x8, #0x6e000
0000ea24  ldr      x1, [x8, #0xe8]
0000ea28  adrp     x2, #0x1d000
0000ea2c  add      x2, x2, #0xcac
0000ea30  adrp     x3, #0x70000
0000ea34  add      x3, x3, #0xe28
0000ea38  mov      x0, x19
0000ea3c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, didMoveToSuperview, IMP=0x1dcac)
0000ea40  adrp     x8, #0x70000
0000ea44  ldrb     w8, [x8, #0xe30]
0000ea48  cbz      w8, #0xeb24
0000ea4c  adrp     x0, #0x54000
0000ea50  add      x0, x0, #0x753
0000ea54  bl       #0x46380
0000ea58  mov      x20, x0
0000ea5c  adrp     x8, #0x6e000
0000ea60  ldr      x19, [x8, #0x8c8]
0000ea64  adrp     x2, #0x1d000
0000ea68  add      x2, x2, #0xcf8
0000ea6c  adrp     x3, #0x70000
0000ea70  add      x3, x3, #0xe38
0000ea74  mov      x1, x19
0000ea78  bl       #0x460a4   ; MSHookMessageEx(SBDockView, layoutSubviews, IMP=0x1dcf8)
0000ea7c  adrp     x8, #0x6e000
0000ea80  ldr      x1, [x8, #0xeb0]
0000ea84  adrp     x2, #0x1d000
0000ea88  add      x2, x2, #0xd68
0000ea8c  adrp     x3, #0x70000
0000ea90  add      x3, x3, #0xe40
0000ea94  mov      x0, x20
0000ea98  bl       #0x460a4   ; MSHookMessageEx(SBDockView, setBackgroundAlpha:, IMP=0x1dd68)
0000ea9c  adrp     x8, #0x6f000
0000eaa0  ldr      x1, [x8, #0x628]
0000eaa4  adrp     x2, #0x1d000
0000eaa8  add      x2, x2, #0xd88
0000eaac  adrp     x3, #0x70000
0000eab0  add      x3, x3, #0xe48
0000eab4  mov      x0, x20
0000eab8  bl       #0x460a4   ; MSHookMessageEx(SBDockView, traitCollectionDidChange:, IMP=0x1dd88)
0000eabc  adrp     x8, #0x6d000
0000eac0  ldr      x1, [x8, #0x888]
0000eac4  adrp     x2, #0x1d000
0000eac8  add      x2, x2, #0xe30
0000eacc  adrp     x3, #0x70000
0000ead0  add      x3, x3, #0xe50
0000ead4  mov      x0, x20
0000ead8  bl       #0x460a4   ; MSHookMessageEx(SBDockView, _backgroundContrastDidChange:, IMP=0x1de30)
0000eadc  adrp     x0, #0x54000
0000eae0  add      x0, x0, #0x75e
0000eae4  bl       #0x46380
0000eae8  mov      x20, x0
0000eaec  adrp     x2, #0x1d000
0000eaf0  add      x2, x2, #0xed8
0000eaf4  adrp     x3, #0x70000
0000eaf8  add      x3, x3, #0xe58
0000eafc  mov      x1, x19
0000eb00  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockPlatterView, layoutSubviews, IMP=0x1ded8)
0000eb04  adrp     x8, #0x6d000
0000eb08  ldr      x1, [x8, #0x8f8]
0000eb0c  adrp     x2, #0x1d000
0000eb10  add      x2, x2, #0xf6c
0000eb14  adrp     x3, #0x70000
0000eb18  add      x3, x3, #0xe60
0000eb1c  mov      x0, x20
0000eb20  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockPlatterView, _dynamicUserInterfaceTraitDidChange, IMP=0x1df6c)
0000eb24  adrp     x0, #0x65000
0000eb28  add      x0, x0, #0x8a8
0000eb2c  bl       #0x460b0
0000eb30  cbz      x0, #0xeb5c
0000eb34  adrp     x0, #0x54000
0000eb38  add      x0, x0, #0x778
0000eb3c  bl       #0x46380
0000eb40  adrp     x8, #0x6e000
0000eb44  ldr      x1, [x8, #0xa58]
0000eb48  adrp     x2, #0x1e000
0000eb4c  add      x2, x2, #8
0000eb50  adrp     x3, #0x70000
0000eb54  add      x3, x3, #0xe68
0000eb58  bl       #0x460a4   ; MSHookMessageEx(SBIconListGridLayoutConfiguration, numberOfPortraitColumns, IMP=0x1e008)
0000eb5c  adrp     x8, #0x70000
0000eb60  ldrb     w8, [x8, #0xe70]
0000eb64  cbz      w8, #0xeb90
0000eb68  adrp     x0, #0x54000
0000eb6c  add      x0, x0, #0x79a
0000eb70  bl       #0x46380
0000eb74  adrp     x8, #0x6e000
0000eb78  ldr      x1, [x8, #0x398]
0000eb7c  adrp     x2, #0x1e000
0000eb80  add      x2, x2, #0xd4
0000eb84  adrp     x3, #0x70000
0000eb88  add      x3, x3, #0xe78
0000eb8c  bl       #0x460a4   ; MSHookMessageEx(CSQuickActionsViewController, hasFlashlight, IMP=0x1e0d4)
0000eb90  adrp     x8, #0x70000
0000eb94  ldrb     w8, [x8, #0xe80]
0000eb98  cbz      w8, #0xebc4
0000eb9c  adrp     x0, #0x54000
0000eba0  add      x0, x0, #0x79a
0000eba4  bl       #0x46380
0000eba8  adrp     x8, #0x6e000
0000ebac  ldr      x1, [x8, #0x390]
0000ebb0  adrp     x2, #0x1e000
0000ebb4  add      x2, x2, #0xf4
0000ebb8  adrp     x3, #0x70000
0000ebbc  add      x3, x3, #0xe88
0000ebc0  bl       #0x460a4   ; MSHookMessageEx(CSQuickActionsViewController, hasCamera, IMP=0x1e0f4)
0000ebc4  adrp     x0, #0x54000
0000ebc8  add      x0, x0, #0x7b7
0000ebcc  bl       #0x46380
0000ebd0  adrp     x8, #0x6d000
0000ebd4  ldr      x1, [x8, #0xc78]
0000ebd8  adrp     x2, #0x1e000
0000ebdc  add      x2, x2, #0x114
0000ebe0  adrp     x3, #0x70000
0000ebe4  add      x3, x3, #0xe90
0000ebe8  bl       #0x460a4   ; MSHookMessageEx(SpringBoard, applicationDidFinishLaunching:, IMP=0x1e114)
0000ebec  adrp     x8, #0x70000
0000ebf0  ldrb     w8, [x8, #0xe98]
0000ebf4  cbz      w8, #0xec20
0000ebf8  adrp     x0, #0x54000
0000ebfc  add      x0, x0, #0x7c3
0000ec00  bl       #0x46380
0000ec04  adrp     x8, #0x6e000
0000ec08  ldr      x1, [x8, #0x380]
0000ec0c  adrp     x2, #0x1e000
0000ec10  add      x2, x2, #0x1ec
0000ec14  adrp     x3, #0x70000
0000ec18  add      x3, x3, #0xea0
0000ec1c  bl       #0x460a4   ; MSHookMessageEx(CSScrollView, handlePan:, IMP=0x1e1ec)
0000ec20  adrp     x8, #0x70000
0000ec24  ldrb     w8, [x8, #0xea8]
0000ec28  cbz      w8, #0xec64
0000ec2c  adrp     x0, #0x65000
0000ec30  add      x0, x0, #0x5c8
0000ec34  bl       #0x460b0
0000ec38  cbz      x0, #0xec64
0000ec3c  adrp     x0, #0x54000
0000ec40  add      x0, x0, #0x18d
0000ec44  bl       #0x46380
0000ec48  adrp     x8, #0x6d000
0000ec4c  ldr      x1, [x8, #0x860]
0000ec50  adrp     x2, #0x1e000
0000ec54  add      x2, x2, #0x3f4
0000ec58  adrp     x3, #0x70000
0000ec5c  add      x3, x3, #0xeb0
0000ec60  bl       #0x460a4   ; MSHookMessageEx(SBMainDisplayPolicyAggregator, _allowsCapabilityLockScreenTodayViewWithExplanation:, IMP=0x1e3f4)
0000ec64  adrp     x19, #0x70000
0000ec68  ldrb     w8, [x19, #0xeb8]
0000ec6c  adrp     x20, #0x70000
0000ec70  cbnz     w8, #0xec88
0000ec74  adrp     x8, #0x70000
0000ec78  ldrb     w8, [x8, #0x495]
0000ec7c  cbnz     w8, #0xec88
0000ec80  ldrb     w8, [x20, #0x496]
0000ec84  cbz      w8, #0xece0
0000ec88  adrp     x0, #0x65000
0000ec8c  add      x0, x0, #0x8c8
0000ec90  bl       #0x460b0
0000ec94  cbnz     x0, #0xeca8
0000ec98  adrp     x0, #0x54000
0000ec9c  add      x0, x0, #0x7eb
0000eca0  mov      w1, #2
0000eca4  bl       #0x4623c
0000eca8  ldrb     w8, [x20, #0x496]
0000ecac  cbz      w8, #0xece0
0000ecb0  adrp     x0, #0x65000
0000ecb4  add      x0, x0, #0x8e8
0000ecb8  bl       #0x460b0
0000ecbc  cbz      x0, #0xecd0
0000ecc0  adrp     x0, #0x65000
0000ecc4  add      x0, x0, #0x908
0000ecc8  bl       #0x460b0
0000eccc  cbnz     x0, #0xece0
0000ecd0  adrp     x0, #0x54000
0000ecd4  add      x0, x0, #0x871
0000ecd8  mov      w1, #2
0000ecdc  bl       #0x4623c
0000ece0  ldrb     w8, [x19, #0xeb8]
0000ece4  cbz      w8, #0xed20
0000ece8  adrp     x0, #0x65000
0000ecec  add      x0, x0, #0x8c8
0000ecf0  bl       #0x460b0
0000ecf4  cbz      x0, #0xed20
0000ecf8  adrp     x0, #0x54000
0000ecfc  add      x0, x0, #0x7d0
0000ed00  bl       #0x46380
0000ed04  adrp     x8, #0x6e000
0000ed08  ldr      x1, [x8, #0x2a0]
0000ed0c  adrp     x2, #0x1e000
0000ed10  add      x2, x2, #0x414
0000ed14  adrp     x3, #0x70000
0000ed18  add      x3, x3, #0xec0
0000ed1c  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, gestureRecognizerShouldBegin:, IMP=0x1e414)
0000ed20  adrp     x8, #0x70000
0000ed24  ldrb     w8, [x8, #0xec8]
0000ed28  cbz      w8, #0xedc0
0000ed2c  adrp     x0, #0x65000
0000ed30  add      x0, x0, #0x928
0000ed34  bl       #0x460b0
0000ed38  cbz      x0, #0xedc0
0000ed3c  adrp     x0, #0x65000
0000ed40  add      x0, x0, #0x6a8
0000ed44  bl       #0x460b0
0000ed48  cbz      x0, #0xedc0
0000ed4c  adrp     x0, #0x54000
0000ed50  add      x0, x0, #0x8cb
0000ed54  bl       #0x46380
0000ed58  adrp     x8, #0x6e000
0000ed5c  ldr      x1, [x8, #0x8c8]
0000ed60  adrp     x2, #0x1e000
0000ed64  add      x2, x2, #0x4f8
0000ed68  adrp     x3, #0x70000
0000ed6c  add      x3, x3, #0xed0
0000ed70  bl       #0x460a4   ; MSHookMessageEx(CSTeachableMomentsContainerView, layoutSubviews, IMP=0x1e4f8)
0000ed74  adrp     x0, #0x54000
0000ed78  add      x0, x0, #0x272
0000ed7c  bl       #0x46380
0000ed80  mov      x19, x0
0000ed84  adrp     x8, #0x6d000
0000ed88  ldr      x1, [x8, #0x9f8]
0000ed8c  adrp     x2, #0x1e000
0000ed90  add      x2, x2, #0x5d4
0000ed94  adrp     x3, #0x70000
0000ed98  add      x3, x3, #0xed8
0000ed9c  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, _shouldShowGrabberOnFirstSwipe, IMP=0x1e5d4)
0000eda0  adrp     x8, #0x6e000
0000eda4  ldr      x1, [x8, #0x2d8]
0000eda8  adrp     x2, #0x1e000
0000edac  add      x2, x2, #0x5f4
0000edb0  adrp     x3, #0x70000
0000edb4  add      x3, x3, #0xee0
0000edb8  mov      x0, x19
0000edbc  bl       #0x460a4   ; MSHookMessageEx(SBControlCenterController, grabberTongue:shouldShowTongueOnFirstSwipeWithEdgeLocation:, IMP=0x1e5f4)
0000edc0  adrp     x8, #0x70000
0000edc4  ldrb     w8, [x8, #0xee8]
0000edc8  cbz      w8, #0xeea4
0000edcc  adrp     x0, #0x65000
0000edd0  add      x0, x0, #0x948
0000edd4  bl       #0x460b0
0000edd8  cbnz     x0, #0xedec
0000eddc  adrp     x0, #0x65000
0000ede0  add      x0, x0, #0x968
0000ede4  bl       #0x460b0
0000ede8  cbz      x0, #0xeea4
0000edec  adrp     x0, #0x54000
0000edf0  add      x0, x0, #0x8eb
0000edf4  bl       #0x46380
0000edf8  mov      x20, x0
0000edfc  adrp     x8, #0x6e000
0000ee00  ldr      x19, [x8, #0x8c8]
0000ee04  adrp     x2, #0x1e000
0000ee08  add      x2, x2, #0x688
0000ee0c  adrp     x3, #0x70000
0000ee10  add      x3, x3, #0xef0
0000ee14  mov      x1, x19
0000ee18  bl       #0x460a4   ; MSHookMessageEx(SBHomeGrabberView, layoutSubviews, IMP=0x1e688)
0000ee1c  adrp     x8, #0x6d000
0000ee20  ldr      x1, [x8, #0x980]
0000ee24  adrp     x2, #0x1e000
0000ee28  add      x2, x2, #0x84c
0000ee2c  adrp     x3, #0x70000
0000ee30  add      x3, x3, #0xef8
0000ee34  mov      x0, x20
0000ee38  bl       #0x460a4   ; MSHookMessageEx(SBHomeGrabberView, _newPillView, IMP=0x1e84c)
0000ee3c  adrp     x0, #0x54000
0000ee40  add      x0, x0, #0x8fd
0000ee44  bl       #0x46380
0000ee48  mov      x20, x0
0000ee4c  adrp     x2, #0x1e000
0000ee50  add      x2, x2, #0x8f0
0000ee54  adrp     x3, #0x70000
0000ee58  add      x3, x3, #0xf00
0000ee5c  mov      x1, x19
0000ee60  bl       #0x460a4   ; MSHookMessageEx(CSHomeAffordanceView, layoutSubviews, IMP=0x1e8f0)
0000ee64  adrp     x8, #0x6e000
0000ee68  ldr      x1, [x8, #0xf0]
0000ee6c  adrp     x2, #0x1e000
0000ee70  add      x2, x2, #0x9d4
0000ee74  adrp     x3, #0x70000
0000ee78  add      x3, x3, #0xf08
0000ee7c  mov      x0, x20
0000ee80  bl       #0x460a4   ; MSHookMessageEx(CSHomeAffordanceView, didMoveToWindow, IMP=0x1e9d4)
0000ee84  adrp     x8, #0x6e000
0000ee88  ldr      x1, [x8, #0xb68]
0000ee8c  adrp     x2, #0x1e000
0000ee90  add      x2, x2, #0xab8
0000ee94  adrp     x3, #0x70000
0000ee98  add      x3, x3, #0xf10
0000ee9c  mov      x0, x20
0000eea0  bl       #0x460a4   ; MSHookMessageEx(CSHomeAffordanceView, pointInside:withEvent:, IMP=0x1eab8)
0000eea4  adrp     x8, #0x70000
0000eea8  ldrb     w8, [x8, #0xf18]
0000eeac  cbz      w8, #0xef10
0000eeb0  adrp     x0, #0x65000
0000eeb4  add      x0, x0, #0x988
0000eeb8  bl       #0x460b0
0000eebc  cbz      x0, #0xef10
0000eec0  adrp     x0, #0x54000
0000eec4  add      x0, x0, #0x912
0000eec8  bl       #0x46380
0000eecc  adrp     x8, #0x6d000
0000eed0  ldr      x1, [x8, #0xd88]
0000eed4  adrp     x2, #0x1e000
0000eed8  add      x2, x2, #0xb54
0000eedc  adrp     x3, #0x70000
0000eee0  add      x3, x3, #0xf20
0000eee4  bl       #0x460a4   ; MSHookMessageEx(SBDashBoardLockScreenEnvironment, biometricUnlockBehavior:requestsUnlock:withFeedback:, IMP=0x1eb54)
0000eee8  adrp     x0, #0x54000
0000eeec  add      x0, x0, #0x933
0000eef0  bl       #0x46380
0000eef4  adrp     x8, #0x6d000
0000eef8  ldr      x1, [x8, #0xd78]
0000eefc  adrp     x2, #0x1e000
0000ef00  add      x2, x2, #0xbcc
0000ef04  adrp     x3, #0x70000
0000ef08  add      x3, x3, #0xf28
0000ef0c  bl       #0x460a4   ; MSHookMessageEx(SBUIBiometricResource, biometricKitInterface:handleEvent:, IMP=0x1ebcc)
0000ef10  adrp     x8, #0x70000
0000ef14  ldrb     w8, [x8, #0xf30]
0000ef18  cbz      w8, #0xef54
0000ef1c  adrp     x0, #0x65000
0000ef20  add      x0, x0, #0x9a8
0000ef24  bl       #0x460b0
0000ef28  cbz      x0, #0xef54
0000ef2c  adrp     x0, #0x54000
0000ef30  add      x0, x0, #0x949
0000ef34  bl       #0x46380
0000ef38  adrp     x8, #0x6e000
0000ef3c  ldr      x1, [x8, #0x728]
0000ef40  adrp     x2, #0x1e000
0000ef44  add      x2, x2, #0xce4
0000ef48  adrp     x3, #0x70000
0000ef4c  add      x3, x3, #0xf38
0000ef50  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherViewController, isDevicePad, IMP=0x1ece4)
0000ef54  adrp     x8, #0x70000
0000ef58  ldrb     w8, [x8, #0xf40]
0000ef5c  cbz      w8, #0xef98
0000ef60  adrp     x0, #0x65000
0000ef64  add      x0, x0, #0x9c8
0000ef68  bl       #0x460b0
0000ef6c  cbz      x0, #0xef98
0000ef70  adrp     x0, #0x54000
0000ef74  add      x0, x0, #0x967
0000ef78  bl       #0x46380
0000ef7c  adrp     x8, #0x6f000
0000ef80  ldr      x1, [x8, #0x428]
0000ef84  adrp     x2, #0x1e000
0000ef88  add      x2, x2, #0xd04
0000ef8c  adrp     x3, #0x70000
0000ef90  add      x3, x3, #0xf48
0000ef94  bl       #0x460a4   ; MSHookMessageEx(SBSwitcherModifier, shouldZoomToSystemApertureForEvent:activeLayout:, IMP=0x1ed04)
0000ef98  adrp     x8, #0x70000
0000ef9c  ldrb     w8, [x8, #0xf50]
0000efa0  cbz      w8, #0xf000
0000efa4  adrp     x0, #0x65000
0000efa8  add      x0, x0, #0x9e8
0000efac  bl       #0x460b0
0000efb0  cbz      x0, #0xf000
0000efb4  adrp     x0, #0x54000
0000efb8  add      x0, x0, #0x97a
0000efbc  bl       #0x46380
0000efc0  mov      x19, x0
0000efc4  adrp     x8, #0x6f000
0000efc8  ldr      x1, [x8, #0x60]
0000efcc  adrp     x2, #0x1e000
0000efd0  add      x2, x2, #0xdac
0000efd4  adrp     x3, #0x70000
0000efd8  add      x3, x3, #0xf58
0000efdc  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherAnimationSettings, setHomeScreenScaleInApplication:, IMP=0x1edac)
0000efe0  adrp     x8, #0x6f000
0000efe4  ldr      x1, [x8, #0x68]
0000efe8  adrp     x2, #0x1e000
0000efec  add      x2, x2, #0xdd0
0000eff0  adrp     x3, #0x70000
0000eff4  add      x3, x3, #0xf60
0000eff8  mov      x0, x19
0000effc  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherAnimationSettings, setHomeScreenScaleInSwitcher:, IMP=0x1edd0)
0000f000  adrp     x8, #0x70000
0000f004  ldrb     w8, [x8, #0xf68]
0000f008  cbz      w8, #0xf0c0
0000f00c  adrp     x0, #0x54000
0000f010  add      x0, x0, #0x99b
0000f014  mov      w1, #2
0000f018  bl       #0x4623c
0000f01c  adrp     x0, #0x54000
0000f020  add      x0, x0, #0x9e9
0000f024  mov      w1, #2
0000f028  bl       #0x4623c
0000f02c  adrp     x0, #0x65000
0000f030  add      x0, x0, #0xa08
0000f034  bl       #0x460b0
0000f038  cbz      x0, #0xf0c0
0000f03c  adrp     x0, #0x65000
0000f040  add      x0, x0, #0xa28
0000f044  bl       #0x460b0
0000f048  cbz      x0, #0xf0c0
0000f04c  adrp     x0, #0x54000
0000f050  add      x0, x0, #0xa25
0000f054  bl       #0x46380
0000f058  adrp     x8, #0x6d000
0000f05c  ldr      x1, [x8, #0xd98]
0000f060  adrp     x2, #0x1e000
0000f064  add      x2, x2, #0xdf4
0000f068  adrp     x3, #0x70000
0000f06c  add      x3, x3, #0xf70
0000f070  bl       #0x460a4   ; MSHookMessageEx(BluetoothManager, bluetoothStateActionWithCompletion:, IMP=0x1edf4)
0000f074  adrp     x0, #0x54000
0000f078  add      x0, x0, #0xa36
0000f07c  bl       #0x46380
0000f080  mov      x19, x0
0000f084  adrp     x8, #0x6d000
0000f088  ldr      x1, [x8, #0x858]
0000f08c  adrp     x2, #0x1e000
0000f090  add      x2, x2, #0xf24
0000f094  adrp     x3, #0x70000
0000f098  add      x3, x3, #0xf78
0000f09c  bl       #0x460a4   ; MSHookMessageEx(WFControlCenterStateMonitor, _airplaneModeEnabled, IMP=0x1ef24)
0000f0a0  adrp     x8, #0x6e000
0000f0a4  ldr      x1, [x8, #0xb30]
0000f0a8  adrp     x2, #0x1e000
0000f0ac  add      x2, x2, #0xfdc
0000f0b0  adrp     x3, #0x70000
0000f0b4  add      x3, x3, #0xf80
0000f0b8  mov      x0, x19
0000f0bc  bl       #0x460a4   ; MSHookMessageEx(WFControlCenterStateMonitor, performAction:, IMP=0x1efdc)
0000f0c0  adrp     x8, #0x70000
0000f0c4  ldrb     w8, [x8, #0xf88]
0000f0c8  cbz      w8, #0xf128
0000f0cc  adrp     x0, #0x65000
0000f0d0  add      x0, x0, #0xa48
0000f0d4  bl       #0x460b0
0000f0d8  cbz      x0, #0xf128
0000f0dc  adrp     x0, #0x54000
0000f0e0  add      x0, x0, #0xa52
0000f0e4  bl       #0x46380
0000f0e8  mov      x19, x0
0000f0ec  adrp     x8, #0x6d000
0000f0f0  ldr      x1, [x8, #0x9d0]
0000f0f4  adrp     x2, #0x1f000
0000f0f8  add      x2, x2, #0xa0
0000f0fc  adrp     x3, #0x70000
0000f100  add      x3, x3, #0xf90
0000f104  bl       #0x460a4   ; MSHookMessageEx(SBLockScreenManager, _setUILocked:, IMP=0x1f0a0)
0000f108  adrp     x8, #0x6d000
0000f10c  ldr      x1, [x8, #0x9a8]
0000f110  adrp     x2, #0x1f000
0000f114  add      x2, x2, #0xcc
0000f118  adrp     x3, #0x70000
0000f11c  add      x3, x3, #0xf98
0000f120  mov      x0, x19
0000f124  bl       #0x460a4   ; MSHookMessageEx(SBLockScreenManager, _reallySetUILocked:, IMP=0x1f0cc)
0000f128  adrp     x8, #0x70000
0000f12c  ldrb     w8, [x8, #0xfa0]
0000f130  cbz      w8, #0xf6f0
0000f134  adrp     x0, #0x65000
0000f138  add      x0, x0, #0xa68
0000f13c  bl       #0x460b0
0000f140  mov      x25, x0
0000f144  adrp     x0, #0x65000
0000f148  add      x0, x0, #0xa88
0000f14c  bl       #0x460b0
0000f150  mov      x20, x0
0000f154  adrp     x0, #0x65000
0000f158  add      x0, x0, #0xaa8
0000f15c  bl       #0x460b0
0000f160  mov      x28, x0
0000f164  adrp     x0, #0x65000
0000f168  add      x0, x0, #0xac8
0000f16c  bl       #0x460b0
0000f170  mov      x27, x0
0000f174  adrp     x0, #0x65000
0000f178  add      x0, x0, #0xae8
0000f17c  bl       #0x460b0
0000f180  mov      x26, x0
0000f184  adrp     x0, #0x65000
0000f188  add      x0, x0, #0xb08
0000f18c  bl       #0x460b0
0000f190  mov      x24, x0
0000f194  adrp     x0, #0x65000
0000f198  add      x0, x0, #0xb28
0000f19c  bl       #0x460b0
0000f1a0  mov      x23, x0
0000f1a4  adrp     x0, #0x65000
0000f1a8  add      x0, x0, #0xb48
0000f1ac  bl       #0x460b0
0000f1b0  mov      x22, x0
0000f1b4  adrp     x0, #0x65000
0000f1b8  add      x0, x0, #0xb68
0000f1bc  bl       #0x460b0
0000f1c0  mov      x19, x0
0000f1c4  adrp     x0, #0x65000
0000f1c8  add      x0, x0, #0xb88
0000f1cc  bl       #0x460b0
0000f1d0  str      x0, [sp, #0x40]
0000f1d4  adrp     x0, #0x65000
0000f1d8  add      x0, x0, #0xba8
0000f1dc  bl       #0x460b0
0000f1e0  str      x0, [sp, #0x38]
0000f1e4  cbz      x25, #0xf228
0000f1e8  adrp     x8, #0x6e000
0000f1ec  ldr      x21, [x8, #0x778]
0000f1f0  mov      x0, x25
0000f1f4  mov      x1, x21
0000f1f8  bl       #0x461b8
0000f1fc  cbz      x0, #0xf228
0000f200  adrp     x0, #0x54000
0000f204  add      x0, x0, #0xa66
0000f208  bl       #0x46380
0000f20c  bl       #0x4647c
0000f210  adrp     x2, #0x1f000
0000f214  add      x2, x2, #0xf8
0000f218  adrp     x3, #0x70000
0000f21c  add      x3, x3, #0xfa8
0000f220  mov      x1, x21
0000f224  bl       #0x460a4   ; MSHookMessageEx(None, isFloatingDockSupported, IMP=0x1f0f8)
0000f228  cbz      x20, #0xf268
0000f22c  adrp     x8, #0x6e000
0000f230  ldr      x21, [x8, #0x288]
0000f234  mov      x0, x20
0000f238  mov      x1, x21
0000f23c  bl       #0x461c4
0000f240  cbz      x0, #0xf268
0000f244  adrp     x0, #0x54000
0000f248  add      x0, x0, #0xa7f
0000f24c  bl       #0x46380
0000f250  adrp     x2, #0x1f000
0000f254  add      x2, x2, #0x118
0000f258  adrp     x3, #0x70000
0000f25c  add      x3, x3, #0xfb0
0000f260  mov      x1, x21
0000f264  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockBehaviorAssertion, gesturePossible, IMP=0x1f118)
0000f268  cbz      x28, #0xf2e0
0000f26c  adrp     x8, #0x6e000
0000f270  ldr      x20, [x8, #0x830]
0000f274  mov      x0, x28
0000f278  mov      x1, x20
0000f27c  bl       #0x461c4
0000f280  cbz      x0, #0xf2e0
0000f284  adrp     x8, #0x6d000
0000f288  ldr      x21, [x8, #0xc40]
0000f28c  mov      x0, x28
0000f290  mov      x1, x21
0000f294  bl       #0x461c4
0000f298  cbz      x0, #0xf2e0
0000f29c  adrp     x0, #0x54000
0000f2a0  add      x0, x0, #0xa9f
0000f2a4  bl       #0x46380
0000f2a8  mov      x28, x0
0000f2ac  adrp     x2, #0x1f000
0000f2b0  add      x2, x2, #0x148
0000f2b4  adrp     x3, #0x70000
0000f2b8  add      x3, x3, #0xfb8
0000f2bc  mov      x1, x20
0000f2c0  bl       #0x460a4   ; MSHookMessageEx(_SBGridFloorSwitcherModifier, isSwitcherWindowVisible, IMP=0x1f148)
0000f2c4  adrp     x2, #0x1f000
0000f2c8  add      x2, x2, #0x19c
0000f2cc  adrp     x3, #0x70000
0000f2d0  add      x3, x3, #0xfc0
0000f2d4  mov      x0, x28
0000f2d8  mov      x1, x21
0000f2dc  bl       #0x460a4   ; MSHookMessageEx(_SBGridFloorSwitcherModifier, appLayoutToScrollToBeforeTransitioning, IMP=0x1f19c)
0000f2e0  cbz      x27, #0xf320
0000f2e4  adrp     x8, #0x6f000
0000f2e8  ldr      x20, [x8, #0x418]
0000f2ec  mov      x0, x27
0000f2f0  mov      x1, x20
0000f2f4  bl       #0x461c4
0000f2f8  cbz      x0, #0xf320
0000f2fc  adrp     x0, #0x54000
0000f300  add      x0, x0, #0xabc
0000f304  bl       #0x46380
0000f308  adrp     x2, #0x1f000
0000f30c  add      x2, x2, #0x1f8
0000f310  adrp     x3, #0x70000
0000f314  add      x3, x3, #0xfc8
0000f318  mov      x1, x20
0000f31c  bl       #0x460a4   ; MSHookMessageEx(SBDeckSwitcherModifier, shouldConfigureInAppDockHiddenAssertion, IMP=0x1f1f8)
0000f320  cbz      x25, #0xf40c
0000f324  adrp     x8, #0x6e000
0000f328  ldr      x20, [x8, #0x690]
0000f32c  mov      x0, x25
0000f330  mov      x1, x20
0000f334  bl       #0x461c4
0000f338  cbz      x0, #0xf398
0000f33c  adrp     x8, #0x6e000
0000f340  ldr      x21, [x8, #0x1f8]
0000f344  mov      x0, x25
0000f348  mov      x1, x21
0000f34c  bl       #0x461c4
0000f350  cbz      x0, #0xf398
0000f354  adrp     x0, #0x54000
0000f358  add      x0, x0, #0xa66
0000f35c  bl       #0x46380
0000f360  mov      x27, x0
0000f364  adrp     x2, #0x1f000
0000f368  add      x2, x2, #0x234
0000f36c  adrp     x3, #0x70000
0000f370  add      x3, x3, #0xfd0
0000f374  mov      x1, x20
0000f378  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockController, initWithWindowScene:iconController:, IMP=0x1f234)
0000f37c  adrp     x2, #0x1f000
0000f380  add      x2, x2, #0x2fc
0000f384  adrp     x3, #0x70000
0000f388  add      x3, x3, #0xfd8
0000f38c  mov      x0, x27
0000f390  mov      x1, x21
0000f394  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockController, floatingDockWindow, IMP=0x1f2fc)
0000f398  cbz      x26, #0xf40c
0000f39c  adrp     x8, #0x6f000
0000f3a0  ldr      x20, [x8, #0x638]
0000f3a4  mov      x0, x25
0000f3a8  mov      x1, x20
0000f3ac  bl       #0x461c4
0000f3b0  cbz      x0, #0xf40c
0000f3b4  mov      x0, x26
0000f3b8  mov      x1, x20
0000f3bc  bl       #0x461c4
0000f3c0  cbz      x0, #0xf40c
0000f3c4  adrp     x0, #0x54000
0000f3c8  add      x0, x0, #0xad3
0000f3cc  bl       #0x46380
0000f3d0  adrp     x2, #0x1f000
0000f3d4  add      x2, x2, #0x344
0000f3d8  adrp     x3, #0x70000
0000f3dc  add      x3, x3, #0xfe0
0000f3e0  mov      x1, x20
0000f3e4  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockViewController, translationFromFullyPresentedFrame, IMP=0x1f344)
0000f3e8  adrp     x0, #0x54000
0000f3ec  add      x0, x0, #0xa66
0000f3f0  bl       #0x46380
0000f3f4  adrp     x2, #0x1f000
0000f3f8  add      x2, x2, #0x39c
0000f3fc  adrp     x3, #0x70000
0000f400  add      x3, x3, #0xfe8
0000f404  mov      x1, x20
0000f408  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockController, translationFromFullyPresentedFrame, IMP=0x1f39c)
0000f40c  cbz      x24, #0xf4ec
0000f410  adrp     x8, #0x6e000
0000f414  ldr      x20, [x8, #0xcc8]
0000f418  mov      x0, x24
0000f41c  mov      x1, x20
0000f420  bl       #0x461c4
0000f424  cbz      x0, #0xf4ec
0000f428  adrp     x8, #0x6f000
0000f42c  ldr      x25, [x8, #0x230]
0000f430  mov      x0, x24
0000f434  mov      x1, x25
0000f438  bl       #0x461c4
0000f43c  cbz      x0, #0xf4ec
0000f440  adrp     x8, #0x6d000
0000f444  ldr      x26, [x8, #0xc48]
0000f448  mov      x0, x24
0000f44c  mov      x1, x26
0000f450  bl       #0x461c4
0000f454  cbz      x0, #0xf4ec
0000f458  adrp     x8, #0x6e000
0000f45c  ldr      x27, [x8, #0xe80]
0000f460  mov      x0, x24
0000f464  mov      x1, x27
0000f468  bl       #0x461c4
0000f46c  cbz      x0, #0xf4ec
0000f470  adrp     x0, #0x54000
0000f474  add      x0, x0, #0xaf0
0000f478  bl       #0x46380
0000f47c  mov      x24, x0
0000f480  adrp     x2, #0x1f000
0000f484  add      x2, x2, #0x3f4
0000f488  adrp     x3, #0x70000
0000f48c  add      x3, x3, #0xff0
0000f490  mov      x1, x20
0000f494  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockDefaults, recentsEnabled, IMP=0x1f3f4)
0000f498  adrp     x2, #0x1f000
0000f49c  add      x2, x2, #0x420
0000f4a0  adrp     x3, #0x70000
0000f4a4  add      x3, x3, #0xff8
0000f4a8  mov      x0, x24
0000f4ac  mov      x1, x25
0000f4b0  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockDefaults, setRecentsEnabled:, IMP=0x1f420)
0000f4b4  adrp     x2, #0x1f000
0000f4b8  add      x2, x2, #0x44c
0000f4bc  adrp     x3, #0x71000
0000f4c0  add      x3, x3, #0
0000f4c4  mov      x0, x24
0000f4c8  mov      x1, x26
0000f4cc  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockDefaults, appLibraryEnabled, IMP=0x1f44c)
0000f4d0  adrp     x2, #0x1f000
0000f4d4  add      x2, x2, #0x488
0000f4d8  adrp     x3, #0x71000
0000f4dc  add      x3, x3, #8
0000f4e0  mov      x0, x24
0000f4e4  mov      x1, x27
0000f4e8  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockDefaults, setAppLibraryEnabled:, IMP=0x1f488)
0000f4ec  cbz      x23, #0xf52c
0000f4f0  adrp     x8, #0x6f000
0000f4f4  ldr      x20, [x8, #0x6a8]
0000f4f8  mov      x0, x23
0000f4fc  mov      x1, x20
0000f500  bl       #0x461c4
0000f504  cbz      x0, #0xf52c
0000f508  adrp     x0, #0x54000
0000f50c  add      x0, x0, #0x3c8
0000f510  bl       #0x46380
0000f514  adrp     x2, #0x1f000
0000f518  add      x2, x2, #0x4c0
0000f51c  adrp     x3, #0x71000
0000f520  add      x3, x3, #0x10
0000f524  mov      x1, x20
0000f528  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockView, updateDividerVisualStyling, IMP=0x1f4c0)
0000f52c  cbz      x22, #0xf56c
0000f530  adrp     x8, #0x6e000
0000f534  ldr      x20, [x8, #0x9c8]
0000f538  mov      x0, x22
0000f53c  mov      x1, x20
0000f540  bl       #0x461c4
0000f544  cbz      x0, #0xf56c
0000f548  adrp     x0, #0x54000
0000f54c  add      x0, x0, #0x376
0000f550  bl       #0x46380
0000f554  adrp     x2, #0x1f000
0000f558  add      x2, x2, #0x4ec
0000f55c  adrp     x3, #0x71000
0000f560  add      x3, x3, #0x18
0000f564  mov      x1, x20
0000f568  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, maximumIconCount, IMP=0x1f4ec)
0000f56c  cbz      x19, #0xf670
0000f570  ldr      x8, [sp, #0x40]
0000f574  cbz      x8, #0xf670
0000f578  ldr      x8, [sp, #0x38]
0000f57c  cbz      x8, #0xf670
0000f580  adrp     x8, #0x6e000
0000f584  ldr      x23, [x8, #0x9c0]
0000f588  mov      x0, x19
0000f58c  mov      x1, x23
0000f590  bl       #0x461c4
0000f594  cbz      x0, #0xf674
0000f598  adrp     x8, #0x6e000
0000f59c  ldr      x24, [x8, #0xcb8]
0000f5a0  mov      x0, x19
0000f5a4  mov      x1, x24
0000f5a8  bl       #0x461c4
0000f5ac  cbz      x0, #0xf674
0000f5b0  adrp     x8, #0x6e000
0000f5b4  ldr      x22, [x8, #0x640]
0000f5b8  ldr      x0, [sp, #0x40]
0000f5bc  mov      x1, x22
0000f5c0  bl       #0x461c4
0000f5c4  cbz      x0, #0xf674
0000f5c8  adrp     x8, #0x6e000
0000f5cc  ldr      x20, [x8, #0x648]
0000f5d0  ldr      x0, [sp, #0x38]
0000f5d4  mov      x1, x20
0000f5d8  bl       #0x461c4
0000f5dc  cbz      x0, #0xf674
0000f5e0  adrp     x0, #0x54000
0000f5e4  add      x0, x0, #0xb07
0000f5e8  bl       #0x46380
0000f5ec  mov      x21, x0
0000f5f0  adrp     x2, #0x1f000
0000f5f4  add      x2, x2, #0x58c
0000f5f8  adrp     x3, #0x71000
0000f5fc  add      x3, x3, #0x20
0000f600  mov      x1, x23
0000f604  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsModel, maxSuggestions, IMP=0x1f58c)
0000f608  adrp     x2, #0x1f000
0000f60c  add      x2, x2, #0x5b0
0000f610  adrp     x3, #0x71000
0000f614  add      x3, x3, #0x28
0000f618  mov      x0, x21
0000f61c  mov      x1, x24
0000f620  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsModel, recentDisplayItemsController:shouldAddItem:, IMP=0x1f5b0)
0000f624  adrp     x0, #0x54000
0000f628  add      x0, x0, #0x3a0
0000f62c  bl       #0x46380
0000f630  adrp     x2, #0x1f000
0000f634  add      x2, x2, #0x6e4
0000f638  adrp     x3, #0x71000
0000f63c  add      x3, x3, #0x30
0000f640  mov      x1, x22
0000f644  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsViewController, initWithNumberOfRecents:iconController:applicationController:layoutStateTransitionCoordinator:suggestionsModel:iconViewProvider:, IMP=0x1f6e4)
0000f648  adrp     x0, #0x54000
0000f64c  add      x0, x0, #0xb26
0000f650  bl       #0x46380
0000f654  adrp     x2, #0x1f000
0000f658  add      x2, x2, #0x708
0000f65c  adrp     x3, #0x71000
0000f660  add      x3, x3, #0x38
0000f664  mov      x1, x20
0000f668  bl       #0x460a4   ; MSHookMessageEx(SBRecentDisplayItemsController, initWithRemovalPersonality:movePersonality:transitionFromSources:maxDisplayItems:eventSource:applicationController:, IMP=0x1f708)
0000f66c  b        #0xf674
0000f670  cbz      x19, #0xf6f0
0000f674  adrp     x8, #0x6e000
0000f678  ldr      x20, [x8, #0x610]
0000f67c  mov      x0, x19
0000f680  mov      x1, x20
0000f684  bl       #0x461c4
0000f688  cbz      x0, #0xf6b4
0000f68c  adrp     x0, #0x54000
0000f690  add      x0, x0, #0xb07
0000f694  bl       #0x46380
0000f698  adrp     x2, #0x1f000
0000f69c  add      x2, x2, #0x72c
0000f6a0  adrp     x3, #0x71000
0000f6a4  add      x3, x3, #0x40
0000f6a8  mov      x1, x20
0000f6ac  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsModel, initWithMaximumNumberOfSuggestions:iconController:recentsController:recentsDataStore:recentsDefaults:floatingDockDefaults:appSuggestionManager:analyticsClient:applicationController:, IMP=0x1f72c)
0000f6b0  b        #0xf6f0
0000f6b4  adrp     x8, #0x6e000
0000f6b8  ldr      x20, [x8, #0x618]
0000f6bc  mov      x0, x19
0000f6c0  mov      x1, x20
0000f6c4  bl       #0x461c4
0000f6c8  cbz      x0, #0xf6f0
0000f6cc  adrp     x0, #0x54000
0000f6d0  add      x0, x0, #0xb07
0000f6d4  bl       #0x46380
0000f6d8  adrp     x2, #0x1f000
0000f6dc  add      x2, x2, #0x760
0000f6e0  adrp     x3, #0x71000
0000f6e4  add      x3, x3, #0x48
0000f6e8  mov      x1, x20
0000f6ec  bl       #0x460a4   ; MSHookMessageEx(SBFloatingDockSuggestionsModel, initWithMaximumNumberOfSuggestions:iconController:recentsController:recentsDataStore:recentsDefaults:floatingDockDefaults:appSuggestionManager:applicationController:, IMP=0x1f760)
0000f6f0  adrp     x8, #0x70000
0000f6f4  ldrb     w8, [x8, #0x495]
0000f6f8  adrp     x26, #0x6f000
0000f6fc  adrp     x28, #0x6f000
0000f700  adrp     x27, #0x6f000
0000f704  cbz      w8, #0xf834
0000f708  adrp     x0, #0x54000
0000f70c  add      x0, x0, #0x7d0
0000f710  bl       #0x46380
0000f714  mov      x20, x0
0000f718  adrp     x8, #0x6f000
0000f71c  ldr      x19, [x8, #0x758]
0000f720  adrp     x2, #0x1f000
0000f724  add      x2, x2, #0x78c
0000f728  adrp     x3, #0x71000
0000f72c  add      x3, x3, #0x50
0000f730  mov      x1, x19
0000f734  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, viewDidAppear:, IMP=0x1f78c)
0000f738  adrp     x8, #0x6f000
0000f73c  ldr      x1, [x8, #0x768]
0000f740  adrp     x2, #0x1f000
0000f744  add      x2, x2, #0x81c
0000f748  adrp     x3, #0x71000
0000f74c  add      x3, x3, #0x58
0000f750  mov      x0, x20
0000f754  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, viewDidLayoutSubviews, IMP=0x1f81c)
0000f758  adrp     x8, #0x6f000
0000f75c  ldr      x1, [x8, #0x1c8]
0000f760  adrp     x2, #0x1f000
0000f764  add      x2, x2, #0x8ac
0000f768  adrp     x3, #0x71000
0000f76c  add      x3, x3, #0x60
0000f770  mov      x0, x20
0000f774  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:, IMP=0x1f8ac)
0000f778  adrp     x8, #0x6f000
0000f77c  ldr      x1, [x8, #0x1d0]
0000f780  adrp     x2, #0x1f000
0000f784  add      x2, x2, #0x8c0
0000f788  adrp     x3, #0x71000
0000f78c  add      x3, x3, #0x68
0000f790  mov      x0, x20
0000f794  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:completion:, IMP=0x1f8c0)
0000f798  adrp     x8, #0x6f000
0000f79c  ldr      x1, [x8, #0x1d8]
0000f7a0  adrp     x2, #0x1f000
0000f7a4  add      x2, x2, #0x8d4
0000f7a8  adrp     x3, #0x71000
0000f7ac  add      x3, x3, #0x70
0000f7b0  mov      x0, x20
0000f7b4  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:forceBiometricPresentation:completion:, IMP=0x1f8d4)
0000f7b8  adrp     x0, #0x54000
0000f7bc  add      x0, x0, #0xb45
0000f7c0  bl       #0x46380
0000f7c4  mov      x20, x0
0000f7c8  ldr      x1, [x26, #0x778]
0000f7cc  adrp     x2, #0x1f000
0000f7d0  add      x2, x2, #0x8e8
0000f7d4  adrp     x3, #0x71000
0000f7d8  add      x3, x3, #0x78
0000f7dc  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, viewWillAppear:, IMP=0x1f8e8)
0000f7e0  adrp     x2, #0x1f000
0000f7e4  add      x2, x2, #0x900
0000f7e8  adrp     x3, #0x71000
0000f7ec  add      x3, x3, #0x80
0000f7f0  mov      x0, x20
0000f7f4  mov      x1, x19
0000f7f8  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, viewDidAppear:, IMP=0x1f900)
0000f7fc  ldr      x1, [x28, #0x780]
0000f800  adrp     x2, #0x1f000
0000f804  add      x2, x2, #0x918
0000f808  adrp     x3, #0x71000
0000f80c  add      x3, x3, #0x88
0000f810  mov      x0, x20
0000f814  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, viewWillDisappear:, IMP=0x1f918)
0000f818  ldr      x1, [x27, #0x760]
0000f81c  adrp     x2, #0x1f000
0000f820  add      x2, x2, #0x92c
0000f824  adrp     x3, #0x71000
0000f828  add      x3, x3, #0x90
0000f82c  mov      x0, x20
0000f830  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, viewDidDisappear:, IMP=0x1f92c)
0000f834  adrp     x0, #0x65000
0000f838  add      x0, x0, #0x8c8
0000f83c  bl       #0x460b0
0000f840  cbz      x0, #0xfa24
0000f844  adrp     x0, #0x65000
0000f848  add      x0, x0, #0x8e8
0000f84c  bl       #0x460b0
0000f850  cbz      x0, #0xfa24
0000f854  adrp     x0, #0x65000
0000f858  add      x0, x0, #0x908
0000f85c  bl       #0x460b0
0000f860  cbz      x0, #0xfa24
0000f864  adrp     x0, #0x54000
0000f868  add      x0, x0, #0x82d
0000f86c  bl       #0x46380
0000f870  adrp     x8, #0x6e000
0000f874  ldr      x20, [x8, #0x558]
0000f878  adrp     x2, #0x1f000
0000f87c  add      x2, x2, #0x940
0000f880  adrp     x3, #0x71000
0000f884  add      x3, x3, #0x98
0000f888  mov      x1, x20
0000f88c  bl       #0x460a4   ; MSHookMessageEx(NCNotificationMasterList, init, IMP=0x1f940)
0000f890  adrp     x0, #0x54000
0000f894  add      x0, x0, #0x846
0000f898  bl       #0x46380
0000f89c  mov      x19, x0
0000f8a0  adrp     x2, #0x1f000
0000f8a4  add      x2, x2, #0x980
0000f8a8  adrp     x3, #0x71000
0000f8ac  add      x3, x3, #0xa0
0000f8b0  mov      x1, x20
0000f8b4  bl       #0x460a4   ; MSHookMessageEx(NCNotificationStructuredListViewController, init, IMP=0x1f980)
0000f8b8  adrp     x8, #0x6f000
0000f8bc  ldr      x1, [x8, #0x770]
0000f8c0  adrp     x2, #0x1f000
0000f8c4  add      x2, x2, #0x9ec
0000f8c8  adrp     x3, #0x71000
0000f8cc  add      x3, x3, #0xa8
0000f8d0  mov      x0, x19
0000f8d4  bl       #0x460a4   ; MSHookMessageEx(NCNotificationStructuredListViewController, viewDidLoad, IMP=0x1f9ec)
0000f8d8  adrp     x8, #0x6f000
0000f8dc  ldr      x1, [x8, #0x120]
0000f8e0  adrp     x2, #0x1f000
0000f8e4  add      x2, x2, #0xaa0
0000f8e8  adrp     x3, #0x71000
0000f8ec  add      x3, x3, #0xb0
0000f8f0  mov      x0, x19
0000f8f4  bl       #0x460a4   ; MSHookMessageEx(NCNotificationStructuredListViewController, setMasterList:, IMP=0x1faa0)
0000f8f8  adrp     x0, #0x54000
0000f8fc  add      x0, x0, #0x7d0
0000f900  bl       #0x46380
0000f904  mov      x20, x0
0000f908  adrp     x8, #0x6f000
0000f90c  ldr      x19, [x8, #0x758]
0000f910  adrp     x2, #0x1f000
0000f914  add      x2, x2, #0xb18
0000f918  adrp     x3, #0x71000
0000f91c  add      x3, x3, #0xb8
0000f920  mov      x1, x19
0000f924  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, viewDidAppear:, IMP=0x1fb18)
0000f928  adrp     x8, #0x6f000
0000f92c  ldr      x1, [x8, #0x768]
0000f930  adrp     x2, #0x1f000
0000f934  add      x2, x2, #0xba0
0000f938  adrp     x3, #0x71000
0000f93c  add      x3, x3, #0xc0
0000f940  mov      x0, x20
0000f944  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, viewDidLayoutSubviews, IMP=0x1fba0)
0000f948  adrp     x8, #0x6f000
0000f94c  ldr      x1, [x8, #0x1c8]
0000f950  adrp     x2, #0x1f000
0000f954  add      x2, x2, #0xc20
0000f958  adrp     x3, #0x71000
0000f95c  add      x3, x3, #0xc8
0000f960  mov      x0, x20
0000f964  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:, IMP=0x1fc20)
0000f968  adrp     x8, #0x6f000
0000f96c  ldr      x1, [x8, #0x1d0]
0000f970  adrp     x2, #0x1f000
0000f974  add      x2, x2, #0xc34
0000f978  adrp     x3, #0x71000
0000f97c  add      x3, x3, #0xd0
0000f980  mov      x0, x20
0000f984  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:completion:, IMP=0x1fc34)
0000f988  adrp     x8, #0x6f000
0000f98c  ldr      x1, [x8, #0x1d8]
0000f990  adrp     x2, #0x1f000
0000f994  add      x2, x2, #0xc48
0000f998  adrp     x3, #0x71000
0000f99c  add      x3, x3, #0xd8
0000f9a0  mov      x0, x20
0000f9a4  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetViewController, setPasscodeLockVisible:animated:forceBiometricPresentation:completion:, IMP=0x1fc48)
0000f9a8  adrp     x0, #0x54000
0000f9ac  add      x0, x0, #0xb45
0000f9b0  bl       #0x46380
0000f9b4  mov      x20, x0
0000f9b8  ldr      x1, [x26, #0x778]
0000f9bc  adrp     x2, #0x1f000
0000f9c0  add      x2, x2, #0xc5c
0000f9c4  adrp     x3, #0x71000
0000f9c8  add      x3, x3, #0xe0
0000f9cc  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, None, IMP=0x1fc5c)
0000f9d0  adrp     x2, #0x1f000
0000f9d4  add      x2, x2, #0xc74
0000f9d8  adrp     x3, #0x71000
0000f9dc  add      x3, x3, #0xe8
0000f9e0  mov      x0, x20
0000f9e4  mov      x1, x19
0000f9e8  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, viewDidAppear:, IMP=0x1fc74)
0000f9ec  ldr      x1, [x28, #0x780]
0000f9f0  adrp     x2, #0x1f000
0000f9f4  add      x2, x2, #0xc8c
0000f9f8  adrp     x3, #0x71000
0000f9fc  add      x3, x3, #0xf0
0000fa00  mov      x0, x20
0000fa04  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, None, IMP=0x1fc8c)
0000fa08  ldr      x1, [x27, #0x760]
0000fa0c  adrp     x2, #0x1f000
0000fa10  add      x2, x2, #0xca0
0000fa14  adrp     x3, #0x71000
0000fa18  add      x3, x3, #0xf8
0000fa1c  mov      x0, x20
0000fa20  bl       #0x460a4   ; MSHookMessageEx(CSPasscodeViewController, None, IMP=0x1fca0)
0000fa24  adrp     x0, #0x65000
0000fa28  add      x0, x0, #0xbc8
0000fa2c  bl       #0x460b0
0000fa30  cbz      x0, #0xfa5c
0000fa34  adrp     x0, #0x54000
0000fa38  add      x0, x0, #0xb5e
0000fa3c  bl       #0x46380
0000fa40  adrp     x8, #0x6d000
0000fa44  ldr      x1, [x8, #0x960]
0000fa48  adrp     x2, #0x1f000
0000fa4c  add      x2, x2, #0xcc4
0000fa50  adrp     x3, #0x71000
0000fa54  add      x3, x3, #0x100
0000fa58  bl       #0x460a4   ; MSHookMessageEx(SBFTapToWakeGestureRecognizer, _isTapEvent:, IMP=0x1fcc4)
0000fa5c  adrp     x8, #0x71000
0000fa60  ldrb     w8, [x8, #0x108]
0000fa64  cbz      w8, #0xfc3c
0000fa68  adrp     x0, #0x65000
0000fa6c  add      x0, x0, #0xbe8
0000fa70  bl       #0x460b0
0000fa74  mov      x19, x0
0000fa78  adrp     x0, #0x65000
0000fa7c  add      x0, x0, #0xc08
0000fa80  bl       #0x460b0
0000fa84  cbz      x19, #0xfc3c
0000fa88  mov      x25, x0
0000fa8c  cbz      x0, #0xfc3c
0000fa90  adrp     x8, #0x6d000
0000fa94  ldr      x24, [x8, #0x968]
0000fa98  mov      x0, x19
0000fa9c  mov      x1, x24
0000faa0  bl       #0x461c4
0000faa4  cbz      x0, #0xfc3c
0000faa8  adrp     x8, #0x6e000
0000faac  ldr      x19, [x8, #0x178]
0000fab0  mov      x0, x25
0000fab4  mov      x1, x19
0000fab8  bl       #0x461c4
0000fabc  cbz      x0, #0xfc3c
0000fac0  adrp     x8, #0x6e000
0000fac4  ldr      x20, [x8, #0x318]
0000fac8  mov      x0, x25
0000facc  mov      x1, x20
0000fad0  bl       #0x461c4
0000fad4  cbz      x0, #0xfc3c
0000fad8  adrp     x8, #0x6e000
0000fadc  ldr      x21, [x8, #0x310]
0000fae0  mov      x0, x25
0000fae4  mov      x1, x21
0000fae8  bl       #0x461c4
0000faec  cbz      x0, #0xfc3c
0000faf0  adrp     x8, #0x6e000
0000faf4  ldr      x22, [x8, #0x320]
0000faf8  mov      x0, x25
0000fafc  mov      x1, x22
0000fb00  bl       #0x461c4
0000fb04  cbz      x0, #0xfc3c
0000fb08  adrp     x8, #0x6e000
0000fb0c  ldr      x23, [x8, #0xfa8]
0000fb10  mov      x0, x25
0000fb14  mov      x1, x23
0000fb18  bl       #0x461c4
0000fb1c  cbz      x0, #0xfc3c
0000fb20  adrp     x0, #0x54000
0000fb24  add      x0, x0, #0xbb6
0000fb28  bl       #0x46380
0000fb2c  adrp     x8, #0x6f000
0000fb30  ldr      x1, [x8, #0x718]
0000fb34  adrp     x2, #0x1f000
0000fb38  add      x2, x2, #0xd30
0000fb3c  adrp     x3, #0x71000
0000fb40  add      x3, x3, #0x110
0000fb44  bl       #0x460a4   ; MSHookMessageEx(UIDevice, userInterfaceIdiom, IMP=0x1fd30)
0000fb48  adrp     x0, #0x54000
0000fb4c  add      x0, x0, #0xb7c
0000fb50  bl       #0x46380
0000fb54  adrp     x2, #0x1f000
0000fb58  add      x2, x2, #0xd80
0000fb5c  adrp     x3, #0x71000
0000fb60  add      x3, x3, #0x118
0000fb64  mov      x1, x24
0000fb68  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, _loadContentViewControllerIfNecessaryForWindowScene:, IMP=0x1fd80)
0000fb6c  adrp     x0, #0x54000
0000fb70  add      x0, x0, #0xba0
0000fb74  bl       #0x46380
0000fb78  mov      x24, x0
0000fb7c  adrp     x2, #0x1f000
0000fb80  add      x2, x2, #0xe30
0000fb84  adrp     x3, #0x71000
0000fb88  add      x3, x3, #0x120
0000fb8c  mov      x1, x19
0000fb90  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherSettings, effectiveSwitcherStyle, IMP=0x1fe30)
0000fb94  adrp     x2, #0x1f000
0000fb98  add      x2, x2, #0xe50
0000fb9c  adrp     x3, #0x71000
0000fba0  add      x3, x3, #0x128
0000fba4  mov      x0, x24
0000fba8  mov      x1, x20
0000fbac  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherSettings, gridSwitcherPageScale, IMP=0x1fe50)
0000fbb0  adrp     x2, #0x1f000
0000fbb4  add      x2, x2, #0xe8c
0000fbb8  adrp     x3, #0x71000
0000fbbc  add      x3, x3, #0x130
0000fbc0  mov      x0, x24
0000fbc4  mov      x1, x21
0000fbc8  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherSettings, gridSwitcherHorizontalInterpageSpacingPortrait, IMP=0x1fe8c)
0000fbcc  adrp     x2, #0x1f000
0000fbd0  add      x2, x2, #0xec8
0000fbd4  adrp     x3, #0x71000
0000fbd8  add      x3, x3, #0x138
0000fbdc  mov      x0, x24
0000fbe0  mov      x1, x22
0000fbe4  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherSettings, gridSwitcherVerticalNaturalSpacingPortrait, IMP=0x1fec8)
0000fbe8  adrp     x2, #0x1f000
0000fbec  add      x2, x2, #0xf04
0000fbf0  adrp     x3, #0x71000
0000fbf4  add      x3, x3, #0x140
0000fbf8  mov      x0, x24
0000fbfc  mov      x1, x23
0000fc00  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherSettings, setDefaultValues, IMP=0x1ff04)
0000fc04  adrp     x0, #0x65000
0000fc08  add      x0, x0, #0xc28
0000fc0c  bl       #0x460b0
0000fc10  cbz      x0, #0xfc3c
0000fc14  adrp     x0, #0x54000
0000fc18  add      x0, x0, #0xbbf
0000fc1c  bl       #0x46380
0000fc20  adrp     x8, #0x6e000
0000fc24  ldr      x1, [x8, #0xf0]
0000fc28  adrp     x2, #0x1f000
0000fc2c  add      x2, x2, #0xfac
0000fc30  adrp     x3, #0x71000
0000fc34  add      x3, x3, #0x148
0000fc38  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherIconImageContainerView, didMoveToWindow, IMP=0x1ffac)
0000fc3c  adrp     x0, #0x65000
0000fc40  add      x0, x0, #0xc48
0000fc44  bl       #0x460b0
0000fc48  cbz      x0, #0xfe00
0000fc4c  adrp     x0, #0x65000
0000fc50  add      x0, x0, #0x9a8
0000fc54  bl       #0x460b0
0000fc58  cbz      x0, #0xfe00
0000fc5c  adrp     x0, #0x54000
0000fc60  add      x0, x0, #0xbe5
0000fc64  bl       #0x46380
0000fc68  mov      x19, x0
0000fc6c  adrp     x8, #0x6e000
0000fc70  ldr      x1, [x8, #0xf0]
0000fc74  adrp     x2, #0x20000
0000fc78  add      x2, x2, #0x18
0000fc7c  adrp     x3, #0x71000
0000fc80  add      x3, x3, #0x150
0000fc84  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherScrollView, didMoveToWindow, IMP=0x20018)
0000fc88  adrp     x8, #0x6f000
0000fc8c  ldr      x1, [x8, #0x260]
0000fc90  adrp     x2, #0x20000
0000fc94  add      x2, x2, #0xa8
0000fc98  adrp     x3, #0x71000
0000fc9c  add      x3, x3, #0x158
0000fca0  mov      x0, x19
0000fca4  bl       #0x460a4   ; MSHookMessageEx(SBAppSwitcherScrollView, setScrollEnabled:, IMP=0x200a8)
0000fca8  adrp     x0, #0x54000
0000fcac  add      x0, x0, #0x949
0000fcb0  bl       #0x46380
0000fcb4  mov      x19, x0
0000fcb8  adrp     x8, #0x6f000
0000fcbc  ldr      x1, [x8, #0x770]
0000fcc0  adrp     x2, #0x20000
0000fcc4  add      x2, x2, #0x13c
0000fcc8  adrp     x3, #0x71000
0000fccc  add      x3, x3, #0x160
0000fcd0  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherViewController, viewDidLoad, IMP=0x2013c)
0000fcd4  ldr      x1, [x26, #0x778]
0000fcd8  adrp     x2, #0x20000
0000fcdc  add      x2, x2, #0x1a0
0000fce0  adrp     x3, #0x71000
0000fce4  add      x3, x3, #0x168
0000fce8  mov      x0, x19
0000fcec  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherViewController, None, IMP=0x201a0)
0000fcf0  ldr      x1, [x28, #0x780]
0000fcf4  adrp     x2, #0x20000
0000fcf8  add      x2, x2, #0x218
0000fcfc  adrp     x3, #0x71000
0000fd00  add      x3, x3, #0x170
0000fd04  mov      x0, x19
0000fd08  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherViewController, None, IMP=0x20218)
0000fd0c  ldr      x1, [x27, #0x760]
0000fd10  adrp     x2, #0x20000
0000fd14  add      x2, x2, #0x238
0000fd18  adrp     x3, #0x71000
0000fd1c  add      x3, x3, #0x178
0000fd20  mov      x0, x19
0000fd24  bl       #0x460a4   ; MSHookMessageEx(SBFluidSwitcherViewController, None, IMP=0x20238)
0000fd28  mov      w8, #0x4076
0000fd2c  movk     w8, #0x403a, lsl #16
0000fd30  str      w8, [sp, #0x290]
0000fd34  strb     wzr, [sp, #0x294]
0000fd38  adrp     x8, #0x6e000
0000fd3c  ldr      x1, [x8, #0xdb8]
0000fd40  adrp     x2, #0x20000
0000fd44  add      x2, x2, #0x26c
0000fd48  add      x3, sp, #0x290
0000fd4c  mov      x0, x19
0000fd50  bl       #0x461a0
0000fd54  adrp     x0, #0x54000
0000fd58  add      x0, x0, #0xb7c
0000fd5c  bl       #0x46380
0000fd60  mov      x19, x0
0000fd64  adrp     x8, #0x6e000
0000fd68  ldr      x1, [x8, #0x8b0]
0000fd6c  adrp     x2, #0x20000
0000fd70  add      x2, x2, #0x3c4
0000fd74  adrp     x3, #0x71000
0000fd78  add      x3, x3, #0x180
0000fd7c  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, layoutStateTransitionCoordinator:transitionDidBeginWithTransitionContext:, IMP=0x203c4)
0000fd80  adrp     x8, #0x6e000
0000fd84  ldr      x1, [x8, #0x8c0]
0000fd88  adrp     x2, #0x20000
0000fd8c  add      x2, x2, #0x3d0
0000fd90  adrp     x3, #0x71000
0000fd94  add      x3, x3, #0x188
0000fd98  mov      x0, x19
0000fd9c  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, layoutStateTransitionCoordinator:transitionWillEndWithTransitionContext:, IMP=0x203d0)
0000fda0  adrp     x8, #0x6e000
0000fda4  ldr      x1, [x8, #0x8b8]
0000fda8  adrp     x2, #0x20000
0000fdac  add      x2, x2, #0x498
0000fdb0  adrp     x3, #0x71000
0000fdb4  add      x3, x3, #0x190
0000fdb8  mov      x0, x19
0000fdbc  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, layoutStateTransitionCoordinator:transitionDidEndWithTransitionContext:, IMP=0x20498)
0000fdc0  adrp     x8, #0x6e000
0000fdc4  ldr      x1, [x8, #0x108]
0000fdc8  adrp     x2, #0x20000
0000fdcc  add      x2, x2, #0x560
0000fdd0  adrp     x3, #0x71000
0000fdd4  add      x3, x3, #0x198
0000fdd8  mov      x0, x19
0000fddc  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, dismissMainSwitcherNoninteractivelyAnimated:, IMP=0x20560)
0000fde0  adrp     x8, #0x6e000
0000fde4  ldr      x1, [x8, #0x100]
0000fde8  adrp     x2, #0x20000
0000fdec  add      x2, x2, #0x5a8
0000fdf0  adrp     x3, #0x71000
0000fdf4  add      x3, x3, #0x1a0
0000fdf8  mov      x0, x19
0000fdfc  bl       #0x460a4   ; MSHookMessageEx(SBMainSwitcherControllerCoordinator, dismissAllSwitchersNoninteractivelyAnimated:, IMP=0x205a8)
0000fe00  adrp     x8, #0x71000
0000fe04  ldrb     w8, [x8, #0x1a8]
0000fe08  cbz      w8, #0xfe64
0000fe0c  adrp     x0, #0x65000
0000fe10  add      x0, x0, #0xc68
0000fe14  bl       #0x460b0
0000fe18  cbz      x0, #0xfe64
0000fe1c  adrp     x19, #0x71000
0000fe20  ldr      x0, [x19, #0x930]
0000fe24  cbnz     x0, #0xfe38
0000fe28  adrp     x0, #0x54000
0000fe2c  add      x0, x0, #0xbfd
0000fe30  bl       #0x46380
0000fe34  str      x0, [x19, #0x930]
0000fe38  bl       #0x46410
0000fe3c  adrp     x0, #0x54000
0000fe40  add      x0, x0, #0xbfd
0000fe44  bl       #0x46380
0000fe48  adrp     x8, #0x6e000
0000fe4c  ldr      x1, [x8, #0x138]
0000fe50  adrp     x2, #0x20000
0000fe54  add      x2, x2, #0x5f0
0000fe58  adrp     x3, #0x71000
0000fe5c  add      x3, x3, #0x1b0
0000fe60  bl       #0x460a4   ; MSHookMessageEx(SBBootDefaults, dontLockAfterCrash, IMP=0x205f0)
0000fe64  adrp     x8, #0x71000
0000fe68  ldrb     w8, [x8, #0x1b8]
0000fe6c  cbz      w8, #0xfea8
0000fe70  adrp     x0, #0x65000
0000fe74  add      x0, x0, #0xc88
0000fe78  bl       #0x460b0
0000fe7c  cbz      x0, #0xfea8
0000fe80  adrp     x0, #0x54000
0000fe84  add      x0, x0, #0xc0c
0000fe88  bl       #0x46380
0000fe8c  adrp     x8, #0x6e000
0000fe90  ldr      x1, [x8, #0x4a0]
0000fe94  adrp     x2, #0x20000
0000fe98  add      x2, x2, #0x610
0000fe9c  adrp     x3, #0x71000
0000fea0  add      x3, x3, #0x1c0
0000fea4  bl       #0x460a4   ; MSHookMessageEx(CSCoverSheetTransitionSettings, iconsFlyIn, IMP=0x20610)
0000fea8  adrp     x8, #0x71000
0000feac  ldrb     w8, [x8, #0x1c8]
0000feb0  cbz      w8, #0xfeec
0000feb4  adrp     x0, #0x65000
0000feb8  add      x0, x0, #0xca8
0000febc  bl       #0x460b0
0000fec0  cbz      x0, #0xfeec
0000fec4  adrp     x0, #0x54000
0000fec8  add      x0, x0, #0xc2b
0000fecc  bl       #0x46380
0000fed0  adrp     x8, #0x6e000
0000fed4  ldr      x1, [x8, #0xfa8]
0000fed8  adrp     x2, #0x20000
0000fedc  add      x2, x2, #0x630
0000fee0  adrp     x3, #0x71000
0000fee4  add      x3, x3, #0x1d0
0000fee8  bl       #0x460a4   ; MSHookMessageEx(SBHUnlockSettings, setDefaultValues, IMP=0x20630)
0000feec  adrp     x0, #0x54000
0000fef0  add      x0, x0, #0xc3d
0000fef4  mov      w1, #2
0000fef8  bl       #0x4623c
0000fefc  adrp     x0, #0x65000
0000ff00  add      x0, x0, #0xcc8
0000ff04  bl       #0x460b0
0000ff08  cbz      x0, #0xff70
0000ff0c  adrp     x0, #0x65000
0000ff10  add      x0, x0, #0xce8
0000ff14  bl       #0x460b0
0000ff18  cbz      x0, #0xff70
0000ff1c  adrp     x0, #0x54000
0000ff20  add      x0, x0, #0xc8f
0000ff24  bl       #0x46380
0000ff28  bl       #0x4647c
0000ff2c  adrp     x8, #0x6e000
0000ff30  ldr      x1, [x8, #0xb60]
0000ff34  adrp     x2, #0x20000
0000ff38  add      x2, x2, #0x6c0
0000ff3c  adrp     x3, #0x71000
0000ff40  add      x3, x3, #0x1d8
0000ff44  bl       #0x460a4   ; MSHookMessageEx(None, playScreenshotSound, IMP=0x206c0)
0000ff48  adrp     x0, #0x54000
0000ff4c  add      x0, x0, #0xca0
0000ff50  bl       #0x46380
0000ff54  adrp     x8, #0x6e000
0000ff58  ldr      x1, [x8, #0xe28]
0000ff5c  adrp     x2, #0x20000
0000ff60  add      x2, x2, #0x6ec
0000ff64  adrp     x3, #0x71000
0000ff68  add      x3, x3, #0x1e0
0000ff6c  bl       #0x460a4   ; MSHookMessageEx(SSDittoRemoteConnection, sendDittoProcessEnvironmentDescription:completion:, IMP=0x206ec)
0000ff70  ldr      w8, [sp, #0x80]
0000ff74  cbz      w8, #0x10114
0000ff78  adrp     x0, #0x65000
0000ff7c  add      x0, x0, #0xd08
0000ff80  bl       #0x460b0
0000ff84  cbz      x0, #0x10114
0000ff88  adrp     x0, #0x65000
0000ff8c  add      x0, x0, #0xd28
0000ff90  bl       #0x460b0
0000ff94  cbz      x0, #0x10114
0000ff98  adrp     x8, #0x6f000
0000ff9c  ldr      x0, [x8, #0x8b0]
0000ffa0  bl       #0x492e0
0000ffa4  mov      x29, x29
0000ffa8  bl       #0x46428
0000ffac  adrp     x9, #0x70000
0000ffb0  ldr      x8, [x9, #0x448]
0000ffb4  str      x0, [x9, #0x448]
0000ffb8  mov      x0, x8
0000ffbc  bl       #0x463f8
0000ffc0  adrp     x0, #0x54000
0000ffc4  add      x0, x0, #0xcb8
0000ffc8  bl       #0x46380
0000ffcc  mov      x19, x0
0000ffd0  adrp     x8, #0x6d000
0000ffd4  ldr      x1, [x8, #0xdf8]
0000ffd8  adrp     x2, #0x20000
0000ffdc  add      x2, x2, #0x7d8
0000ffe0  adrp     x3, #0x71000
0000ffe4  add      x3, x3, #0x1e8
0000ffe8  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarIndicatorQuietModeItem, canEnableDisplayItem:fromData:, IMP=0x207d8)
0000ffec  adrp     x8, #0x6f000
0000fff0  ldr      x1, [x8, #0x598]
0000fff4  adrp     x2, #0x20000
0000fff8  add      x2, x2, #0x87c
0000fffc  adrp     x3, #0x71000
00010000  add      x3, x3, #0x1f0
00010004  mov      x0, x19
00010008  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarIndicatorQuietModeItem, systemImageNameForUpdate:, IMP=0x2087c)
0001000c  adrp     x0, #0x54000
00010010  add      x0, x0, #0xcec
00010014  bl       #0x46380
00010018  adrp     x8, #0x6e000
0001001c  ldr      x1, [x8, #0x560]
00010020  adrp     x2, #0x20000
00010024  add      x2, x2, #0xa28
00010028  adrp     x3, #0x71000
0001002c  add      x3, x3, #0x1f8
00010030  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarDataQuietModeEntry, initFromData:type:focusName:maxFocusLength:imageName:maxImageLength:boolValue:, IMP=0x20a28)
00010034  adrp     x0, #0x54000
00010038  add      x0, x0, #0xd0b
0001003c  bl       #0x46380
00010040  mov      x19, x0
00010044  adrp     x8, #0x6e000
00010048  ldr      x1, [x8, #0x568]
0001004c  adrp     x2, #0x20000
00010050  add      x2, x2, #0xbc8
00010054  adrp     x3, #0x71000
00010058  add      x3, x3, #0x200
0001005c  bl       #0x460a4   ; MSHookMessageEx(SBRingerControl, initWithBannerManager:soundController:, IMP=0x20bc8)
00010060  adrp     x8, #0x6e000
00010064  ldr      x1, [x8, #0x5e0]
00010068  adrp     x2, #0x20000
0001006c  add      x2, x2, #0xccc
00010070  adrp     x3, #0x71000
00010074  add      x3, x3, #0x208
00010078  mov      x0, x19
0001007c  bl       #0x460a4   ; MSHookMessageEx(SBRingerControl, initWithHUDController:soundController:, IMP=0x20ccc)
00010080  adrp     x8, #0x6f000
00010084  ldr      x1, [x8, #0x248]
00010088  adrp     x2, #0x20000
0001008c  add      x2, x2, #0xdd0
00010090  adrp     x3, #0x71000
00010094  add      x3, x3, #0x210
00010098  mov      x0, x19
0001009c  bl       #0x460a4   ; MSHookMessageEx(SBRingerControl, setRingerMuted:, IMP=0x20dd0)
000100a0  adrp     x8, #0x6f000
000100a4  ldr      x1, [x8, #0x250]
000100a8  adrp     x2, #0x20000
000100ac  add      x2, x2, #0xe14
000100b0  adrp     x3, #0x71000
000100b4  add      x3, x3, #0x218
000100b8  mov      x0, x19
000100bc  bl       #0x460a4   ; MSHookMessageEx(SBRingerControl, setRingerMuted:withFeedback:reason:clientType:, IMP=0x20e14)
000100c0  adrp     x0, #0x54000
000100c4  add      x0, x0, #0xcdb
000100c8  bl       #0x46380
000100cc  mov      x19, x0
000100d0  adrp     x8, #0x6d000
000100d4  ldr      x1, [x8, #0x950]
000100d8  adrp     x2, #0x20000
000100dc  add      x2, x2, #0xe58
000100e0  adrp     x3, #0x71000
000100e4  add      x3, x3, #0x220
000100e8  bl       #0x460a4   ; MSHookMessageEx(UIStatusBar_Base, _initWithFrame:showForegroundView:wantsServer:inProcessStateProvider:, IMP=0x20e58)
000100ec  mov      w8, #0x4076
000100f0  movk     w8, #0x3a, lsl #16
000100f4  str      w8, [sp, #0x290]
000100f8  adrp     x8, #0x6e000
000100fc  ldr      x1, [x8, #0xdb0]
00010100  adrp     x2, #0x20000
00010104  add      x2, x2, #0xeec
00010108  add      x3, sp, #0x290
0001010c  mov      x0, x19
00010110  bl       #0x461a0
00010114  mov      w0, #2
00010118  mov      w1, #0x11
0001011c  mov      w2, #0
00010120  mov      w3, #0
00010124  bl       #0x45a7c
00010128  cbz      w0, #0x1037c
0001012c  adrp     x0, #0x54000
00010130  add      x0, x0, #0xd1b
00010134  mov      w1, #2
00010138  bl       #0x4623c
0001013c  adrp     x0, #0x54000
00010140  add      x0, x0, #0xd61
00010144  mov      w1, #2
00010148  bl       #0x4623c
0001014c  adrp     x0, #0x65000
00010150  add      x0, x0, #0xd48
00010154  bl       #0x460b0
00010158  cbz      x0, #0x102e4
0001015c  adrp     x0, #0x65000
00010160  add      x0, x0, #0xd68
00010164  bl       #0x460b0
00010168  cbz      x0, #0x102e4
0001016c  adrp     x0, #0x54000
00010170  add      x0, x0, #0xdab
00010174  bl       #0x46380
00010178  mov      x19, x0
0001017c  adrp     x8, #0x6d000
00010180  ldr      x1, [x8, #0xaf0]
00010184  adrp     x2, #0x20000
00010188  add      x2, x2, #0xf6c
0001018c  adrp     x3, #0x71000
00010190  add      x3, x3, #0x228
00010194  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBar, _updateWithAggregatedData:, IMP=0x20f6c)
00010198  adrp     x8, #0x6d000
0001019c  ldr      x1, [x8, #0xaf8]
000101a0  adrp     x2, #0x21000
000101a4  add      x2, x2, #0x78
000101a8  adrp     x3, #0x71000
000101ac  add      x3, x3, #0x230
000101b0  mov      x0, x19
000101b4  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBar, _updateWithData:completionHandler:, IMP=0x21078)
000101b8  adrp     x0, #0x54000
000101bc  add      x0, x0, #0xdb9
000101c0  bl       #0x46380
000101c4  mov      x19, x0
000101c8  adrp     x8, #0x6d000
000101cc  ldr      x1, [x8, #0xdf8]
000101d0  adrp     x2, #0x21000
000101d4  add      x2, x2, #0x1b0
000101d8  adrp     x3, #0x71000
000101dc  add      x3, x3, #0x238
000101e0  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarIndicatorQuietModeItem, canEnableDisplayItem:fromData:, IMP=0x211b0)
000101e4  adrp     x8, #0x6f000
000101e8  ldr      x1, [x8, #0x598]
000101ec  adrp     x2, #0x21000
000101f0  add      x2, x2, #0x254
000101f4  adrp     x3, #0x71000
000101f8  add      x3, x3, #0x240
000101fc  mov      x0, x19
00010200  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarIndicatorQuietModeItem, systemImageNameForUpdate:, IMP=0x21254)
00010204  adrp     x0, #0x54000
00010208  add      x0, x0, #0xddd
0001020c  bl       #0x46380
00010210  adrp     x8, #0x6f000
00010214  ldr      x1, [x8, #0x338]
00010218  adrp     x2, #0x21000
0001021c  add      x2, x2, #0x41c
00010220  adrp     x3, #0x71000
00010224  add      x3, x3, #0x248
00010228  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarCellularNetworkTypeView, setText:prefixLength:withStyleAttributes:forType:animated:, IMP=0x2141c)
0001022c  adrp     x0, #0x54000
00010230  add      x0, x0, #0xe02
00010234  bl       #0x46380
00010238  mov      x20, x0
0001023c  adrp     x8, #0x6d000
00010240  ldr      x19, [x8, #0xcb8]
00010244  adrp     x2, #0x21000
00010248  add      x2, x2, #0x608
0001024c  adrp     x3, #0x71000
00010250  add      x3, x3, #0x250
00010254  mov      x1, x19
00010258  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, applyStyleAttributes:, IMP=0x21608)
0001025c  adrp     x8, #0x6f000
00010260  ldr      x1, [x8, #0x330]
00010264  adrp     x2, #0x21000
00010268  add      x2, x2, #0x7a0
0001026c  adrp     x3, #0x71000
00010270  add      x3, x3, #0x258
00010274  mov      x0, x20
00010278  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, setText:, IMP=0x217a0)
0001027c  adrp     x0, #0x54000
00010280  add      x0, x0, #0xe1a
00010284  bl       #0x46380
00010288  mov      x20, x0
0001028c  adrp     x8, #0x6e000
00010290  ldr      x1, [x8, #0xe58]
00010294  adrp     x2, #0x21000
00010298  add      x2, x2, #0x88c
0001029c  adrp     x3, #0x71000
000102a0  add      x3, x3, #0x260
000102a4  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarWifiSignalView, setActiveColor:, IMP=0x2188c)
000102a8  adrp     x8, #0x6f000
000102ac  ldr      x1, [x8, #0xc0]
000102b0  adrp     x2, #0x21000
000102b4  add      x2, x2, #0x954
000102b8  adrp     x3, #0x71000
000102bc  add      x3, x3, #0x268
000102c0  mov      x0, x20
000102c4  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarWifiSignalView, setInactiveColor:, IMP=0x21954)
000102c8  adrp     x2, #0x21000
000102cc  add      x2, x2, #0xa54
000102d0  adrp     x3, #0x71000
000102d4  add      x3, x3, #0x270
000102d8  mov      x0, x20
000102dc  mov      x1, x19
000102e0  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarWifiSignalView, applyStyleAttributes:, IMP=0x21a54)
000102e4  adrp     x0, #0x65000
000102e8  add      x0, x0, #0xd88
000102ec  bl       #0x460b0
000102f0  cbz      x0, #0x104d0
000102f4  adrp     x0, #0x65000
000102f8  add      x0, x0, #0xda8
000102fc  bl       #0x460b0
00010300  cbz      x0, #0x104d0
00010304  adrp     x0, #0x54000
00010308  add      x0, x0, #0xddd
0001030c  bl       #0x46380
00010310  adrp     x8, #0x6f000
00010314  ldr      x1, [x8, #0x338]
00010318  adrp     x2, #0x21000
0001031c  add      x2, x2, #0xb58
00010320  adrp     x3, #0x71000
00010324  add      x3, x3, #0x278
00010328  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarCellularNetworkTypeView, setText:prefixLength:withStyleAttributes:forType:animated:, IMP=0x21b58)
0001032c  adrp     x0, #0x54000
00010330  add      x0, x0, #0xe02
00010334  bl       #0x46380
00010338  mov      x19, x0
0001033c  adrp     x8, #0x6d000
00010340  ldr      x1, [x8, #0xcb8]
00010344  adrp     x2, #0x21000
00010348  add      x2, x2, #0xdf8
0001034c  adrp     x3, #0x71000
00010350  add      x3, x3, #0x280
00010354  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, applyStyleAttributes:, IMP=0x21df8)
00010358  adrp     x8, #0x6f000
0001035c  ldr      x1, [x8, #0x330]
00010360  adrp     x2, #0x21000
00010364  add      x2, x2, #0xe64
00010368  adrp     x3, #0x71000
0001036c  add      x3, x3, #0x288
00010370  mov      x0, x19
00010374  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, setText:, IMP=0x21e64)
00010378  b        #0x104d0
0001037c  adrp     x0, #0x65000
00010380  add      x0, x0, #0xdc8
00010384  bl       #0x460b0
00010388  cbnz     x0, #0x1039c
0001038c  adrp     x0, #0x65000
00010390  add      x0, x0, #0xde8
00010394  bl       #0x460b0
00010398  cbz      x0, #0x104d0
0001039c  adrp     x0, #0x54000
000103a0  add      x0, x0, #0xe64
000103a4  bl       #0x46380
000103a8  mov      x19, x0
000103ac  adrp     x8, #0x6d000
000103b0  ldr      x1, [x8, #0xaf0]
000103b4  adrp     x2, #0x21000
000103b8  add      x2, x2, #0xed0
000103bc  adrp     x3, #0x71000
000103c0  add      x3, x3, #0x290
000103c4  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBar, _updateWithAggregatedData:, IMP=0x21ed0)
000103c8  adrp     x8, #0x6d000
000103cc  ldr      x1, [x8, #0xaf8]
000103d0  adrp     x2, #0x21000
000103d4  add      x2, x2, #0xfe0
000103d8  adrp     x3, #0x71000
000103dc  add      x3, x3, #0x298
000103e0  mov      x0, x19
000103e4  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBar, _updateWithData:completionHandler:, IMP=0x21fe0)
000103e8  adrp     x0, #0x54000
000103ec  add      x0, x0, #0xe36
000103f0  bl       #0x46380
000103f4  mov      x20, x0
000103f8  adrp     x8, #0x6d000
000103fc  ldr      x1, [x8, #0x900]
00010400  adrp     x2, #0x22000
00010404  add      x2, x2, #0x11c
00010408  adrp     x3, #0x71000
0001040c  add      x3, x3, #0x2a0
00010410  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarWifiItem, _fillColorForUpdate:entry:, IMP=0x2211c)
00010414  adrp     x8, #0x6d000
00010418  ldr      x19, [x8, #0xcc0]
0001041c  adrp     x2, #0x22000
00010420  add      x2, x2, #0x1fc
00010424  adrp     x3, #0x71000
00010428  add      x3, x3, #0x2a8
0001042c  mov      x0, x20
00010430  mov      x1, x19
00010434  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarWifiItem, applyUpdate:toDisplayItem:, IMP=0x221fc)
00010438  adrp     x0, #0x54000
0001043c  add      x0, x0, #0xe4b
00010440  bl       #0x46380
00010444  adrp     x2, #0x22000
00010448  add      x2, x2, #0x638
0001044c  adrp     x3, #0x71000
00010450  add      x3, x3, #0x2b0
00010454  mov      x1, x19
00010458  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarCellularItem, applyUpdate:toDisplayItem:, IMP=0x22638)
0001045c  adrp     x0, #0x54000
00010460  add      x0, x0, #0xe71
00010464  bl       #0x46380
00010468  mov      x20, x0
0001046c  adrp     x8, #0x6d000
00010470  ldr      x19, [x8, #0xcb8]
00010474  adrp     x2, #0x22000
00010478  add      x2, x2, #0x9bc
0001047c  adrp     x3, #0x71000
00010480  add      x3, x3, #0x2b8
00010484  mov      x1, x19
00010488  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarCellularNetworkTypeView, applyStyleAttributes:, IMP=0x229bc)
0001048c  adrp     x8, #0x6f000
00010490  ldr      x1, [x8, #0x338]
00010494  adrp     x2, #0x22000
00010498  add      x2, x2, #0xac4
0001049c  adrp     x3, #0x71000
000104a0  add      x3, x3, #0x2c0
000104a4  mov      x0, x20
000104a8  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarCellularNetworkTypeView, setText:prefixLength:withStyleAttributes:forType:animated:, IMP=0x22ac4)
000104ac  adrp     x0, #0x54000
000104b0  add      x0, x0, #0xe95
000104b4  bl       #0x46380
000104b8  adrp     x2, #0x22000
000104bc  add      x2, x2, #0xc18
000104c0  adrp     x3, #0x71000
000104c4  add      x3, x3, #0x2c8
000104c8  mov      x1, x19
000104cc  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarStringView, applyStyleAttributes:, IMP=0x22c18)
000104d0  adrp     x8, #0x71000
000104d4  ldrb     w8, [x8, #0x2d0]
000104d8  cbz      w8, #0x10580
000104dc  adrp     x0, #0x65000
000104e0  add      x0, x0, #0xe08
000104e4  bl       #0x460b0
000104e8  cbz      x0, #0x10538
000104ec  adrp     x0, #0x54000
000104f0  add      x0, x0, #0xeac
000104f4  bl       #0x46380
000104f8  mov      x19, x0
000104fc  adrp     x8, #0x6e000
00010500  ldr      x1, [x8, #0x4e0]
00010504  adrp     x2, #0x22000
00010508  add      x2, x2, #0xd20
0001050c  adrp     x3, #0x71000
00010510  add      x3, x3, #0x2d8
00010514  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarIndicatorVPNItem, imageNameForUpdate:, IMP=0x22d20)
00010518  adrp     x8, #0x6f000
0001051c  ldr      x1, [x8, #0x598]
00010520  adrp     x2, #0x22000
00010524  add      x2, x2, #0xdac
00010528  adrp     x3, #0x71000
0001052c  add      x3, x3, #0x2e0
00010530  mov      x0, x19
00010534  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarIndicatorVPNItem, systemImageNameForUpdate:, IMP=0x22dac)
00010538  adrp     x0, #0x54000
0001053c  add      x0, x0, #0xd61
00010540  mov      w1, #2
00010544  bl       #0x4623c
00010548  adrp     x0, #0x65000
0001054c  add      x0, x0, #0xe28
00010550  bl       #0x460b0
00010554  cbz      x0, #0x10580
00010558  adrp     x0, #0x54000
0001055c  add      x0, x0, #0xec9
00010560  bl       #0x46380
00010564  adrp     x8, #0x6d000
00010568  ldr      x1, [x8, #0xdf8]
0001056c  adrp     x2, #0x22000
00010570  add      x2, x2, #0xe38
00010574  adrp     x3, #0x71000
00010578  add      x3, x3, #0x2e8
0001057c  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarItem, canEnableDisplayItem:fromData:, IMP=0x22e38)
00010580  adrp     x8, #0x71000
00010584  ldrb     w8, [x8, #0x2f0]
00010588  cbz      w8, #0x1069c
0001058c  adrp     x0, #0x54000
00010590  add      x0, x0, #0xedb
00010594  mov      w1, #2
00010598  bl       #0x4623c
0001059c  adrp     x0, #0x65000
000105a0  add      x0, x0, #0xe48
000105a4  bl       #0x460b0
000105a8  cbz      x0, #0x105d4
000105ac  adrp     x0, #0x54000
000105b0  add      x0, x0, #0xf27
000105b4  bl       #0x46380
000105b8  adrp     x8, #0x6f000
000105bc  ldr      x1, [x8, #0xc8]
000105c0  adrp     x2, #0x23000
000105c4  add      x2, x2, #0x2c8
000105c8  adrp     x3, #0x71000
000105cc  add      x3, x3, #0x2f8
000105d0  bl       #0x460a4   ; MSHookMessageEx(SBRecordingIndicatorViewController, setIndicatorColor:, IMP=0x232c8)
000105d4  adrp     x0, #0x65000
000105d8  add      x0, x0, #0xe68
000105dc  bl       #0x460b0
000105e0  cbz      x0, #0x1060c
000105e4  adrp     x0, #0x54000
000105e8  add      x0, x0, #0xf4a
000105ec  bl       #0x46380
000105f0  adrp     x8, #0x6f000
000105f4  ldr      x1, [x8, #0x700]
000105f8  adrp     x2, #0x23000
000105fc  add      x2, x2, #0x380
00010600  adrp     x3, #0x71000
00010604  add      x3, x3, #0x300
00010608  bl       #0x460a4   ; MSHookMessageEx(SBSensorActivityAttribution, usedRecently, IMP=0x23380)
0001060c  adrp     x0, #0x65000
00010610  add      x0, x0, #0xe88
00010614  bl       #0x460b0
00010618  adrp     x20, #0x6e000
0001061c  cbz      x0, #0x10668
00010620  adrp     x0, #0x54000
00010624  add      x0, x0, #0xf66
00010628  bl       #0x46380
0001062c  mov      x19, x0
00010630  ldr      x1, [x20, #0x730]
00010634  adrp     x2, #0x23000
00010638  add      x2, x2, #0x3a0
0001063c  adrp     x3, #0x71000
00010640  add      x3, x3, #0x308
00010644  bl       #0x460a4   ; MSHookMessageEx(CCUISensorAttributionCompactControl, isDisplayingSensorStatus, IMP=0x233a0)
00010648  adrp     x8, #0x6e000
0001064c  ldr      x1, [x8, #0x8c8]
00010650  adrp     x2, #0x23000
00010654  add      x2, x2, #0x3c0
00010658  adrp     x3, #0x71000
0001065c  add      x3, x3, #0x310
00010660  mov      x0, x19
00010664  bl       #0x460a4   ; MSHookMessageEx(CCUISensorAttributionCompactControl, layoutSubviews, IMP=0x233c0)
00010668  adrp     x0, #0x65000
0001066c  add      x0, x0, #0xea8
00010670  bl       #0x460b0
00010674  cbz      x0, #0x1069c
00010678  adrp     x0, #0x54000
0001067c  add      x0, x0, #0xf8a
00010680  bl       #0x46380
00010684  ldr      x1, [x20, #0x730]
00010688  adrp     x2, #0x23000
0001068c  add      x2, x2, #0x408
00010690  adrp     x3, #0x71000
00010694  add      x3, x3, #0x318
00010698  bl       #0x460a4   ; MSHookMessageEx(CCUIHeaderPocketView, isDisplayingSensorStatus, IMP=0x23408)
0001069c  adrp     x8, #0x71000
000106a0  ldrb     w8, [x8, #0x320]
000106a4  cbz      w8, #0x10740
000106a8  adrp     x0, #0x65000
000106ac  add      x0, x0, #0xec8
000106b0  bl       #0x460b0
000106b4  cbz      x0, #0x106e0
000106b8  adrp     x0, #0x54000
000106bc  add      x0, x0, #0xf9f
000106c0  bl       #0x46380
000106c4  adrp     x8, #0x6d000
000106c8  ldr      x1, [x8, #0xdf8]
000106cc  adrp     x2, #0x23000
000106d0  add      x2, x2, #0x428
000106d4  adrp     x3, #0x71000
000106d8  add      x3, x3, #0x328
000106dc  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarIndicatorLocationItem, canEnableDisplayItem:fromData:, IMP=0x23428)
000106e0  mov      w0, #2
000106e4  mov      w1, #0x11
000106e8  mov      w2, #0
000106ec  mov      w3, #0
000106f0  bl       #0x45a7c
000106f4  cbz      w0, #0x10740
000106f8  adrp     x0, #0x54000
000106fc  add      x0, x0, #0xd61
00010700  mov      w1, #2
00010704  bl       #0x4623c
00010708  adrp     x0, #0x65000
0001070c  add      x0, x0, #0xee8
00010710  bl       #0x460b0
00010714  cbz      x0, #0x10740
00010718  adrp     x0, #0x54000
0001071c  add      x0, x0, #0xfc1
00010720  bl       #0x46380
00010724  adrp     x8, #0x6d000
00010728  ldr      x1, [x8, #0xdf8]
0001072c  adrp     x2, #0x23000
00010730  add      x2, x2, #0x4d0
00010734  adrp     x3, #0x71000
00010738  add      x3, x3, #0x330
0001073c  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarIndicatorLocationItem, canEnableDisplayItem:fromData:, IMP=0x234d0)
00010740  adrp     x8, #0x71000
00010744  ldrb     w8, [x8, #0x338]
00010748  cbz      w8, #0x10788
0001074c  adrp     x0, #0x65000
00010750  add      x0, x0, #0xf08
00010754  bl       #0x460b0
00010758  cbz      x0, #0x10788
0001075c  adrp     x0, #0x54000
00010760  add      x0, x0, #0xfe4
00010764  bl       #0x46380
00010768  bl       #0x4647c
0001076c  adrp     x8, #0x6d000
00010770  ldr      x1, [x8, #0x9d8]
00010774  adrp     x2, #0x23000
00010778  add      x2, x2, #0x578
0001077c  adrp     x3, #0x71000
00010780  add      x3, x3, #0x340
00010784  bl       #0x460a4   ; MSHookMessageEx(None, _shouldAddBreadcrumbToActivatingSceneEntity:sceneHandle:withTransitionContext:, IMP=0x23578)
00010788  adrp     x8, #0x71000
0001078c  ldrb     w8, [x8, #0x348]
00010790  cbz      w8, #0x10800
00010794  adrp     x0, #0x55000
00010798  add      x0, x0, #0x18
0001079c  bl       #0x46380
000107a0  mov      x19, x0
000107a4  adrp     x8, #0x6d000
000107a8  ldr      x1, [x8, #0xb60]
000107ac  adrp     x2, #0x23000
000107b0  add      x2, x2, #0x64c
000107b4  adrp     x3, #0x71000
000107b8  add      x3, x3, #0x350
000107bc  bl       #0x460a4   ; MSHookMessageEx(UIContextMenuInteraction, activationStyleForClickPresentationInteraction:, IMP=0x2364c)
000107c0  adrp     x8, #0x6d000
000107c4  ldr      x1, [x8, #0x8a0]
000107c8  adrp     x2, #0x23000
000107cc  add      x2, x2, #0x724
000107d0  adrp     x3, #0x71000
000107d4  add      x3, x3, #0x358
000107d8  mov      x0, x19
000107dc  bl       #0x460a4   ; MSHookMessageEx(UIContextMenuInteraction, _clickPresentationInteractionEnded:forPresentation:reason:, IMP=0x23724)
000107e0  adrp     x8, #0x6d000
000107e4  ldr      x1, [x8, #0x998]
000107e8  adrp     x2, #0x23000
000107ec  add      x2, x2, #0x860
000107f0  adrp     x3, #0x71000
000107f4  add      x3, x3, #0x360
000107f8  mov      x0, x19
000107fc  bl       #0x460a4   ; MSHookMessageEx(UIContextMenuInteraction, _performCleanupForConfigurationWithIdentifier:, IMP=0x23860)
00010800  adrp     x0, #0x55000
00010804  add      x0, x0, #0x31
00010808  mov      w1, #2
0001080c  bl       #0x4623c
00010810  adrp     x0, #0x65000
00010814  add      x0, x0, #0xf28
00010818  bl       #0x460b0
0001081c  mov      x20, x0
00010820  adrp     x8, #0x6f000
00010824  ldr      x0, [x8, #0x8b8]
00010828  bl       #0x48d20
0001082c  mov      x29, x29
00010830  bl       #0x46428
00010834  mov      x19, x0
00010838  cbz      x0, #0x10850
0001083c  add      x8, sp, #0x290
00010840  mov      x0, x19
00010844  bl       #0x48a40
00010848  ldr      x21, [sp, #0x290]
0001084c  b        #0x10860
00010850  mov      x21, #0
00010854  str      xzr, [sp, #0x298]
00010858  str      xzr, [sp, #0x290]
0001085c  str      xzr, [sp, #0x2a0]
00010860  mov      x0, x19
00010864  bl       #0x463f8
00010868  cbz      x20, #0x109bc
0001086c  adrp     x8, #0x6e000
00010870  ldr      x19, [x8, #0x8c8]
00010874  mov      x0, x20
00010878  mov      x1, x19
0001087c  bl       #0x461c4
00010880  cbz      x0, #0x109bc
00010884  sub      x8, x21, #0xf
00010888  cmp      x8, #1
0001088c  b.hi     #0x10924
00010890  adrp     x8, #0x6d000
00010894  ldr      x21, [x8, #0x940]
00010898  mov      x0, x20
0001089c  mov      x1, x21
000108a0  bl       #0x461c4
000108a4  cbz      x0, #0x109bc
000108a8  adrp     x8, #0x6f000
000108ac  ldr      x22, [x8, #0x3c0]
000108b0  mov      x0, x20
000108b4  mov      x1, x22
000108b8  bl       #0x461c4
000108bc  cbz      x0, #0x109bc
000108c0  adrp     x0, #0x55000
000108c4  add      x0, x0, #0x83
000108c8  bl       #0x46380
000108cc  mov      x20, x0
000108d0  adrp     x2, #0x23000
000108d4  add      x2, x2, #0x978
000108d8  adrp     x3, #0x71000
000108dc  add      x3, x3, #0x368
000108e0  mov      x1, x19
000108e4  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, layoutSubviews, IMP=0x23978)
000108e8  adrp     x2, #0x23000
000108ec  add      x2, x2, #0x9a4
000108f0  adrp     x3, #0x71000
000108f4  add      x3, x3, #0x370
000108f8  mov      x0, x20
000108fc  mov      x1, x21
00010900  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, _handleValueChangeGestureRecognizer:, IMP=0x239a4)
00010904  adrp     x2, #0x23000
00010908  add      x2, x2, #0xa10
0001090c  adrp     x3, #0x71000
00010910  add      x3, x3, #0x378
00010914  mov      x0, x20
00010918  mov      x1, x22
0001091c  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, setValue:, IMP=0x23a10)
00010920  b        #0x109bc
00010924  cmp      x21, #0x11
00010928  b.ne     #0x109bc
0001092c  adrp     x8, #0x6d000
00010930  ldr      x21, [x8, #0x928]
00010934  mov      x0, x20
00010938  mov      x1, x21
0001093c  bl       #0x461c4
00010940  cbz      x0, #0x109bc
00010944  adrp     x8, #0x6f000
00010948  ldr      x22, [x8, #0x3c8]
0001094c  mov      x0, x20
00010950  mov      x1, x22
00010954  bl       #0x461c4
00010958  cbz      x0, #0x109bc
0001095c  adrp     x0, #0x55000
00010960  add      x0, x0, #0x83
00010964  bl       #0x46380
00010968  mov      x20, x0
0001096c  adrp     x2, #0x23000
00010970  add      x2, x2, #0xa3c
00010974  adrp     x3, #0x71000
00010978  add      x3, x3, #0x380
0001097c  mov      x1, x19
00010980  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, layoutSubviews, IMP=0x23a3c)
00010984  adrp     x2, #0x23000
00010988  add      x2, x2, #0xa68
0001098c  adrp     x3, #0x71000
00010990  add      x3, x3, #0x388
00010994  mov      x0, x20
00010998  mov      x1, x21
0001099c  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, _handleFluidSliderInteractionUpdate:, IMP=0x23a68)
000109a0  adrp     x2, #0x23000
000109a4  add      x2, x2, #0xad4
000109a8  adrp     x3, #0x71000
000109ac  add      x3, x3, #0x390
000109b0  mov      x0, x20
000109b4  mov      x1, x22
000109b8  bl       #0x460a4   ; MSHookMessageEx(CCUIContinuousSliderView, setValue:animated:, IMP=0x23ad4)
000109bc  adrp     x0, #0x65000
000109c0  add      x0, x0, #0xf48
000109c4  bl       #0x460b0
000109c8  mov      x19, x0
000109cc  cbz      x0, #0x10a2c
000109d0  adrp     x8, #0x6f000
000109d4  ldr      x20, [x8, #0x768]
000109d8  mov      x0, x19
000109dc  mov      x1, x20
000109e0  bl       #0x461c4
000109e4  cbz      x0, #0x10a2c
000109e8  adrp     x8, #0x6f000
000109ec  ldr      x0, [x8, #0x8a8]
000109f0  bl       #0x4ac40
000109f4  mov      x29, x29
000109f8  bl       #0x46428
000109fc  adrp     x9, #0x70000
00010a00  ldr      x8, [x9, #0x510]
00010a04  str      x0, [x9, #0x510]
00010a08  mov      x0, x8
00010a0c  bl       #0x463f8
00010a10  adrp     x2, #0x23000
00010a14  add      x2, x2, #0xb00
00010a18  adrp     x3, #0x71000
00010a1c  add      x3, x3, #0x398
00010a20  mov      x0, x19
00010a24  mov      x1, x20
00010a28  bl       #0x460a4   ; MSHookMessageEx(SBCoverSheetPrimarySlidingViewController, viewDidLayoutSubviews, IMP=0x23b00)
00010a2c  ldr      w8, [sp, #0x8c]
00010a30  cbz      w8, #0x10c9c
00010a34  adrp     x0, #0x65000
00010a38  add      x0, x0, #0xf68
00010a3c  bl       #0x460b0
00010a40  cbnz     x0, #0x10a54
00010a44  adrp     x0, #0x65000
00010a48  add      x0, x0, #0xf88
00010a4c  bl       #0x460b0
00010a50  cbz      x0, #0x10c9c
00010a54  adrp     x8, #0x70000
00010a58  ldrb     w8, [x8, #0x701]
00010a5c  cbz      w8, #0x10ab0
00010a60  adrp     x0, #0x55000
00010a64  add      x0, x0, #0xc5
00010a68  bl       #0x46380
00010a6c  adrp     x8, #0x6e000
00010a70  ldr      x19, [x8, #0x8c8]
00010a74  adrp     x2, #0x23000
00010a78  add      x2, x2, #0xb2c
00010a7c  adrp     x3, #0x71000
00010a80  add      x3, x3, #0x3a0
00010a84  mov      x1, x19
00010a88  bl       #0x460a4   ; MSHookMessageEx(SBDarkeningImageView, layoutSubviews, IMP=0x23b2c)
00010a8c  adrp     x0, #0x55000
00010a90  add      x0, x0, #0xda
00010a94  bl       #0x46380
00010a98  adrp     x2, #0x23000
00010a9c  add      x2, x2, #0xb80
00010aa0  adrp     x3, #0x71000
00010aa4  add      x3, x3, #0x3a8
00010aa8  mov      x1, x19
00010aac  bl       #0x460a4   ; MSHookMessageEx(SBIconBadgeView, layoutSubviews, IMP=0x23b80)
00010ab0  adrp     x8, #0x70000
00010ab4  ldrb     w8, [x8, #0x703]
00010ab8  adrp     x9, #0x70000
00010abc  ldrb     w9, [x9, #0x704]
00010ac0  orr      w8, w8, w9
00010ac4  cbz      w8, #0x10bb0
00010ac8  adrp     x0, #0x65000
00010acc  add      x0, x0, #0xf88
00010ad0  bl       #0x460b0
00010ad4  cbz      x0, #0x10bb0
00010ad8  adrp     x0, #0x55000
00010adc  add      x0, x0, #0xda
00010ae0  bl       #0x46380
00010ae4  mov      x19, x0
00010ae8  adrp     x8, #0x6d000
00010aec  ldr      x1, [x8, #0xef0]
00010af0  adrp     x2, #0x23000
00010af4  add      x2, x2, #0xbd4
00010af8  adrp     x3, #0x71000
00010afc  add      x3, x3, #0x3b0
00010b00  bl       #0x460a4   ; MSHookMessageEx(SBIconBadgeView, configureForIcon:infoProvider:, IMP=0x23bd4)
00010b04  adrp     x8, #0x6d000
00010b08  ldr      x1, [x8, #0xee8]
00010b0c  adrp     x2, #0x23000
00010b10  add      x2, x2, #0xc94
00010b14  adrp     x3, #0x71000
00010b18  add      x3, x3, #0x3b8
00010b1c  mov      x0, x19
00010b20  bl       #0x460a4   ; MSHookMessageEx(SBIconBadgeView, configureAnimatedForIcon:infoProvider:animator:, IMP=0x23c94)
00010b24  adrp     x8, #0x6e000
00010b28  ldr      x1, [x8, #0x8c8]
00010b2c  adrp     x2, #0x23000
00010b30  add      x2, x2, #0xd80
00010b34  adrp     x3, #0x71000
00010b38  add      x3, x3, #0x3c0
00010b3c  mov      x0, x19
00010b40  bl       #0x460a4   ; MSHookMessageEx(SBIconBadgeView, layoutSubviews, IMP=0x23d80)
00010b44  adrp     x8, #0x6d000
00010b48  ldr      x1, [x8, #0x8e0]
00010b4c  adrp     x2, #0x23000
00010b50  add      x2, x2, #0xdac
00010b54  adrp     x3, #0x71000
00010b58  add      x3, x3, #0x3c8
00010b5c  mov      x0, x19
00010b60  bl       #0x460a4   ; MSHookMessageEx(SBIconBadgeView, _crossfadeToTextImage:animator:, IMP=0x23dac)
00010b64  adrp     x0, #0x54000
00010b68  add      x0, x0, #0x60d
00010b6c  bl       #0x46380
00010b70  mov      x19, x0
00010b74  adrp     x8, #0x6e000
00010b78  ldr      x1, [x8, #0xa10]
00010b7c  adrp     x2, #0x23000
00010b80  add      x2, x2, #0xe3c
00010b84  adrp     x3, #0x71000
00010b88  add      x3, x3, #0x3d0
00010b8c  bl       #0x460a4   ; MSHookMessageEx(SBIcon, noteBadgeDidChange, IMP=0x23e3c)
00010b90  adrp     x8, #0x6e000
00010b94  ldr      x1, [x8, #0xce0]
00010b98  adrp     x2, #0x23000
00010b9c  add      x2, x2, #0xeb8
00010ba0  adrp     x3, #0x71000
00010ba4  add      x3, x3, #0x3d8
00010ba8  mov      x0, x19
00010bac  bl       #0x460a4   ; MSHookMessageEx(SBIcon, reloadIconImage, IMP=0x23eb8)
00010bb0  adrp     x8, #0x70000
00010bb4  ldrb     w8, [x8, #0x702]
00010bb8  cbz      w8, #0x10c9c
00010bbc  adrp     x0, #0x54000
00010bc0  add      x0, x0, #0x376
00010bc4  bl       #0x46380
00010bc8  adrp     x8, #0x6d000
00010bcc  ldr      x1, [x8, #0xef8]
00010bd0  adrp     x2, #0x23000
00010bd4  add      x2, x2, #0xf34
00010bd8  adrp     x3, #0x71000
00010bdc  add      x3, x3, #0x3e0
00010be0  bl       #0x460a4   ; MSHookMessageEx(SBIconListView, configureIconView:forIcon:, IMP=0x23f34)
00010be4  adrp     x0, #0x53000
00010be8  add      x0, x0, #0x862
00010bec  bl       #0x46380
00010bf0  mov      x19, x0
00010bf4  adrp     x8, #0x6e000
00010bf8  ldr      x1, [x8, #0x8c8]
00010bfc  adrp     x2, #0x24000
00010c00  add      x2, x2, #0x1dc
00010c04  adrp     x3, #0x71000
00010c08  add      x3, x3, #0x3e8
00010c0c  bl       #0x460a4   ; MSHookMessageEx(SBIconView, layoutSubviews, IMP=0x241dc)
00010c10  adrp     x8, #0x6e000
00010c14  ldr      x1, [x8, #0xf0]
00010c18  adrp     x2, #0x24000
00010c1c  add      x2, x2, #0x220
00010c20  adrp     x3, #0x71000
00010c24  add      x3, x3, #0x3f0
00010c28  mov      x0, x19
00010c2c  bl       #0x460a4   ; MSHookMessageEx(SBIconView, didMoveToWindow, IMP=0x24220)
00010c30  adrp     x8, #0x6f000
00010c34  ldr      x0, [x8, #0x8c0]
00010c38  adrp     x3, #0x64000
00010c3c  add      x3, x3, #0x5e8
00010c40  fmov     d0, #2.50000000
00010c44  mov      w2, #1
00010c48  bl       #0x49220
00010c4c  mov      x29, x29
00010c50  bl       #0x46428
00010c54  adrp     x20, #0x70000
00010c58  ldr      x8, [x20, #0x580]
00010c5c  str      x0, [x20, #0x580]
00010c60  mov      x0, x8
00010c64  bl       #0x463f8
00010c68  adrp     x8, #0x6f000
00010c6c  ldr      x0, [x8, #0x8c8]
00010c70  bl       #0x486e0
00010c74  mov      x29, x29
00010c78  bl       #0x46428
00010c7c  mov      x19, x0
00010c80  ldr      x2, [x20, #0x580]
00010c84  adrp     x8, #0x64000
00010c88  ldr      x8, [x8, #0x140]
00010c8c  ldr      x3, [x8]
00010c90  bl       #0x46980
00010c94  mov      x0, x19
00010c98  bl       #0x463f8
00010c9c  adrp     x8, #0x71000
00010ca0  ldrb     w8, [x8, #0x3f8]
00010ca4  cbz      w8, #0x10f0c
00010ca8  adrp     x0, #0x65000
00010cac  add      x0, x0, #0xfa8
00010cb0  bl       #0x460b0
00010cb4  cbnz     x0, #0x10cc8
00010cb8  adrp     x0, #0x65000
00010cbc  add      x0, x0, #0xfc8
00010cc0  bl       #0x460b0
00010cc4  cbz      x0, #0x10f0c
00010cc8  adrp     x0, #0x54000
00010ccc  add      x0, x0, #0x33f
00010cd0  bl       #0x46380
00010cd4  mov      x23, x0
00010cd8  adrp     x8, #0x6e000
00010cdc  ldr      x19, [x8, #0x7d0]
00010ce0  adrp     x2, #0x24000
00010ce4  add      x2, x2, #0x390
00010ce8  adrp     x3, #0x71000
00010cec  add      x3, x3, #0x400
00010cf0  mov      x1, x19
00010cf4  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, isPageControlHidden, IMP=0x24390)
00010cf8  adrp     x8, #0x6e000
00010cfc  ldr      x20, [x8, #0xb00]
00010d00  adrp     x2, #0x24000
00010d04  add      x2, x2, #0x3b0
00010d08  adrp     x3, #0x71000
00010d0c  add      x3, x3, #0x408
00010d10  mov      x0, x23
00010d14  mov      x1, x20
00010d18  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, pageControlAlpha, IMP=0x243b0)
00010d1c  adrp     x8, #0x6f000
00010d20  ldr      x21, [x8, #0x1c0]
00010d24  adrp     x2, #0x24000
00010d28  add      x2, x2, #0x3d0
00010d2c  adrp     x3, #0x71000
00010d30  add      x3, x3, #0x410
00010d34  mov      x0, x23
00010d38  mov      x1, x21
00010d3c  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, setPageControlHidden:, IMP=0x243d0)
00010d40  adrp     x8, #0x6f000
00010d44  ldr      x22, [x8, #0x1b8]
00010d48  adrp     x2, #0x24000
00010d4c  add      x2, x2, #0x3f0
00010d50  adrp     x3, #0x71000
00010d54  add      x3, x3, #0x418
00010d58  mov      x0, x23
00010d5c  mov      x1, x22
00010d60  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, setPageControlAlpha:, IMP=0x243f0)
00010d64  adrp     x8, #0x6d000
00010d68  ldr      x1, [x8, #0xab8]
00010d6c  adrp     x2, #0x24000
00010d70  add      x2, x2, #0x410
00010d74  adrp     x3, #0x71000
00010d78  add      x3, x3, #0x420
00010d7c  mov      x0, x23
00010d80  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, _updatePageControlCurrentPage, IMP=0x24410)
00010d84  adrp     x8, #0x6d000
00010d88  ldr      x1, [x8, #0xac0]
00010d8c  adrp     x2, #0x24000
00010d90  add      x2, x2, #0x464
00010d94  adrp     x3, #0x71000
00010d98  add      x3, x3, #0x428
00010d9c  mov      x0, x23
00010da0  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, _updatePageControlNumberOfPages, IMP=0x24464)
00010da4  adrp     x8, #0x6d000
00010da8  ldr      x1, [x8, #0xac8]
00010dac  adrp     x2, #0x24000
00010db0  add      x2, x2, #0x4b8
00010db4  adrp     x3, #0x71000
00010db8  add      x3, x3, #0x430
00010dbc  mov      x0, x23
00010dc0  bl       #0x460a4   ; MSHookMessageEx(SBFolderView, _updatePageControlToIndex:, IMP=0x244b8)
00010dc4  adrp     x0, #0x54000
00010dc8  add      x0, x0, #0x16b
00010dcc  bl       #0x46380
00010dd0  mov      x23, x0
00010dd4  adrp     x2, #0x24000
00010dd8  add      x2, x2, #0x50c
00010ddc  adrp     x3, #0x71000
00010de0  add      x3, x3, #0x438
00010de4  mov      x1, x19
00010de8  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, isPageControlHidden, IMP=0x2450c)
00010dec  adrp     x2, #0x24000
00010df0  add      x2, x2, #0x52c
00010df4  adrp     x3, #0x71000
00010df8  add      x3, x3, #0x440
00010dfc  mov      x0, x23
00010e00  mov      x1, x20
00010e04  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, pageControlAlpha, IMP=0x2452c)
00010e08  adrp     x2, #0x24000
00010e0c  add      x2, x2, #0x54c
00010e10  adrp     x3, #0x71000
00010e14  add      x3, x3, #0x448
00010e18  mov      x0, x23
00010e1c  mov      x1, x21
00010e20  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, setPageControlHidden:, IMP=0x2454c)
00010e24  adrp     x2, #0x24000
00010e28  add      x2, x2, #0x56c
00010e2c  adrp     x3, #0x71000
00010e30  add      x3, x3, #0x450
00010e34  mov      x0, x23
00010e38  mov      x1, x22
00010e3c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, setPageControlAlpha:, IMP=0x2456c)
00010e40  adrp     x8, #0x6e000
00010e44  ldr      x1, [x8, #0xd40]
00010e48  adrp     x2, #0x24000
00010e4c  add      x2, x2, #0x58c
00010e50  adrp     x3, #0x71000
00010e54  add      x3, x3, #0x458
00010e58  mov      x0, x23
00010e5c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, requirePageDotsVisibilityForReason:, IMP=0x2458c)
00010e60  adrp     x8, #0x6d000
00010e64  ldr      x1, [x8, #0x880]
00010e68  adrp     x2, #0x24000
00010e6c  add      x2, x2, #0x618
00010e70  adrp     x3, #0x71000
00010e74  add      x3, x3, #0x460
00010e78  mov      x0, x23
00010e7c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, _applyPageDotsVisibilityAssertions, IMP=0x24618)
00010e80  adrp     x8, #0x6d000
00010e84  ldr      x1, [x8, #0x908]
00010e88  adrp     x2, #0x24000
00010e8c  add      x2, x2, #0x66c
00010e90  adrp     x3, #0x71000
00010e94  add      x3, x3, #0x468
00010e98  mov      x0, x23
00010e9c  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, _flashPageDotsForReason:, IMP=0x2466c)
00010ea0  adrp     x8, #0x6f000
00010ea4  ldr      x1, [x8, #0x6d0]
00010ea8  adrp     x2, #0x24000
00010eac  add      x2, x2, #0x6dc
00010eb0  adrp     x3, #0x71000
00010eb4  add      x3, x3, #0x470
00010eb8  mov      x0, x23
00010ebc  bl       #0x460a4   ; MSHookMessageEx(SBRootFolderView, updatePageControlConfiguration, IMP=0x246dc)
00010ec0  adrp     x0, #0x55000
00010ec4  add      x0, x0, #0x112
00010ec8  bl       #0x46380
00010ecc  mov      x19, x0
00010ed0  adrp     x8, #0x6d000
00010ed4  ldr      x1, [x8, #0x990]
00010ed8  adrp     x2, #0x24000
00010edc  add      x2, x2, #0x730
00010ee0  adrp     x3, #0x71000
00010ee4  add      x3, x3, #0x478
00010ee8  bl       #0x460a4   ; MSHookMessageEx(SBFolderScrollAccessoryView, _pageIndicatorsView, IMP=0x24730)
00010eec  adrp     x8, #0x6e000
00010ef0  ldr      x1, [x8, #0x8c8]
00010ef4  adrp     x2, #0x24000
00010ef8  add      x2, x2, #0x768
00010efc  adrp     x3, #0x71000
00010f00  add      x3, x3, #0x480
00010f04  mov      x0, x19
00010f08  bl       #0x460a4   ; MSHookMessageEx(SBFolderScrollAccessoryView, layoutSubviews, IMP=0x24768)
00010f0c  ldr      w8, [sp, #0x78]
00010f10  ldr      w9, [sp, #0x68]
00010f14  orr      w8, w8, w9
00010f18  tbz      w8, #0, #0x11128
00010f1c  adrp     x0, #0x65000
00010f20  add      x0, x0, #0xfe8
00010f24  bl       #0x460b0
00010f28  cbz      x0, #0x11128
00010f2c  adrp     x0, #0x54000
00010f30  add      x0, x0, #0x1c2
00010f34  bl       #0x46380
00010f38  adrp     x8, #0x6e000
00010f3c  ldr      x1, [x8, #0x488]
00010f40  adrp     x2, #0x24000
00010f44  add      x2, x2, #0x7fc
00010f48  adrp     x3, #0x71000
00010f4c  add      x3, x3, #0x488
00010f50  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, iconViewDisplaysLabel:, IMP=0x247fc)
00010f54  adrp     x0, #0x54000
00010f58  add      x0, x0, #0x17c
00010f5c  bl       #0x46380
00010f60  adrp     x8, #0x6e000
00010f64  ldr      x1, [x8, #0x428]
00010f68  adrp     x2, #0x24000
00010f6c  add      x2, x2, #0x8f8
00010f70  adrp     x3, #0x71000
00010f74  add      x3, x3, #0x490
00010f78  bl       #0x460a4   ; MSHookMessageEx(SBIconController, iconManager:iconViewDisplaysLabel:, IMP=0x248f8)
00010f7c  adrp     x0, #0x53000
00010f80  add      x0, x0, #0x862
00010f84  bl       #0x46380
00010f88  adrp     x8, #0x6d000
00010f8c  ldr      x1, [x8, #0xa00]
00010f90  adrp     x2, #0x24000
00010f94  add      x2, x2, #0xa18
00010f98  adrp     x3, #0x71000
00010f9c  add      x3, x3, #0x498
00010fa0  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _shouldShowLabel, IMP=0x24a18)
00010fa4  adrp     x0, #0x55000
00010fa8  add      x0, x0, #0x143
00010fac  bl       #0x46380
00010fb0  mov      x19, x0
00010fb4  adrp     x8, #0x6e000
00010fb8  ldr      x1, [x8, #0x5d8]
00010fbc  adrp     x2, #0x24000
00010fc0  add      x2, x2, #0xae4
00010fc4  adrp     x3, #0x71000
00010fc8  add      x3, x3, #0x4a0
00010fcc  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetContainerView, initWithGridSizeClass:applicationName:, IMP=0x24ae4)
00010fd0  adrp     x8, #0x6e000
00010fd4  ldr      x1, [x8, #0x8c8]
00010fd8  adrp     x2, #0x24000
00010fdc  add      x2, x2, #0xb80
00010fe0  adrp     x3, #0x71000
00010fe4  add      x3, x3, #0x4a8
00010fe8  mov      x0, x19
00010fec  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetContainerView, layoutSubviews, IMP=0x24b80)
00010ff0  adrp     x0, #0x55000
00010ff4  add      x0, x0, #0x12e
00010ff8  bl       #0x46380
00010ffc  mov      x20, x0
00011000  adrp     x8, #0x6f000
00011004  ldr      x19, [x8, #0x5f8]
00011008  adrp     x2, #0x24000
0001100c  add      x2, x2, #0xbc4
00011010  adrp     x3, #0x71000
00011014  add      x3, x3, #0x4b0
00011018  mov      x1, x19
0001101c  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, titleAndSubtitleVisible, IMP=0x24bc4)
00011020  adrp     x8, #0x6e000
00011024  ldr      x1, [x8, #0x558]
00011028  adrp     x2, #0x24000
0001102c  add      x2, x2, #0xbe4
00011030  adrp     x3, #0x71000
00011034  add      x3, x3, #0x4b8
00011038  mov      x0, x20
0001103c  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, init, IMP=0x24be4)
00011040  adrp     x8, #0x6e000
00011044  ldr      x1, [x8, #0x688]
00011048  adrp     x2, #0x24000
0001104c  add      x2, x2, #0xcb8
00011050  adrp     x3, #0x71000
00011054  add      x3, x3, #0x4c0
00011058  mov      x0, x20
0001105c  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, initWithTitleAndSubtitleVisible:, IMP=0x24cb8)
00011060  adrp     x8, #0x6e000
00011064  ldr      x1, [x8, #0xf0]
00011068  adrp     x2, #0x24000
0001106c  add      x2, x2, #0xda8
00011070  adrp     x3, #0x71000
00011074  add      x3, x3, #0x4c8
00011078  mov      x0, x20
0001107c  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, didMoveToWindow, IMP=0x24da8)
00011080  adrp     x8, #0x6f000
00011084  ldr      x1, [x8, #0x370]
00011088  adrp     x2, #0x24000
0001108c  add      x2, x2, #0xe3c
00011090  adrp     x3, #0x71000
00011094  add      x3, x3, #0x4d0
00011098  mov      x0, x20
0001109c  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, setTitleLabel:, IMP=0x24e3c)
000110a0  adrp     x8, #0x6f000
000110a4  ldr      x1, [x8, #0x320]
000110a8  adrp     x2, #0x24000
000110ac  add      x2, x2, #0xeb4
000110b0  adrp     x3, #0x71000
000110b4  add      x3, x3, #0x4d8
000110b8  mov      x0, x20
000110bc  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperView, setSubtitleLabel:, IMP=0x24eb4)
000110c0  adrp     x0, #0x55000
000110c4  add      x0, x0, #0x15a
000110c8  bl       #0x46380
000110cc  mov      x20, x0
000110d0  adrp     x8, #0x6e000
000110d4  ldr      x1, [x8, #0x5d0]
000110d8  adrp     x2, #0x24000
000110dc  add      x2, x2, #0xf2c
000110e0  adrp     x3, #0x71000
000110e4  add      x3, x3, #0x4e0
000110e8  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperViewController, initWithGalleryItem:titleAndSubtitleVisible:listLayoutProvider:iconViewProvider:, IMP=0x24f2c)
000110ec  adrp     x2, #0x24000
000110f0  add      x2, x2, #0xf4c
000110f4  adrp     x3, #0x71000
000110f8  add      x3, x3, #0x4e8
000110fc  mov      x0, x20
00011100  mov      x1, x19
00011104  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperViewController, titleAndSubtitleVisible, IMP=0x24f4c)
00011108  adrp     x8, #0x6f000
0001110c  ldr      x1, [x8, #0x368]
00011110  adrp     x2, #0x24000
00011114  add      x2, x2, #0xf6c
00011118  adrp     x3, #0x71000
0001111c  add      x3, x3, #0x4f0
00011120  mov      x0, x20
00011124  bl       #0x460a4   ; MSHookMessageEx(SBHWidgetWrapperViewController, setTitleAndSubtitleVisible:, IMP=0x24f6c)
00011128  adrp     x0, #0x66000
0001112c  add      x0, x0, #8
00011130  bl       #0x460b0
00011134  cbnz     x0, #0x11148
00011138  adrp     x0, #0x65000
0001113c  add      x0, x0, #0x888
00011140  bl       #0x460b0
00011144  cbz      x0, #0x11198
00011148  adrp     x0, #0x54000
0001114c  add      x0, x0, #0x71f
00011150  bl       #0x46380
00011154  adrp     x8, #0x6f000
00011158  ldr      x19, [x8, #0x6b8]
0001115c  adrp     x2, #0x24000
00011160  add      x2, x2, #0xf8c
00011164  adrp     x3, #0x71000
00011168  add      x3, x3, #0x4f8
0001116c  mov      x1, x19
00011170  bl       #0x460a4   ; MSHookMessageEx(SBIconLegibilityLabelView, updateIconLabelWithSettings:imageParameters:, IMP=0x24f8c)
00011174  adrp     x0, #0x54000
00011178  add      x0, x0, #0x6e1
0001117c  bl       #0x46380
00011180  adrp     x2, #0x25000
00011184  add      x2, x2, #0x2c
00011188  adrp     x3, #0x71000
0001118c  add      x3, x3, #0x500
00011190  mov      x1, x19
00011194  bl       #0x460a4   ; MSHookMessageEx(SBIconSimpleLabelView, updateIconLabelWithSettings:imageParameters:, IMP=0x2502c)
00011198  bl       #0x250cc
0001119c  cbz      w0, #0x112ac
000111a0  adrp     x0, #0x55000
000111a4  add      x0, x0, #0x179
000111a8  bl       #0x46380
000111ac  mov      x19, x0
000111b0  adrp     x8, #0x6e000
000111b4  ldr      x1, [x8, #0x5a8]
000111b8  adrp     x2, #0x25000
000111bc  add      x2, x2, #0x254
000111c0  adrp     x3, #0x71000
000111c4  add      x3, x3, #0x508
000111c8  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, initWithFrame:, IMP=0x25254)
000111cc  adrp     x8, #0x6e000
000111d0  ldr      x1, [x8, #0xe8]
000111d4  adrp     x2, #0x25000
000111d8  add      x2, x2, #0x298
000111dc  adrp     x3, #0x71000
000111e0  add      x3, x3, #0x510
000111e4  mov      x0, x19
000111e8  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, didMoveToSuperview, IMP=0x25298)
000111ec  adrp     x8, #0x6e000
000111f0  ldr      x1, [x8, #0x8c8]
000111f4  adrp     x2, #0x25000
000111f8  add      x2, x2, #0x2c4
000111fc  adrp     x3, #0x71000
00011200  add      x3, x3, #0x518
00011204  mov      x0, x19
00011208  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, layoutSubviews, IMP=0x252c4)
0001120c  adrp     x8, #0x6e000
00011210  ldr      x1, [x8, #0xbb0]
00011214  adrp     x2, #0x25000
00011218  add      x2, x2, #0x2f0
0001121c  adrp     x3, #0x71000
00011220  add      x3, x3, #0x520
00011224  mov      x0, x19
00011228  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, prepareForReuse, IMP=0x252f0)
0001122c  adrp     x8, #0x6f000
00011230  ldr      x1, [x8, #0x6f0]
00011234  adrp     x2, #0x25000
00011238  add      x2, x2, #0x31c
0001123c  adrp     x3, #0x71000
00011240  add      x3, x3, #0x528
00011244  mov      x0, x19
00011248  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, updateWithLegibilitySettings:labelFont:, IMP=0x2531c)
0001124c  adrp     x8, #0x6f000
00011250  ldr      x1, [x8, #0x6e8]
00011254  adrp     x2, #0x25000
00011258  add      x2, x2, #0x3ac
0001125c  adrp     x3, #0x71000
00011260  add      x3, x3, #0x530
00011264  mov      x0, x19
00011268  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, updateWithBaseImage:legibilitySettings:, IMP=0x253ac)
0001126c  adrp     x8, #0x6f000
00011270  ldr      x1, [x8, #0x50]
00011274  adrp     x2, #0x25000
00011278  add      x2, x2, #0x43c
0001127c  adrp     x3, #0x71000
00011280  add      x3, x3, #0x538
00011284  mov      x0, x19
00011288  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, setHidden:, IMP=0x2543c)
0001128c  adrp     x8, #0x6e000
00011290  ldr      x1, [x8, #0xe78]
00011294  adrp     x2, #0x25000
00011298  add      x2, x2, #0x4a8
0001129c  adrp     x3, #0x71000
000112a0  add      x3, x3, #0x540
000112a4  mov      x0, x19
000112a8  bl       #0x460a4   ; MSHookMessageEx(SBIconDotLabelAccessoryView, setAlpha:, IMP=0x254a8)
000112ac  ldr      w8, [sp, #0x60]
000112b0  cbz      w8, #0x11324
000112b4  adrp     x0, #0x65000
000112b8  add      x0, x0, #0x4a8
000112bc  bl       #0x460b0
000112c0  cbz      x0, #0x11324
000112c4  adrp     x0, #0x65000
000112c8  add      x0, x0, #0x728
000112cc  bl       #0x460b0
000112d0  cbz      x0, #0x11324
000112d4  adrp     x0, #0x53000
000112d8  add      x0, x0, #0xfb0
000112dc  bl       #0x46380
000112e0  adrp     x8, #0x6d000
000112e4  ldr      x1, [x8, #0xb40]
000112e8  adrp     x2, #0x25000
000112ec  add      x2, x2, #0x514
000112f0  adrp     x3, #0x71000
000112f4  add      x3, x3, #0x548
000112f8  bl       #0x460a4   ; MSHookMessageEx(SBUIController, activateApplication:fromIcon:location:activationSettings:actions:, IMP=0x25514)
000112fc  adrp     x0, #0x55000
00011300  add      x0, x0, #0x195
00011304  bl       #0x46380
00011308  adrp     x8, #0x6e000
0001130c  ldr      x1, [x8, #0xeb8]
00011310  adrp     x2, #0x25000
00011314  add      x2, x2, #0x7e0
00011318  adrp     x3, #0x71000
0001131c  add      x3, x3, #0x550
00011320  bl       #0x460a4   ; MSHookMessageEx(SBFolderController, setBackgroundBlurEnabled:, IMP=0x257e0)
00011324  adrp     x8, #0x71000
00011328  ldrb     w8, [x8, #0x558]
0001132c  cbz      w8, #0x113ac
00011330  adrp     x0, #0x66000
00011334  add      x0, x0, #0x28
00011338  bl       #0x460b0
0001133c  cbz      x0, #0x113ac
00011340  adrp     x0, #0x55000
00011344  add      x0, x0, #0x1a8
00011348  bl       #0x46380
0001134c  mov      x19, x0
00011350  adrp     x8, #0x6e000
00011354  ldr      x1, [x8, #0x598]
00011358  adrp     x2, #0x25000
0001135c  add      x2, x2, #0x800
00011360  adrp     x3, #0x71000
00011364  add      x3, x3, #0x560
00011368  bl       #0x460a4   ; MSHookMessageEx(SBFolderContainerView, initWithFolderView:, IMP=0x25800)
0001136c  adrp     x8, #0x6e000
00011370  ldr      x1, [x8, #0x5a8]
00011374  adrp     x2, #0x25000
00011378  add      x2, x2, #0x844
0001137c  adrp     x3, #0x71000
00011380  add      x3, x3, #0x568
00011384  mov      x0, x19
00011388  bl       #0x460a4   ; MSHookMessageEx(SBFolderContainerView, initWithFrame:, IMP=0x25844)
0001138c  adrp     x8, #0x6e000
00011390  ldr      x1, [x8, #0x8c8]
00011394  adrp     x2, #0x25000
00011398  add      x2, x2, #0x888
0001139c  adrp     x3, #0x71000
000113a0  add      x3, x3, #0x570
000113a4  mov      x0, x19
000113a8  bl       #0x460a4   ; MSHookMessageEx(SBFolderContainerView, layoutSubviews, IMP=0x25888)
000113ac  adrp     x8, #0x71000
000113b0  ldrb     w8, [x8, #0x578]
000113b4  cbz      w8, #0x11434
000113b8  adrp     x0, #0x65000
000113bc  add      x0, x0, #0x608
000113c0  bl       #0x460b0
000113c4  cbz      x0, #0x11434
000113c8  adrp     x0, #0x54000
000113cc  add      x0, x0, #0x1c2
000113d0  bl       #0x46380
000113d4  mov      x19, x0
000113d8  adrp     x8, #0x6e000
000113dc  ldr      x1, [x8, #0xac8]
000113e0  adrp     x2, #0x25000
000113e4  add      x2, x2, #0x8b4
000113e8  adrp     x3, #0x71000
000113ec  add      x3, x3, #0x580
000113f0  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, openFolderIcon:location:animated:withCompletion:, IMP=0x258b4)
000113f4  adrp     x8, #0x6e000
000113f8  ldr      x1, [x8, #0x218]
000113fc  adrp     x2, #0x25000
00011400  add      x2, x2, #0xa84
00011404  adrp     x3, #0x71000
00011408  add      x3, x3, #0x588
0001140c  mov      x0, x19
00011410  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, folderControllerWillOpen:, IMP=0x25a84)
00011414  adrp     x8, #0x6e000
00011418  ldr      x1, [x8, #0x210]
0001141c  adrp     x2, #0x25000
00011420  add      x2, x2, #0xb44
00011424  adrp     x3, #0x71000
00011428  add      x3, x3, #0x590
0001142c  mov      x0, x19
00011430  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, folderControllerWillClose:, IMP=0x25b44)
00011434  adrp     x0, #0x66000
00011438  add      x0, x0, #0x48
0001143c  bl       #0x460b0
00011440  mov      x19, x0
00011444  cbz      x0, #0x1147c
00011448  adrp     x8, #0x6e000
0001144c  ldr      x20, [x8, #0x9c8]
00011450  mov      x0, x19
00011454  mov      x1, x20
00011458  bl       #0x461c4
0001145c  cbnz     x0, #0x1147c
00011460  adrp     x2, #0x25000
00011464  add      x2, x2, #0xbc8
00011468  adrp     x3, #0x55000
0001146c  add      x3, x3, #0x1db
00011470  mov      x0, x19
00011474  mov      x1, x20
00011478  bl       #0x461a0
0001147c  adrp     x8, #0x71000
00011480  ldrb     w8, [x8, #0x598]
00011484  cbz      w8, #0x114e4
00011488  adrp     x0, #0x66000
0001148c  add      x0, x0, #0x68
00011490  bl       #0x460b0
00011494  cbz      x0, #0x114e4
00011498  adrp     x0, #0x55000
0001149c  add      x0, x0, #0x1df
000114a0  bl       #0x46380
000114a4  mov      x19, x0
000114a8  adrp     x8, #0x6e000
000114ac  ldr      x1, [x8, #0x918]
000114b0  adrp     x2, #0x25000
000114b4  add      x2, x2, #0xc34
000114b8  adrp     x3, #0x71000
000114bc  add      x3, x3, #0x5a0
000114c0  bl       #0x460a4   ; MSHookMessageEx(SBDefaultIconModelStore, loadCurrentIconState:, IMP=0x25c34)
000114c4  adrp     x8, #0x6e000
000114c8  ldr      x1, [x8, #0xda0]
000114cc  adrp     x2, #0x25000
000114d0  add      x2, x2, #0xd08
000114d4  adrp     x3, #0x71000
000114d8  add      x3, x3, #0x5a8
000114dc  mov      x0, x19
000114e0  bl       #0x460a4   ; MSHookMessageEx(SBDefaultIconModelStore, saveCurrentIconState:error:, IMP=0x25d08)
000114e4  adrp     x8, #0x71000
000114e8  ldrb     w8, [x8, #0x5b0]
000114ec  cbz      w8, #0x11654
000114f0  adrp     x0, #0x66000
000114f4  add      x0, x0, #0x88
000114f8  bl       #0x460b0
000114fc  cbz      x0, #0x11654
00011500  adrp     x0, #0x55000
00011504  add      x0, x0, #0x1f7
00011508  bl       #0x46380
0001150c  mov      x19, x0
00011510  adrp     x8, #0x6e000
00011514  ldr      x1, [x8, #0xa68]
00011518  adrp     x2, #0x25000
0001151c  add      x2, x2, #0xdc8
00011520  adrp     x3, #0x71000
00011524  add      x3, x3, #0x5b8
00011528  bl       #0x460a4   ; MSHookMessageEx(SBIconListFlowLayout, numberOfRowsForOrientation:, IMP=0x25dc8)
0001152c  adrp     x8, #0x6e000
00011530  ldr      x1, [x8, #0xa48]
00011534  adrp     x2, #0x25000
00011538  add      x2, x2, #0xdfc
0001153c  adrp     x3, #0x71000
00011540  add      x3, x3, #0x5c0
00011544  mov      x0, x19
00011548  bl       #0x460a4   ; MSHookMessageEx(SBIconListFlowLayout, numberOfColumnsForOrientation:, IMP=0x25dfc)
0001154c  adrp     x8, #0x6e000
00011550  ldr      x1, [x8, #0x9c8]
00011554  adrp     x2, #0x25000
00011558  add      x2, x2, #0xe30
0001155c  adrp     x3, #0x71000
00011560  add      x3, x3, #0x5c8
00011564  mov      x0, x19
00011568  bl       #0x460a4   ; MSHookMessageEx(SBIconListFlowLayout, maximumIconCount, IMP=0x25e30)
0001156c  adrp     x0, #0x55000
00011570  add      x0, x0, #0x20c
00011574  bl       #0x46380
00011578  mov      x19, x0
0001157c  adrp     x8, #0x6d000
00011580  ldr      x1, [x8, #0x920]
00011584  adrp     x2, #0x25000
00011588  add      x2, x2, #0xe50
0001158c  adrp     x3, #0x71000
00011590  add      x3, x3, #0x5d0
00011594  bl       #0x460a4   ; MSHookMessageEx(SBFloatyFolderView, _frameForScalingView, IMP=0x25e50)
00011598  mov      w8, #0x4064
0001159c  movk     w8, #0x3a, lsl #16
000115a0  str      w8, [sp, #0x290]
000115a4  adrp     x8, #0x6e000
000115a8  ldr      x1, [x8, #0x220]
000115ac  adrp     x2, #0x25000
000115b0  add      x2, x2, #0xef4
000115b4  add      x3, sp, #0x290
000115b8  mov      x0, x19
000115bc  bl       #0x461a0
000115c0  adrp     x8, #0x6d000
000115c4  ldr      x1, [x8, #0x9e8]
000115c8  adrp     x2, #0x25000
000115cc  add      x2, x2, #0xf14
000115d0  adrp     x3, #0x71000
000115d4  add      x3, x3, #0x5d8
000115d8  mov      x0, x19
000115dc  bl       #0x460a4   ; MSHookMessageEx(SBFloatyFolderView, _shouldConvertToMultipleIconListsInLandscapeOrientation, IMP=0x25f14)
000115e0  adrp     x8, #0x6e000
000115e4  ldr      x1, [x8, #0xf70]
000115e8  adrp     x2, #0x25000
000115ec  add      x2, x2, #0xf34
000115f0  adrp     x3, #0x71000
000115f4  add      x3, x3, #0x5e0
000115f8  mov      x0, x19
000115fc  bl       #0x460a4   ; MSHookMessageEx(SBFloatyFolderView, setCornerRadius:, IMP=0x25f34)
00011600  adrp     x0, #0x54000
00011604  add      x0, x0, #0x2fb
00011608  bl       #0x46380
0001160c  bl       #0x4647c
00011610  adrp     x8, #0x6d000
00011614  ldr      x1, [x8, #0xff0]
00011618  adrp     x2, #0x25000
0001161c  add      x2, x2, #0xf40
00011620  adrp     x3, #0x71000
00011624  add      x3, x3, #0x5e8
00011628  bl       #0x460a4   ; MSHookMessageEx(None, cornerRadiusToInsetContent, IMP=0x25f40)
0001162c  adrp     x0, #0x55000
00011630  add      x0, x0, #0x21f
00011634  bl       #0x46380
00011638  adrp     x8, #0x6e000
0001163c  ldr      x1, [x8, #0x8c8]
00011640  adrp     x2, #0x25000
00011644  add      x2, x2, #0xf60
00011648  adrp     x3, #0x71000
0001164c  add      x3, x3, #0x5f0
00011650  bl       #0x460a4   ; MSHookMessageEx(_SBIconGridWrapperView, layoutSubviews, IMP=0x25f60)
00011654  adrp     x8, #0x71000
00011658  ldrb     w8, [x8, #0x5f8]
0001165c  cbz      w8, #0x11814
00011660  adrp     x0, #0x65000
00011664  add      x0, x0, #0x788
00011668  bl       #0x460b0
0001166c  cbz      x0, #0x11814
00011670  adrp     x8, #0x79000
00011674  ldr      x8, [x8, #0x970]
00011678  cmn      x8, #1
0001167c  b.ne     #0x120c4
00011680  adrp     x0, #0x54000
00011684  add      x0, x0, #0x312
00011688  bl       #0x46380
0001168c  mov      x20, x0
00011690  adrp     x8, #0x6f000
00011694  ldr      x1, [x8, #0x6c0]
00011698  adrp     x2, #0x26000
0001169c  add      x2, x2, #0x34
000116a0  adrp     x3, #0x71000
000116a4  add      x3, x3, #0x600
000116a8  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, updateImageAnimated:, IMP=0x26034)
000116ac  adrp     x8, #0x6e000
000116b0  ldr      x19, [x8, #0x8c8]
000116b4  adrp     x2, #0x26000
000116b8  add      x2, x2, #0x60
000116bc  adrp     x3, #0x71000
000116c0  add      x3, x3, #0x608
000116c4  mov      x0, x20
000116c8  mov      x1, x19
000116cc  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, layoutSubviews, IMP=0x26060)
000116d0  adrp     x8, #0x6f000
000116d4  ldr      x1, [x8, #0x30]
000116d8  adrp     x2, #0x26000
000116dc  add      x2, x2, #0x8c
000116e0  adrp     x3, #0x71000
000116e4  add      x3, x3, #0x610
000116e8  mov      x0, x20
000116ec  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, setFloatyFolderCrossfadeFraction:, IMP=0x2608c)
000116f0  mov      w8, #0x4076
000116f4  movk     w8, #0x3a, lsl #16
000116f8  str      w8, [sp, #0x290]
000116fc  adrp     x8, #0x6d000
00011700  ldr      x1, [x8, #0xa40]
00011704  adrp     x2, #0x26000
00011708  add      x2, x2, #0x118
0001170c  add      x3, sp, #0x290
00011710  mov      x0, x20
00011714  bl       #0x461a0
00011718  adrp     x0, #0x54000
0001171c  add      x0, x0, #0x1c2
00011720  bl       #0x46380
00011724  mov      x20, x0
00011728  adrp     x8, #0x6e000
0001172c  ldr      x1, [x8, #0x460]
00011730  adrp     x2, #0x26000
00011734  add      x2, x2, #0x120
00011738  adrp     x3, #0x71000
0001173c  add      x3, x3, #0x618
00011740  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, iconTapped:, IMP=0x26120)
00011744  adrp     x8, #0x6e000
00011748  ldr      x1, [x8, #0x468]
0001174c  adrp     x2, #0x26000
00011750  add      x2, x2, #0x384
00011754  adrp     x3, #0x71000
00011758  add      x3, x3, #0x620
0001175c  mov      x0, x20
00011760  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, iconTapped:modifierFlags:, IMP=0x26384)
00011764  adrp     x0, #0x53000
00011768  add      x0, x0, #0x862
0001176c  bl       #0x46380
00011770  mov      x20, x0
00011774  adrp     x2, #0x26000
00011778  add      x2, x2, #0x430
0001177c  adrp     x3, #0x71000
00011780  add      x3, x3, #0x628
00011784  mov      x1, x19
00011788  bl       #0x460a4   ; MSHookMessageEx(SBIconView, layoutSubviews, IMP=0x26430)
0001178c  adrp     x8, #0x6d000
00011790  ldr      x1, [x8, #0xa78]
00011794  adrp     x2, #0x26000
00011798  add      x2, x2, #0x45c
0001179c  adrp     x3, #0x71000
000117a0  add      x3, x3, #0x630
000117a4  mov      x0, x20
000117a8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _updateAccessoryViewAnimated:, IMP=0x2645c)
000117ac  adrp     x8, #0x6d000
000117b0  ldr      x1, [x8, #0xaa0]
000117b4  adrp     x2, #0x26000
000117b8  add      x2, x2, #0x488
000117bc  adrp     x3, #0x71000
000117c0  add      x3, x3, #0x638
000117c4  mov      x0, x20
000117c8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _updateIconImageViewAnimated:, IMP=0x26488)
000117cc  adrp     x8, #0x6d000
000117d0  ldr      x1, [x8, #0x958]
000117d4  adrp     x2, #0x26000
000117d8  add      x2, x2, #0x4b4
000117dc  adrp     x3, #0x71000
000117e0  add      x3, x3, #0x640
000117e4  mov      x0, x20
000117e8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _insertIconImageView:, IMP=0x264b4)
000117ec  mov      w8, #0x4076
000117f0  movk     w8, #0x3a, lsl #16
000117f4  str      w8, [sp, #0x290]
000117f8  adrp     x8, #0x6d000
000117fc  ldr      x1, [x8, #0xa20]
00011800  adrp     x2, #0x26000
00011804  add      x2, x2, #0x520
00011808  add      x3, sp, #0x290
0001180c  mov      x0, x20
00011810  bl       #0x461a0
00011814  fmov     d0, #1.00000000
00011818  fcmp     d8, d0
0001181c  b.eq     #0x11a24
00011820  adrp     x0, #0x64000
00011824  add      x0, x0, #0xfe8
00011828  bl       #0x460b0
0001182c  cbz      x0, #0x11a24
00011830  adrp     x0, #0x53000
00011834  add      x0, x0, #0x862
00011838  bl       #0x46380
0001183c  mov      x19, x0
00011840  adrp     x8, #0x6e000
00011844  ldr      x1, [x8, #0x3d8]
00011848  adrp     x2, #0x26000
0001184c  add      x2, x2, #0x744
00011850  adrp     x3, #0x71000
00011854  add      x3, x3, #0x648
00011858  bl       #0x460a4   ; MSHookMessageEx(SBIconView, iconContentScale, IMP=0x26744)
0001185c  adrp     x8, #0x6d000
00011860  ldr      x1, [x8, #0xaa0]
00011864  adrp     x2, #0x26000
00011868  add      x2, x2, #0x8c8
0001186c  adrp     x3, #0x71000
00011870  add      x3, x3, #0x650
00011874  mov      x0, x19
00011878  bl       #0x460a4   ; MSHookMessageEx(SBIconView, _updateIconImageViewAnimated:, IMP=0x268c8)
0001187c  adrp     x8, #0x6f000
00011880  ldr      x1, [x8, #0x80]
00011884  adrp     x2, #0x26000
00011888  add      x2, x2, #0x8f4
0001188c  adrp     x3, #0x71000
00011890  add      x3, x3, #0x658
00011894  mov      x0, x19
00011898  bl       #0x460a4   ; MSHookMessageEx(SBIconView, setIconContentScale:, IMP=0x268f4)
0001189c  adrp     x8, #0x6e000
000118a0  ldr      x1, [x8, #0xe8]
000118a4  adrp     x2, #0x26000
000118a8  add      x2, x2, #0x920
000118ac  adrp     x3, #0x71000
000118b0  add      x3, x3, #0x660
000118b4  mov      x0, x19
000118b8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, didMoveToSuperview, IMP=0x26920)
000118bc  adrp     x8, #0x6d000
000118c0  ldr      x1, [x8, #0xf78]
000118c4  adrp     x2, #0x26000
000118c8  add      x2, x2, #0x94c
000118cc  adrp     x3, #0x71000
000118d0  add      x3, x3, #0x668
000118d4  mov      x0, x19
000118d8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, contextMenuInteraction:willDisplayMenuForConfiguration:animator:, IMP=0x2694c)
000118dc  adrp     x8, #0x6d000
000118e0  ldr      x1, [x8, #0xf80]
000118e4  adrp     x2, #0x26000
000118e8  add      x2, x2, #0xa14
000118ec  adrp     x3, #0x71000
000118f0  add      x3, x3, #0x670
000118f4  mov      x0, x19
000118f8  bl       #0x460a4   ; MSHookMessageEx(SBIconView, contextMenuInteraction:willEndForConfiguration:animator:, IMP=0x26a14)
000118fc  mov      w20, #0x4076
00011900  movk     w20, #0x3a, lsl #16
00011904  str      w20, [sp, #0x290]
00011908  adrp     x8, #0x6d000
0001190c  ldr      x1, [x8, #0xa48]
00011910  adrp     x2, #0x26000
00011914  add      x2, x2, #0xbfc
00011918  add      x3, sp, #0x290
0001191c  mov      x0, x19
00011920  bl       #0x461a0
00011924  str      w20, [sp, #0x290]
00011928  adrp     x8, #0x6d000
0001192c  ldr      x1, [x8, #0xa28]
00011930  adrp     x2, #0x26000
00011934  add      x2, x2, #0xf7c
00011938  add      x3, sp, #0x290
0001193c  mov      x0, x19
00011940  bl       #0x461a0
00011944  adrp     x0, #0x55000
00011948  add      x0, x0, #0x195
0001194c  bl       #0x46380
00011950  adrp     x8, #0x6d000
00011954  ldr      x1, [x8, #0x978]
00011958  adrp     x2, #0x26000
0001195c  add      x2, x2, #0xfe8
00011960  adrp     x3, #0x71000
00011964  add      x3, x3, #0x678
00011968  bl       #0x460a4   ; MSHookMessageEx(SBFolderController, _newAnimatorForZoomUp:, IMP=0x26fe8)
0001196c  adrp     x0, #0x54000
00011970  add      x0, x0, #0x1c2
00011974  bl       #0x46380
00011978  mov      x19, x0
0001197c  adrp     x8, #0x6d000
00011980  ldr      x1, [x8, #0xe90]
00011984  adrp     x2, #0x27000
00011988  add      x2, x2, #0
0001198c  adrp     x3, #0x71000
00011990  add      x3, x3, #0x680
00011994  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, closeFolderAnimated:withCompletion:, IMP=0x27000)
00011998  adrp     x8, #0x6d000
0001199c  ldr      x1, [x8, #0x8a8]
000119a0  adrp     x2, #0x27000
000119a4  add      x2, x2, #0xa4
000119a8  adrp     x3, #0x71000
000119ac  add      x3, x3, #0x688
000119b0  mov      x0, x19
000119b4  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, _closeFolderController:animated:withCompletion:, IMP=0x270a4)
000119b8  adrp     x8, #0x6e000
000119bc  ldr      x1, [x8, #0xac8]
000119c0  adrp     x2, #0x27000
000119c4  add      x2, x2, #0x174
000119c8  adrp     x3, #0x71000
000119cc  add      x3, x3, #0x690
000119d0  mov      x0, x19
000119d4  bl       #0x460a4   ; MSHookMessageEx(SBHIconManager, openFolderIcon:location:animated:withCompletion:, IMP=0x27174)
000119d8  adrp     x0, #0x54000
000119dc  add      x0, x0, #0x312
000119e0  bl       #0x46380
000119e4  mov      x19, x0
000119e8  adrp     x8, #0x6e000
000119ec  ldr      x1, [x8, #0xbb8]
000119f0  adrp     x2, #0x27000
000119f4  add      x2, x2, #0x190
000119f8  adrp     x3, #0x71000
000119fc  add      x3, x3, #0x698
00011a00  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, prepareToCrossfadeWithFloatyFolderView:allowFolderInteraction:, IMP=0x27190)
00011a04  adrp     x8, #0x6d000
00011a08  ldr      x1, [x8, #0xe60]
00011a0c  adrp     x2, #0x27000
00011a10  add      x2, x2, #0x27c
00011a14  adrp     x3, #0x71000
00011a18  add      x3, x3, #0x6a0
00011a1c  mov      x0, x19
00011a20  bl       #0x460a4   ; MSHookMessageEx(SBFolderIconImageView, cleanupAfterFloatyFolderCrossfade, IMP=0x2727c)
00011a24  adrp     x8, #0x71000
00011a28  ldrb     w8, [x8, #0x6a8]
00011a2c  cbz      w8, #0x11bfc
00011a30  adrp     x0, #0x65000
00011a34  add      x0, x0, #0xda8
00011a38  bl       #0x460b0
00011a3c  cbz      x0, #0x11b08
00011a40  adrp     x8, #0x6f000
00011a44  ldr      x0, [x8, #0x8a8]
00011a48  bl       #0x4ac40
00011a4c  mov      x29, x29
00011a50  bl       #0x46428
00011a54  adrp     x9, #0x70000
00011a58  ldr      x8, [x9, #0x460]
00011a5c  str      x0, [x9, #0x460]
00011a60  mov      x0, x8
00011a64  bl       #0x463f8
00011a68  adrp     x0, #0x54000
00011a6c  add      x0, x0, #0xe02
00011a70  bl       #0x46380
00011a74  mov      x19, x0
00011a78  adrp     x8, #0x6f000
00011a7c  ldr      x1, [x8, #0x330]
00011a80  adrp     x2, #0x27000
00011a84  add      x2, x2, #0x2c4
00011a88  adrp     x3, #0x71000
00011a8c  add      x3, x3, #0x6b0
00011a90  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, setText:, IMP=0x272c4)
00011a94  adrp     x8, #0x6d000
00011a98  ldr      x1, [x8, #0xcb8]
00011a9c  adrp     x2, #0x27000
00011aa0  add      x2, x2, #0x3bc
00011aa4  adrp     x3, #0x71000
00011aa8  add      x3, x3, #0x6b8
00011aac  mov      x0, x19
00011ab0  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarStringView, applyStyleAttributes:, IMP=0x273bc)
00011ab4  adrp     x0, #0x55000
00011ab8  add      x0, x0, #0x236
00011abc  bl       #0x46380
00011ac0  adrp     x8, #0x6d000
00011ac4  ldr      x1, [x8, #0xcc0]
00011ac8  adrp     x2, #0x27000
00011acc  add      x2, x2, #0x444
00011ad0  adrp     x3, #0x71000
00011ad4  add      x3, x3, #0x6c0
00011ad8  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarTimeItem, applyUpdate:toDisplayItem:, IMP=0x27444)
00011adc  adrp     x0, #0x55000
00011ae0  add      x0, x0, #0x24c
00011ae4  bl       #0x46380
00011ae8  adrp     x8, #0x6d000
00011aec  ldr      x1, [x8, #0xa90]
00011af0  adrp     x2, #0x27000
00011af4  add      x2, x2, #0x5dc
00011af8  adrp     x3, #0x71000
00011afc  add      x3, x3, #0x6c8
00011b00  bl       #0x460a4   ; MSHookMessageEx(STUIStatusBarDisplayItem, _updateComputedTransform, IMP=0x275dc)
00011b04  b        #0x11bfc
00011b08  adrp     x0, #0x66000
00011b0c  add      x0, x0, #0xa8
00011b10  bl       #0x460b0
00011b14  cbz      x0, #0x11bfc
00011b18  adrp     x8, #0x6f000
00011b1c  ldr      x0, [x8, #0x8a8]
00011b20  bl       #0x4ac40
00011b24  mov      x29, x29
00011b28  bl       #0x46428
00011b2c  adrp     x9, #0x70000
00011b30  ldr      x8, [x9, #0x450]
00011b34  str      x0, [x9, #0x450]
00011b38  mov      x0, x8
00011b3c  bl       #0x463f8
00011b40  adrp     x0, #0x54000
00011b44  add      x0, x0, #0xe95
00011b48  bl       #0x46380
00011b4c  mov      x19, x0
00011b50  adrp     x8, #0x6f000
00011b54  ldr      x1, [x8, #0x330]
00011b58  adrp     x2, #0x27000
00011b5c  add      x2, x2, #0x730
00011b60  adrp     x3, #0x71000
00011b64  add      x3, x3, #0x6d0
00011b68  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarStringView, setText:, IMP=0x27730)
00011b6c  adrp     x8, #0x6d000
00011b70  ldr      x1, [x8, #0xcb8]
00011b74  adrp     x2, #0x27000
00011b78  add      x2, x2, #0xa30
00011b7c  adrp     x3, #0x71000
00011b80  add      x3, x3, #0x6d8
00011b84  mov      x0, x19
00011b88  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarStringView, applyStyleAttributes:, IMP=0x27a30)
00011b8c  adrp     x8, #0x6f000
00011b90  ldr      x1, [x8, #0x348]
00011b94  adrp     x2, #0x27000
00011b98  add      x2, x2, #0xb50
00011b9c  adrp     x3, #0x71000
00011ba0  add      x3, x3, #0x6e0
00011ba4  mov      x0, x19
00011ba8  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarStringView, setTextColor:, IMP=0x27b50)
00011bac  adrp     x0, #0x55000
00011bb0  add      x0, x0, #0x265
00011bb4  bl       #0x46380
00011bb8  adrp     x8, #0x6d000
00011bbc  ldr      x1, [x8, #0xcc0]
00011bc0  adrp     x2, #0x27000
00011bc4  add      x2, x2, #0xc24
00011bc8  adrp     x3, #0x71000
00011bcc  add      x3, x3, #0x6e8
00011bd0  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarTimeItem, applyUpdate:toDisplayItem:, IMP=0x27c24)
00011bd4  adrp     x0, #0x55000
00011bd8  add      x0, x0, #0x27a
00011bdc  bl       #0x46380
00011be0  adrp     x8, #0x6d000
00011be4  ldr      x1, [x8, #0xa90]
00011be8  adrp     x2, #0x27000
00011bec  add      x2, x2, #0xdbc
00011bf0  adrp     x3, #0x71000
00011bf4  add      x3, x3, #0x6f0
00011bf8  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarDisplayItem, _updateComputedTransform, IMP=0x27dbc)
00011bfc  adrp     x0, #0x66000
00011c00  add      x0, x0, #0xc8
00011c04  bl       #0x460b0
00011c08  mov      x19, x0
00011c0c  cbz      x0, #0x11c70
00011c10  adrp     x8, #0x6d000
00011c14  ldr      x20, [x8, #0xaa8]
00011c18  mov      x0, x19
00011c1c  mov      x1, x20
00011c20  bl       #0x461c4
00011c24  cbz      x0, #0x11c70
00011c28  adrp     x8, #0x6f000
00011c2c  ldr      x0, [x8, #0x8a8]
00011c30  bl       #0x4ac40
00011c34  mov      x29, x29
00011c38  bl       #0x46428
00011c3c  adrp     x9, #0x70000
00011c40  ldr      x8, [x9, #0x470]
00011c44  str      x0, [x9, #0x470]
00011c48  mov      x0, x8
00011c4c  bl       #0x463f8
00011c50  adrp     x2, #0x27000
00011c54  add      x2, x2, #0xf10
00011c58  adrp     x3, #0x71000
00011c5c  add      x3, x3, #0x6f8
00011c60  mov      x0, x19
00011c64  mov      x1, x20
00011c68  bl       #0x460a4   ; MSHookMessageEx(CSProminentSubtitleDateView, _updateLabel, IMP=0x27f10)
00011c6c  b        #0x11cf4
00011c70  adrp     x0, #0x66000
00011c74  add      x0, x0, #0xe8
00011c78  bl       #0x460b0
00011c7c  mov      x20, x0
00011c80  adrp     x0, #0x66000
00011c84  add      x0, x0, #0x108
00011c88  bl       #0x460b0
00011c8c  cbz      x20, #0x11cf4
00011c90  mov      x19, x0
00011c94  cbz      x0, #0x11cf4
00011c98  adrp     x8, #0x6f000
00011c9c  ldr      x20, [x8, #0x300]
00011ca0  mov      x0, x19
00011ca4  mov      x1, x20
00011ca8  bl       #0x461c4
00011cac  cbz      x0, #0x11cf4
00011cb0  adrp     x8, #0x6f000
00011cb4  ldr      x0, [x8, #0x8a8]
00011cb8  bl       #0x4ac40
00011cbc  mov      x29, x29
00011cc0  bl       #0x46428
00011cc4  adrp     x9, #0x70000
00011cc8  ldr      x8, [x9, #0x478]
00011ccc  str      x0, [x9, #0x478]
00011cd0  mov      x0, x8
00011cd4  bl       #0x463f8
00011cd8  adrp     x2, #0x28000
00011cdc  add      x2, x2, #0xc0
00011ce0  adrp     x3, #0x71000
00011ce4  add      x3, x3, #0x700
00011ce8  mov      x0, x19
00011cec  mov      x1, x20
00011cf0  bl       #0x460a4   ; MSHookMessageEx(SBFLockScreenDateSubtitleView, setString:, IMP=0x280c0)
00011cf4  adrp     x8, #0x6f000
00011cf8  ldr      x0, [x8, #0x8a8]
00011cfc  bl       #0x4ac40
00011d00  mov      x29, x29
00011d04  bl       #0x46428
00011d08  adrp     x9, #0x70000
00011d0c  ldr      x8, [x9, #0x3c0]
00011d10  str      x0, [x9, #0x3c0]
00011d14  mov      x0, x8
00011d18  bl       #0x463f8
00011d1c  adrp     x8, #0x71000
00011d20  ldrb     w8, [x8, #0x708]
00011d24  cbz      w8, #0x11d9c
00011d28  adrp     x0, #0x55000
00011d2c  add      x0, x0, #0x2ee
00011d30  bl       #0x46380
00011d34  mov      x19, x0
00011d38  adrp     x8, #0x6d000
00011d3c  ldr      x1, [x8, #0xb28]
00011d40  adrp     x2, #0x28000
00011d44  add      x2, x2, #0x244
00011d48  adrp     x3, #0x71000
00011d4c  add      x3, x3, #0x710
00011d50  bl       #0x460a4   ; MSHookMessageEx(SBAlertItemsController, activateAlertItem:, IMP=0x28244)
00011d54  adrp     x8, #0x6d000
00011d58  ldr      x1, [x8, #0xb30]
00011d5c  adrp     x2, #0x28000
00011d60  add      x2, x2, #0x2e4
00011d64  adrp     x3, #0x71000
00011d68  add      x3, x3, #0x718
00011d6c  mov      x0, x19
00011d70  bl       #0x460a4   ; MSHookMessageEx(SBAlertItemsController, activateAlertItem:animated:, IMP=0x282e4)
00011d74  adrp     x0, #0x55000
00011d78  add      x0, x0, #0x305
00011d7c  bl       #0x46380
00011d80  adrp     x8, #0x6d000
00011d84  ldr      x1, [x8, #0x8d8]
00011d88  adrp     x2, #0x28000
00011d8c  add      x2, x2, #0x394
00011d90  adrp     x3, #0x71000
00011d94  add      x3, x3, #0x720
00011d98  bl       #0x460a4   ; MSHookMessageEx(SBLowPowerAlertItem, _createSystemApertureElement, IMP=0x28394)
00011d9c  ldr      w8, [sp, #0x50]
00011da0  cbz      w8, #0x11ff8
00011da4  adrp     x0, #0x55000
00011da8  add      x0, x0, #0x319
00011dac  bl       #0x46380
00011db0  adrp     x8, #0x6e000
00011db4  ldr      x1, [x8, #0xb98]
00011db8  adrp     x2, #0x28000
00011dbc  add      x2, x2, #0x3cc
00011dc0  adrp     x3, #0x71000
00011dc4  add      x3, x3, #0x728
00011dc8  bl       #0x460a4   ; MSHookMessageEx(SBChargingSystemApertureElementProvider, powerElementWithBatteryCapacity:, IMP=0x283cc)
00011dcc  adrp     x0, #0x55000
00011dd0  add      x0, x0, #0x341
00011dd4  bl       #0x46380
00011dd8  mov      x19, x0
00011ddc  adrp     x8, #0x6e000
00011de0  ldr      x1, [x8, #0xc00]
00011de4  adrp     x2, #0x28000
00011de8  add      x2, x2, #0x404
00011dec  adrp     x3, #0x71000
00011df0  add      x3, x3, #0x730
00011df4  bl       #0x460a4   ; MSHookMessageEx(SBLockScreenBatteryChargingViewController, presentWithAnimation:, IMP=0x28404)
00011df8  adrp     x8, #0x6f000
00011dfc  ldr      x1, [x8, #0x430]
00011e00  adrp     x2, #0x28000
00011e04  add      x2, x2, #0x420
00011e08  adrp     x3, #0x71000
00011e0c  add      x3, x3, #0x738
00011e10  mov      x0, x19
00011e14  bl       #0x460a4   ; MSHookMessageEx(SBLockScreenBatteryChargingViewController, showChargeLevelWithBatteryVisible:, IMP=0x28420)
00011e18  adrp     x0, #0x53000
00011e1c  add      x0, x0, #0xfb0
00011e20  bl       #0x46380
00011e24  adrp     x8, #0x6e000
00011e28  ldr      x1, [x8, #0xb58]
00011e2c  adrp     x2, #0x28000
00011e30  add      x2, x2, #0x43c
00011e34  adrp     x3, #0x71000
00011e38  add      x3, x3, #0x740
00011e3c  bl       #0x460a4   ; MSHookMessageEx(SBUIController, playChargingChimeIfAppropriate, IMP=0x2843c)
00011e40  ldr      w8, [sp, #0x48]
00011e44  cmp      w8, #0x63
00011e48  b.hi     #0x11ff8
00011e4c  adrp     x0, #0x55000
00011e50  add      x0, x0, #0x36b
00011e54  mov      w1, #2
00011e58  bl       #0x4623c
00011e5c  adrp     x8, #0x6f000
00011e60  ldr      x0, [x8, #0x8a8]
00011e64  bl       #0x4ac40
00011e68  mov      x29, x29
00011e6c  bl       #0x46428
00011e70  adrp     x9, #0x70000
00011e74  ldr      x8, [x9, #0x480]
00011e78  str      x0, [x9, #0x480]
00011e7c  mov      x0, x8
00011e80  bl       #0x463f8
00011e84  adrp     x0, #0x55000
00011e88  add      x0, x0, #0x3b3
00011e8c  bl       #0x46380
00011e90  mov      x19, x0
00011e94  adrp     x8, #0x6d000
00011e98  ldr      x1, [x8, #0xe20]
00011e9c  adrp     x2, #0x28000
00011ea0  add      x2, x2, #0x458
00011ea4  adrp     x3, #0x71000
00011ea8  add      x3, x3, #0x748
00011eac  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarDataBatteryEntry, capacity, IMP=0x28458)
00011eb0  adrp     x8, #0x6e000
00011eb4  ldr      x1, [x8, #0xb8]
00011eb8  adrp     x2, #0x28000
00011ebc  add      x2, x2, #0x4a8
00011ec0  adrp     x3, #0x71000
00011ec4  add      x3, x3, #0x750
00011ec8  mov      x0, x19
00011ecc  bl       #0x460a4   ; MSHookMessageEx(_UIStatusBarDataBatteryEntry, detailString, IMP=0x284a8)
00011ed0  adrp     x0, #0x55000
00011ed4  add      x0, x0, #0x3d0
00011ed8  bl       #0x46380
00011edc  mov      x19, x0
00011ee0  adrp     x8, #0x6f000
00011ee4  ldr      x1, [x8, #0x6b0]
00011ee8  adrp     x2, #0x28000
00011eec  add      x2, x2, #0x50c
00011ef0  adrp     x3, #0x71000
00011ef4  add      x3, x3, #0x758
00011ef8  bl       #0x460a4   ; MSHookMessageEx(UIStatusBarBatteryPercentItemView, updateForNewData:actions:, IMP=0x2850c)
00011efc  adrp     x8, #0x6d000
00011f00  ldr      x1, [x8, #0xf60]
00011f04  adrp     x2, #0x28000
00011f08  add      x2, x2, #0x5d8
00011f0c  adrp     x3, #0x71000
00011f10  add      x3, x3, #0x760
00011f14  mov      x0, x19
00011f18  bl       #0x460a4   ; MSHookMessageEx(UIStatusBarBatteryPercentItemView, contentsImage, IMP=0x285d8)
00011f1c  adrp     x8, #0x6e000
00011f20  ldr      x1, [x8, #0xf0]
00011f24  adrp     x2, #0x28000
00011f28  add      x2, x2, #0x638
00011f2c  adrp     x3, #0x71000
00011f30  add      x3, x3, #0x768
00011f34  mov      x0, x19
00011f38  bl       #0x460a4   ; MSHookMessageEx(UIStatusBarBatteryPercentItemView, didMoveToWindow, IMP=0x28638)
00011f3c  adrp     x0, #0x54000
00011f40  add      x0, x0, #0xbb6
00011f44  bl       #0x46380
00011f48  adrp     x8, #0x6d000
00011f4c  ldr      x1, [x8, #0xd50]
00011f50  adrp     x2, #0x28000
00011f54  add      x2, x2, #0x698
00011f58  adrp     x3, #0x71000
00011f5c  add      x3, x3, #0x770
00011f60  bl       #0x460a4   ; MSHookMessageEx(UIDevice, batteryLevel, IMP=0x28698)
00011f64  adrp     x0, #0x55000
00011f68  add      x0, x0, #0x3f2
00011f6c  bl       #0x46380
00011f70  adrp     x8, #0x6e000
00011f74  ldr      x1, [x8, #0xb20]
00011f78  adrp     x2, #0x28000
00011f7c  add      x2, x2, #0x6cc
00011f80  adrp     x3, #0x71000
00011f84  add      x3, x3, #0x778
00011f88  bl       #0x460a4   ; MSHookMessageEx(BCBatteryDevice, percentCharge, IMP=0x286cc)
00011f8c  adrp     x0, #0x53000
00011f90  add      x0, x0, #0xfb0
00011f94  bl       #0x46380
00011f98  mov      x19, x0
00011f9c  adrp     x8, #0x6d000
00011fa0  ldr      x1, [x8, #0xd48]
00011fa4  adrp     x2, #0x28000
00011fa8  add      x2, x2, #0x6fc
00011fac  adrp     x3, #0x71000
00011fb0  add      x3, x3, #0x780
00011fb4  bl       #0x460a4   ; MSHookMessageEx(SBUIController, batteryCapacityAsPercentage, IMP=0x286fc)
00011fb8  adrp     x8, #0x6d000
00011fbc  ldr      x1, [x8, #0xd40]
00011fc0  adrp     x2, #0x28000
00011fc4  add      x2, x2, #0x750
00011fc8  adrp     x3, #0x71000
00011fcc  add      x3, x3, #0x788
00011fd0  mov      x0, x19
00011fd4  bl       #0x460a4   ; MSHookMessageEx(SBUIController, batteryCapacity, IMP=0x28750)
00011fd8  adrp     x8, #0x6f000
00011fdc  ldr      x1, [x8, #0x698]
00011fe0  adrp     x2, #0x28000
00011fe4  add      x2, x2, #0x7d4
00011fe8  adrp     x3, #0x71000
00011fec  add      x3, x3, #0x790
00011ff0  mov      x0, x19
00011ff4  bl       #0x460a4   ; MSHookMessageEx(SBUIController, updateBatteryState:, IMP=0x287d4)
00011ff8  adrp     x8, #0x70000
00011ffc  ldrb     w8, [x8, #0x6fe]
00012000  cbz      w8, #0x12068
00012004  str      wzr, [sp, #0x190]
00012008  adrp     x19, #0x64000
0001200c  ldr      x19, [x19, #0x278]
00012010  mov      x0, x19
00012014  bl       #0x46404
00012018  adrp     x0, #0x55000
0001201c  add      x0, x0, #0x402
00012020  adrp     x3, #0x64000
00012024  add      x3, x3, #0x628
00012028  add      x1, sp, #0x190
0001202c  mov      x2, x19
00012030  bl       #0x462e4
00012034  adrp     x0, #0x64000
00012038  ldr      x0, [x0, #0x278]
0001203c  bl       #0x463f8
00012040  mov      w8, #1
00012044  str      x8, [sp, #0x290]
00012048  ldr      w0, [sp, #0x190]
0001204c  add      x1, sp, #0x290
00012050  bl       #0x462cc
00012054  ldr      x8, [sp, #0x290]
00012058  cmp      x8, #0
0001205c  cset     w8, eq
00012060  adrp     x9, #0x71000
00012064  strb     w8, [x9, #0x798]
00012068  ldr      x27, [sp, #0x58]
0001206c  bl       #0x45f6c
00012070  adrp     x2, #0x14000
00012074  add      x2, x2, #0x934
00012078  adrp     x3, #0x64000
0001207c  add      x3, x3, #0xf48
00012080  mov      x1, #0
00012084  mov      x4, #0
00012088  mov      w5, #4
0001208c  bl       #0x45f60
00012090  b        #0xbf00
00012094  adrp     x0, #0x71000
00012098  add      x0, x0, #0x8e0
0001209c  adrp     x1, #0x64000
000120a0  add      x1, x1, #0xb78
000120a4  bl       #0x46218
000120a8  b        #0xd9d0
000120ac  adrp     x0, #0x71000
000120b0  add      x0, x0, #0x898
000120b4  adrp     x1, #0x64000
000120b8  add      x1, x1, #0xa58
000120bc  bl       #0x46218
000120c0  b        #0xc3b8
000120c4  adrp     x0, #0x79000
000120c8  add      x0, x0, #0x970
000120cc  adrp     x1, #0x64000
000120d0  add      x1, x1, #0xe88
000120d4  bl       #0x46218
000120d8  b        #0x11680
000120dc  adrp     x0, #0x71000
000120e0  add      x0, x0, #0x898
000120e4  adrp     x1, #0x64000
000120e8  add      x1, x1, #0xa58
000120ec  bl       #0x46218
000120f0  b        #0xdb10
000120f4  b        #0x127a4
000120f8  b        #0x127a4
000120fc  b        #0x127a4
00012100  b        #0x127a4
00012104  b        #0x127a4
00012108  b        #0x127a4
0001210c  b        #0x127a4
00012110  b        #0x127a4
00012114  b        #0x127a4
00012118  b        #0x127a4
0001211c  b        #0x127a4
00012120  b        #0x127a4
00012124  b        #0x127a4
00012128  b        #0x127a4
0001212c  b        #0x127a4
00012130  b        #0x127a4
00012134  b        #0x127a4
00012138  b        #0x127a4
0001213c  b        #0x127a4
00012140  b        #0x127a4
00012144  b        #0x127a4
00012148  b        #0x127a4
0001214c  b        #0x127a4
00012150  b        #0x127a4
00012154  b        #0x127a4
00012158  b        #0x127a4
0001215c  b        #0x127a4
00012160  b        #0x122b4
00012164  b        #0x127a4
00012168  b        #0x127a4
0001216c  b        #0x127a4
00012170  b        #0x127a4
00012174  b        #0x127a4
00012178  b        #0x127a4
0001217c  b        #0x127a4
00012180  b        #0x127a4
00012184  b        #0x127a4
00012188  b        #0x127a4
0001218c  b        #0x127a4
00012190  b        #0x12694
00012194  b        #0x127a4
00012198  b        #0x127a4
0001219c  b        #0x127a4
000121a0  b        #0x127a4
000121a4  b        #0x127a4
000121a8  b        #0x127a4
000121ac  b        #0x127a4
000121b0  b        #0x127a4
000121b4  b        #0x127a4
000121b8  b        #0x127a4
000121bc  b        #0x127a4
000121c0  b        #0x127a4
000121c4  b        #0x127a4
000121c8  b        #0x127a4
000121cc  b        #0x127a4
000121d0  b        #0x127a4
000121d4  b        #0x127a4
000121d8  b        #0x127a4
000121dc  b        #0x127a4
000121e0  b        #0x127a4
000121e4  b        #0x127a4
000121e8  b        #0x127a4
000121ec  b        #0x127a4
000121f0  b        #0x127a4
000121f4  b        #0x127a4
000121f8  b        #0x127a4
000121fc  b        #0x127a4
00012200  b        #0x127a4
00012204  b        #0x127a4
00012208  b        #0x127a4
0001220c  b        #0x127a4
00012210  b        #0x127a4
00012214  b        #0x127a4
00012218  b        #0x127a4
0001221c  b        #0x127a4
00012220  b        #0x127a4
00012224  b        #0x127a4
00012228  b        #0x127a4
0001222c  b        #0x127a4
00012230  b        #0x127a4
00012234  b        #0x127a4
00012238  b        #0x127a4
0001223c  b        #0x127a4
00012240  b        #0x127a4
00012244  b        #0x127a4
00012248  b        #0x127a4
0001224c  b        #0x127a4
00012250  b        #0x127a4
00012254  b        #0x127a4
00012258  b        #0x127a4
0001225c  b        #0x127a4
00012260  b        #0x127a4
00012264  b        #0x127a4
00012268  b        #0x127a4
0001226c  b        #0x127a4
00012270  b        #0x127a4
00012274  b        #0x127a4
00012278  b        #0x127a4
0001227c  b        #0x127a4
00012280  b        #0x127a4
00012284  b        #0x127a4
00012288  b        #0x127a4
0001228c  b        #0x127a4
00012290  b        #0x127a4
00012294  b        #0x127a4
00012298  mov      x20, x0
0001229c  adrp     x0, #0x64000
000122a0  ldr      x0, [x0, #0x278]
000122a4  b        #0x122bc
000122a8  b        #0x127a4
000122ac  b        #0x127a4
000122b0  b        #0x127a4
000122b4  mov      x20, x0
000122b8  mov      x0, x19
000122bc  bl       #0x463f8
000122c0  b        #0x12898
000122c4  b        #0x127a4
000122c8  b        #0x127a4
000122cc  b        #0x127a4
000122d0  b        #0x127a4
000122d4  b        #0x127a4
000122d8  b        #0x127a4
000122dc  b        #0x127a4
000122e0  b        #0x127a4
000122e4  b        #0x127a4
000122e8  b        #0x127a4
000122ec  b        #0x127a4
000122f0  b        #0x127a4
000122f4  b        #0x127a4
000122f8  b        #0x127a4
000122fc  b        #0x127a4
00012300  b        #0x127a4
00012304  b        #0x127a4
00012308  b        #0x127a4
0001230c  b        #0x127a4
00012310  b        #0x127a4
00012314  b        #0x127a4
00012318  b        #0x127a4
0001231c  b        #0x127a4
00012320  b        #0x127a4
00012324  b        #0x127a4
00012328  b        #0x127a4
0001232c  b        #0x127a4
00012330  b        #0x127a4
00012334  b        #0x127a4
00012338  b        #0x127a4
0001233c  b        #0x127a4
00012340  b        #0x127a4
00012344  b        #0x127a4
00012348  b        #0x127a4
0001234c  b        #0x127a4
00012350  b        #0x127a4
00012354  b        #0x127a4
00012358  b        #0x127a4
0001235c  b        #0x127a4
00012360  b        #0x127a4
00012364  b        #0x127a4
00012368  b        #0x127a4
0001236c  b        #0x127a4
00012370  b        #0x127a4
00012374  b        #0x127a4
00012378  b        #0x127a4
0001237c  b        #0x127a4
00012380  b        #0x127a4
00012384  b        #0x127a4
00012388  b        #0x127a4
0001238c  b        #0x127a4
00012390  b        #0x127a4
00012394  b        #0x127a4
00012398  b        #0x127a4
0001239c  b        #0x127a4
000123a0  b        #0x127a4
000123a4  b        #0x127a4
000123a8  b        #0x127a4
000123ac  b        #0x127a4
000123b0  b        #0x127a4
000123b4  b        #0x127a4
000123b8  b        #0x127a4
000123bc  b        #0x127a4
000123c0  b        #0x127a4
000123c4  b        #0x127a4
000123c8  b        #0x127a4
000123cc  b        #0x127a4
000123d0  b        #0x127a4
000123d4  b        #0x127a4
000123d8  b        #0x127a4
000123dc  b        #0x127a4
000123e0  b        #0x127a4
000123e4  b        #0x127a4
000123e8  b        #0x127a4
000123ec  b        #0x127a4
000123f0  b        #0x127a4
000123f4  b        #0x127a4
000123f8  b        #0x127a4
000123fc  b        #0x127a4
00012400  b        #0x127a4
00012404  b        #0x127a4
00012408  b        #0x127a4
0001240c  b        #0x127a4
00012410  b        #0x127a4
00012414  b        #0x127a4
00012418  b        #0x127a4
0001241c  b        #0x127a4
00012420  b        #0x127a4
00012424  b        #0x127a4
00012428  b        #0x127a4
0001242c  b        #0x127a4
00012430  b        #0x127a4
00012434  b        #0x127a4
00012438  b        #0x127a4
0001243c  b        #0x127a4
00012440  b        #0x127a4
00012444  b        #0x127a4
00012448  b        #0x127a4
0001244c  b        #0x127a4
00012450  b        #0x127a4
00012454  b        #0x127a4
00012458  b        #0x127a4
0001245c  b        #0x127a4
00012460  b        #0x127a4
00012464  b        #0x127a4
00012468  b        #0x127a4
0001246c  b        #0x127a4
00012470  b        #0x127a4
00012474  b        #0x127a4
00012478  b        #0x127a4
0001247c  b        #0x127a4
00012480  b        #0x127a4
00012484  b        #0x127a4
00012488  b        #0x127a4
0001248c  b        #0x127a4
00012490  b        #0x127a4
00012494  b        #0x127a4
00012498  b        #0x127a4
0001249c  b        #0x127a4
000124a0  b        #0x127a4
000124a4  b        #0x127a4
000124a8  b        #0x127a4
000124ac  b        #0x127a4
000124b0  b        #0x127a4
000124b4  b        #0x127a4
000124b8  b        #0x127a4
000124bc  b        #0x127a4
000124c0  b        #0x127a4
000124c4  b        #0x127a4
000124c8  b        #0x127a4
000124cc  b        #0x127a4
000124d0  b        #0x127a4
000124d4  b        #0x127a4
000124d8  b        #0x127a4
000124dc  b        #0x127a4
000124e0  b        #0x127a4
000124e4  b        #0x127a4
000124e8  b        #0x127a4
000124ec  b        #0x12694
000124f0  b        #0x127a4
000124f4  b        #0x127a4
000124f8  b        #0x127a4
000124fc  b        #0x127a4
00012500  b        #0x127a4
00012504  b        #0x127a4
00012508  b        #0x127a4
0001250c  b        #0x127a4
00012510  b        #0x127a4
00012514  b        #0x127a4
00012518  b        #0x127a4
0001251c  b        #0x127a4
00012520  b        #0x127a4
00012524  b        #0x127a4
00012528  b        #0x127a4
0001252c  b        #0x127a4
00012530  b        #0x127a4
00012534  b        #0x127a4
00012538  b        #0x127a4
0001253c  b        #0x127a4
00012540  b        #0x127a4
00012544  b        #0x127a4
00012548  b        #0x127a4
0001254c  b        #0x127a4
00012550  b        #0x127a4
00012554  b        #0x127a4
00012558  b        #0x127a4
0001255c  b        #0x127a4
00012560  b        #0x127a4
00012564  b        #0x127a4
00012568  b        #0x127a4
0001256c  b        #0x127a4
00012570  b        #0x127a4
00012574  b        #0x127a4
00012578  b        #0x127a4
0001257c  b        #0x127a4
00012580  b        #0x127a4
00012584  b        #0x127a4
00012588  b        #0x127a4
0001258c  b        #0x127a4
00012590  b        #0x127a4
00012594  b        #0x127a4
00012598  b        #0x127a4
0001259c  b        #0x127a4
000125a0  b        #0x127a4
000125a4  b        #0x127a4
000125a8  b        #0x127a4
000125ac  b        #0x127a4
000125b0  b        #0x127a4
000125b4  b        #0x127a4
000125b8  b        #0x127a4
000125bc  b        #0x127a4
000125c0  b        #0x127a4
000125c4  b        #0x127a4
000125c8  b        #0x127a4
000125cc  b        #0x127a4
000125d0  b        #0x127a4
000125d4  b        #0x12644
000125d8  b        #0x1269c
000125dc  b        #0x12644
000125e0  b        #0x12644
000125e4  mov      x23, x0
000125e8  b        #0x1286c
000125ec  b        #0x12860
000125f0  mov      x23, x0
000125f4  b        #0x12874
000125f8  mov      x20, x0
000125fc  mov      x0, x21
00012600  b        #0x1288c
00012604  b        #0x12694
00012608  b        #0x1269c
0001260c  mov      x20, x0
00012610  b        #0x12808
00012614  b        #0x127e4
00012618  mov      x21, x0
0001261c  mov      x0, x20
00012620  bl       #0x463f8
00012624  b        #0x1262c
00012628  mov      x21, x0
0001262c  mov      x0, x19
00012630  bl       #0x463f8
00012634  mov      x20, x21
00012638  b        #0x127f0
0001263c  b        #0x126fc
00012640  b        #0x127e4
00012644  mov      x20, x0
00012648  b        #0x12810
0001264c  b        #0x12884
00012650  b        #0x12658
00012654  b        #0x12830
00012658  mov      x20, x0
0001265c  mov      x0, x24
00012660  b        #0x12840
00012664  b        #0x12830
00012668  b        #0x12838
0001266c  b        #0x12830
00012670  mov      x20, x0
00012674  str      x19, [sp, #0x20]
00012678  b        #0x12808
0001267c  b        #0x12884
00012680  b        #0x12694
00012684  b        #0x1269c
00012688  b        #0x12830
0001268c  b        #0x12830
00012690  b        #0x12884
00012694  mov      x20, x0
00012698  b        #0x12890
0001269c  mov      x20, x0
000126a0  b        #0x12800
000126a4  mov      x20, x0
000126a8  mov      x0, x19
000126ac  b        #0x127f4
000126b0  mov      x20, x0
000126b4  b        #0x127f8
000126b8  mov      x20, x0
000126bc  mov      x19, x24
000126c0  b        #0x12890
000126c4  b        #0x12884
000126c8  mov      x19, x0
000126cc  mov      x0, x20
000126d0  bl       #0x463f8
000126d4  mov      x20, x19
000126d8  b        #0x127b0
000126dc  b        #0x127ac
000126e0  mov      x24, x0
000126e4  b        #0x12710
000126e8  b        #0x127a0
000126ec  b        #0x127a0
000126f0  mov      x20, x0
000126f4  mov      x0, x19
000126f8  b        #0x1289c
000126fc  mov      x20, x0
00012700  b        #0x127f0
00012704  mov      x24, x0
00012708  mov      x0, x20
0001270c  bl       #0x463f8
00012710  mov      x0, x19
00012714  bl       #0x463f8
00012718  b        #0x12774
0001271c  b        #0x12860
00012720  mov      x24, x0
00012724  b        #0x12784
00012728  mov      x24, x0
0001272c  b        #0x1278c
00012730  mov      x24, x0
00012734  b        #0x1277c
00012738  mov      x20, x0
0001273c  b        #0x127c0
00012740  mov      x20, x0
00012744  mov      x0, x19
00012748  b        #0x127b4
0001274c  mov      x20, x0
00012750  b        #0x127b8
00012754  mov      x20, x0
00012758  mov      x0, x19
0001275c  b        #0x127bc
00012760  mov      x20, x0
00012764  mov      x0, x19
00012768  bl       #0x463f8
0001276c  b        #0x127b0
00012770  mov      x24, x0
00012774  mov      x0, x25
00012778  bl       #0x463f8
0001277c  mov      x0, x23
00012780  bl       #0x463f8
00012784  mov      x0, x22
00012788  bl       #0x463f8
0001278c  mov      x0, x21
00012790  bl       #0x463f8
00012794  mov      x20, x24
00012798  b        #0x127e8
0001279c  b        #0x12884
000127a0  str      x27, [sp, #0x58]
000127a4  mov      x20, x0
000127a8  b        #0x12898
000127ac  mov      x20, x0
000127b0  mov      x0, x23
000127b4  bl       #0x463f8
000127b8  mov      x0, x21
000127bc  bl       #0x463f8
000127c0  mov      x0, x25
000127c4  bl       #0x463f8
000127c8  b        #0x127e8
000127cc  b        #0x12830
000127d0  b        #0x12884
000127d4  mov      x20, x0
000127d8  mov      x0, x25
000127dc  b        #0x12840
000127e0  b        #0x12830
000127e4  mov      x20, x0
000127e8  ldr      x0, [sp, #0x68]
000127ec  bl       #0x463f8
000127f0  ldr      x0, [sp, #0x78]
000127f4  bl       #0x463f8
000127f8  ldr      x0, [sp, #0x60]
000127fc  bl       #0x463f8
00012800  ldr      x0, [sp, #0x48]
00012804  bl       #0x463f8
00012808  ldr      x0, [sp, #0x20]
0001280c  bl       #0x463f8
00012810  ldr      x19, [sp, #0x28]
00012814  b        #0x12890
00012818  mov      x20, x0
0001281c  mov      x0, x24
00012820  bl       #0x463f8
00012824  b        #0x1283c
00012828  b        #0x12884
0001282c  b        #0x12838
00012830  mov      x20, x0
00012834  b        #0x12844
00012838  mov      x20, x0
0001283c  mov      x0, x22
00012840  bl       #0x463f8
00012844  mov      x0, x21
00012848  bl       #0x463f8
0001284c  b        #0x12888
00012850  mov      x23, x0
00012854  mov      x0, x24
00012858  bl       #0x463f8
0001285c  b        #0x12864
00012860  mov      x23, x0
00012864  mov      x0, x22
00012868  bl       #0x463f8
0001286c  mov      x0, x21
00012870  bl       #0x463f8
00012874  mov      x0, x20
00012878  bl       #0x463f8
0001287c  mov      x20, x23
00012880  b        #0x12890
00012884  mov      x20, x0
00012888  mov      x0, x23
0001288c  bl       #0x463f8
00012890  mov      x0, x19
00012894  bl       #0x463f8
00012898  ldr      x0, [sp, #0x58]
0001289c  bl       #0x463f8
000128a0  mov      x0, x20
000128a4  bl       #0x46134