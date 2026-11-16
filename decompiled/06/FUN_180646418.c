// FUN_180646418 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646418 */

undefined8 FUN_180646418(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    *(undefined1 (*) [16])(param_2 + 0x20) = (undefined1  [16])0x0;
    FUN_1805fd2c0(param_2 + 0x20);
    FUN_1805fd2d0(param_2 + 0x20);
    FUN_180163cd0(lVar1,param_2 + 0x20);
    FUN_1805fd358(param_2 + 0x20);
  }
  return 0;
}



