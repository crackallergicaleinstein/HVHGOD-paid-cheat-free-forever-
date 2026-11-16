// FUN_1805cccf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cccf0 */

uint * FUN_1805cccf0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int local_res8 [2];
  
  puVar6 = param_2 + 4;
  local_res8[0] = 0;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  uVar10 = uVar7 + 1;
  if (*(uint *)(param_1 + 0x2c) < uVar10) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar5 = FUN_18057ac40(param_3,4,*(uint *)(param_1 + 0x2c),uVar10,*(undefined8 *)(param_1 + 0x30)
                          ,local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    if (local_res8[0] != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x2c) = uVar10;
  }
  puVar4 = *(uint **)(param_1 + 0x30);
  uVar10 = 0;
  if (uVar7 != 0) {
    uVar9 = (ulonglong)uVar7;
    puVar8 = puVar4;
    do {
      uVar3 = *puVar6;
      puVar1 = puVar6 + 1;
      puVar2 = puVar6 + 2;
      puVar6 = puVar6 + 5;
      *puVar8 = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 1;
      uVar10 = uVar7;
    } while (uVar9 != 0);
  }
  puVar4[uVar10] = 0;
  return puVar4;
}



