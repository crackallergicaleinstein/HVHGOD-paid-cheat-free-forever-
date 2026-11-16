// FUN_180309ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309ad0 */

undefined1 (*) [32] FUN_180309ad0(undefined1 (*param_1) [32],undefined4 *param_2)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [32];
  undefined4 *puVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  *(undefined2 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 4) = 0;
  *(undefined8 *)(*param_1 + 0xc) = 0;
  *(undefined8 *)(*param_1 + 0x14) = 0;
  iVar8 = 1;
  *(undefined8 *)(*param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  param_1[1][0xc] = 0;
  *(undefined4 *)(param_1[1] + 0x10) = 0;
  param_1[1][0x14] = 0;
  *(undefined4 *)(param_1[1] + 8) = 0x7f800000;
  do {
    pauVar6 = (undefined1 (*) [32])FUN_180308b90(local_68,param_2);
    auVar1 = *pauVar6;
    uVar4 = *(undefined8 *)pauVar6[1];
    uVar5 = *(undefined8 *)(pauVar6[1] + 8);
    if (iVar8 == 1) {
      *param_1 = auVar1;
      *(undefined8 *)param_1[1] = uVar4;
      *(undefined8 *)(param_1[1] + 8) = uVar5;
    }
    if (auVar1[0] == 1) {
      *(int *)(param_1[1] + 0x10) = iVar8;
      return param_1;
    }
    if ((auVar1[0] & 0xfb) == 0) break;
    vshufps_avx(auVar1._0_16_,auVar1._0_16_,0x55);
    puVar7 = (undefined4 *)FUN_180308540(local_68,param_2,auVar1._0_8_ >> 8);
    local_58 = *(ulonglong *)(puVar7 + 4);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_58;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    auVar9 = vshufps_avx(auVar9,auVar9,0x55);
    *param_2 = *puVar7;
    param_2[1] = uVar2;
    param_2[3] = auVar9._0_4_;
    param_2[2] = uVar3;
    if (iVar8 == 1) {
      param_1[1][0x14] = param_1[1][0xc];
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  if (param_1[1][0x14] == '\0') {
    param_1[1][0x14] = param_1[1][0xc];
  }
  return param_1;
}



