// FUN_180338630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338630 */

undefined8 * FUN_180338630(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  lVar11 = (param_1[1] - lVar4) / 0x28;
  if (lVar11 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar11 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x28;
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar10 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar10 = uVar1;
    if (uVar1 <= uVar3) {
      uVar10 = uVar3;
    }
    if (0x666666666666666 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar10 * 0x28);
  puVar2 = puVar8 + ((param_2 - lVar4) / 0x28) * 5;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = param_3[4];
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar4;
    puVar9 = puVar8;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(puVar8,lVar4,param_2 - lVar4);
    lVar11 = param_1[1] - param_2;
    puVar9 = puVar2 + 5;
  }
  FUN_18063aed0(puVar9,param_2,lVar11);
  FUN_180338920(param_1,puVar8,uVar1,uVar10);
  return puVar2;
}



