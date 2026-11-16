// FUN_1804c51f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c51f0 */

void FUN_1804c51f0(uint param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = DAT_180bb8ae8;
  if ((param_1 >> 0xc & 1) != 0) {
    *(undefined4 *)(DAT_180bb8ae8 + 0x1cec) = param_2;
    *(undefined4 *)(lVar1 + 0x1ce8) = param_2;
    *(undefined2 *)(lVar1 + 0x1cf0) = 0;
  }
  if ((param_1 >> 0xd & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1cf8) = param_2;
    *(undefined4 *)(lVar1 + 0x1cf4) = param_2;
    *(undefined2 *)(lVar1 + 0x1cfc) = 0;
  }
  if ((param_1 >> 0xe & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1d04) = param_2;
    *(undefined4 *)(lVar1 + 0x1d00) = param_2;
    *(undefined2 *)(lVar1 + 0x1d08) = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x1d10) = param_2;
    *(undefined4 *)(lVar1 + 0x1d0c) = param_2;
    *(undefined2 *)(lVar1 + 0x1d14) = 0;
  }
  if ((param_1 & 0xffff0fff) != 0) {
    puVar2 = (undefined4 *)FUN_1804af210();
    puVar2[1] = param_2;
    *puVar2 = param_2;
    *(undefined2 *)(puVar2 + 2) = 0;
  }
  return;
}



