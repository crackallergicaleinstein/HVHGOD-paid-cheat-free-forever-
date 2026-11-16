// FUN_1801cec70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cec70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801cec70(undefined1 (*param_1) [16],float param_2,uint param_3,char param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 in_RDX;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auStack_178 [32];
  uint local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [48];
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  auVar21 = ZEXT864(0);
  local_118 = param_1;
  pauVar3 = (undefined1 (*) [16])FUN_18043b290(local_128,in_RDX,0x42080000,0);
  local_128 = *pauVar3;
  auVar23 = ZEXT1664(local_128);
  uVar4 = FUN_180439770();
  if (param_4 != '\0') {
    uVar5 = FUN_180439770();
    cVar2 = FUN_18043b5c0(uVar5);
    if ((cVar2 == '\0') && (cVar2 = FUN_18043b8e0(uVar4,local_128), cVar2 != '\0')) {
      bVar14 = 1;
      goto LAB_1801ced35;
    }
  }
  bVar14 = 0;
LAB_1801ced35:
  local_128 = *param_1;
  uVar10 = 0xcbf29ce484222325;
  bVar1 = false;
  uVar7 = 0;
  if (*(ulonglong *)(*param_1 + 8) != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)(uVar7 + local_128._0_8_)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(*param_1 + 8));
  }
  lVar6 = FUN_180439770();
  for (puVar8 = *(ulonglong **)(lVar6 + 0x490); puVar8 != *(ulonglong **)(lVar6 + 0x498);
      puVar8 = puVar8 + 1) {
    uVar10 = (uVar10 ^ *puVar8) * 0x100000001b3;
  }
  auVar18 = vpcmpeqd_avx(ZEXT116(bVar14),SUB6416(ZEXT464(0),0));
  auVar20 = ZEXT464(0x3f800000);
  auVar18 = vblendvps_avx(auVar20._0_16_,auVar21._0_16_,auVar18);
  fVar15 = (float)FUN_18043a910(uVar10,auVar18._0_8_,0x41600000,auVar21._0_8_);
  uVar9 = DAT_180bb8a60;
  if ((param_4 == '\0') || (param_5 == '\0')) {
    uVar13 = DAT_180bb8a68 >> 8 & 0xff;
    uVar12 = DAT_180bb8a68 >> 0x10 & 0xff;
    uVar12 = ((((int)((float)(int)((DAT_180bb8a6c >> 0x18) - (DAT_180bb8a68 >> 0x18)) * fVar15 +
                     (float)(DAT_180bb8a68 >> 0x18)) & 0xffU) << 8 |
              (int)((float)(int)((DAT_180bb8a6c >> 0x10 & 0xff) - uVar12) * fVar15 + (float)uVar12)
              & 0xffU) << 8 |
             (int)((float)(int)((DAT_180bb8a6c >> 8 & 0xff) - uVar13) * fVar15 + (float)uVar13) &
             0xffU) << 8 |
             (int)((float)(int)((DAT_180bb8a6c & 0xff) - (DAT_180bb8a68 & 0xff)) * fVar15 +
                  (float)(DAT_180bb8a68 & 0xff)) & 0xffU;
    if (param_4 == '\0') {
      uVar9 = ((DAT_180bb8a64._2_1_ | 0x7800) << 8 | (uint)DAT_180bb8a64._1_1_) << 8 |
              (uint)(byte)DAT_180bb8a64;
    }
  }
  else {
    bVar1 = true;
    uVar12 = DAT_180bb8a74;
  }
  lVar6 = FUN_180439770();
  if (*(longlong *)(lVar6 + 0x4a8) == *(longlong *)(lVar6 + 0x4b0)) {
    puVar11 = &DAT_180bbac80;
  }
  else {
    puVar11 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar6 + 0x4b0) + -4) * 0x13;
  }
  local_128._0_8_ = 0x4100000041000000;
  local_128._8_8_ = 0x4100000041000000;
  local_148 = local_128;
  auVar22 = auVar23._0_16_;
  auVar18 = vshufps_avx(auVar22,auVar22,0xff);
  auVar25 = ZEXT1664(auVar18);
  local_158 = auVar18._0_4_;
  auVar18 = vshufps_avx(auVar22,auVar22,0xaa);
  auVar29 = ZEXT1664(auVar18);
  auVar22 = vshufps_avx(auVar22,auVar22,0x55);
  auVar27 = ZEXT1664(auVar22);
  local_150._0_4_ = uVar12;
  FUN_180430970(puVar11,auVar23._0_8_,auVar22._0_8_,auVar18._0_8_);
  uVar12 = DAT_180bb8a70;
  if (bVar1) {
    uVar12 = DAT_180bb8a74;
  }
  local_128._0_8_ = 0x4100000041000000;
  local_128._8_8_ = 0x4100000041000000;
  local_140 = auVar20._0_4_;
  local_148 = local_128;
  local_150 = CONCAT44(local_150._4_4_,uVar12);
  local_158 = auVar25._0_4_;
  FUN_1804330f0(puVar11,auVar23._0_8_,auVar27._0_8_,auVar29._0_8_);
  local_128 = *local_118;
  pauVar3 = (undefined1 (*) [16])FUN_18043a0a0(local_108,local_128);
  local_d8 = *pauVar3;
  uStack_c8 = *(undefined8 *)pauVar3[1];
  uStack_c0 = *(ulonglong *)(pauVar3[1] + 8);
  (*pauVar3)[0] = 0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0xf;
  auVar21 = ZEXT1664(auVar21._0_16_);
  auVar23 = ZEXT1664(auVar23._0_16_);
  auVar20 = ZEXT1664(auVar25._0_16_);
  auVar25 = ZEXT1664(auVar27._0_16_);
  auVar27 = ZEXT1664(auVar29._0_16_);
  FUN_18015c010(local_108);
  local_128 = (undefined1  [16])0x0;
  auVar18 = vpcmpeqd_avx(ZEXT416(param_3),ZEXT416(0));
  auVar18 = vblendvps_avx(SUB6416(ZEXT464(0x42180000),0),SUB6416(ZEXT464(0x41900000),0),auVar18);
  auVar18 = vmaxss_avx(ZEXT416((uint)(param_2 - auVar18._0_4_)),auVar21._0_16_);
  local_118 = &local_d8;
  if (0xf < uStack_c0) {
    local_118 = (undefined1 (*) [16])local_d8._0_8_;
  }
  local_110 = uStack_c8;
  FUN_18043b680(local_128,&local_118,auVar18._0_8_);
  fVar15 = auVar23._0_4_;
  fVar28 = auVar27._0_4_;
  auVar18 = auVar21._0_16_;
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar6 = DAT_180bbade0;
  }
  else {
    lVar6 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  uVar4 = local_128._0_8_;
  uVar5 = local_128._8_8_;
  if (lVar6 == 0) {
    fVar16 = auVar21._0_4_;
    auVar21 = ZEXT1664(auVar18);
  }
  else {
    FUN_180430010(lVar6,&local_118,local_128);
    fVar15 = auVar23._0_4_;
    fVar28 = auVar27._0_4_;
    auVar18 = auVar21._0_16_;
    auVar21 = ZEXT464(local_118._4_4_);
    fVar16 = SUB84(local_118,0);
  }
  fVar19 = auVar21._0_4_;
  fVar26 = auVar25._0_4_;
  fVar24 = auVar20._0_4_;
  auVar22 = vpcmpeqd_avx(ZEXT416(param_3),ZEXT416(0));
  auVar18 = vblendvps_avx(SUB6416(ZEXT464(0x41c00000),0),auVar18,auVar22);
  fVar17 = 0.5;
  fVar15 = (fVar28 - (auVar18._0_4_ + fVar16)) * 0.5 + fVar15;
  if (param_3 != 0) {
    local_118 = (undefined1 (*) [16])CONCAT44((fVar24 * 0.5 + fVar26) - 8.0,fVar15);
    local_110 = 0x4180000041800000;
    fVar17 = 0.5;
    FUN_1801ce330(puVar11,&local_118,param_3,uVar9);
    fVar19 = auVar21._0_4_;
    fVar26 = auVar25._0_4_;
    fVar24 = auVar20._0_4_;
  }
  local_128._8_8_ = uVar5;
  local_128._0_8_ = uVar4;
  local_150 = 0;
  local_158 = uVar9;
  FUN_1804340b0(puVar11,(float)(-(param_3 != 0) & 0x18) + fVar15,
                (fVar24 * fVar17 + fVar26) - fVar19 * fVar17,local_128);
  FUN_18015c010(local_d8);
}



