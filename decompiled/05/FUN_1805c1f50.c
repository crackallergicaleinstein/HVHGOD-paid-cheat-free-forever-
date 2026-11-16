// FUN_1805c1f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1f50 */

undefined8 FUN_1805c1f50(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3 = (undefined1 *)FUN_1805ccb40(lVar1 + 6,param_4);
  if (puVar3 != (undefined1 *)0x0) {
    uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
    uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
    if ((uVar6 != 0) && (iVar2 = FUN_1805cc940((ulonglong)uVar6 + lVar1,param_3), iVar2 != 0)) {
      uVar4 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
      return uVar4;
    }
    if (uVar5 != 0) {
      uVar4 = FUN_1805cc9e0((ulonglong)uVar5 + lVar1,param_3);
      return uVar4;
    }
  }
  return 0;
}



