// FUN_1805589f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805589f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805589f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auStack_118 [32];
  undefined *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined1 local_d0;
  float local_c8;
  float local_c4;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  FUN_1804c2800("Path Glow");
  auVar20 = ZEXT464(0x3f800000);
  fVar19 = 0.5;
  auVar18 = ZEXT864(0);
  local_b8 = 0;
  local_b0 = 0;
  if (DAT_180bbecdb == '\0') {
    fVar17 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar5 = vmaxss_avx(auVar20._0_16_,auVar5);
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar17 * DAT_180b0a41c + 0.5)),1);
    auVar6 = vunpcklps_avx(ZEXT416((uint)(auVar6._0_4_ + *(float *)(param_1 + 8) + auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_b8 = auVar6._0_8_;
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar17 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    auVar5 = vunpcklps_avx(ZEXT416((uint)((auVar6._0_4_ + *(float *)(param_1 + 8)) - auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_b0 = auVar5._0_8_;
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
  local_f8 = (undefined *)CONCAT71(local_f8._1_7_,1);
  puVar12 = (undefined2 *)FUN_1804aad60(local_c0,uVar14,&local_b8,&local_b0);
  lVar9 = DAT_180bb8ae8;
  uVar1 = *puVar12;
  cVar10 = *(char *)(puVar12 + 1);
  fVar17 = (local_b0._4_4_ + local_b8._4_4_) * fVar19;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(lVar9 + 0x14d0) + 0x2c8);
  if ((char)uVar1 != '\0') {
    local_f0 = (char *)((ulonglong)local_f0 & 0xffffffff00000000);
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(uVar4,&local_b8,&local_b0,DAT_180b0a538);
  }
  fVar16 = 17.0;
  local_c8 = DAT_180b0a41c * 17.0 + (float)local_b8;
  local_f8._0_4_ = 0x41300000;
  local_c4 = fVar17;
  FUN_180463dc0(uVar4,&local_c8,DAT_180b0a438,&DAT_180858a0c);
  uVar8 = DAT_180b0a410;
  local_c8 = DAT_180b0a41c * 32.0 + (float)local_b8;
  fVar15 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_c4 = fVar17 - fVar15 * fVar19;
  local_e8 = 0;
  local_f0 = "Path Glow";
  local_f8._0_4_ = uVar8;
  FUN_180463450(uVar4,DAT_180c62ca8,0x4157851f,&local_c8);
  local_a8 = (float)local_b0 - DAT_180b0a41c * fVar16;
  local_a4 = fVar17 - DAT_180b0a41c * 4.4;
  local_94 = DAT_180b0a41c * 4.4 + fVar17;
  local_a0 = local_a8 + DAT_180b0a41c * 2.3;
  local_a8 = local_a8 - DAT_180b0a41c * 2.3;
  local_e8 = CONCAT44(local_e8._4_4_,0x7f7fffff);
  local_f0 = (char *)((ulonglong)local_f0 & 0xffffffff00000000);
  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,DAT_180b0a41c * 1.6);
  local_9c = fVar17;
  local_98 = local_a8;
  FUN_1804d9a00(uVar4,&local_a8,3,DAT_180b0a518);
  if (cVar10 != '\0') {
    FUN_180488320("##settings");
  }
  cVar10 = FUN_180488630("##settings","Path Glow",param_5);
  if (cVar10 != '\0') {
    FUN_180488c60();
    local_f0 = (char *)0x0;
    local_f8 = (undefined *)((ulonglong)local_f8 & 0xffffffffffffff00);
    cVar10 = FUN_1804898a0(&DAT_1806bd384,param_4 + 0xd0,&DAT_180858a0c,1);
    if (cVar10 != '\0') {
      *(undefined1 *)(param_4 + 0xe0) = *(undefined1 *)(param_4 + 0xd0);
    }
    local_d0 = 0;
    local_e0 = &DAT_180830b60;
    local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)(param_4 + 0xd0));
    local_f0 = (char *)CONCAT44(local_f0._4_4_,0x3c23d70a);
    local_f8 = &DAT_1807c6e40;
    FUN_18048a250("Glow Strength",param_4 + 0x148,auVar18._0_8_,auVar20._0_8_);
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



