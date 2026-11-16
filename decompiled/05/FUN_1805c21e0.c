// FUN_1805c21e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c21e0 */

undefined8 FUN_1805c21e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int local_res8 [2];
  
  iVar9 = *(int *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x30);
  puVar11 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + 10);
  local_res8[0] = 0;
  uVar7 = iVar9 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar7) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar6 = FUN_18057ac40(param_2,4,*(uint *)(param_1 + 0x2c),uVar7,*puVar1,local_res8);
    *puVar1 = uVar6;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar7;
  }
  puVar8 = (uint *)*puVar1;
  if (iVar9 != 0) {
    do {
      uVar2 = puVar11[1];
      uVar3 = *puVar11;
      uVar4 = puVar11[2];
      uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar11[3],puVar11[4]),puVar11[5]),puVar11[6]);
      uVar10 = CONCAT31(CONCAT21(CONCAT11(puVar11[7],puVar11[8]),puVar11[9]),puVar11[10]);
      if (((uVar7 != 0) &&
          (iVar5 = FUN_1805cc940((ulonglong)uVar7 + *(longlong *)(param_1 + 0x18),param_3),
          iVar5 != 0)) ||
         ((uVar10 != 0 &&
          (iVar5 = FUN_1805cc9e0((ulonglong)uVar10 + *(longlong *)(param_1 + 0x18),param_3),
          iVar5 != 0)))) {
        *puVar8 = (uint)CONCAT21(CONCAT11(uVar3,uVar2),uVar4);
        puVar8 = puVar8 + 1;
      }
      iVar9 = iVar9 + -1;
      puVar11 = puVar11 + 0xb;
    } while (iVar9 != 0);
  }
  *puVar8 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



