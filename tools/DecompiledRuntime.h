//
//  DecompiledRuntime.h
//  Minimal typedefs so the decompiler output parses as C/Objective-C.
//
//  Ghidra emits its own pseudo-types (undefined1/4/8, ID, code, ...). This header
//  gives them real definitions so the recovered bodies can be compiled and stepped
//  through while you are cleaning them up.
//

#ifndef DECOMPILED_RUNTIME_H
#define DECOMPILED_RUNTIME_H

#import <objc/runtime.h>
#import <Foundation/Foundation.h>

typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef signed char smchar;
typedef id ID;
typedef void (*code)(void);

// QuartzCore / C++ objects the binaries manipulate.
typedef struct CALayerOpaque *CALayerRef;
typedef struct CAFilterOpaque *CAFilterRef;

// Substrate
extern void MSHookMessageEx(Class cls, SEL sel, IMP imp, IMP *result);
extern void MSHookFunction(void *symbol, void *hook, void **result);

#endif
