// FUN_1804ad940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ad940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ad940(undefined8 param_1,float param_2,float param_3,float param_4,float *param_5,
                  float param_6,float param_7,undefined *param_8,undefined4 param_9)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float *pfVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  undefined8 uVar15;
  undefined *puVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [64];
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  float local_1a8;
  float local_1a4;
  byte local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180 [2];
  undefined8 local_178;
  undefined1 local_170 [8];
  undefined *local_168;
  float *local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  ulonglong local_d8;
  
  lVar2 = DAT_180bb8ae8;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar1 = *(longlong **)(lVar2 + 0x14d0);
  local_198 = param_4;
  uVar9 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4));
  uVar12 = (ulonglong)uVar9;
  if (*(uint *)(*plVar1 + 0x1534) == uVar9) {
    FUN_1804cf810(uVar12,0xb,param_1);
  }
  lVar2 = plVar1[0x59];
  puVar16 = &DAT_180829c34;
  if (param_8 != (undefined *)0x0) {
    puVar16 = param_8;
  }
  local_168 = puVar16;
  FUN_18015abc0(local_138,0x20,puVar16,(double)*param_5);
  uVar15 = DAT_180c62ca8;
  local_1e0 = local_138;
  auVar32 = ZEXT464(0x4139999a);
  fVar29 = 0.5;
  auVar30 = ZEXT464(0x3f800000);
  auVar33 = ZEXT464(0x7f7fffff);
  local_178 = DAT_180c62ca8;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  auVar22 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(DAT_180b0a41c * 11.6 + 0.5)),1);
  local_1d8 = 0;
  auVar28 = ZEXT864(0);
  auVar22 = vmaxss_avx(auVar30._0_16_,auVar22);
  local_1e8 = (float *)((ulonglong)local_1e8._4_4_ << 0x20);
  FUN_1804ea040(local_180,DAT_180c62ca8,auVar22._0_8_);
  uVar13 = ((uVar12 ^ 0xdaa66d2c7ddf743f) >> 0x1e ^ uVar12 ^ 0xdaa66d2c7ddf743f) *
           -0x40a7b892e31b1a47;
  uVar13 = (uVar13 >> 0x1b ^ uVar13) * -0x6b2fb644ecceee15;
  uVar13 = uVar13 >> 0x1f ^ uVar13;
  pfVar10 = (float *)FUN_1804b15a0(*(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0),
                                   (uint)(uVar13 >> 0x20) ^ (uint)uVar13,0);
  auVar31 = ZEXT464((uint)param_6);
  local_160 = pfVar10;
  if ((*(uint *)(DAT_180bb8ae8 + 0x1550) == uVar9) && (*pfVar10 != auVar28._0_4_)) {
    fVar25 = DAT_180b0a41c;
  }
  else {
    FUN_18015abc0(local_f8,0x20,puVar16,(double)param_6);
    FUN_18015abc0(local_118,0x20,puVar16,(double)param_7);
    local_1e0 = local_118;
    local_1b8 = 0;
    local_1c8 = 0;
    auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar32._0_4_ * DAT_180b0a41c + fVar29)),1);
    local_1d0 = 0;
    auVar22 = vmaxss_avx(auVar30._0_16_,auVar22);
    local_1d8 = 0;
    local_1e8._0_4_ = (float)auVar28._0_4_;
    FUN_1804ea040(&local_194,uVar15,auVar22._0_8_,auVar33._0_8_);
    local_1b8 = 0;
    local_1e0 = local_f8;
    local_1c8 = 0;
    auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar32._0_4_ * DAT_180b0a41c + fVar29)),1);
    local_1d0 = 0;
    auVar22 = vmaxss_avx(auVar30._0_16_,auVar22);
    local_1d8 = 0;
    local_1e8 = (float *)CONCAT44(local_1e8._4_4_,auVar28._0_4_);
    FUN_1804ea040(&local_1a8,uVar15,auVar22._0_8_,auVar33._0_8_);
    fVar25 = DAT_180b0a41c;
    auVar22 = vmaxss_avx(ZEXT416((uint)local_1a8),ZEXT416((uint)local_194));
    auVar22 = vmaxss_avx(ZEXT416((uint)local_180[0]),auVar22);
    auVar22 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(auVar22._0_4_ + DAT_180b0a41c * 4.5 + DAT_180b0a41c * 4.5
                                         + fVar29)),1);
    auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 18.0 + fVar29)),1);
    auVar22 = vmaxss_avx(auVar22,auVar23);
    *pfVar10 = auVar22._0_4_;
  }
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar25 * 17.0 + fVar29)),1);
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3 + fVar29)),1);
  local_144 = auVar22._0_4_;
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_198 - local_144 * fVar29) + fVar29)),1);
  local_13c = auVar22._0_4_ + local_144;
  local_144 = local_13c - local_144;
  local_140 = auVar23._0_4_;
  local_148 = local_140 - *pfVar10;
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar25 * 3.0 + fVar29)),1);
  local_180[0] = fVar25 * 4.8;
  auVar22 = vmaxss_avx(SUB6416(ZEXT464(0x40000000),0),auVar22);
  local_18c = auVar22._0_4_;
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 + fVar29)),1);
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_198 - local_18c * fVar29) + fVar29)),1);
  local_154 = auVar23._0_4_;
  local_14c = local_154 + local_18c;
  local_184 = local_18c * fVar29 + local_154;
  local_158 = auVar22._0_4_;
  auVar35 = ZEXT464((uint)(local_158 + fVar25 * 4.8));
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((local_148 - fVar25 * 9.75) + fVar29)),1);
  local_150 = auVar22._0_4_;
  local_188 = local_150 - fVar25 * 4.8;
  local_194 = fVar25 * 2.0 + local_150;
  local_190 = fVar25 * 9.0 + local_198;
  local_1a4 = local_198 - fVar25 * 9.0;
  local_1a8 = local_158 - fVar25 * 2.0;
  local_1e8 = (float *)CONCAT71(local_1e8._1_7_,1);
  puVar11 = (undefined2 *)FUN_1804aad60(local_170,uVar12,&local_1a8,&local_194);
  local_19c = *puVar11;
  local_19a = *(undefined1 *)(puVar11 + 1);
  lVar18 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  auVar22 = vmaxss_avx(ZEXT416((uint)local_144),ZEXT416(*(uint *)(lVar18 + 0x26c)));
  auVar20 = vminss_avx(ZEXT416((uint)local_140),ZEXT416(*(uint *)(lVar18 + 0x270)));
  auVar24 = vminss_avx(ZEXT416((uint)local_13c),ZEXT416(*(uint *)(lVar18 + 0x274)));
  auVar23 = vmaxss_avx(ZEXT416((uint)local_148),ZEXT416(*(uint *)(lVar18 + 0x268)));
  if (auVar23._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcec) <= *(float *)(DAT_180bb8ae8 + 0x110)) {
    if ((((auVar22._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcf0) <= *(float *)(DAT_180bb8ae8 + 0x114))
         && (*(float *)(DAT_180bb8ae8 + 0x110) < *(float *)(DAT_180bb8ae8 + 0xcec) + auVar20._0_4_))
        && (*(float *)(DAT_180bb8ae8 + 0x114) < auVar24._0_4_ + *(float *)(DAT_180bb8ae8 + 0xcf0)))
       && ((lVar17 = *(longlong *)(DAT_180bb8ae8 + 0x14d8), lVar17 != 0 && (lVar17 == lVar18)))) {
      cVar14 = '\0';
      lVar18 = DAT_180bb8ae8;
      cVar6 = FUN_1804b7ab0(lVar17);
      if ((cVar6 != '\0') &&
         (((*(int *)(lVar18 + 0x1550) == 0 || (*(char *)(lVar18 + 0x155f) != cVar14)) ||
          (*(int *)(lVar18 + 0x1550) == *(int *)(lVar17 + 0x8c))))) {
        bVar3 = true;
        goto LAB_1804adf1b;
      }
    }
  }
  bVar3 = false;
