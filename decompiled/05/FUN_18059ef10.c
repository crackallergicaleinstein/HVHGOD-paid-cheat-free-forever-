// FUN_18059ef10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059ef10 */

undefined8 FUN_18059ef10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) < lVar1 + 0x18U) {
    return 0xa1;
  }
  uVar3 = FUN_1805a13c0(param_1,lVar1);
  *(undefined4 *)(lVar2 + 0x80) = uVar3;
  uVar3 = FUN_1805a13c0(param_1,lVar1 + 8);
  *(undefined4 *)(lVar2 + 0x84) = uVar3;
  uVar3 = FUN_1805a13c0(param_1,lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x88) = uVar3;
  return 0;
}



