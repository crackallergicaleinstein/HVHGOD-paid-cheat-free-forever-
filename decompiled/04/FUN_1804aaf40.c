// FUN_1804aaf40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aaf40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aaf40(undefined8 param_1,byte *param_2,float *param_3,byte param_4,float param_5)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auStack_138 [32];
  float local_118;
  undefined4 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  lVar3 = DAT_180bb8ae8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar3 + 0x14d0);
  uVar7 = FUN_1804b0a90(param_1,0,
                        *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
  uVar13 = (ulonglong)uVar7;
  if (*(uint *)(*plVar2 + 0x1534) == uVar7) {
    FUN_1804cf810(uVar13,0xb,param_1);
  }
  fVar25 = 0.5;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_3 + 0.5)),1);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3[1] + 0.5)),1);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_5 * 25.2 * DAT_180b0a41c + 0.5)),1);
  local_f0 = auVar4._0_4_;
  local_e8 = auVar6._0_4_ + local_f0;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_5 * 15.55 * DAT_180b0a41c + 0.5)),1);
  local_fc = DAT_180b0a41c * 3.0;
  local_ec = auVar5._0_4_;
  local_e4 = auVar4._0_4_ + local_ec;
  local_104 = local_e4 + local_fc;
  local_108 = local_e8 + local_fc;
  local_f8 = local_ec - local_fc;
  local_fc = local_f0 - local_fc;
  local_118 = (float)CONCAT31(local_118._1_3_,param_4);
  puVar11 = (undefined2 *)FUN_1804aad60(&local_100,uVar13,&local_fc,&local_108);
  uVar1 = *puVar11;
  if (*(char *)(puVar11 + 1) != '\0') {
    *param_2 = *param_2 == 0;
    FUN_1804b7a50(uVar13);
  }
  auVar26 = ZEXT464(0x3f800000);
  uVar16 = 0;
  uVar12 = (ulonglong)(uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;
  uVar12 = (uVar12 >> 0x1b ^ uVar12) * -0x6b2fb644ecceee15;
  uVar12 = uVar12 >> 0x1f ^ uVar12;
  auVar4 = vpcmpeqd_avx(ZEXT116(*param_2),SUB6416(ZEXT464(0),0));
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auVar24 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar4 = vblendvps_avx(auVar26._0_16_,auVar5 << 0x20,auVar4);
  uVar19 = FUN_1804aaa10((uint)(uVar12 >> 0x20) ^ (uint)uVar12,auVar4._0_8_,0x41a00000);
  uVar13 = ((uVar13 ^ 0x9e3779b97f4a7c15) >> 0x1e ^ uVar13 ^ 0x9e3779b97f4a7c15) *
           -0x40a7b892e31b1a47;
  uVar13 = (uVar13 >> 0x1b ^ uVar13) * -0x6b2fb644ecceee15;
  uVar13 = uVar13 >> 0x1f ^ uVar13;
  auVar4 = vpcmpeqd_avx(ZEXT116((byte)uVar1),SUB6416(ZEXT464(0),0));
  auVar4 = vblendvps_avx(auVar26._0_16_,auVar24._0_16_,auVar4);
  fVar17 = (float)FUN_1804aaa10((uint)(uVar13 >> 0x20) ^ (uint)uVar13,auVar4._0_8_,0x41800000);
  fVar28 = 255.0;
  lVar3 = plVar2[0x59];
  auVar4 = vpcmpeqd_avx(ZEXT116(param_4),SUB6416(ZEXT464(0),0));
  auVar4 = vblendvps_avx(auVar26._0_16_,SUB6416(ZEXT464(0x3ee66666),0),auVar4);
  fVar23 = (local_e4 - local_ec) * fVar25;
  local_100 = auVar4._0_4_;
  fVar18 = ((float)(DAT_180b0a4b0 >> 0x18) / 255.0) * local_100;
  if (auVar24._0_4_ <= fVar18) {
    auVar4 = vminss_avx(auVar26._0_16_,ZEXT416((uint)fVar18));
    fVar18 = auVar4._0_4_;
  }
  else {
    fVar18 = 0.0;
  }
  local_fc = DAT_180b0a41c + local_e8;
  local_f8 = DAT_180b0a41c + local_e4;
  local_108 = local_f0 - DAT_180b0a41c;
  uVar8 = DAT_180b0a4b0 & 0xffffff;
  uVar15 = (uint)(longlong)(fVar18 * 255.0 + fVar25);
  local_110 = 0;
  local_118 = DAT_180b0a41c + fVar23;
  local_104 = local_ec - DAT_180b0a41c;
  fVar18 = DAT_180b0a41c;
  FUN_1804df870(lVar3,&local_108,&local_fc,uVar15 << 0x18 | uVar8);
  auVar22 = ZEXT464((uint)(fVar17 * 0.07));
  uVar9 = FUN_180462ad0(DAT_180b0a550,DAT_180b0a4b8,uVar19);
  uVar10 = FUN_180462ad0(uVar9,0xffffffff,auVar22._0_8_);
  uVar7 = uVar10;
  if (param_4 == 0) {
    uVar7 = 0;
    uVar14 = 0;
    do {
      fVar20 = (float)(DAT_1808da488 >> (uVar14 & 0x1f) & 0xff);
      uVar7 = uVar7 | (int)(longlong)
                           (((float)(uVar10 >> (uVar14 & 0x1f) & 0xff) - fVar20) * 0.6 + fVar20 +
                           fVar25) << (uVar14 & 0x1f);
      uVar14 = uVar14 + 8;
    } while ((int)uVar14 < 0x20);
  }
  local_110 = 0;
  local_118 = fVar23;
  FUN_1804df870(lVar3,&local_f0,&local_e8,uVar7);
  local_108 = param_5 * 7.75 * DAT_180b0a41c + local_f0;
  fVar20 = param_5 * 7.2 * DAT_180b0a41c;
  local_104 = fVar23 + local_ec;
  local_108 = ((local_e8 - fVar20) - local_108) * (float)uVar19 + local_108;
  fVar23 = param_5 * 6.35 * DAT_180b0a41c;
  auVar22 = ZEXT464((uint)(fVar17 * 0.2));
  fVar20 = fVar20 - fVar23;
  auVar27 = ZEXT464((uint)(fVar20 * (float)uVar19 + fVar23));
  uVar9 = FUN_180462ad0(DAT_180b0a4c8,fVar20,uVar19);
  fVar17 = (float)uVar19;
  uVar7 = FUN_180462ad0(uVar9,0xffffffff,auVar22._0_8_);
  fVar23 = auVar24._0_4_;
  if (param_4 == 0) {
    fVar20 = fVar23;
    if (fVar23 <= local_100 + 0.1) {
      auVar4 = vminss_avx(auVar26._0_16_,ZEXT416((uint)(local_100 + 0.1)));
      fVar20 = auVar4._0_4_;
    }
    uVar10 = 0;
    do {
      fVar21 = (float)(DAT_180b0a550 >> (uVar10 & 0x1f) & 0xff);
      uVar16 = uVar16 | (int)(longlong)
                             (((float)(uVar7 >> (uVar10 & 0x1f) & 0xff) - fVar21) * fVar20 + fVar21
                             + fVar25) << (uVar10 & 0x1f);
      uVar10 = uVar10 + 8;
    } while ((int)uVar10 < 0x20);
    uVar7 = uVar16;
  }
  fVar17 = ((float)(uVar15 & 0xff) / fVar28) * (auVar26._0_4_ - fVar17);
  if (fVar23 <= fVar17) {
    auVar4 = vminss_avx(auVar26._0_16_,ZEXT416((uint)fVar17));
    fVar23 = auVar4._0_4_;
  }
  local_118 = 6.72623e-44;
  FUN_1804e01c0(lVar3,&local_108,auVar27._0_4_ + fVar18,
                (int)(longlong)(fVar23 * fVar28 + fVar25) << 0x18 | uVar8);
  local_118 = 6.72623e-44;
  FUN_1804e01c0(lVar3,&local_108,auVar27._0_8_,uVar7);
}



