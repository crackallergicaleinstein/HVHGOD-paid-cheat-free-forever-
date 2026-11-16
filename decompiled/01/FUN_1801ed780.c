// FUN_1801ed780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ed780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ed780(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0 [4];
  undefined1 local_a0 [16];
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined1 local_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  if ((ulonglong)param_3[1] < 2) {
    bVar13 = false;
  }
  else {
    bVar13 = *(short *)((param_3[1] - 2U) + *param_3) == 0x635f;
  }
  ppuVar11 = (undefined **)&DAT_1807c2514;
  if (bVar13) {
    ppuVar11 = &PTR_180700558;
  }
  local_80 = (undefined1  [16])0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_f8 = param_2;
  FUN_18015ba30(local_80,*param_3,param_3[1]);
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)((longlong)ppuVar11 + lVar12) != '\0');
  pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_80,ppuVar11);
  local_a0 = *pauVar8;
  uStack_90 = *(undefined8 *)pauVar8[1];
  uStack_88 = *(ulonglong *)(pauVar8[1] + 8);
  (*pauVar8)[0] = 0;
  *(undefined8 *)pauVar8[1] = 0;
  *(undefined8 *)(pauVar8[1] + 8) = 0xf;
  FUN_18015c010(local_80);
  lVar12 = *(longlong *)(*param_1 + 0x20);
  lVar1 = *(longlong *)(*param_1 + 0x28);
  uVar14 = 0;
  uVar15 = 7;
  local_f0 = uStack_90;
  do {
    uStack_90 = local_f0;
    if (lVar12 == lVar1) {
      local_60._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar4._14_2_ = 0;
      auVar4._0_14_ = local_60._2_14_;
      local_60 = auVar4 << 0x10;
      local_f8 = (undefined8 *)local_a0;
      if (0xf < uStack_88) {
        local_f8 = (undefined8 *)local_a0._0_8_;
      }
      local_50 = uVar14;
      uStack_48 = uVar15;
      cVar7 = FUN_1801864b0(param_1[2],&local_f8,local_60,param_1[1]);
      if (cVar7 == '\0') {
        local_d0 = uVar14;
        uStack_c8 = uVar15;
        local_e0._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar6._14_2_ = 0;
        auVar6._0_14_ = local_e0._2_14_;
        local_e0 = auVar6 << 0x10;
        puVar9 = (undefined8 *)local_e0;
      }
      else {
        FUN_1800f5370(local_c0,local_60);
        puVar9 = local_c0;
      }
      uVar14 = puVar9[1];
      uVar15 = puVar9[2];
      uVar2 = puVar9[3];
      *param_2 = *puVar9;
      param_2[1] = uVar14;
      param_2[2] = uVar15;
      param_2[3] = uVar2;
      *(undefined2 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 7;
      if (cVar7 == '\0') {
        FUN_18015b930(local_e0);
      }
      else {
        FUN_18015b930(local_c0);
      }
      puVar10 = local_60;
LAB_1801ed9c6:
      FUN_18015b930(puVar10);
      FUN_18015c010(local_a0);
    }
    local_80._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar3._14_2_ = 0;
    auVar3._0_14_ = local_80._2_14_;
    local_80 = auVar3 << 0x10;
    local_f8 = (undefined8 *)local_a0;
    if (0xf < uStack_88) {
      local_f8 = (undefined8 *)local_a0._0_8_;
    }
    uStack_70 = uVar14;
    uStack_68 = uVar15;
    cVar7 = FUN_1801864b0(lVar12,&local_f8,local_80,param_1[1]);
    if (cVar7 != '\0') {
      *param_2 = local_80._0_8_;
      param_2[1] = local_80._8_8_;
      param_2[2] = uStack_70;
      param_2[3] = uStack_68;
      auVar5._14_2_ = 0;
      auVar5._0_14_ = local_80._2_14_;
      local_80 = auVar5 << 0x10;
      puVar10 = local_80;
      uStack_70 = uVar14;
      uStack_68 = uVar15;
      goto LAB_1801ed9c6;
    }
    FUN_18015b930(local_80);
    lVar12 = lVar12 + 0x20;
    local_f0 = uStack_90;
  } while( true );
}



