// FUN_180439480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180439480 */

undefined8 * FUN_180439480(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  lVar7 = (param_1[1] - lVar3) / 0x2c;
  if (lVar7 == 0x5d1745d1745d174) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x2c;
  if (0x5d1745d1745d174 - (uVar2 >> 1) < uVar2) {
    uVar9 = 0x5d1745d1745d174;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x5d1745d1745d174 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar9 * 0x2c);
  puVar10 = (undefined8 *)(((param_2 - lVar3) / 0x2c) * 0x2c + lVar7);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar10 = *param_3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  puVar10[4] = param_3[4];
  *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(param_3 + 5);
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar3;
    lVar8 = lVar7;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(lVar7,lVar3,param_2 - lVar3);
    lVar11 = param_1[1] - param_2;
    lVar8 = (longlong)puVar10 + 0x2c;
  }
  FUN_18063aed0(lVar8,param_2,lVar11);
  FUN_1804395e0(param_1,lVar7,uVar1,uVar9);
  return puVar10;
}



