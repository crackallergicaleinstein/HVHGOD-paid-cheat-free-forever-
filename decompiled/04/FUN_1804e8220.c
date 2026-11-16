// FUN_1804e8220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e8220 */

longlong FUN_1804e8220(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 != 0xffffffff) {
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      FUN_1804e7950();
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if ((((int)(param_2 & 0x7ffff) < *(int *)(lVar2 + 0x70)) &&
        (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)(param_2 & 0x7ffff) * 4),
        ((uVar1 ^ param_2) & 0x3ff00000) == 0)) && ((uVar1 >> 0x1e & 1) != 0)) {
      return *(longlong *)(lVar2 + 0x68) + ((longlong)(int)(uVar1 << 0xc) >> 0xc) * 8;
    }
  }
  return 0;
}



