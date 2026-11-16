// FUN_180268c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180268c10 */

undefined8 * FUN_180268c10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  lVar3 = *param_1;
  lVar9 = (param_2 - lVar3) / 0x26 + (param_2 - lVar3 >> 0x3f);
  lVar12 = (param_1[1] - lVar3) / 0x98;
  if (lVar12 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar12 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x98;
  if (0x1af286bca1af286 - (uVar2 >> 1) < uVar2) {
    uVar10 = 0x1af286bca1af286;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar10 = uVar1;
    if (uVar1 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x1af286bca1af286 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined8 *)FUN_18015bca0(uVar10 * 0x98);
  puVar11 = puVar7 + ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 0x13;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar11 = *param_3;
  puVar11[1] = uVar4;
  puVar11[2] = uVar5;
  puVar11[3] = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  puVar11[4] = param_3[4];
  puVar11[5] = uVar4;
  puVar11[6] = uVar5;
  puVar11[7] = uVar6;
  uVar4 = param_3[9];
  uVar5 = param_3[10];
  uVar6 = param_3[0xb];
  puVar11[8] = param_3[8];
  puVar11[9] = uVar4;
  puVar11[10] = uVar5;
  puVar11[0xb] = uVar6;
  uVar4 = param_3[0xd];
  uVar5 = param_3[0xe];
  uVar6 = param_3[0xf];
  puVar11[0xc] = param_3[0xc];
  puVar11[0xd] = uVar4;
  puVar11[0xe] = uVar5;
  puVar11[0xf] = uVar6;
  uVar4 = param_3[0x11];
  puVar11[0x10] = param_3[0x10];
  puVar11[0x11] = uVar4;
  puVar11[0x12] = param_3[0x12];
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar12 = param_1[1] - lVar3;
    puVar8 = puVar7;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(puVar7,lVar3,param_2 - lVar3);
    lVar12 = param_1[1] - param_2;
    puVar8 = puVar11 + 0x13;
  }
  FUN_18063aed0(puVar8,param_2,lVar12);
  FUN_180269350(param_1,puVar7,uVar1,uVar10);
  return puVar11;
}



