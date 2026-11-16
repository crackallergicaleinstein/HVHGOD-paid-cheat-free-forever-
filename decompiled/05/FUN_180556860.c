// FUN_180556860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180556860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180556860(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  char *pcVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined4 uVar22;
  undefined1 auStack_138 [32];
  char *local_118;
  char *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined1 local_f0;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  FUN_1804c2800("Ground Fire Area");
  uVar22 = 0x3dcccccd;
  auVar21 = ZEXT464(0x3f800000);
  auVar20 = ZEXT464(0x3f000000);
  auVar19 = ZEXT864(0);
  local_d8 = 0;
  local_d0 = 0;
  if (DAT_180bbecdb == '\0') {
    fVar18 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar5 = vmaxss_avx(auVar21._0_16_,auVar5);
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar18 * DAT_180b0a41c + 0.5)),1);
    auVar6 = vunpcklps_avx(ZEXT416((uint)(auVar6._0_4_ + *(float *)(param_1 + 8) + auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_d8 = auVar6._0_8_;
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar18 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    auVar5 = vunpcklps_avx(ZEXT416((uint)((auVar6._0_4_ + *(float *)(param_1 + 8)) - auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_d0 = auVar5._0_8_;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar11 = "##options";
  uVar13 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar10 = '#';
  uVar14 = uVar13;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar10 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar14 = uVar13;
    }
    else {
      uVar14 = crc32(uVar14,cVar10);
    }
    cVar10 = *pcVar11;
  } while (cVar10 != '\0');
  uVar14 = ~uVar14;
  if (*(uint *)(*plVar3 + 0x1534) == uVar14) {
    FUN_1804cf810(uVar14,0xb,"##options");
  }
  local_118 = (char *)CONCAT71(local_118._1_7_,1);
  puVar12 = (undefined2 *)FUN_1804aad60(local_e0,uVar14,&local_d8,&local_d0);
  lVar9 = DAT_180bb8ae8;
  uVar1 = *puVar12;
  cVar10 = *(char *)(puVar12 + 1);
  auVar17 = ZEXT464(0x40a00000);
  fVar18 = (local_d0._4_4_ + local_d8._4_4_) * auVar20._0_4_;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(lVar9 + 0x14d0) + 0x2c8);
  if ((char)uVar1 != '\0') {
    local_110 = (char *)((ulonglong)local_110 & 0xffffffff00000000);
    local_118 = (char *)CONCAT44(local_118._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(uVar4,&local_d8,&local_d0,DAT_180b0a538);
  }
  fVar16 = 17.0;
  local_e8 = DAT_180b0a41c * 17.0 + (float)local_d8;
  local_118._0_4_ = 0x41300000;
  local_e4 = fVar18;
  FUN_180463dc0(uVar4,&local_e8,DAT_180b0a438,&DAT_1808589fc);
  uVar8 = DAT_180b0a410;
  local_e8 = DAT_180b0a41c * 32.0 + (float)local_d8;
  fVar15 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_e4 = fVar18 - fVar15 * auVar20._0_4_;
  local_108 = 0;
  local_110 = "Ground Fire Area";
  local_118._0_4_ = uVar8;
  FUN_180463450(uVar4,DAT_180c62ca8,0x4157851f,&local_e8);
  local_c8 = (float)local_d0 - DAT_180b0a41c * fVar16;
  local_c4 = fVar18 - DAT_180b0a41c * 4.4;
  local_b4 = DAT_180b0a41c * 4.4 + fVar18;
  local_c0 = local_c8 + DAT_180b0a41c * 2.3;
  local_c8 = local_c8 - DAT_180b0a41c * 2.3;
  local_108 = CONCAT44(local_108._4_4_,0x7f7fffff);
  local_110 = (char *)((ulonglong)local_110 & 0xffffffff00000000);
  local_118 = (char *)CONCAT44(local_118._4_4_,DAT_180b0a41c * 1.6);
  local_bc = fVar18;
  local_b8 = local_c8;
  FUN_1804d9a00(uVar4,&local_c8,3,DAT_180b0a518);
  if (cVar10 != '\0') {
    FUN_180488320("##settings");
  }
  cVar10 = FUN_180488630("##settings","Ground Fire Area",param_5);
  if (cVar10 != '\0') {
    FUN_180488c60();
    local_118._0_1_ = 1;
    FUN_1805367d0("Area Fill Color",param_4,&DAT_18082a268,1);
    local_118 = (char *)CONCAT71(local_118._1_7_,1);
    FUN_1805367d0("Area Outline Color",param_4 + 4,&DAT_18082a288,1);
    local_f0 = 0;
    local_100 = &DAT_18082a254;
    local_108._0_1_ = 1;
    local_110 = (char *)CONCAT44(local_110._4_4_,uVar22);
    local_118 = "%.1f px";
    FUN_18048a250("Outline Width",param_4 + 8,auVar20._0_8_,auVar17._0_8_);
    FUN_180488f10();
    FUN_180488c60();
    local_110 = (char *)0x0;
    local_118 = (char *)((ulonglong)local_118 & 0xffffffffffffff00);
    cVar10 = FUN_1804898a0("Area Glow",param_4 + 0x10,&DAT_180858a0c,1);
    if (cVar10 != '\0') {
      *(undefined1 *)(param_4 + 0x20) = *(undefined1 *)(param_4 + 0x10);
    }
    local_f0 = 0;
    local_100 = &DAT_180830b60;
    local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(param_4 + 0x10));
    local_110 = (char *)CONCAT44(local_110._4_4_,0x3c23d70a);
    local_118 = "%.2f";
    FUN_18048a250("Glow Strength",param_4 + 0x78,auVar19._0_8_,auVar21._0_8_);
    FUN_180488f10();
    FUN_1804aeac0();
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
}



