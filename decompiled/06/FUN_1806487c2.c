// FUN_1806487c2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806487c2 */

undefined8 FUN_1806487c2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  *(undefined1 (*) [16])(param_2 + 0x40) = (undefined1  [16])0x0;
  FUN_1805fd2c0(param_2 + 0x40);
  FUN_1805fd2d0(param_2 + 0x40);
  FUN_180163cd0(uVar1,param_2 + 0x40);
  FUN_1805fd358(param_2 + 0x40);
  return 0;
}



