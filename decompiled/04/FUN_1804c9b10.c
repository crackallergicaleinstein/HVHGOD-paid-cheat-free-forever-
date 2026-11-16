// FUN_1804c9b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9b10 */

void FUN_1804c9b10(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  lVar1 = DAT_180bb8ae8;
  uVar3 = param_3 | 0x10;
  if ((param_3 >> 10 & 1) == 0) {
    uVar3 = param_3;
  }
  *(undefined4 *)(DAT_180bb8ae8 + 0x20f0) = param_1;
  *(undefined4 *)(lVar1 + 0x20f4) = param_1;
  *(undefined2 *)(lVar1 + 0x20e0) = 0x101;
  uVar2 = 0;
  *(undefined4 *)(lVar1 + 0x20f8) = param_2;
  *(uint *)(lVar1 + 0x20e4) = uVar3;
  *(undefined4 *)(lVar1 + 0x20e8) = param_4;
  *(undefined1 *)(lVar1 + 0x20e2) = 0;
  if ((uVar3 >> 9 & 1) == 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x130);
  }
  *(undefined8 *)(lVar1 + 0x2128) = 0;
  *(undefined8 *)(lVar1 + 0x2130) = 0;
  *(undefined4 *)(lVar1 + 0x2148) = 0;
  *(undefined8 *)(lVar1 + 0x2158) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x2154) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2150) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x214c) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2160) = 0;
  *(undefined8 *)(lVar1 + 0x2168) = 0;
  *(undefined4 *)(lVar1 + 0x2180) = 0;
  *(undefined8 *)(lVar1 + 0x2190) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x218c) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2188) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2184) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2198) = 0;
  *(undefined8 *)(lVar1 + 0x21a0) = 0;
  *(undefined4 *)(lVar1 + 0x21b8) = 0;
  *(undefined8 *)(lVar1 + 0x21c8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21c4) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21c0) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21bc) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x21d0) = 0;
  *(undefined8 *)(lVar1 + 0x21d8) = 0;
  *(undefined4 *)(lVar1 + 0x21f0) = 0;
  *(undefined8 *)(lVar1 + 0x2200) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21fc) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21f8) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21f4) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x20ec) = uVar2;
  *(undefined4 *)(lVar1 + 0x2124) = 0;
  if ((*(char *)(lVar1 + 0x20e1) == '\0') && (*(char *)(lVar1 + 0x20a2) == '\0')) {
    *(undefined1 *)(lVar1 + 0x20a1) = 0;
    return;
  }
  *(undefined1 *)(lVar1 + 0x20a1) = 1;
  return;
}



