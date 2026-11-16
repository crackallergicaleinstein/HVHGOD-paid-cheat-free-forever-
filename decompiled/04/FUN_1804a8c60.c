// FUN_1804a8c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a8c60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a8c60(uint param_1,ulonglong param_2,float *param_3,float *param_4,byte param_5,
                  char param_6,float param_7,float *param_8)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auStack_158 [32];
  float local_138;
  ulonglong local_130;
  undefined8 local_128;
  float local_118;
  float local_114;
  float local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  lVar5 = DAT_180bb8ae8;
  local_f0 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_138 = (float)CONCAT31(local_138._1_3_,1);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8);
  if (param_8 == (float *)0x0) {
    pfVar10 = &local_118;
    param_8 = param_3;
    pfVar11 = param_4;
  }
  else {
    pfVar10 = local_110;
    pfVar11 = param_8 + 2;
  }
  puVar8 = (ushort *)FUN_1804aad60(pfVar10,(ulonglong)param_1,param_8,pfVar11);
  auVar21 = ZEXT464(0x3f800000);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = ZEXT812(0);
  auVar17 = ZEXT1264(ZEXT812(0)) << 0x20;
  uVar9 = (ulonglong)(param_1 >> 0x1e ^ param_1) * -0x40a7b892e31b1a47;
  uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;
  uVar9 = uVar9 >> 0x1f ^ uVar9;
  auVar3 = vpcmpeqd_avx(ZEXT416(*puVar8 & 0xff),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar21._0_16_,auVar4 << 0x20,auVar3);
  uVar15 = FUN_1804aaa10((uint)(uVar9 >> 0x20) ^ (uint)uVar9,auVar3._0_8_,0x41b00000);
  uVar9 = (ulonglong)param_1 ^ 0x9e3779b97f4a7c15;
  uVar9 = (uVar9 >> 0x1e ^ uVar9) * -0x40a7b892e31b1a47;
  uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;
  uVar9 = uVar9 >> 0x1f ^ uVar9;
  auVar3 = vpcmpeqd_avx(ZEXT116(param_5),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(auVar21._0_16_,auVar17._0_16_,auVar3);
  uVar16 = FUN_1804aaa10((uint)(uVar9 >> 0x20) ^ (uint)uVar9,auVar3._0_8_,0x41900000);
  fVar19 = 255.0;
  fVar18 = 0.5;
  if (auVar17._0_4_ < (float)uVar15) {
    local_138 = DAT_180b0a41c * 5.0;
    fVar13 = ((float)(DAT_180b0a4fc >> 0x18) / 255.0) * (float)uVar15 * param_7;
    if (auVar17._0_4_ <= fVar13) {
      auVar3 = vminss_avx(auVar21._0_16_,ZEXT416((uint)fVar13));
      fVar13 = auVar3._0_4_;
    }
    else {
      fVar13 = 0.0;
    }
    local_130 = local_130 & 0xffffffff00000000;
    FUN_1804df870(uVar1,param_3,param_4,
                  (int)(longlong)(fVar13 * 255.0 + 0.5) << 0x18 | DAT_180b0a4fc & 0xffffff);
  }
  fVar13 = (param_4[1] + param_3[1]) * fVar18;
  local_118 = ((float)uVar15 * 0.6 + (float)uVar16 * 0.4) * DAT_180b0a41c * 2.0;
  uVar12 = DAT_180c62ca8;
  if (fVar18 < (float)uVar16) {
    uVar12 = DAT_180c62cb0;
  }
  uVar6 = FUN_180462ad0(DAT_1808da474,DAT_1808da478,uVar15);
  uVar7 = FUN_180462ad0(uVar6,DAT_180b0a424,uVar16);
  fVar20 = (float)uVar16;
  fVar14 = ((float)(uVar7 >> 0x18) / fVar19) * param_7;
  if (auVar17._0_4_ <= fVar14) {
    auVar3 = vminss_avx(auVar21._0_16_,ZEXT416((uint)fVar14));
  }
  else {
    auVar3 = ZEXT816(0);
  }
  auVar22 = ZEXT1664(auVar3);
  fVar14 = (float)FUN_180463350(uVar12,0x4159999a);
  fVar23 = 8.0;
  local_114 = fVar13 - fVar14 * fVar18;
  auVar3 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(DAT_180b0a41c * 8.0 + *param_3 + local_118 + fVar18)),1);
  local_118 = auVar3._0_4_;
  local_128 = 0;
  local_138 = (float)((int)(longlong)(auVar22._0_4_ * fVar19 + fVar18) << 0x18 | uVar7 & 0xffffff);
  local_130 = param_2;
  FUN_180463450(uVar1,uVar12,0x4159999a,&local_118);
  fVar14 = auVar17._0_4_;
  if ((param_6 != '\0') && (fVar14 < fVar20)) {
    local_138 = DAT_180b0a41c * 1.6;
    local_f8 = *param_4 - DAT_180b0a41c * 10.0;
    fVar2 = ((float)(DAT_180b0a40c >> 0x18) / fVar19) * fVar20 * param_7;
    if (fVar14 <= fVar2) {
      auVar3 = vminss_avx(auVar21._0_16_,ZEXT416((uint)fVar2));
      fVar14 = auVar3._0_4_;
    }
    fVar20 = DAT_180b0a41c * fVar23 * (fVar20 * 0.4 + 0.6) * fVar18;
    local_100 = local_f8 - fVar20 * 0.3;
    local_108 = local_f8 - fVar20;
    local_fc = fVar20 * 0.7 + fVar13;
    local_f8 = fVar20 + local_f8;
    local_f4 = fVar13 - fVar20 * 0.75;
    local_128 = CONCAT44(local_128._4_4_,0x7f7fffff);
    local_130 = local_130 & 0xffffffff00000000;
    local_104 = fVar13;
    FUN_1804d9a00(uVar1,&local_108,3,
                  (int)(longlong)(fVar14 * fVar19 + fVar18) << 0x18 | DAT_180b0a40c & 0xffffff);
  }
}



