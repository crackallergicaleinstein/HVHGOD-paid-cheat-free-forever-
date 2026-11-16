// FUN_1804ae520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ae520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ae520(undefined8 param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                  float param_6,longlong param_7,undefined4 param_8,byte param_9)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auStack_178 [32];
  float *local_158;
  uint local_150;
  float local_148;
  undefined4 local_140;
  undefined2 local_138;
  undefined1 local_136;
  byte local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 local_120 [8];
  float *local_118;
  float *local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [32];
  ulonglong local_d8;
  
  lVar2 = DAT_180bb8ae8;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_134 = param_9;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar2 + 0x14d0);
  local_118 = param_2;
  local_110 = param_3;
  uVar8 = FUN_1804b0a90("##slider",0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  uVar11 = (ulonglong)uVar8;
  if (*(uint *)(*plVar1 + 0x1534) == uVar8) {
    FUN_1804cf810(uVar11,0xb,"##slider");
  }
  local_128 = DAT_180b0a41c * 3.0 + *param_3;
  local_124 = param_3[1];
  local_12c = param_2[1];
  local_130 = *param_2 - DAT_180b0a41c * 3.0;
  local_158 = (float *)CONCAT71(local_158._1_7_,param_9);
  puVar9 = (undefined2 *)FUN_1804aad60(local_120,uVar11,&local_130,&local_128);
  auVar17 = ZEXT464(param_5);
  local_138 = *puVar9;
  local_136 = *(undefined1 *)(puVar9 + 1);
  local_140 = param_8;
  local_148 = param_6;
  local_150 = param_5;
  local_158 = param_4;
  uVar7 = FUN_1804ac750(uVar11,&local_138,*param_2,*param_3);
  cVar6 = (char)local_138;
  if (((char)local_138 == '\0') && (local_138._1_1_ == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  local_148._0_1_ = param_9;
  local_150 = param_8;
  local_158._0_4_ = param_6;
  FUN_1804ac850(uVar8,uVar12,param_4,uVar7);
  local_148 = (float)CONCAT31(local_148._1_3_,param_9);
  local_150 = param_8;
  local_158._0_4_ = param_6;
  FUN_1804ac990(uVar8,cVar6,param_4,auVar17._0_8_);
  auVar18 = ZEXT464(0x3f800000);
  fVar15 = (*param_4 - auVar17._0_4_) / (param_6 - auVar17._0_4_);
  fVar16 = 0.0;
  if (0.0 <= fVar15) {
    auVar4 = vminss_avx(auVar18._0_16_,ZEXT416((uint)fVar15));
    uVar12 = auVar4._0_8_;
  }
  else {
    uVar12 = 0;
  }
  uVar10 = (ulonglong)(uVar8 >> 0x1e ^ uVar8) * -0x40a7b892e31b1a47;
  uVar10 = (uVar10 >> 0x1b ^ uVar10) * -0x6b2fb644ecceee15;
  uVar10 = uVar10 >> 0x1f ^ uVar10;
  fVar15 = (float)FUN_1804aaa10((uint)(uVar10 >> 0x20) ^ (uint)uVar10,uVar12,0x41c00000);
  if ((cVar6 == '\0') && (local_138._1_1_ == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = auVar18._0_8_;
  }
  uVar11 = ((uVar11 ^ 0x9e3779b97f4a7c15) >> 0x1e ^ uVar11 ^ 0x9e3779b97f4a7c15) *
           -0x40a7b892e31b1a47;
  uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
  uVar11 = uVar11 >> 0x1f ^ uVar11;
  fVar13 = (float)FUN_1804aaa10((uint)(uVar11 >> 0x20) ^ (uint)uVar11,uVar12,0x41900000);
  fVar19 = 0.5;
  lVar2 = plVar1[0x59];
  fVar20 = 255.0;
  auVar3 = vpcmpeqd_avx(ZEXT116(local_134),SUB6416(ZEXT464(0),0));
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.0 + 0.5)),1);
  auVar4 = vmaxss_avx(SUB6416(ZEXT464(0x40000000),0),auVar4);
  auVar17 = ZEXT1664(auVar4);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*local_118 + 0.5)),1);
  local_100 = auVar5._0_4_;
  fVar22 = auVar4._0_4_;
  auVar4 = vblendvps_avx(auVar18._0_16_,SUB6416(ZEXT464(0x3ee66666),0),auVar3);
  auVar23 = ZEXT1664(auVar4);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*local_110 + 0.5)),1);
  auVar5 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((local_118[1] + local_110[1]) - fVar22) * 0.5 + 0.5)),1);
  local_fc = auVar5._0_4_;
  local_104 = local_fc + fVar22;
  local_108 = auVar3._0_4_;
  fVar14 = ((float)(DAT_1808da46c >> 0x18) / 255.0) * auVar4._0_4_;
  if (fVar16 <= fVar14) {
    auVar4 = vminss_avx(auVar18._0_16_,ZEXT416((uint)fVar14));
    fVar14 = auVar4._0_4_;
  }
  else {
    fVar14 = 0.0;
  }
  local_150 = 0;
  fVar22 = fVar22 * 0.5;
  local_158._0_4_ = fVar22;
  FUN_1804df870(lVar2,&local_100,&local_108,
                (int)(longlong)(fVar14 * 255.0 + 0.5) << 0x18 | DAT_1808da46c & 0xffffff);
  fVar15 = (local_108 - local_100) * fVar15 + local_100;
  auVar21 = ZEXT464((uint)fVar15);
  if (local_100 + fVar19 < fVar15) {
    fVar14 = local_100;
    uVar8 = FUN_180462ad0(DAT_180b0a40c,0xffffffff,fVar13 * 0.25);
    fVar15 = ((float)(uVar8 >> 0x18) / fVar20) * auVar23._0_4_;
    if (fVar16 <= fVar15) {
      auVar4 = vminss_avx(auVar18._0_16_,ZEXT416((uint)fVar15));
      fVar15 = auVar4._0_4_;
    }
    else {
      fVar15 = 0.0;
    }
    auVar4 = vmaxss_avx(auVar21._0_16_,ZEXT416((uint)(fVar14 + auVar17._0_4_)));
    local_130 = auVar4._0_4_;
    local_150 = 0;
    local_12c = local_104;
    local_158._0_4_ = fVar22;
    FUN_1804df870(lVar2,&local_100,&local_130,
                  (int)(longlong)(fVar15 * fVar20 + fVar19) << 0x18 | uVar8 & 0xffffff);
  }
  if ((param_7 != 0) && ((cVar6 != '\0' || (local_138._1_1_ != '\0')))) {
    FUN_18015abc0(local_f8,0x20,param_7,(double)*param_4);
    FUN_1804ad0d0(local_f8,0);
  }
}



