// FUN_1804835d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804835d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804835d0(longlong *param_1,longlong param_2,longlong param_3,float param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined2 *puVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  undefined1 local_124 [12];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  lVar2 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
  iVar11 = *(int *)(lVar2 + 0x4c);
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (0xb < iVar11) {
    iVar11 = 0xb;
  }
  fVar27 = DAT_180b0a41c * 13.6;
  fVar20 = 0.5;
  auVar25 = ZEXT464(0x3f800000);
  auVar26 = ZEXT464(0x7f7fffff);
  local_148 = 0;
  local_158 = 0;
  local_160 = 0;
  *(int *)(lVar2 + 0x4c) = iVar11;
  local_168 = 0;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar27 + 0.5)),1);
  auVar24 = ZEXT864(0);
  puVar3 = (&PTR_s_Global_180830dd0)[iVar11];
  auVar5 = vmaxss_avx(auVar25._0_16_,auVar5);
  local_178 = (undefined1 *)((ulonglong)local_178 & 0xffffffff00000000);
  local_170 = puVar3;
  FUN_1804ea040(&local_138,DAT_180c62ca8,auVar5._0_8_,auVar26._0_8_);
  plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 66.7 + fVar20)),1);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 29.6 + (float)local_138 + fVar20))
                        ,1);
  auVar5 = vmaxss_avx(auVar5,auVar6);
  auVar23 = ZEXT1664(auVar5);
  uVar19 = auVar5._0_8_;
  pcVar12 = "##weapon";
  uVar14 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
  cVar9 = '#';
  uVar16 = uVar14;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar9 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar16 = uVar14;
    }
    else {
      uVar16 = crc32(uVar16,cVar9);
    }
    cVar9 = *pcVar12;
  } while (cVar9 != '\0');
  uVar16 = ~uVar16;
  if (*(uint *)(*plVar4 + 0x1534) == uVar16) {
    FUN_1804cf810(uVar16,0xb,"##weapon");
    uVar19 = auVar23._0_8_;
  }
  fVar17 = (float)FUN_1804aaa10(uVar16 + 3,uVar19);
  fVar27 = DAT_180b0a41c * 4.0;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4 + fVar20)),1);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar17 + fVar20)),1);
  auVar23 = ZEXT1664(auVar6);
  auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.5 + fVar20)),1);
  local_ec = auVar7._0_4_ + *(float *)(param_3 + 4);
  local_f0 = auVar5._0_4_;
  local_f8 = local_f0 + auVar6._0_4_;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 34.3 + fVar20)),1);
  local_f4 = auVar5._0_4_ + *(float *)(param_3 + 4);
  local_128 = (local_f4 + local_ec) * fVar20;
  local_178 = (undefined1 *)CONCAT71(local_178._1_7_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(local_124,uVar16,&local_f0,&local_f8);
  uVar1 = *puVar13;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar16)) {
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
  }
  if ((*(char *)(puVar13 + 1) != '\0') && (bVar15 == 0)) {
    FUN_1804c7740(uVar16,0);
  }
  if (((char)uVar1 == '\0') && (bVar15 == 0)) {
    uVar19 = auVar24._0_8_;
  }
  else {
    uVar19 = auVar25._0_8_;
  }
  uVar19 = FUN_1804aaa10(uVar16 + 1,uVar19,0x41800000);
  auVar5 = vpcmpeqd_avx(ZEXT116(bVar15),SUB6416(ZEXT464(0),0));
  auVar5 = vblendvps_avx(auVar25._0_16_,auVar24._0_16_,auVar5);
  fVar18 = (float)FUN_1804aaa10(uVar16 + 2,auVar5._0_8_,0x41800000);
  uVar10 = FUN_180462ad0(DAT_180b0a528,DAT_1808da48c,uVar19);
  fVar22 = (float)uVar19;
  local_170 = (undefined *)((ulonglong)local_170 & 0xffffffff00000000);
  local_178._0_4_ = fVar27;
  FUN_1804df870(param_2,&local_f0,&local_f8,uVar10);
  auVar5 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar5 = vmaxss_avx(auVar25._0_16_,auVar5);
  auVar21 = ZEXT1664(auVar5);
  uVar10 = FUN_180462ad0(DAT_180b0a4e0,DAT_180b0a40c,fVar18 * 0.35);
  fVar17 = auVar21._0_4_ * fVar20;
  local_118._4_4_ = local_f4 - fVar17;
  local_118._0_4_ = local_f8 - fVar17;
  vmaxss_avx(ZEXT416((uint)(fVar27 - fVar17)),auVar24._0_16_);
  local_178 = (undefined1 *)((ulonglong)local_178._4_4_ << 0x20);
  local_138 = (undefined **)CONCAT44(fVar17 + local_ec,fVar17 + local_f0);
  FUN_1804dc420(param_2,&local_138,local_118);
  local_168 = CONCAT44(local_168._4_4_,auVar26._0_4_);
  local_170 = (undefined *)CONCAT44(local_170._4_4_,0x200);
  local_178._0_4_ = (float)auVar21._0_4_;
  FUN_1804d9a00(param_2,*(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x50),uVar10);
  uVar8 = DAT_180b0a530;
  uVar10 = DAT_180b0a424;
  auVar24 = ZEXT464((uint)(fVar22 * 0.6));
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.3 + local_f0 + fVar20)),1);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 18.45 + fVar20)),1);
  *(undefined4 *)(param_2 + 0x50) = 0;
  local_138 = (undefined **)CONCAT44(auVar6._0_4_ + *(float *)(param_3 + 4),auVar5._0_4_);
  local_178._0_4_ = (float)FUN_180462ad0(uVar8,uVar10,fVar22 * 0.6);
  local_168 = 0;
  local_170 = puVar3;
  FUN_180463450(param_2,DAT_180c62ca8,0x4159999a,&local_138);
  local_e0 = local_f8 - DAT_180b0a41c * 13.0;
  fVar27 = DAT_180b0a41c * 0.3 + local_128;
  local_dc = (auVar25._0_4_ - (fVar18 + fVar18)) * DAT_180b0a41c * 1.5;
  local_e8 = local_e0 - DAT_180b0a41c * 3.0;
  local_e4 = fVar27 - local_dc;
  local_d8 = DAT_180b0a41c * 3.0 + local_e0;
  fVar20 = DAT_180b0a41c * 1.4;
  local_dc = local_dc + fVar27;
  local_d4 = local_e4;
  uVar10 = FUN_180462ad0(DAT_180b0a4ac,DAT_180b0a424,auVar24._0_8_);
  local_168 = CONCAT44(local_168._4_4_,auVar26._0_4_);
  local_170 = (undefined *)((ulonglong)local_170 & 0xffffffff00000000);
  local_178 = (undefined1 *)CONCAT44(local_178._4_4_,fVar20);
  FUN_1804d9a00(param_2,&local_e8,3,uVar10);
  auVar5 = vmaxss_avx(auVar23._0_16_,ZEXT416((uint)(DAT_180b0a41c * 150.0)));
  cVar9 = FUN_1804a8ab0(uVar16,&local_f0,&local_f8,auVar5._0_8_);
  if (cVar9 != '\0') {
    local_138 = &PTR_s_Global_180830dd0;
    local_178 = local_118;
    local_130 = 0xc;
    local_118 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    iVar11 = FUN_1804a9370(&local_138,*(undefined4 *)(lVar2 + 0x4c),0,local_108);
    if (-1 < iVar11) {
      *(int *)(lVar2 + 0x4c) = iVar11;
      FUN_1804c7bf0();
    }
    FUN_1804aeac0();
  }
}



