// FUN_1804de7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804de7c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804de7c0(longlong param_1,float *param_2,float *param_3,uint param_4,float param_5,
                  float param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined1 *puVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auStack_178 [32];
  float local_158;
  float local_150;
  longlong local_148;
  uint local_140;
  undefined1 local_138 [16];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  if ((param_4 & 0xff000000) == 0) {
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  uVar11 = uVar6 & 0xe0000;
  if (uVar11 == 0) {
    local_118 = *param_2;
    local_114 = param_2[1];
    local_120 = *param_3;
    local_11c = param_3[1];
    fVar22 = *(float *)(param_1 + 0xe0);
    fVar23 = fVar22 * 0.25;
    bVar13 = fVar23 <= param_5;
    auVar18 = ZEXT816(0);
  }
  else {
    if (uVar11 == 0xe0000) {
      local_128 = *param_2 + 0.5;
      local_124 = param_2[1] + 0.5;
      if ((uVar6 >> 0xd & 1) == 0) {
        fVar22 = *param_3 - 0.49;
        fVar23 = param_3[1] - 0.49;
      }
      else {
        fVar22 = *param_3 - 0.5;
        fVar23 = param_3[1] - 0.5;
      }
      local_138._4_4_ = fVar23;
      local_138._0_4_ = fVar22;
      local_158 = (float)uVar6;
      FUN_1804dc420(fVar22,&local_128,local_138,param_5);
      local_150 = (float)(uVar6 & 0xfff5ffff | 0x40600);
      local_148 = CONCAT44(local_148._4_4_,0x7f7fffff);
      local_158 = param_6;
      FUN_1804d9a00(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_11c = param_3[1];
    local_118 = *param_2;
    local_114 = param_2[1];
    local_120 = *param_3;
    fVar22 = *(float *)(param_1 + 0xe0);
    fVar23 = fVar22 * 0.25;
    bVar13 = fVar23 <= param_5;
    if (uVar11 == 0x40000) {
      auVar18 = ZEXT416((uint)(param_6 * 0.5));
    }
    else if (uVar11 == 0x60000) {
      fVar17 = param_6 * *(float *)(param_1 + 0xe4);
      uVar11 = (uint)fVar17;
      auVar18 = ZEXT416((uint)(((fVar17 - (float)(int)uVar11) * (float)(uVar11 & 1) +
                               (float)((int)uVar11 / 2)) * fVar22));
    }
    else {
      auVar18 = ZEXT816(0);
      if (uVar11 == 0x80000) {
        auVar18 = ZEXT416((uint)param_6);
      }
    }
  }
  auVar29 = ZEXT816(0);
  fVar30 = 0.25;
  pfVar16 = (float *)(param_1 + 0xe0);
  fVar17 = auVar18._0_4_;
  local_118 = local_118 - fVar17;
  local_114 = local_114 - fVar17;
  local_120 = local_120 + fVar17;
  local_11c = local_11c + fVar17;
  auVar21 = vpcmpeqd_avx(ZEXT116(bVar13),SUB6416(ZEXT464(0),0));
  auVar18 = vblendvps_avx(auVar18,auVar29,auVar21);
  param_5 = auVar18._0_4_ + param_5;
  auVar21 = ZEXT416((uint)param_5);
  local_138 = ZEXT416((uint)(local_11c - local_114));
  auVar18 = vminss_avx(ZEXT416((uint)(local_120 - local_118)),local_138);
  local_128 = auVar18._0_4_ * 0.5;
  if (local_128 <= param_6) {
    local_158 = param_5;
    local_150 = (float)uVar6;
    FUN_1804df870(param_1,&local_118,&local_120,param_4);
  }
  uVar11 = uVar6 | 0xf0;
  if ((uVar6 & 0x1f0) != 0) {
    uVar11 = uVar6;
  }
  if (bVar13 != false) {
    fVar20 = ABS(local_120 - local_118);
    _local_108 = ZEXT416((uint)fVar20);
    bVar9 = (byte)uVar11;
    auVar18 = vpcmpeqd_avx(ZEXT116((bVar9 & 0xc0) != 0xc0 && (bVar9 & 0x30) != 0x30),
                           SUB6416(ZEXT464(0),0));
    auVar18 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar18);
    fVar17 = ABS(local_11c - local_114);
    local_138 = ZEXT416((uint)fVar17);
    auVar21 = vminss_avx(ZEXT416((uint)param_5),ZEXT416((uint)(fVar20 * auVar18._0_4_ - 1.0)));
    auVar18 = vpcmpeqd_avx(ZEXT116((bVar9 & 0xa0) != 0xa0 && (bVar9 & 0x50) != 0x50),
                           SUB6416(ZEXT464(0),0));
    auVar18 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar18);
    auVar21 = vminss_avx(auVar21,ZEXT416((uint)(fVar17 * auVar18._0_4_ - 1.0)));
  }
  auVar18 = vinsertps_avx(ZEXT416((uint)local_11c),ZEXT416((uint)local_120),0x10);
  auVar18 = vinsertps_avx(auVar18,ZEXT416((uint)local_114),0x20);
  auVar8 = vinsertps_avx(auVar18,ZEXT416((uint)local_118),0x30);
  auVar18._0_4_ = (int)auVar8._0_4_;
  auVar18._4_4_ = (int)auVar8._4_4_;
  auVar18._8_4_ = (int)auVar8._8_4_;
  auVar18._12_4_ = (int)auVar8._12_4_;
  auVar18 = vcvtdq2ps_avx(auVar18);
  auVar18 = vcmpps_avx(auVar18,auVar8,0);
  iVar12 = vmovmskps_avx(auVar18);
  if (iVar12 == 0xf) {
    auVar18 = vinsertps_avx(ZEXT816(0),ZEXT416((uint)param_6),0x20);
    auVar8 = vinsertps_avx(auVar18,auVar21,0x30);
    auVar19._0_4_ = (int)auVar8._0_4_;
    auVar19._4_4_ = (int)auVar8._4_4_;
    auVar19._8_4_ = (int)auVar8._8_4_;
    auVar19._12_4_ = (int)auVar8._12_4_;
    auVar18 = vcvtdq2ps_avx(auVar19);
    auVar18 = vcmpps_avx(auVar18,auVar8,0);
    iVar12 = vmovmskps_avx(auVar18);
    if (iVar12 == 0xf) {
      bVar10 = true;
      goto LAB_1804deb0d;
    }
  }
  bVar10 = false;
LAB_1804deb0d:
  fVar17 = auVar21._0_4_;
  if ((*(char *)(param_1 + 0xe8) != '\0') && (bVar10)) {
    iVar12 = (int)(*(float *)(param_1 + 0xe4) * param_6);
    iVar15 = (int)(*(float *)(param_1 + 0xe4) * fVar17);
    if (iVar12 < 1) {
    }
    if ((iVar15 < 1) || ((uVar11 & 0x1f0) == 0x100)) {
      uVar24 = **(undefined4 **)(param_1 + 0x38);
      uVar25 = (*(undefined4 **)(param_1 + 0x38))[1];
      fVar22 = (float)iVar12 * fVar22;
      FUN_1804d9590(param_1,0x18,8);
      sVar5 = *(short *)(param_1 + 0x34);
      **(float **)(param_1 + 0x40) = local_118;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_114;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = fVar22 + local_118;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar22 + local_114;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = local_120;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_114;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = local_120 - fVar22;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar22 + local_114;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = local_120;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_11c;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = local_120 - fVar22;
      sVar1 = sVar5 + 3;
      sVar2 = sVar5 + 2;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_11c - fVar22;
      lVar7 = *(longlong *)(param_1 + 0x40);
      sVar3 = sVar5 + 5;
      sVar4 = sVar5 + 1;
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = local_118;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_11c;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(float **)(param_1 + 0x40) = fVar22 + local_118;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = local_11c - fVar22;
      lVar7 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar7 + 8) = uVar24;
      *(undefined4 *)(lVar7 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      **(short **)(param_1 + 0x48) = sVar5;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar4;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar5;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar3;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar1;
      sVar1 = sVar5 + 7;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      sVar2 = sVar5 + 4;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      sVar2 = sVar5 + 6;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar4;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar1;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      **(short **)(param_1 + 0x48) = sVar2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar5;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar4;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    }
    if ((((uVar11 & 0xa02000) == 0xa02000) && (iVar12 < 4)) && (iVar15 < 0x11)) {
      local_148 = (longlong)(iVar12 * 0x10 + -1 + iVar15) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
      local_150 = param_6;
      if (iVar12 <= iVar15) {
        iVar12 = iVar15;
      }
      local_158 = (float)iVar12 * fVar22;
      local_140 = uVar11;
      FUN_1804dd4a0(param_1,&local_118,&local_120,param_4);
    }
  }
  if ((bVar13 == false) || ((uVar11 & 0x1f0) == 0x100)) {
    local_148 = CONCAT44(local_148._4_4_,local_128);
    local_150 = 1.85823e-40;
    puVar14 = local_108;
    local_108._4_4_ = local_114;
    local_108._0_4_ = local_118;
    fStack_100 = local_120;
    fStack_fc = local_114;
    uVar24 = 4;
    local_f8 = local_120;
    local_f4 = local_11c;
    local_f0 = local_118;
    local_ec = local_11c;
  }
  else {
    if (fVar17 < fVar22 * 0.75 + param_6) {
      local_148 = CONCAT44(local_148._4_4_,uVar11);
      local_150 = param_6;
      local_158 = fVar17;
      FUN_1804ddf00(param_1,&local_118,&local_120,param_4);
    }
    auVar18 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x10),SUB6416(ZEXT464(0),0));
    auVar18 = vblendvps_avx(auVar21,auVar29,auVar18);
    auVar8 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x20),SUB6416(ZEXT464(0),0));
    auVar8 = vblendvps_avx(auVar21,auVar29,auVar8);
    auVar27 = ZEXT1664(auVar8);
    auVar8 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x80),SUB6416(ZEXT464(0),0));
    fVar22 = auVar18._0_4_;
    auVar8 = vblendvps_avx(auVar21,auVar29,auVar8);
    auVar31 = ZEXT1664(auVar8);
    auVar8 = vpcmpeqd_avx(ZEXT416(uVar11 & 0x40),SUB6416(ZEXT464(0),0));
    local_138._4_4_ = fVar22 + local_114;
    local_138._0_4_ = fVar22 + local_118;
    auVar21 = vblendvps_avx(auVar21,auVar29,auVar8);
    auVar28 = ZEXT1664(auVar21);
    if (fVar23 <= fVar22) {
      local_150 = 0.0;
      local_158 = 5.04467e-44;
      FUN_1804dbc10(param_1,local_138,auVar18._0_8_,0x18);
      uVar26 = auVar27._0_8_;
    }
    else {
      FUN_1804d0c90(param_1 + 0x50);
      uVar26 = auVar27._0_8_;
    }
    fVar22 = (float)uVar26;
    local_138._4_4_ = fVar22 + local_114;
    local_138._0_4_ = local_120 - fVar22;
    if (fVar30 * *pfVar16 <= fVar22) {
      local_150 = 0.0;
      local_158 = 6.72623e-44;
      FUN_1804dbc10(param_1,local_138,uVar26,0x24);
      uVar26 = auVar31._0_8_;
    }
    else {
      FUN_1804d0c90(param_1 + 0x50);
      uVar26 = auVar31._0_8_;
    }
    fVar22 = (float)uVar26;
    local_138._4_4_ = local_11c - fVar22;
    local_138._0_4_ = local_120 - fVar22;
    if (fVar30 * *pfVar16 <= fVar22) {
      local_150 = 0.0;
      local_158 = 1.68156e-44;
      FUN_1804dbc10(param_1,local_138,uVar26,0);
      uVar26 = auVar28._0_8_;
    }
    else {
      FUN_1804d0c90(param_1 + 0x50);
      uVar26 = auVar28._0_8_;
    }
    fVar22 = (float)uVar26;
    local_138._4_4_ = local_11c - fVar22;
    local_138._0_4_ = fVar22 + local_118;
    if (fVar30 * *pfVar16 <= fVar22) {
      local_150 = 0.0;
      local_158 = 3.36312e-44;
      FUN_1804dbc10(param_1,local_138,uVar26,0xc);
    }
    else {
      FUN_1804d0c90(param_1 + 0x50);
    }
    uVar24 = *(undefined4 *)(param_1 + 0x50);
    puVar14 = *(undefined1 **)(param_1 + 0x58);
    local_150 = (float)(uVar11 & 0xfff3ffff | 0x20600);
    local_148 = CONCAT44(local_148._4_4_,local_128);
  }
  local_158 = param_6;
  FUN_1804d9a00(param_1,puVar14,uVar24,param_4);
  *(undefined4 *)(param_1 + 0x50) = 0;
}



