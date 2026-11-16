// FUN_1805c2100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c2100 */

uint * FUN_1805c2100(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int local_res8 [2];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar9 = (ulonglong)uVar4;
  puVar7 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + 10);
  local_res8[0] = 0;
  uVar10 = uVar4 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar10) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    uVar6 = FUN_18057ac40(param_2,4,*(uint *)(param_1 + 0x2c),uVar10,*(undefined8 *)(param_1 + 0x30)
                          ,local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar10;
  }
  puVar5 = *(uint **)(param_1 + 0x30);
  uVar10 = 0;
  if (uVar4 != 0) {
    puVar8 = puVar5;
    do {
      uVar3 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar2 = puVar7 + 2;
      puVar7 = puVar7 + 0xb;
      *puVar8 = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 1;
      uVar10 = uVar4;
    } while (uVar9 != 0);
  }
  puVar5[uVar10] = 0;
  return puVar5;
}



