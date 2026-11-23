.text
.global sx_init
sx_init:
 pacibsp
 stp x29,x30,[sp,#-48]!
 mov x29,sp
 stp x19,x20,[sp,#16]
 bl original_init
 adr x0,grid_name
 bl get_class
 cbz x0,done_init
 mov x19,x0
 adr x0,radius_name
 bl register_sel
 mov x20,x0
 mov x1,x0
 mov x0,x19
 bl get_method
 cbz x0,done_init
 add x1,sp,#32
 mov x2,#8
 str xzr,[sp,#32]
 bl get_return_type
 ldrb w8,[sp,#32]
 cmp w8,#100
 b.ne done_init
 ldrb w8,[sp,#33]
 cbnz w8,done_init
 mov x0,x19
 mov x1,x20
 adr x2,sx_radius
 paciza x2
 adrp x3,state
 add x3,x3,:lo12:state
 bl hook_message
done_init:
 ldp x19,x20,[sp,#16]
 ldp x29,x30,[sp],#48
 retab
// Replaces the gate store in the existing preferences reload function.
.global sx_reload
sx_reload:
 strb w0,[x8,#0x108]
 pacibsp
 stp x29,x30,[sp,#-32]!
 mov x29,sp
 stp x19,x20,[sp,#16]
 adr x0,string_class
 bl get_class
 mov x20,x0
 adr x0,utf8_selector
 bl register_sel
 mov x1,x0
 mov x0,x20
 adr x2,radius_key
 bl msg_send
 mov x1,x0
 mov x0,x19
 fmov d0,xzr
 bl read_double
 adrp x8,state
 str d0,[x8,#:lo12:requested]
 ldp x19,x20,[sp,#16]
 ldp x29,x30,[sp],#32
 retab
sx_radius:
 pacibsp
 stp x29,x30,[sp,#-16]!
 mov x29,sp
 adrp x8,state
 ldr x8,[x8,#:lo12:state]
 cbz x8,no_original
 blraaz x8
 adrp x8,gate
 ldrb w8,[x8,#:lo12:gate]
 cbz w8,radius_done
 adrp x8,state
 ldr d1,[x8,#:lo12:requested]
 fcmp d1,#0.0
 b.le radius_done
 b.vs radius_done
 // Reject infinity by checking the exponent bits.
 fmov x8,d1
 ubfx x8,x8,#52,#11
 cmp x8,#2047
 b.eq radius_done
 mov x8,#0x404e000000000000
 fmov d2,x8
 fmin d0,d1,d2
 b radius_done
no_original:
 fmov d0,xzr
radius_done:
 ldp x29,x30,[sp],#16
 retab
.p2align 3
grid_name: .asciz "SBGridLayoutSwitcherModifier"
radius_name: .asciz "_cornerRadius"
string_class: .asciz "NSString"
utf8_selector: .asciz "stringWithUTF8String:"
radius_key: .asciz "iPadCardSwitcherCornerRadius"
