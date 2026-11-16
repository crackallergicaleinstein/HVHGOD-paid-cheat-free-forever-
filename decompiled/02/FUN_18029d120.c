// FUN_18029d120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029d120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18029d120(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  longlong param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  byte *pbVar15;
  byte **ppbVar16;
  byte *pbVar17;
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 auStack_188 [32];
  float local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  byte *local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [8];
  longlong local_d0;
  byte *local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  auVar23 = ZEXT1664(in_ZMM2._0_16_);
  auVar20 = ZEXT1664(in_ZMM1._0_16_);
  local_d0 = param_5;
  local_a8 = param_4;
  if (*(char *)(param_5 + 0x38) == '\x01') {
    if (*(ulonglong *)(param_4 + 0x18) < 0x10) {
      pbVar15 = param_4;
    }
    else {
      pbVar15 = *(byte **)param_4;
    }
    pbVar17 = pbVar15 + *(longlong *)(param_4 + 0x10);
    for (; pbVar15 != pbVar17; pbVar15 = pbVar15 + 1) {
      iVar7 = toupper((uint)*pbVar15);
      *pbVar15 = (byte)iVar7;
    }
  }
  auVar19 = auVar20._0_16_;
  auVar22 = auVar23._0_16_;
  if (*(char *)(param_5 + 0x38) == '\x02') {
    if (*(ulonglong *)(param_4 + 0x18) < 0x10) {
      pbVar15 = param_4;
    }
    else {
      pbVar15 = *(byte **)param_4;
    }
    pbVar17 = pbVar15 + *(longlong *)(param_4 + 0x10);
    for (; pbVar15 != pbVar17; pbVar15 = pbVar15 + 1) {
      iVar7 = tolower((uint)*pbVar15);
      auVar19 = auVar20._0_16_;
      auVar22 = auVar23._0_16_;
      *pbVar15 = (byte)iVar7;
    }
  }
  auVar5 = vroundss_avx(ZEXT816(0),auVar19,1);
  auVar23 = ZEXT1664(auVar5);
  auVar6 = vroundss_avx(ZEXT816(0),auVar22,1);
  auVar20 = ZEXT1664(auVar6);
  local_168 = auVar19._0_4_ - auVar5._0_4_;
  fVar18 = 0.0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  fVar21 = 1.0;
  local_158 = 0x3f800000;
  local_160 = CONCAT44(local_160._4_4_,auVar22._0_4_ - auVar6._0_4_);
  FUN_1804304e0(param_1,auVar5._0_8_,auVar6._0_8_,*(undefined4 *)(param_5 + 0x20));
  if (*(char *)(param_5 + 0x1d) != '\0') {
    lVar8 = FUN_18029cb80(local_d8,param_5 + 0xc);
    local_168 = (float)((int)((float)*(byte *)(lVar8 + 3) * 0.8) << 0x18);
    local_128 = param_4;
    if (0xf < *(ulonglong *)(param_4 + 0x18)) {
      local_128 = *(byte **)param_4;
    }
    local_120 = *(undefined8 *)(param_4 + 0x10);
    local_160 = param_6;
    FUN_1804340b0(param_1,auVar23._0_4_ + fVar21,auVar20._0_4_ + fVar21,&local_128);
  }
  uVar24 = auVar23._0_8_;
  uVar25 = auVar20._0_8_;
  fVar26 = 255.0;
  if (*(char *)(param_5 + 0x24) != '\0') {
    local_c8 = (byte *)0xbf800000;
    uStack_c0 = 0x3f800000;
    uStack_b8 = 0xbf80000000000000;
    uStack_b0 = 0x3f80000000000000;
    ppbVar16 = &local_c8;
    local_fc = fVar21;
    local_100 = fVar18;
    local_104 = fVar21;
    local_108 = fVar18;
    local_10c = fVar21;
    local_110 = fVar18;
    local_114 = fVar21;
    local_118 = fVar18;
    do {
      pfVar10 = (float *)(param_5 + 0x2c);
      fVar1 = *(float *)(param_5 + 0x28);
      fVar2 = *(float *)(param_5 + 0x30);
      fVar3 = *(float *)(param_5 + 0x34);
      pfVar14 = &local_118;
      if (fVar18 <= fVar3) {
        pfVar14 = (float *)(param_5 + 0x34);
      }
      pfVar11 = &local_114;
      if (fVar3 <= fVar21) {
        pfVar11 = pfVar14;
      }
      pfVar14 = &local_110;
      if (fVar18 <= fVar2) {
        pfVar14 = (float *)(param_5 + 0x30);
      }
      pfVar12 = &local_10c;
      if (fVar2 <= fVar21) {
        pfVar12 = pfVar14;
      }
      pfVar14 = &local_108;
      if (fVar18 <= *pfVar10) {
        pfVar14 = pfVar10;
      }
      pfVar13 = &local_104;
      if (*pfVar10 <= fVar21) {
        pfVar13 = pfVar14;
      }
      pfVar14 = &local_100;
      if (fVar18 <= fVar1) {
        pfVar14 = (float *)(param_5 + 0x28);
      }
      pfVar9 = &local_fc;
      if (fVar1 <= fVar21) {
        pfVar9 = pfVar14;
      }
      local_168 = (float)(((((int)(fVar26 * *pfVar11) & 0xffU) << 8 |
                           (int)(fVar26 * *pfVar12) & 0xffU) << 8 | (int)(fVar26 * *pfVar13) & 0xffU
                          ) << 8 | (int)(fVar26 * *pfVar9) & 0xffU);
      local_128 = param_4;
      if (0xf < *(ulonglong *)(param_4 + 0x18)) {
        local_128 = *(byte **)param_4;
      }
      local_120 = *(undefined8 *)(param_4 + 0x10);
      local_160 = param_6;
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar20 = ZEXT1664(auVar20._0_16_);
      FUN_1804340b0(param_1,local_168,pfVar10,&local_128);
      uVar24 = auVar23._0_8_;
      uVar25 = auVar20._0_8_;
      ppbVar16 = ppbVar16 + 1;
    } while (ppbVar16 != &local_a8);
    param_5 = local_d0;
  }
  local_dc = fVar21;
  local_e0 = fVar18;
  fVar1 = *(float *)(param_5 + 0xc);
  local_e4 = fVar21;
  local_e8 = fVar18;
  fVar2 = *(float *)(param_5 + 0x10);
  local_ec = fVar21;
  local_f0 = fVar18;
  fVar3 = *(float *)(param_5 + 0x14);
  local_f4 = fVar21;
  local_f8 = fVar18;
  fVar4 = *(float *)(param_5 + 0x18);
  pfVar14 = &local_f8;
  if (fVar18 <= fVar4) {
    pfVar14 = (float *)(param_5 + 0x18);
  }
  pfVar10 = &local_f4;
  if (fVar4 <= fVar21) {
    pfVar10 = pfVar14;
  }
  pfVar14 = &local_f0;
  if (fVar18 <= fVar3) {
    pfVar14 = (float *)(param_5 + 0x14);
  }
  pfVar11 = &local_ec;
  if (fVar3 <= fVar21) {
    pfVar11 = pfVar14;
  }
  pfVar14 = &local_e8;
  if (fVar18 <= fVar2) {
    pfVar14 = (float *)(param_5 + 0x10);
  }
  pfVar12 = &local_e4;
  if (fVar2 <= fVar21) {
    pfVar12 = pfVar14;
  }
  pfVar14 = &local_e0;
  if (fVar18 <= fVar1) {
    pfVar14 = (float *)(param_5 + 0xc);
  }
  pfVar13 = &local_dc;
  if (fVar1 <= fVar21) {
    pfVar13 = pfVar14;
  }
  local_168 = (float)(((((int)(fVar26 * *pfVar10) & 0xffU) << 8 | (int)(fVar26 * *pfVar11) & 0xffU)
                       << 8 | (int)(fVar26 * *pfVar12) & 0xffU) << 8 |
                     (int)(fVar26 * *pfVar13) & 0xffU);
  local_128 = param_4;
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    local_128 = *(byte **)param_4;
  }
  local_120 = *(undefined8 *)(param_4 + 0x10);
  local_160 = param_6;
  FUN_1804340b0(param_1,uVar24,uVar25,&local_128);
  if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x80)) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + -0x2c;
  }
  FUN_18015c010(param_4);
}



