// FUN_18059ed50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059ed50 */

undefined8 FUN_18059ed50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) < lVar1 + 0x20U) {
    return 0xa1;
  }
  uVar3 = FUN_1805a1260(param_1,lVar1);
  uVar3 = FUN_1805778f0(uVar3);
  *(undefined4 *)(lVar2 + 0x50) = uVar3;
  uVar3 = FUN_1805a1260(param_1,lVar1 + 8);
  uVar3 = FUN_1805778f0(uVar3);
  *(undefined4 *)(lVar2 + 0x54) = uVar3;
  uVar3 = FUN_1805a1260(param_1,lVar1 + 0x10);
  uVar3 = FUN_1805778f0(uVar3);
  *(undefined4 *)(lVar2 + 0x58) = uVar3;
  uVar3 = FUN_1805a1260(param_1,lVar1 + 0x18);
  uVar3 = FUN_1805778f0(uVar3);
  *(undefined4 *)(lVar2 + 0x5c) = uVar3;
  return 0;
}



