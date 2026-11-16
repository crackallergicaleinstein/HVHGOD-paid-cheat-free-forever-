// FUN_18036ef50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036ef50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036ef50(undefined1 (*param_1) [16],undefined1 (*param_2) [16],longlong param_3,
                  undefined1 param_4,int param_5)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auStack_158 [32];
  int local_138;
  int local_130;
  int local_128;
  undefined1 (*local_118) [16];
  undefined1 local_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong local_a8 [2];
  undefined1 auStack_98 [16];
  ulonglong local_88 [2];
  undefined1 auStack_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  lVar8 = (longlong)param_5;
  uVar3 = (longlong)param_2 - (longlong)param_1;
  local_118 = param_2;
  while (0x800 < (longlong)(uVar3 & 0xffffffffffffffc0)) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
    if (param_3 < 1) {
      lVar7 = (longlong)param_2 - (longlong)param_1 >> 6;
      lVar8 = (longlong)param_2 - (longlong)param_1 >> 7;
      if (0 < lVar8) {
        pauVar6 = param_1 + lVar8 * 4 + 3;
        do {
          local_128 = param_5;
          local_e8 = *(ulonglong *)pauVar6[-7];
          uStack_e0 = *(undefined8 *)(pauVar6[-7] + 8);
          uStack_d8 = *(undefined8 *)pauVar6[-6];
          uStack_d0 = *(undefined8 *)(pauVar6[-6] + 8);
          *(undefined8 *)(pauVar6[-6] + 8) = 0xf;
          pauVar6[-7][0] = 0;
          lVar8 = lVar8 + -1;
          *(undefined8 *)pauVar6[-6] = 0;
          local_c8 = *(undefined8 *)pauVar6[-5];
          uStack_c0 = *(undefined8 *)(pauVar6[-5] + 8);
          uStack_b8 = *(undefined8 *)pauVar6[-4];
          uStack_b0 = *(undefined8 *)(pauVar6[-4] + 8);
          pauVar6[-5][0] = 0;
          *(undefined8 *)pauVar6[-4] = 0;
          local_130 = param_5;
          *(undefined8 *)(pauVar6[-4] + 8) = 0xf;
          local_138 = CONCAT31(local_138._1_3_,param_4);
          FUN_18036ff80(param_1,lVar8,lVar7,&local_e8);
          FUN_18015c010(&local_c8);
          FUN_18015c010(&local_e8);
          pauVar6 = pauVar6 + -4;
        } while (0 < lVar8);
      }
      if (lVar7 < 2) {
      }
      param_2 = param_2 + -1;
      do {
        pauVar6 = param_2 + -3;
        local_e8 = *(ulonglong *)*pauVar6;
        uStack_e0 = *(undefined8 *)(param_2[-3] + 8);
        uStack_d8 = *(undefined8 *)param_2[-2];
        uStack_d0 = *(undefined8 *)(param_2[-2] + 8);
        *(undefined8 *)(param_2[-2] + 8) = 0xf;
        (*pauVar6)[0] = 0;
        *(undefined8 *)param_2[-2] = 0;
        local_c8 = *(undefined8 *)param_2[-1];
        uStack_c0 = *(undefined8 *)(param_2[-1] + 8);
        uStack_b8 = *(undefined8 *)*param_2;
        uStack_b0 = *(undefined8 *)(*param_2 + 8);
        param_2[-1][0] = 0;
        *(undefined8 *)*param_2 = 0;
        *(undefined8 *)(*param_2 + 8) = 0xf;
        FUN_18036fee0(pauVar6,param_1);
        local_128 = param_5;
        local_130 = param_5;
        local_138 = CONCAT31(local_138._1_3_,param_4);
        FUN_18036ff80(param_1,0,(-0x30 - (longlong)param_1) + (longlong)param_2 >> 6,&local_e8);
        FUN_18015c010(&local_c8);
        FUN_18015c010(&local_e8);
        param_2 = param_2 + -4;
      } while (0x7f < (longlong)
                      ((0x10 - (longlong)param_1) + (longlong)param_2 & 0xffffffffffffffc0U));
    }
    local_138 = param_5;
    local_110 = (undefined1  [16])0x0;
    FUN_18036f690(local_110,param_1,param_2,param_4);
    pauVar6 = (undefined1 (*) [16])local_110._0_8_;
    uVar1 = local_110._8_8_;
    local_138 = param_5;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)(local_110._0_8_ - (longlong)param_1 & 0xffffffffffffffc0U) <
        (longlong)((longlong)param_2 - local_110._8_8_ & 0xffffffffffffffc0U)) {
      FUN_18036ef50(param_1,local_110._0_8_,param_3,param_4);
      param_1 = (undefined1 (*) [16])uVar1;
      pauVar6 = param_2;
    }
    else {
      FUN_18036ef50(local_110._8_8_,param_2,param_3,param_4);
      local_118 = pauVar6;
    }
    param_2 = pauVar6;
    uVar3 = (longlong)pauVar6 - (longlong)param_1;
  }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
  if ((param_1 != param_2) && (pauVar6 = param_1 + 4, pauVar6 != param_2)) {
    pauVar9 = param_1 + 7;
    auVar11 = ZEXT1664(_DAT_18086d450);
    do {
      local_a8[0] = *(ulonglong *)*pauVar6;
      local_a8[1] = *(ulonglong *)(*pauVar6 + 8);
      local_110 = *pauVar6;
      uStack_100 = *(undefined8 *)pauVar6[1];
      uStack_f8 = *(undefined8 *)(pauVar6[1] + 8);
      auStack_98 = pauVar6[1];
      *(undefined8 *)(pauVar9[-2] + 8) = 0xf;
      (*pauVar6)[0] = 0;
      pauVar5 = pauVar9 + -7;
      *(undefined8 *)pauVar9[-2] = 0;
      local_e8 = *(ulonglong *)pauVar9[-1];
      uStack_e0 = *(undefined8 *)(pauVar9[-1] + 8);
      uStack_d8 = *(undefined8 *)*pauVar9;
      uStack_d0 = *(undefined8 *)(*pauVar9 + 8);
      auStack_78 = *pauVar9;
      pauVar9[-1][0] = 0;
      *(undefined8 *)*pauVar9 = 0;
      *(undefined8 *)(*pauVar9 + 8) = 0xf;
      auVar11 = ZEXT1664(auVar11._0_16_);
      local_88[0] = local_e8;
      local_88[1] = uStack_e0;
      cVar2 = FUN_180114040((longlong)local_a8 + lVar8,pauVar9[-7] + lVar8);
      pauVar4 = pauVar6;
      if (cVar2 < '\0') {
        do {
          FUN_18036fee0(pauVar4,pauVar5);
          pauVar4 = pauVar4 + -4;
          if (pauVar4 == param_1) break;
          pauVar5 = pauVar5 + -4;
          cVar2 = FUN_180114040((longlong)local_a8 + lVar8,*pauVar5 + lVar8);
        } while (cVar2 < '\0');
        param_2 = local_118;
      }
      auVar10 = auVar11._0_16_;
      if (pauVar4 != (undefined1 (*) [16])local_a8) {
        FUN_18015c010(pauVar4);
        *(undefined8 *)*pauVar4 = local_110._0_8_;
        *(undefined8 *)(*pauVar4 + 8) = local_110._8_8_;
        *(undefined8 *)pauVar4[1] = uStack_100;
        *(undefined8 *)(pauVar4[1] + 8) = uStack_f8;
        auVar10 = auVar11._0_16_;
        local_a8[0] = local_a8[0] & 0xffffffffffffff00;
        auStack_98 = auVar10;
      }
      pauVar5 = pauVar4 + 2;
      if (pauVar5 != (undefined1 (*) [16])local_88) {
        auVar11 = ZEXT1664(auVar10);
        FUN_18015c010(pauVar5);
        *(ulonglong *)*pauVar5 = local_e8;
        *(undefined8 *)(pauVar4[2] + 8) = uStack_e0;
        *(undefined8 *)pauVar4[3] = uStack_d8;
        *(undefined8 *)(pauVar4[3] + 8) = uStack_d0;
        auVar10 = auVar11._0_16_;
        local_88[0] = local_88[0] & 0xffffffffffffff00;
        auStack_78 = auVar10;
      }
      auVar11 = ZEXT1664(auVar10);
      FUN_18015c010(local_88);
      FUN_18015c010(local_a8);
      pauVar6 = pauVar6 + 4;
      pauVar9 = pauVar9 + 4;
    } while (pauVar6 != param_2);
  }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



