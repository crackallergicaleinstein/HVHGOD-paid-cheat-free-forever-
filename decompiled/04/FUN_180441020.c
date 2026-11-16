// FUN_180441020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180441020 */

undefined8 FUN_180441020(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  ulonglong uVar1;
  
  if (0xf < (uint)param_4 + (uint)*(byte *)(param_2 + 8)) {
    return 0x80200002;
  }
  uVar1 = (ulonglong)param_4;
  if (*(ulonglong *)(param_1 + 0x18) < uVar1) {
    return 0x80200000;
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) + param_4;
  FUN_18063aed0(param_3,*(undefined8 *)(param_1 + 0x10),param_4);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar1;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) - uVar1;
  return 0x100000;
}



