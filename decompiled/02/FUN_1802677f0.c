// FUN_1802677f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802677f0 */

undefined8 *
FUN_1802677f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  
  if (param_5 + -1 <= param_7) {
    uVar5 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *param_6 = *param_2;
    param_6[1] = uVar5;
    param_6[2] = uVar1;
    param_6[3] = uVar2;
    uVar5 = param_2[5];
    uVar1 = param_2[6];
    uVar2 = param_2[7];
    puVar8 = param_6 + 8;
    param_6[4] = param_2[4];
    param_6[5] = uVar5;
    param_6[6] = uVar1;
    param_6[7] = uVar2;
    puVar9 = param_2;
    while (puVar3 = puVar9 + 8, puVar3 != param_3) {
      uVar5 = puVar9[9];
      uVar1 = puVar9[10];
      uVar2 = puVar9[0xb];
      if (*(char *)((longlong)puVar9 + 0x7c) == '\0') {
        *puVar8 = *puVar3;
        puVar8[1] = uVar5;
        puVar8[2] = uVar1;
        puVar8[3] = uVar2;
        uVar5 = puVar9[0xd];
        uVar1 = puVar9[0xe];
        uVar2 = puVar9[0xf];
        puVar8[4] = puVar9[0xc];
        puVar8[5] = uVar5;
        puVar8[6] = uVar1;
        puVar8[7] = uVar2;
        puVar8 = puVar8 + 8;
        puVar9 = puVar3;
      }
      else {
        *param_2 = *puVar3;
        param_2[1] = uVar5;
        param_2[2] = uVar1;
        param_2[3] = uVar2;
        uVar5 = puVar9[0xd];
        uVar1 = puVar9[0xe];
        uVar2 = puVar9[0xf];
        param_2[4] = puVar9[0xc];
        param_2[5] = uVar5;
        param_2[6] = uVar1;
        param_2[7] = uVar2;
        param_2 = param_2 + 8;
        puVar9 = puVar3;
      }
    }
    uVar5 = param_3[1];
    uVar1 = param_3[2];
    uVar2 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar5;
    param_2[2] = uVar1;
    param_2[3] = uVar2;
    uVar5 = param_3[5];
    uVar1 = param_3[6];
    uVar2 = param_3[7];
    param_2[4] = param_3[4];
    param_2[5] = uVar5;
    param_2[6] = uVar1;
    param_2[7] = uVar2;
    FUN_18063aed0(param_2 + 8,param_6,(longlong)puVar8 - (longlong)param_6);
    *param_1 = param_2 + 8;
    param_1[1] = param_5 - ((longlong)puVar8 - (longlong)param_6 >> 6);
    return param_1;
  }
  lVar4 = param_5 / 2;
  puVar9 = param_2 + lVar4 * 8;
  lVar6 = lVar4;
  puVar8 = puVar9;
  while (puVar3 = puVar8 + -8, param_2 != puVar3) {
    if (*(char *)((longlong)puVar8 + -4) != '\0') {
      FUN_1802677f0(&local_58,param_2,puVar3,param_4,lVar6,param_6,param_7);
      lVar6 = local_50;
      goto LAB_180267949;
    }
    lVar6 = lVar6 + -1;
    puVar8 = puVar3;
  }
  lVar6 = lVar6 + -1;
  local_58 = puVar3;
LAB_180267949:
  lVar7 = 0;
  puVar8 = puVar9;
  do {
    if (puVar8 == param_3) {
      local_48 = puVar8 + 8;
      lVar7 = lVar7 + 1;
LAB_180267970:
      uVar5 = FUN_180269700(local_58,puVar9,local_48,lVar4 - lVar6,lVar7,param_6,param_7);
      *param_1 = uVar5;
      param_1[1] = lVar7 + lVar6;
      return param_1;
    }
    if (*(char *)((longlong)puVar8 + 0x3c) == '\0') {
      FUN_1802677f0(&local_48,puVar8,param_3,param_4,(param_5 - lVar7) - lVar4,param_6,param_7);
      lVar7 = lVar7 + local_40;
      goto LAB_180267970;
    }
    puVar8 = puVar8 + 8;
    lVar7 = lVar7 + 1;
  } while( true );
}