LAB_1804adf1b:
  local_1d0 = CONCAT44(local_1d0._4_4_,param_9);
  local_1d8 = CONCAT44(local_1d8._4_4_,param_7);
  local_1e8 = param_5;
  fVar25 = local_188;
  local_1e0._0_4_ = auVar31._0_4_;
  bVar7 = FUN_1804ac750(uVar9,&local_19c,auVar35._0_8_,local_188);
  cVar6 = (char)local_19c;
  if ((((char)local_19c != '\0') || (local_19c._1_1_ != '\0')) || (bVar3)) {
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  local_1d8._0_1_ = 1;
  local_1e0._0_4_ = param_9;
  local_1e8._0_4_ = param_7;
  bVar8 = FUN_1804ac850(uVar9,uVar15,param_5,auVar31._0_8_);
  if ((cVar6 != '\0') || (bVar3)) {
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  local_1d8 = CONCAT71(local_1d8._1_7_,1);
  local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,param_9);
  local_1e8._0_4_ = param_7;
  local_1a0 = FUN_1804ac990(uVar9,uVar15,param_5,auVar31._0_8_);
  local_1a0 = local_1a0 | bVar8 | bVar7;
  FUN_18015abc0(local_138,0x20,local_168,(double)*param_5);
  uVar15 = local_178;
  local_1e0 = local_138;
  local_1b8 = 0;
  local_1c8 = 0;
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar32._0_4_ * DAT_180b0a41c + fVar29)),1);
  local_1d0 = 0;
  auVar22 = vmaxss_avx(auVar30._0_16_,auVar22);
  local_1d8 = 0;
  local_1e8._0_4_ = auVar28._0_4_;
  FUN_1804ea040(&local_178,local_178,auVar22._0_8_,auVar33._0_8_);
  fVar26 = (*param_5 - auVar31._0_4_) / (param_7 - auVar31._0_4_);
  if (auVar28._0_4_ <= fVar26) {
    auVar22 = vminss_avx(auVar30._0_16_,ZEXT416((uint)fVar26));
    uVar21 = auVar22._0_8_;
  }
  else {
    uVar21 = 0;
  }
  uVar13 = (ulonglong)(uVar9 >> 0x1e ^ uVar9) * -0x40a7b892e31b1a47;
  uVar13 = (uVar13 >> 0x1b ^ uVar13) * -0x6b2fb644ecceee15;
  uVar13 = uVar13 >> 0x1f ^ uVar13;
  fVar26 = (float)FUN_1804aaa10((uint)(uVar13 >> 0x20) ^ (uint)uVar13,uVar21,0x41c00000);
  if (((cVar6 != '\0') || (local_19c._1_1_ != '\0')) || (bVar3)) {
    uVar21 = auVar30._0_8_;
  }
  else {
    uVar21 = 0;
  }
  uVar12 = ((uVar12 ^ 0x9e3779b97f4a7c15) >> 0x1e ^ uVar12 ^ 0x9e3779b97f4a7c15) *
           -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  fVar19 = (float)FUN_1804aaa10((uint)(uVar12 >> 0x20) ^ (uint)uVar12,uVar21,0x41900000);
  fVar27 = 255.0;
  auVar31 = ZEXT464((uint)((fVar25 - auVar35._0_4_) * fVar26 + auVar35._0_4_));
  fVar25 = (float)(DAT_1808da46c >> 0x18) / 255.0;
  if (auVar28._0_4_ <= fVar25) {
    auVar22 = vminss_avx(auVar30._0_16_,ZEXT416((uint)fVar25));
    fVar25 = auVar22._0_4_;
  }
  else {
    fVar25 = 0.0;
  }
  local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffff00000000);
  fVar26 = fVar29 * local_18c;
  fVar34 = local_18c;
  local_1e8._0_4_ = fVar26;
  FUN_1804df870(lVar2,&local_158,&local_150,
                (int)(longlong)(fVar25 * 255.0 + fVar29) << 0x18 | DAT_1808da46c & 0xffffff);
  auVar22._0_4_ = (float)(DAT_180b0a40c >> 0x18) / fVar27;
  auVar22._4_12_ = SUB1612(ZEXT816(0),4);
  if (auVar28._0_4_ <= auVar22._0_4_) {
    auVar22 = vminss_avx(auVar30._0_16_,auVar22);
    fVar25 = auVar22._0_4_;
  }
  else {
    fVar25 = 0.0;
  }
  auVar22 = vmaxss_avx(auVar31._0_16_,ZEXT416((uint)(fVar34 + local_158)));
  local_1a8 = auVar22._0_4_;
  local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffff00000000);
  local_1a4 = local_14c;
  local_1e8._0_4_ = fVar26;
  FUN_1804df870(lVar2,&local_158,&local_1a8,
                (int)(longlong)(fVar25 * fVar27 + fVar29) << 0x18 | DAT_180b0a40c & 0xffffff);
  auVar23._0_4_ = (float)(DAT_180b0a4bc >> 0x18) / fVar27;
  auVar23._4_8_ = SUB128(ZEXT812(0),4);
  auVar23._12_4_ = 0;
  if (auVar28._0_4_ <= auVar23._0_4_) {
    auVar22 = vminss_avx(auVar30._0_16_,auVar23);
    fVar25 = auVar22._0_4_;
  }
  else {
    fVar25 = 0.0;
  }
  local_1a4 = local_184;
  local_1e8._0_4_ = 4.48416e-44;
  local_1a8 = auVar31._0_4_;
  FUN_1804e01c0(lVar2,&local_1a8,fVar29 * DAT_180b0a41c * fVar19 + local_180[0],
                (int)(longlong)(fVar25 * fVar27 + fVar29) << 0x18 | DAT_180b0a4bc & 0xffffff);
  local_1e8._0_4_ = DAT_180b0a41c * 3.5;
  auVar20._0_4_ = (float)(DAT_1808da480 >> 0x18) / fVar27;
  auVar20._4_8_ = SUB128(ZEXT812(0),4);
  auVar20._12_4_ = 0;
  if (auVar28._0_4_ <= auVar20._0_4_) {
    auVar22 = vminss_avx(auVar30._0_16_,auVar20);
    fVar25 = auVar22._0_4_;
  }
  else {
    fVar25 = 0.0;
  }
  local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffff00000000);
  FUN_1804df870(lVar2,&local_148,&local_140,
                (int)(longlong)(fVar25 * fVar27 + fVar29) << 0x18 | DAT_1808da480 & 0xffffff);
  auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  fVar25 = (float)(DAT_1808da468 >> 0x18) / fVar27;
  auVar22 = vmaxss_avx(auVar30._0_16_,auVar22);
  auVar31 = ZEXT1664(auVar22);
  if (auVar28._0_4_ <= fVar25) {
    auVar23 = vminss_avx(auVar30._0_16_,ZEXT416((uint)fVar25));
    fVar25 = auVar23._0_4_;
  }
  else {
    fVar25 = 0.0;
  }
  fVar26 = auVar22._0_4_ * fVar29;
  fVar25 = fVar25 * fVar27 + fVar29;
  local_1a8 = local_140 - fVar26;
  local_1a4 = local_13c - fVar26;
  local_194 = fVar26 + local_148;
  local_190 = fVar26 + local_144;
  uVar9 = DAT_1808da468 & 0xffffff;
  auVar22 = vmaxss_avx(ZEXT416((uint)((float)local_1e8 - fVar26)),auVar28._0_16_);
  local_1e8 = (float *)((ulonglong)local_1e8._4_4_ << 0x20);
  FUN_1804dc420(lVar2,&local_194,&local_1a8,auVar22._0_8_);
  local_1d8 = CONCAT44(local_1d8._4_4_,auVar33._0_4_);
  local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,0x200);
  local_1e8._0_4_ = (float)auVar31._0_4_;
  FUN_1804d9a00(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),
                (int)(longlong)fVar25 << 0x18 | uVar9);
  uVar5 = DAT_180b0a544;
  uVar4 = DAT_180b0a424;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  uVar9 = FUN_180462ad0(uVar5,uVar4,fVar19 * fVar29);
  auVar24._0_4_ = (float)(uVar9 >> 0x18) / fVar27;
  auVar24._4_12_ = SUB1612(ZEXT816(0),4);
  if (auVar28._0_4_ <= auVar24._0_4_) {
    auVar22 = vminss_avx(auVar30._0_16_,auVar24);
    auVar28 = ZEXT1664(auVar22);
  }
  fVar25 = (float)FUN_180463350(uVar15,auVar32._0_8_);
  local_1a4 = local_198 - fVar25 * fVar29;
  local_1a8 = (*local_160 - (float)local_178) * fVar29 + local_148;
  local_1e0 = local_138;
  local_1d8 = 0;
  local_1e8 = (float *)CONCAT44(local_1e8._4_4_,
                                (int)(longlong)(auVar28._0_4_ * fVar27 + fVar29) << 0x18 |
                                uVar9 & 0xffffff);
  FUN_180463450(lVar2,uVar15,auVar32._0_8_,&local_1a8);
}



