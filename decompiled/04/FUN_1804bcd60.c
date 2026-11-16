// FUN_1804bcd60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bcd60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1804bcd60(longlong param_1,uint *param_2,uint *param_3,int param_4,undefined4 *param_5,
                  undefined8 *param_6)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  char local_1a8;
  float local_1a4;
  float local_1a0;
  float fStack_19c;
  uint local_198;
  uint local_194;
  undefined1 local_190 [8];
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float local_15c;
  uint *local_158;
  longlong local_150;
  float *local_148;
  longlong local_140;
  longlong local_138;
  float *local_130;
  undefined1 local_128 [8];
  uint *local_120;
  undefined4 *local_118;
  char local_110;
  char local_10f [7];
  undefined1 local_108 [12];
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  lVar6 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  uVar13 = *(uint *)(param_1 + 0x14);
  local_118 = param_5;
  if ((uVar13 & 2) != 0) {
  }
  if ('\0' < *(char *)(param_1 + 0xe8)) {
  }
  if ('\0' < *(char *)(param_1 + 0xe9)) {
  }
  if (((uVar13 & 0x40) != 0) && ((*(byte *)(param_1 + 0x18) & 0xc) == 0)) {
  }
  if (*(char *)(param_1 + 0xcd) == '\0') {
  }
  local_194 = 0;
  auVar28 = ZEXT464(0x3f800000);
  auVar22 = ZEXT864(0);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar24 = auVar4 << 0x20;
  if (0 < param_4) {
    auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x11e0) * 1.35)),
                        ZEXT416((uint)(*(float *)(param_1 + 0x60) + 1.0 +
                                      *(float *)(DAT_180bb8ae8 + 0x11e0) * 0.2)));
    auVar24._0_4_ = (float)(int)((float)(int)auVar4._0_4_ * 0.75);
    auVar24._4_12_ = ZEXT812(0);
  }
  auVar25 = ZEXT1664(auVar24);
  fVar26 = *(float *)(DAT_180bb8ae8 + 0x14c4);
  local_1a4 = auVar24._0_4_;
  uVar12 = *param_6;
  uStack_168 = param_6[1];
  local_170._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
  if (((*(byte *)(param_1 + 0xf0) & 1) == 0) && ((uVar13 & 1) == 0)) {
    local_170._4_4_ = local_170._4_4_ - *(float *)(param_1 + 0x68);
    local_1a8 = '\x01';
  }
  else {
    local_1a8 = '\0';
  }
  auVar27 = ZEXT464(0x7f7fffff);
  *(undefined4 *)(param_1 + 0x170) = 1;
  local_178 = 3.4028235e+38;
  local_174 = 3.4028235e+38;
  local_190 = (undefined1  [8])0x7f7fffff7f7fffff;
  _local_1a0 = CONCAT44(fStack_19c,local_170._4_4_);
  fVar19 = local_170._4_4_;
  local_198 = param_4;
  local_170 = uVar12;
  local_158 = param_3;
  local_120 = param_2;
  FUN_1804c2800();
  uVar13 = 0;
  if (0 < param_4) {
    pfVar15 = (float *)&DAT_1807b7fbc;
    do {
      fVar23 = *(float *)(param_1 + 0x28);
      fVar21 = *(float *)(param_1 + 0x2c);
      fVar23 = ((fVar23 + *(float *)(param_1 + 0x30)) - fVar23) * pfVar15[-3] + fVar23;
      local_f0 = auVar25._0_4_ * pfVar15[-1] + fVar23;
      fVar23 = fVar23 - fVar26 * pfVar15[-1];
      fVar21 = ((fVar21 + *(float *)(param_1 + 0x34)) - fVar21) * pfVar15[-2] + fVar21;
      local_ec = auVar25._0_4_ * *pfVar15 + fVar21;
      fVar21 = fVar21 - fVar26 * *pfVar15;
      local_f8 = fVar23;
      if (local_f0 < fVar23) {
        local_f8 = local_f0;
        local_f0 = fVar23;
      }
      local_f4 = fVar21;
      if (local_ec < fVar21) {
        local_f4 = local_ec;
        local_ec = fVar21;
      }
      uVar7 = FUN_1804c2670(param_1,uVar13);
      FUN_1804c6190(&local_f8,uVar7,0,2);
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x40800);
      FUN_1804f4d40(&local_f8,uVar7,&local_110,local_10f);
      if ((local_110 == '\0') && (local_10f[0] == '\0')) {
LAB_1804bd1ec:
        if ((uVar13 == 0) && ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0)) goto LAB_1804bd1fa;
      }
      else {
        *(uint *)(DAT_180bb8ae8 + 0x24d8) = (~uVar13 & 1) + 5;
        if (local_10f[0] == '\0') {
LAB_1804bd1e4:
          if (local_110 == '\0') goto LAB_1804bd1ec;
        }
        else {
          if (*(char *)(lVar6 + 0xb45) == '\0') {
            fVar23 = pfVar15[-2];
            if ((fVar23 != auVar28._0_4_) && ((fVar23 != auVar22._0_4_ || (local_1a8 == '\0')))) {
              fVar19 = -3.4028235e+38;
            }
            fVar21 = pfVar15[-3];
            auVar4 = vcmpss_avx(ZEXT416((uint)fVar21),auVar28._0_16_,0);
            auVar4 = vblendvps_avx(SUB6416(ZEXT464(0xff7fffff),0),ZEXT416((uint)(float)local_170),
                                   auVar4);
            fVar5 = auVar4._0_4_;
            auVar4 = vcmpss_avx(ZEXT416((uint)fVar21),auVar22._0_16_,0);
            auVar4 = vblendvps_avx(auVar27._0_16_,ZEXT416((uint)uStack_168),auVar4);
            auVar24 = vcmpss_avx(ZEXT416((uint)fVar23),auVar22._0_16_,0);
            auVar24 = vblendvps_avx(SUB6416(ZEXT464(0x7f7fffff),0),ZEXT416(uStack_168._4_4_),auVar24
                                   );
            fVar21 = (*(float *)(lVar6 + 0x110) - *(float *)(lVar6 + 0x156c)) +
                     (-local_1a4 * pfVar15[-1] - fVar26 * pfVar15[-1]) * fVar21 +
                     fVar26 * pfVar15[-1];
            fVar23 = (*(float *)(lVar6 + 0x114) - *(float *)(lVar6 + 0x1570)) +
                     (-local_1a4 * *pfVar15 - fVar26 * *pfVar15) * fVar23 + fVar26 * *pfVar15;
            if (fVar19 <= fVar23) {
              auVar24 = vminss_avx(auVar24,ZEXT416((uint)fVar23));
              fVar19 = auVar24._0_4_;
            }
            if (fVar5 <= fVar21) {
              auVar4 = vminss_avx(auVar4,ZEXT416((uint)fVar21));
              fVar5 = auVar4._0_4_;
            }
            local_1b8 = (undefined8 *)local_190;
            local_188 = (uint *)CONCAT44(fVar19,fVar5);
            FUN_1804bc9f0(param_1,&local_188,pfVar15 + -3,&local_178);
            auVar27 = ZEXT464(0x7f7fffff);
            auVar25 = ZEXT464((uint)local_1a4);
          }
          else {
            FUN_1804bc6c0(&local_180,param_1,param_1 + 0x48,0xffffffff);
            puVar8 = (undefined8 *)FUN_1804bc370(local_128,param_1);
            local_194 = 3;
            local_190 = (undefined1  [8])*puVar8;
            FUN_1804b7870(0,0);
          }
          if (local_10f[0] == '\0') goto LAB_1804bd1e4;
        }
LAB_1804bd1fa:
        if (local_10f[0] == '\0') {
          lVar9 = (ulonglong)(local_110 != '\0') + 0x1f;
        }
        else {
          lVar9 = 0x21;
        }
        auVar4 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + (lVar9 + 0x15) * 0x10);
        auVar24 = vshufps_avx(auVar4,auVar4,0xff);
        local_108 = auVar4._0_12_;
        fStack_fc = auVar24._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
        uVar7 = FUN_1804b1120();
        *param_5 = uVar7;
      }
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 6;
      param_5 = param_5 + 1;
      auVar22 = ZEXT864(0);
      fVar19 = local_1a0;
    } while ((int)uVar13 < (int)local_198);
    param_3 = local_158;
  }
  if ((*(uint *)(param_1 + 0x14) & 0x1000000) == 0) {
    local_1a4 = (float)(-(uint)(*(char *)(lVar6 + 0x81) != '\0') & 0xf);
  }
  else {
    local_1a4 = (float)(*(uint *)(param_1 + 0x18) >> 1 & 2 | *(uint *)(param_1 + 0x18) & 8);
  }
  fVar19 = 0.04;
  auVar22 = ZEXT464((uint)local_1a0);
  local_198 = 1;
  local_188 = &DAT_1807b7f44;
  uVar13 = 0;
  fVar23 = 0.0;
  fVar26 = local_1a4;
  do {
    puVar11 = local_188;
    if ((local_198 & (uint)fVar26) != 0) {
      if (uVar13 < 2) {
        local_148 = &local_160;
        local_150 = 0xfc;
        local_130 = &local_1a0;
        local_140 = 0x110;
        uVar12 = 1;
        local_138 = 0x156c;
        puVar8 = (undefined8 *)local_190;
      }
      else {
        local_148 = &local_15c;
        local_150 = 0x100;
        puVar8 = (undefined8 *)((longlong)local_190 + 4);
        local_130 = &fStack_19c;
        local_140 = 0x114;
        local_138 = 0x1570;
        uVar12 = 2;
      }
      bVar16 = uVar13 >= 2;
      local_1b8._0_4_ = *(undefined4 *)(lVar6 + 0x14c4);
      FUN_1804bcc10(local_108,param_1,uVar13,auVar25._0_8_);
      uVar7 = FUN_1804c2670(param_1,uVar13 + 4);
      FUN_1804c6190(local_108,uVar7,0,2);
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x40800);
      FUN_1804f4d40(local_108,uVar7,&local_110,local_10f);
      pfVar15 = local_130;
      puVar11 = local_188;
      if (local_110 == '\0') {
LAB_1804bd3df:
        if (local_10f[0] != '\0') goto LAB_1804bd3e9;
LAB_1804bd46d:
        puVar11 = local_188;
      }
      else {
        if (*(float *)(lVar6 + 0x1544) <= fVar19) {
          local_110 = '\0';
          goto LAB_1804bd3df;
        }
LAB_1804bd3e9:
        uVar14 = (uint)bVar16;
        *(uint *)(DAT_180bb8ae8 + 0x24d8) = (uVar14 ^ 1) + 3;
        if (local_10f[0] == '\0') goto LAB_1804bd46d;
        if (*(char *)(lVar6 + 0xb45) != '\0') {
          if ((uVar13 - 1 & 0xfffffffd) == 0) {
            FUN_1804bc6c0(local_128,param_1,param_1 + 0x48,uVar12);
            lVar9 = FUN_1804bc370(&local_f8,param_1,local_128);
            *(undefined4 *)puVar8 = *(undefined4 *)(lVar9 + (ulonglong)bVar16 * 4);
            local_194 = local_194 | 1 << uVar14;
            local_10f[0] = '\0';
            local_110 = '\0';
          }
          FUN_1804b7870(0,0);
          goto LAB_1804bd46d;
        }
        lVar9 = *(longlong *)(lVar6 + 0x14f8);
        if ((lVar9 == 0) || (*(int *)(lVar6 + 0x150c) != *(int *)(lVar6 + 4))) {
LAB_1804bd5aa:
          bVar16 = false;
        }
        else {
          lVar10 = param_1;
          do {
            lVar3 = *(longlong *)(lVar10 + 0x3d8);
            bVar16 = lVar10 != lVar3;
            lVar10 = lVar3;
          } while (bVar16);
          lVar10 = param_1;
          if (lVar3 != lVar9) {
            do {
              if (lVar10 == lVar9) goto LAB_1804bd6be;
            } while ((lVar10 != lVar3) &&
                    (plVar1 = (longlong *)(lVar10 + 0x3c8), lVar10 = *plVar1, *plVar1 != 0));
            goto LAB_1804bd5aa;
          }
LAB_1804bd6be:
          bVar16 = true;
        }
        if ((*(char *)(lVar6 + 0x155c) != '\0') || (bVar16)) {
          *(undefined8 *)(lVar6 + 0x2678) = local_108._0_8_;
          *(longlong *)(lVar6 + 0x2680) = stack0xffffffffffffff00;
          *(undefined1 *)(lVar6 + 0x2688) = 0;
        }
        if (((*(uint *)(param_1 + 0x14) & 0x1000000) != 0) &&
           ((*(longlong *)(lVar6 + 0x2678) != local_108._0_8_ ||
            (*(longlong *)(lVar6 + 0x2680) != stack0xffffffffffffff00)))) {
          *(undefined1 *)(lVar6 + 0x2688) = 1;
        }
        bVar16 = false;
        auVar4 = vminss_avx(ZEXT416(local_188[-3]),ZEXT416(local_188[-1]));
        fVar26 = *(float *)(local_150 + lVar6);
        local_160 = auVar4._0_4_ * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28);
        auVar4 = vminss_avx(ZEXT416(local_188[-2]),ZEXT416(*local_188));
        local_15c = auVar4._0_4_ * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
        fVar21 = *local_148;
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        fVar5 = (*(float *)(local_140 + lVar6) - *(float *)(local_138 + lVar6)) +
                *(float *)(lVar6 + 0x14c4);
        *local_130 = fVar5;
        if ((*(char *)(lVar6 + 0x2688) != '\0') &&
           ((*pfVar15 = fVar26 + fVar21, fVar26 == fVar23 ||
            (fVar23 < fVar26 == fVar5 < fVar26 + fVar21)))) {
          bVar16 = true;
        }
        if ((uVar13 == 3) || ((uVar13 == 2 && (local_1a8 != '\0')))) {
          fVar26 = auVar22._0_4_;
        }
        else {
          fVar26 = -3.4028235e+38;
        }
        auVar4 = vpcmpeqd_avx(ZEXT416(uVar13),SUB6416(ZEXT464(1),0));
        auVar4 = vblendvps_avx(SUB6416(ZEXT464(0xff7fffff),0),ZEXT416((uint)(float)local_170),auVar4
                              );
        fVar21 = auVar4._0_4_;
        auVar4 = vpcmpeqd_avx(ZEXT416(uVar13),SUB6416(ZEXT464(0),0));
        auVar4 = vblendvps_avx(auVar27._0_16_,ZEXT416((uint)uStack_168),auVar4);
        auVar24 = vpcmpeqd_avx(ZEXT416(uVar13),SUB6416(ZEXT464(2),0));
        auVar24 = vblendvps_avx(auVar27._0_16_,ZEXT416(uStack_168._4_4_),auVar24);
        fStack_19c = (float)((ulonglong)uVar12 >> 0x20);
        if (fVar26 <= fStack_19c) {
          auVar24 = vminss_avx(auVar24,ZEXT416((uint)fStack_19c));
          fVar26 = auVar24._0_4_;
        }
        local_1a0 = (float)uVar12;
        if (fVar21 <= local_1a0) {
          auVar4 = vminss_avx(auVar4,ZEXT416((uint)local_1a0));
          fVar21 = auVar4._0_4_;
        }
        _local_1a0 = CONCAT44(fVar26,fVar21);
        if (!bVar16) {
          auVar4 = vminss_avx(ZEXT416(puVar11[-3]),ZEXT416(puVar11[-1]));
          auVar24 = vminss_avx(ZEXT416(puVar11[-2]),ZEXT416(*puVar11));
          local_1b8 = (undefined8 *)local_190;
          local_17c = auVar24._0_4_;
          local_180 = auVar4._0_4_;
          FUN_1804bc9f0(param_1,&local_1a0,&local_180,&local_178);
          goto LAB_1804bd46d;
        }
      }
      if (local_110 != '\0') {
        *local_120 = uVar13;
      }
      param_3 = local_158;
      fVar26 = local_1a4;
      if (local_10f[0] != '\0') {
        *local_158 = uVar13;
      }
    }
    local_198 = local_198 << 1 | (uint)((int)local_198 < 0);
    local_188 = puVar11 + 7;
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 4);
  FUN_1804c29a0();
  uVar12 = auVar25._0_8_;
  fVar26 = auVar27._0_4_;
  *(undefined4 *)(param_1 + 0x170) = 0;
  lVar9 = DAT_180bb8ae8;
  if ((*(longlong *)(lVar6 + 0x2228) != 0) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x2228) + 0x3d8) == param_1)) {
    fVar19 = fVar23;
    fVar21 = fVar23;
    if (*(int *)(lVar6 + 0x2090) == 2) {
      if (*(char *)(lVar6 + 0x12d) != '\0') {
        fVar19 = *(float *)(DAT_180bb8ae8 + 0x160) - *(float *)(DAT_180bb8ae8 + 0x150);
        fVar21 = *(float *)(DAT_180bb8ae8 + 0x180) - *(float *)(DAT_180bb8ae8 + 0x170);
      }
    }
    else if (*(int *)(lVar6 + 0x2090) == 3) {
      fVar19 = *(float *)(DAT_180bb8ae8 + 0x930) - *(float *)(DAT_180bb8ae8 + 0x920);
      fVar21 = *(float *)(DAT_180bb8ae8 + 0x950) - *(float *)(DAT_180bb8ae8 + 0x940);
    }
    if ((fVar19 == fVar23) && (fVar21 == fVar23)) goto LAB_1804bd926;
    fVar5 = *(float *)(lVar6 + 0x40) * 600.0 * *(float *)(DAT_180bb8ae8 + 0x11ac);
    fVar26 = fVar5 * fVar19 + *(float *)(lVar6 + 0x225c);
    *(float *)(lVar6 + 0x225c) = fVar26;
    fVar19 = fVar5 * fVar21 + *(float *)(lVar6 + 0x2260);
    *(float *)(lVar6 + 0x2260) = fVar19;
    auVar4 = vmaxss_avx(ZEXT416((uint)fVar19),
                        ZEXT416((uint)((auVar22._0_4_ - *(float *)(param_1 + 0x2c)) -
                                      *(float *)(param_1 + 0x34))));
    auVar24 = vmaxss_avx(ZEXT416((uint)fVar26),
                         ZEXT416((uint)(((float)local_170 - *(float *)(param_1 + 0x28)) -
                                       *(float *)(param_1 + 0x30))));
    *(int *)(lVar6 + 0x225c) = auVar24._0_4_;
    *(int *)(lVar6 + 0x2260) = auVar4._0_4_;
    *(undefined1 *)(lVar6 + 0x224c) = 0;
    *(undefined1 *)(lVar6 + 0x2039) = 1;
    auVar4 = *(undefined1 (*) [16])(lVar9 + 0xfd8);
    auVar24 = vshufps_avx(auVar4,auVar4,0xff);
    local_108 = auVar4._0_12_;
    fStack_fc = auVar24._0_4_ * *(float *)(lVar9 + 0xc84);
    uVar7 = FUN_1804b1120(local_108);
    uVar12 = auVar25._0_8_;
    fVar26 = auVar27._0_4_;
    *local_118 = uVar7;
    fVar21 = (float)(int)*(float *)(lVar6 + 0x225c);
    fVar19 = (float)(int)*(float *)(lVar6 + 0x2260);
    if ((fVar21 == fVar23) && (fVar19 == fVar23)) goto LAB_1804bd926;
    local_180 = fVar21 + *(float *)(param_1 + 0x38);
    local_17c = fVar19 + *(float *)(param_1 + 0x3c);
    puVar8 = (undefined8 *)FUN_1804bc370(&local_f8,param_1,&local_180);
    uVar12 = auVar25._0_8_;
    fVar26 = auVar27._0_4_;
    local_190 = (undefined1  [8])*puVar8;
    *(float *)(lVar6 + 0x2260) = *(float *)(lVar6 + 0x2260) - fVar19;
    *(float *)(lVar6 + 0x225c) = *(float *)(lVar6 + 0x225c) - fVar21;
  }
  lVar9 = DAT_180bb8ae8;
