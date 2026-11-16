// FUN_1805533e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805533e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805533e0(undefined8 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_1b8 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined8 *local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStackY_1b8;
  iVar9 = *param_2;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_118 = (undefined1  [16])0x0;
  local_168 = param_2;
  FUN_180485630(&local_138,param_1,0);
  iVar2 = *param_2;
  local_178 = &PTR_s_All_Items_18086b780;
  uStack_170 = 3;
  FUN_180487250(&local_138,"Apply To",param_2,&local_178);
  if (iVar2 != *param_2) {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar5 = FUN_180439770();
    *(undefined8 *)(lVar5 + 0x420) = 0;
    iVar2 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
    uVar13 = (ulonglong)iVar2;
    if (0 < iVar2) {
      plVar12 = (longlong *)(uVar13 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30);
      uVar11 = uVar13;
      do {
        if ((*plVar12 == 0) || ((*(uint *)(*plVar12 + 0x14) & 0x8000000) != 0)) break;
        uVar11 = (ulonglong)((int)uVar11 - 1);
        uVar13 = uVar13 - 1;
        plVar12 = plVar12 + -7;
      } while (0 < (longlong)uVar13);
      if ((int)uVar11 < iVar2) {
        FUN_1804c7a50(uVar11 & 0xffffffff,CONCAT71((int7)(uVar13 >> 8),1));
      }
    }
  }
  fVar21 = uStack_128._4_4_;
  if (iVar9 != 0) {
    local_b8 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined8 *)0x0;
    auVar18 = ZEXT464(0x3f800000);
    fVar16 = 0.0;
    if (*param_2 == 2) {
      ppuVar10 = &PTR_s_Glock_18_1806ff3d0;
      do {
        FUN_1801543a0(local_b8,ppuVar10);
        local_158 = (undefined1  [16])0x0;
        local_148 = (undefined1  [16])0x0;
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (ppuVar10[2][lVar5] != '\0');
        uVar14 = FUN_18015ba30(local_158);
        puVar6 = (undefined8 *)FUN_1803db750(uVar14,local_158,auVar18._0_8_);
        FUN_18015c010(local_158);
        if (puVar6 == (undefined8 *)0x0) {
          local_178 = (undefined **)0x0;
          uStack_170 = CONCAT44(fVar16,fVar16);
        }
        else {
          local_178 = (undefined **)*puVar6;
          uStack_170 = CONCAT44((float)*(int *)((longlong)puVar6 + 0x24),(float)*(int *)(puVar6 + 4)
                               );
        }
        local_158._8_8_ = uStack_170;
        local_158._0_8_ = local_178;
        if ((undefined8 *)local_e8._8_8_ == local_d8) {
          FUN_180178c40(local_e8,local_e8._8_8_,local_158);
        }
        else {
          *(undefined ***)local_e8._8_8_ = local_178;
          *(undefined8 *)(local_e8._8_8_ + 8) = uStack_170;
          local_e8._8_8_ = (undefined8 *)(local_e8._8_8_ + 0x10);
        }
        sVar1 = *(short *)(ppuVar10 + 3);
        if ((sVar1 == 0x2c) || (sVar1 == 0x31)) {
          ppuVar7 = &PTR_DAT_18082ac10;
        }
        else if (sVar1 == 0x2b) {
          ppuVar7 = &PTR_DAT_180859250;
        }
        else if (sVar1 == 0x2d) {
          ppuVar7 = &PTR_DAT_180858018;
        }
        else if ((sVar1 - 0x2eU & 0xfffd) == 0) {
          ppuVar7 = &PTR_DAT_180859248;
        }
        else if (sVar1 == 0x2f) {
          ppuVar7 = &PTR_DAT_180859260;
        }
        else if (sVar1 == 0x1f) {
          ppuVar7 = &PTR_DAT_18086c038;
        }
        else if (sVar1 == 0x39) {
          ppuVar7 = &PTR_DAT_18086c050;
        }
        else {
          ppuVar7 = &PTR_DAT_18082ac38;
          if (sVar1 == 0x2a) {
            ppuVar7 = &PTR_DAT_180859258;
          }
        }
        FUN_1801543a0(local_d0,ppuVar7);
        auVar17 = auVar18._0_16_;
        ppuVar10 = ppuVar10 + 4;
      } while (ppuVar10 != (undefined **)&DAT_1806ff950);
    }
    else {
      iVar9 = 0;
      ppuVar10 = &PTR_s_glock_18086c200;
      ppuVar7 = &PTR_s_Pistols_1806ff970;
      do {
        FUN_1801543a0(local_b8,ppuVar7);
        local_158 = (undefined1  [16])0x0;
        local_148 = (undefined1  [16])0x0;
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while ((*ppuVar10)[lVar5] != '\0');
        uVar14 = FUN_18015ba30(local_158);
        puVar6 = (undefined8 *)FUN_1803db750(uVar14,local_158,auVar18._0_8_);
        FUN_18015c010(local_158);
        if (puVar6 == (undefined8 *)0x0) {
          local_168 = (int *)0x0;
          fStack_160 = fVar16;
          fStack_15c = fVar16;
        }
        else {
          local_168 = (int *)*puVar6;
          fStack_160 = (float)*(int *)(puVar6 + 4);
          fStack_15c = (float)*(int *)((longlong)puVar6 + 0x24);
        }
        local_158._8_8_ = CONCAT44(fStack_15c,fStack_160);
        local_158._0_8_ = local_168;
        if ((undefined8 *)local_e8._8_8_ == local_d8) {
          FUN_180178c40(local_e8,local_e8._8_8_,local_158);
        }
        else {
          *(int **)local_e8._8_8_ = local_168;
          *(ulonglong *)(local_e8._8_8_ + 8) = CONCAT44(fStack_15c,fStack_160);
          local_e8._8_8_ = (undefined8 *)(local_e8._8_8_ + 0x10);
        }
        ppuVar8 = &PTR_DAT_18082ac38;
        if (iVar9 == 6) {
          ppuVar8 = &PTR_DAT_18082ac10;
        }
        FUN_1801543a0(local_d0,ppuVar8);
        auVar17 = auVar18._0_16_;
        iVar9 = iVar9 + 1;
        ppuVar7 = ppuVar7 + 1;
        ppuVar10 = ppuVar10 + 1;
      } while (iVar9 < 7);
    }
    fVar15 = fVar16;
    fVar19 = fVar16;
    fVar20 = fVar16;
    if (DAT_180bbecdb == '\0') {
      fVar15 = (float)(int)local_118._12_4_ * 30.855553 + fVar21 + 0.1;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
      auVar17 = vmaxss_avx(auVar17,auVar3);
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * (float)uStack_128 + 0.5)),1);
      fVar19 = auVar3._0_4_ + (float)uStack_130 + auVar17._0_4_;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar15 * DAT_180b0a41c + 0.5)),1);
      fVar20 = auVar3._0_4_ + uStack_130._4_4_;
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(((float)uStack_128 + (float)uStack_120) * DAT_180b0a41c +
                                          0.5)),1);
      fVar16 = (auVar3._0_4_ + (float)uStack_130) - auVar17._0_4_;
      auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar15 + 30.855553) * DAT_180b0a41c + 0.5)),
                             1);
      fVar15 = auVar17._0_4_ + uStack_130._4_4_;
      local_118._12_4_ = local_118._12_4_ + 1;
    }
    local_178 = (undefined **)CONCAT44(fVar15 - DAT_180b0a41c * 3.0,fVar16 - DAT_180b0a41c * 8.0);
    local_168 = (int *)CONCAT44(DAT_180b0a41c * 3.0 + fVar20,DAT_180b0a41c * 8.0 + fVar19);
    local_108 = local_e8._0_8_;
    local_100 = (longlong)(local_e8._8_8_ - local_e8._0_8_) >> 4;
    local_f8 = local_d0._0_8_;
    local_f0 = (longlong)(local_d0._8_8_ - local_d0._0_8_) >> 3;
    local_158._8_8_ = (longlong)(local_b8._8_8_ - local_b8._0_8_) >> 3;
    local_158._0_8_ = local_b8._0_8_;
    cVar4 = FUN_1804abea0("##item_target",&local_168);
    if (cVar4 != '\0') {
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_1808e4f84 = 0xffffffff;
      DAT_180bbecdf = 0;
      DAT_180bbecde = 0;
      lVar5 = FUN_180439770();
      *(undefined8 *)(lVar5 + 0x420) = 0;
      iVar9 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
      uVar13 = (ulonglong)iVar9;
      if (0 < iVar9) {
        plVar12 = (longlong *)(uVar13 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30);
        uVar11 = uVar13;
        do {
          if ((*plVar12 == 0) || ((*(uint *)(*plVar12 + 0x14) & 0x8000000) != 0)) break;
          uVar11 = (ulonglong)((int)uVar11 - 1);
          uVar13 = uVar13 - 1;
          plVar12 = plVar12 + -7;
        } while (0 < (longlong)uVar13);
        if ((int)uVar11 < iVar9) {
          FUN_1804c7a50(uVar11 & 0xffffffff,CONCAT71((int7)(uVar13 >> 8),1));
        }
      }
    }
    if (local_e8._0_8_ != 0) {
      if ((0xfff < ((longlong)local_d8 - local_e8._0_8_ & 0xfffffffffffffff0U)) &&
         (0x1f < (local_e8._0_8_ - *(longlong *)(local_e8._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0();
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined8 *)0x0;
    }
    FUN_1800f0160(local_d0);
    FUN_1800f0160(local_b8);
  }
  fVar21 = (float)(int)local_118._8_4_ * 30.855553 + 0.6 + fVar21;
  uVar13 = (ulonglong)(uint)fVar21;
  if (DAT_180bbecdb != '\0') {
    uVar13 = (ulonglong)(uint)fVar21;
    if (DAT_180c62d18 != DAT_180c62d20) {
      uVar13 = FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar9 < 2) {
    FUN_1804c5a40(uVar13);
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
  }
}



