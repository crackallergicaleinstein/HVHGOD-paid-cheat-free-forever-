// FUN_180454920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454920 */

uint FUN_180454920(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_1804548a0();
  param_1 = param_1 ^ 0x80000000;
  iVar4 = (param_2 ^ 0x80000000) - param_1;
  if (iVar4 == -1) {
    iVar4 = FUN_1804549c0(uVar2);
    return iVar4 + param_1 ^ 0x80000000;
  }
  uVar5 = iVar4 + 1;
  uVar1 = FUN_1804549c0(uVar2);
  lVar3 = (ulonglong)uVar1 * (ulonglong)uVar5;
  uVar1 = (uint)lVar3;
  if (uVar1 < uVar5) {
    while (uVar1 < -uVar5 % uVar5) {
      uVar1 = FUN_1804549c0(uVar2);
      lVar3 = (ulonglong)uVar1 * (ulonglong)uVar5;
      uVar1 = (uint)lVar3;
    }
  }
  return (int)((ulonglong)lVar3 >> 0x20) + param_1 ^ 0x80000000;
}



