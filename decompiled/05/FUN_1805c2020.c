// FUN_1805c2020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2020 */

int FUN_1805c2020(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_1805ccb40(lVar1 + 6,param_3);
  if (puVar3 != (undefined1 *)0x0) {
    uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
    uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
    if (uVar5 != 0) {
      iVar2 = FUN_1805cc940((ulonglong)uVar5 + lVar1,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
    if (uVar4 != 0) {
      iVar2 = FUN_1805cc9e0((ulonglong)uVar4 + lVar1,param_2);
      return (iVar2 != 0) - 1;
    }
  }
  return -1;
}



