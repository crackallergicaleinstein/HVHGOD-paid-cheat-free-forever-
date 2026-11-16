// FUN_180589710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589710 */

void FUN_180589710(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



