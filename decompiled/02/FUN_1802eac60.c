// FUN_1802eac60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eac60 */

undefined8 * FUN_1802eac60(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar4 = *param_1;
  lVar8 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar10 = (param_1[1] - lVar4) / 0x18;
  if (lVar10 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar10 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar3 >> 1) < uVar3) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar1;
    if (uVar1 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar6 = (undefined8 *)FUN_18015bca0(uVar9 * 0x18);
  puVar2 = puVar6 + ((lVar8 >> 2) - (lVar8 >> 0x3f)) * 3;
  uVar5 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = param_3[2];
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar10 = param_1[1] - lVar4;
    puVar7 = puVar6;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(puVar6,lVar4,param_2 - lVar4);
    lVar10 = param_1[1] - param_2;
    puVar7 = puVar2 + 3;
  }
  FUN_18063aed0(puVar7,param_2,lVar10);
  FUN_1802eb940(param_1,puVar6,uVar1,uVar9);
  return puVar2;
}



