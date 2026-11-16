// FUN_180351c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180351c00 */

undefined8 * FUN_180351c00(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar3 = *param_1;
  lVar8 = (param_1[1] - lVar3) / 0xe8;
  if (lVar8 == 0x11a7b9611a7b961) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar3) / 0xe8;
  if (0x11a7b9611a7b961 - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x11a7b9611a7b961;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x11a7b9611a7b961 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar5 = (undefined8 *)FUN_18015bca0(uVar7 * 0xe8);
  puVar9 = puVar5 + ((param_2 - lVar3) / 0xe8) * 0x1d;
  uVar4 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar4;
  uVar4 = param_3[3];
  puVar9[2] = param_3[2];
  puVar9[3] = uVar4;
  uVar4 = param_3[5];
  puVar9[4] = param_3[4];
  puVar9[5] = uVar4;
  uVar4 = param_3[7];
  puVar9[6] = param_3[6];
  puVar9[7] = uVar4;
  uVar4 = param_3[9];
  puVar9[8] = param_3[8];
  puVar9[9] = uVar4;
  uVar4 = param_3[0xb];
  puVar9[10] = param_3[10];
  puVar9[0xb] = uVar4;
  uVar4 = param_3[0xd];
  puVar9[0xc] = param_3[0xc];
  puVar9[0xd] = uVar4;
  uVar4 = param_3[0xf];
  puVar9[0xe] = param_3[0xe];
  puVar9[0xf] = uVar4;
  uVar4 = param_3[0x11];
  puVar9[0x10] = param_3[0x10];
  puVar9[0x11] = uVar4;
  uVar4 = param_3[0x13];
  puVar9[0x12] = param_3[0x12];
  puVar9[0x13] = uVar4;
  uVar4 = param_3[0x15];
  puVar9[0x14] = param_3[0x14];
  puVar9[0x15] = uVar4;
  uVar4 = param_3[0x17];
  puVar9[0x16] = param_3[0x16];
  puVar9[0x17] = uVar4;
  uVar4 = param_3[0x19];
  puVar9[0x18] = param_3[0x18];
  puVar9[0x19] = uVar4;
  uVar4 = param_3[0x1b];
  puVar9[0x1a] = param_3[0x1a];
  puVar9[0x1b] = uVar4;
  puVar9[0x1c] = param_3[0x1c];
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar3;
    puVar6 = puVar5;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(puVar5,lVar3,param_2 - lVar3);
    lVar8 = param_1[1] - param_2;
    puVar6 = puVar9 + 0x1d;
  }
  FUN_18063aed0(puVar6,param_2,lVar8);
  FUN_180352510(param_1,puVar5,uVar1,uVar7);
  return puVar9;
}



