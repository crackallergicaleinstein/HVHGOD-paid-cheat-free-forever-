// FUN_1804c6660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6660 */

void FUN_1804c6660(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x14d0);
  if (param_1 == 0.0) {
    param_1 = *(float *)(lVar2 + 0xcf4);
  }
  param_1 = param_1 + *(float *)(lVar1 + 0x15c);
  *(float *)(lVar1 + 0x15c) = param_1;
  *(float *)(lVar1 + 0x118) = param_1 + *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x160);
  return;
}