LAB_1804bd926:
  fVar19 = *(float *)(param_1 + 0x28);
  fVar21 = *(float *)(param_1 + 0x38);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x3c);
  fVar20 = fVar21;
  if (((float)local_190._0_4_ != fVar26) &&
     ((*(float *)(param_1 + 0x30) != (float)local_190._0_4_ || (fVar21 != (float)local_190._0_4_))))
  {
    *(undefined4 *)(param_1 + 0x38) = local_190._0_4_;
    *(undefined4 *)(param_1 + 0x30) = local_190._0_4_;
    fVar20 = (float)local_190._0_4_;
  }
  if (((float)local_190._4_4_ != fVar26) &&
     ((*(float *)(param_1 + 0x34) != (float)local_190._4_4_ || (fVar2 != (float)local_190._4_4_))))
  {
    *(undefined4 *)(param_1 + 0x3c) = local_190._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_190._4_4_;
  }
  fVar18 = fVar19;
  if ((local_178 != fVar26) && (fVar17 = (float)(int)local_178, fVar19 != fVar17)) {
    *(float *)(param_1 + 0x28) = fVar17;
    fVar18 = fVar17;
  }
  if ((local_174 != fVar26) && (fVar5 != (float)(int)local_174)) {
    *(float *)(param_1 + 0x2c) = (float)(int)local_174;
  }
  if (((((fVar19 != fVar18) || (fVar5 != *(float *)(param_1 + 0x2c))) || (fVar21 != fVar20)) ||
      (fVar2 != *(float *)(param_1 + 0x3c))) &&
     (((*(uint *)(param_1 + 0x14) & 0x100) == 0 && (*(float *)(lVar9 + 0x277c) <= fVar23)))) {
    *(undefined4 *)(lVar9 + 0x277c) = *(undefined4 *)(lVar9 + 0x44);
  }
  if (*param_3 != 0xffffffff) {
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(lVar6 + 0x14c4));
    puVar8 = (undefined8 *)FUN_1804bcc10(local_108,param_1,*param_3,uVar12);
    uVar12 = puVar8[1];
    *(undefined8 *)(lVar6 + 0x2678) = *puVar8;
    *(undefined8 *)(lVar6 + 0x2680) = uVar12;
  }
}



