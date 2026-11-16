// FUN_180351aa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180351aa0 */

undefined8 * FUN_180351aa0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar3 = *param_1;
  lVar7 = (param_1[1] - lVar3) / 0x34;
  if (lVar7 == 0x4ec4ec4ec4ec4ec) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x34;
  if (0x4ec4ec4ec4ec4ec - (uVar2 >> 1) < uVar2) {
    uVar9 = 0x4ec4ec4ec4ec4ec;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x4ec4ec4ec4ec4ec < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar9 * 0x34);
  puVar10 = (undefined8 *)(((param_2 - lVar3) / 0x34) * 0x34 + lVar7);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar10 = *param_3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  uVar4 = param_3[5];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar4;
  *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(param_3 + 6);
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar3;
    lVar8 = lVar7;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(lVar7,lVar3,param_2 - lVar3);
    lVar11 = param_1[1] - param_2;
    lVar8 = (longlong)puVar10 + 0x34;
  }
  FUN_18063aed0(lVar8,param_2,lVar11);
  FUN_180352450(param_1,lVar7,uVar1,uVar9);
  return puVar10;
}



