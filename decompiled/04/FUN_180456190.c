// FUN_180456190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180456190 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180456190(longlong param_1,float *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined1 auStack_138 [32];
  float local_118;
  undefined8 local_110;
  undefined4 local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc [4];
  undefined8 local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_b8;
  
  lVar2 = DAT_180bb8ae8;
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  auVar24 = ZEXT464(0x3f800000);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  auVar23 = vminss_avx(auVar24._0_16_,
                       ZEXT416((uint)(*(float *)(lVar2 + 0x40) * 7.0 + *(float *)(param_1 + 0x34))))
  ;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14d0) + 0x2c8);
  *(int *)(param_1 + 0x34) = auVar23._0_4_;
  local_d8 = param_3;
  FUN_1804c2800("##ambience_view");
  local_e8 = *(undefined4 *)(lVar2 + 0x20);
  fVar26 = 0.5;
  fVar25 = 255.0;
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 134.0 + 0.5)),1);
  local_c0 = auVar23._0_4_ + *param_2;
  auVar22 = ZEXT864(0);
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 0.0 + 0.5)),1);
  local_bc = auVar23._0_4_ + param_2[1];
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 633.0 + 0.5)),1);
  local_c8 = auVar23._0_4_ + *param_2;
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 485.0 + 0.5)),1);
  local_c4 = auVar23._0_4_ + param_2[1];
  fVar19 = ((float)(DAT_1808da494 >> 0x18) / 255.0) * 0.62;
  auVar23 = auVar24._0_16_;
  if (0.0 <= fVar19) {
    auVar5 = vminss_avx(auVar23,ZEXT416((uint)fVar19));
    fVar19 = auVar5._0_4_;
  }
  else {
    fVar19 = 0.0;
  }
  uVar10 = DAT_1808da494 & 0xffffff;
  local_118 = DAT_180b0a41c * 10.0;
  auVar21 = ZEXT464((uint)local_118);
  uVar16 = (uint)(longlong)(fVar19 * 255.0 + 0.5);
  if ((DAT_180c62c80 == 0) || (DAT_180c62c88 == 0)) {
    fVar19 = (float)(uVar16 & 0xff) / 255.0;
    auVar5 = vmaxss_avx(ZEXT416((uint)fVar19),ZEXT416(0x3c23d70a));
    auVar6 = vminss_avx(auVar23,ZEXT416((uint)(auVar5._0_4_ + 0.16)));
    fVar19 = (auVar6._0_4_ / auVar5._0_4_) * fVar19;
    if (0.0 <= fVar19) {
      auVar23 = vminss_avx(auVar23,ZEXT416((uint)fVar19));
      fVar19 = auVar23._0_4_;
    }
    else {
      fVar19 = 0.0;
    }
    uVar16 = (uint)(longlong)(fVar19 * 255.0 + 0.5);
  }
  else {
    FUN_1804d9170(lVar2);
    if (*(longlong *)(DAT_180bb8ae8 + 0xc48) != 0) {
      FUN_1804d9170(lVar2);
    }
    FUN_18045f920(lVar2,&local_c0,&local_c8,auVar21._0_8_);
    local_118 = auVar21._0_4_;
  }
  local_110 = (undefined *)((ulonglong)local_110._4_4_ << 0x20);
  FUN_1804df870(lVar2,&local_c0,&local_c8,uVar16 << 0x18 | uVar10);
  uVar8 = DAT_1808da490;
  auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar23 = vmaxss_avx(auVar24._0_16_,auVar23);
  auVar21 = ZEXT1664(auVar23);
  fVar19 = auVar23._0_4_ * fVar26;
  local_f8 = local_c8 - fVar19;
  local_f4 = local_c4 - fVar19;
  local_f0 = fVar19 + local_c0;
  local_ec = fVar19 + local_bc;
  auVar23 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 10.0 - fVar19)),auVar22._0_16_);
  local_118 = 0.0;
  FUN_1804dc420(lVar2,&local_f0,&local_f8,auVar23._0_8_);
  local_108 = 0x7f7fffff;
  local_110 = (undefined *)CONCAT44(local_110._4_4_,0x200);
  local_118 = auVar21._0_4_;
  FUN_1804d9a00(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar8);
  lVar15 = DAT_180bb8ae8;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  plVar3 = *(longlong **)(lVar15 + 0x14d0);
  lVar4 = plVar3[0x38];
  pcVar12 = "##popup_seen";
  uVar10 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar9 = '#';
  uVar16 = uVar10;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar9 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar16 = uVar10;
    }
    else {
      uVar16 = crc32(uVar16,cVar9);
    }
    cVar9 = *pcVar12;
  } while (cVar9 != '\0');
  uVar16 = ~uVar16;
  local_d0 = lVar4;
  if (*(uint *)(*plVar3 + 0x1534) == uVar16) {
    FUN_1804cf810(uVar16,0xb,"##popup_seen");
    lVar15 = DAT_180bb8ae8;
  }
  cVar9 = FUN_1804c3390(0x20e,0,0);
  if (((cVar9 == '\0') || (*(char *)(param_1 + 0x6bf4) != '\0')) ||
     (iVar11 = FUN_1804b13e0(lVar4,uVar16,0), iVar11 != 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  plVar3 = *(longlong **)(lVar15 + 0x14d0);
  fVar19 = DAT_180b0a41c * 610.0 + *param_2;
  fVar17 = DAT_180b0a41c * 22.0 + param_2[1];
  fVar20 = DAT_180b0a41c * 9.0;
  pcVar12 = "##close";
  uVar14 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar9 = '#';
  uVar10 = uVar14;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar9 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar10 = uVar14;
    }
    else {
      uVar10 = crc32(uVar10,cVar9);
    }
    cVar9 = *pcVar12;
  } while (cVar9 != '\0');
  uVar10 = ~uVar10;
  local_f8 = fVar19;
  local_f4 = fVar17;
  if (*(uint *)(*plVar3 + 0x1534) == uVar10) {
    FUN_1804cf810(uVar10,0xb,"##close");
  }
  local_f0 = fVar19 + fVar20;
  local_ec = fVar17 + fVar20;
  local_e4 = fVar19 - fVar20;
  local_e0 = fVar17 - fVar20;
  local_118 = (float)CONCAT31(local_118._1_3_,1);
  pbVar13 = (byte *)FUN_1804aad60(local_dc,uVar10,&local_e4,&local_f0);
  bVar1 = pbVar13[2];
  auVar23 = vpcmpeqd_avx(ZEXT116(*pbVar13),SUB6416(ZEXT464(0),0));
  auVar23 = vblendvps_avx(auVar24._0_16_,auVar22._0_16_,auVar23);
  uVar18 = FUN_1804aaa10(uVar10 + 1,auVar23._0_8_,0x41800000);
  fVar17 = (float)uVar18;
  fVar19 = auVar22._0_4_;
  if (fVar19 < fVar17) {
    fVar20 = ((float)(DAT_1808da48c >> 0x18) / fVar25) * fVar17;
    if (fVar19 <= fVar20) {
      auVar23 = vminss_avx(auVar24._0_16_,ZEXT416((uint)fVar20));
      fVar19 = auVar23._0_4_;
    }
    local_118 = 3.36312e-44;
    FUN_1804e01c0(lVar2,&local_f8,(fVar17 * 0.3 + 0.7) * DAT_180b0a41c * 10.0,
                  (int)(longlong)(fVar19 * fVar25 + fVar26) << 0x18 | DAT_1808da48c & 0xffffff);
  }
  local_118 = (float)FUN_180462ad0(DAT_1808da474,DAT_180b0a424,uVar18);
  local_110 = &DAT_180829a40;
  FUN_180463b40(lVar2,DAT_180c62cc0,0x41300000,&local_f8);
  uVar18 = FUN_180456860(param_1,param_2,local_d8);
  FUN_180459d20(uVar18,param_2,local_d8);
  FUN_1804b1650(local_d0,uVar16,0 < *(int *)(DAT_180bb8ae8 + 0x1ff8));
  fVar19 = *(float *)(param_1 + 0x34);
  if (fVar19 < auVar24._0_4_) {
    FUN_18047d320(lVar2,local_e8,(2.0 - fVar19) * fVar19,auVar22._0_8_);
  }
  iVar11 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar11 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar11 + -1;
  }
  if (bVar7 || bVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
}



