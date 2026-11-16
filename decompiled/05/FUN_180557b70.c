// FUN_180557b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180557b70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180557b70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  char *pcVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 local_c0;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  FUN_1804c2800("Danger Pulse");
  auVar20 = ZEXT464(0x3e800000);
  auVar19 = ZEXT464(0x3f000000);
  local_b0 = 0;
  local_a8 = 0;
  if (DAT_180bbecdb == '\0') {
    fVar18 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar6 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar6);
    auVar7 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    auVar8 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar18 * DAT_180b0a41c + 0.5)),1);
    auVar7 = vunpcklps_avx(ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 8) + auVar6._0_4_)),
                           ZEXT416((uint)(auVar8._0_4_ + *(float *)(param_1 + 0xc))));
    local_b0 = auVar7._0_8_;
    auVar7 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    auVar8 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar18 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    auVar6 = vunpcklps_avx(ZEXT416((uint)((auVar7._0_4_ + *(float *)(param_1 + 8)) - auVar6._0_4_)),
                           ZEXT416((uint)(auVar8._0_4_ + *(float *)(param_1 + 0xc))));
    local_a8 = auVar6._0_8_;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##options";
  uVar14 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
  cVar11 = '#';
  uVar15 = uVar14;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar11 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar15 = uVar14;
    }
    else {
      uVar15 = crc32(uVar15,cVar11);
    }
    cVar11 = *pcVar12;
  } while (cVar11 != '\0');
  uVar15 = ~uVar15;
  if (*(uint *)(*plVar4 + 0x1534) == uVar15) {
    FUN_1804cf810(uVar15,0xb,"##options");
  }
  local_e8 = (char *)CONCAT71(local_e8._1_7_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(&local_b8,uVar15,&local_b0,&local_a8);
  lVar10 = DAT_180bb8ae8;
  uVar2 = *puVar13;
  cVar11 = *(char *)(puVar13 + 1);
  fVar18 = (local_a8._4_4_ + local_b0._4_4_) * auVar19._0_4_;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar5 = *(undefined8 *)(*(longlong *)(lVar10 + 0x14d0) + 0x2c8);
  if ((char)uVar2 != '\0') {
    local_e0 = local_e0 & 0xffffffff00000000;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(uVar5,&local_b0,&local_a8,DAT_180b0a538);
  }
  fVar17 = 17.0;
  local_b8 = DAT_180b0a41c * 17.0 + (float)local_b0;
  local_e8._0_4_ = 0x41300000;
  local_b4 = fVar18;
  FUN_180463dc0(uVar5,&local_b8,DAT_180b0a438,&DAT_180858a00);
  uVar9 = DAT_180b0a410;
  local_b8 = DAT_180b0a41c * 32.0 + (float)local_b0;
  fVar16 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_b4 = fVar18 - fVar16 * auVar19._0_4_;
  local_d8 = 0;
  local_e0._0_4_ = 0x808690b8;
  local_e0._4_4_ = 1;
  local_e8._0_4_ = uVar9;
  FUN_180463450(uVar5,DAT_180c62ca8,0x4157851f,&local_b8);
  local_a0 = (float)local_a8 - DAT_180b0a41c * fVar17;
  local_9c = fVar18 - DAT_180b0a41c * 4.4;
  local_8c = DAT_180b0a41c * 4.4 + fVar18;
  local_98 = local_a0 + DAT_180b0a41c * 2.3;
  local_a0 = local_a0 - DAT_180b0a41c * 2.3;
  local_d8 = CONCAT44(local_d8._4_4_,0x7f7fffff);
  local_e0._0_4_ = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,DAT_180b0a41c * 1.6);
  local_94 = fVar18;
  local_90 = local_a0;
  FUN_1804d9a00(uVar5,&local_a0,3,DAT_180b0a518);
  if (cVar11 != '\0') {
    FUN_180488320("##settings");
  }
  cVar11 = FUN_180488630("##settings","Danger Pulse",param_5);
  iVar3 = DAT_180c6272c;
  if (cVar11 != '\0') {
    FUN_180488c60();
    puVar1 = (undefined1 *)(param_4 + 0xe8);
    local_e0 = 0;
    local_e8 = (char *)((ulonglong)local_e8 & 0xffffffffffffff00);
    cVar11 = FUN_1804898a0("Pulse Near Danger",puVar1,&DAT_180858a00,1);
    if (cVar11 != '\0') {
      *(undefined1 *)(param_4 + 0xf8) = *puVar1;
    }
    local_e8 = (char *)CONCAT71(local_e8._1_7_,1);
    FUN_1805367d0("Danger Color",param_4 + 0x1b8,&DAT_18082a25c,*puVar1);
    local_c0 = 0;
    local_d0 = &DAT_18082a278;
    local_d8 = CONCAT71(local_d8._1_7_,*puVar1);
    local_e0._0_4_ = 0x3d4ccccd;
    local_e8 = "%.2f Hz";
    FUN_18048a250("Pulse Rate",param_4 + 0x1bc,auVar19._0_8_,0x40000000);
    if (iVar3 != 0) {
      local_c0 = 0;
      local_d0 = &DAT_18082a254;
      local_d8 = CONCAT71(local_d8._1_7_,*puVar1);
      local_e0._0_4_ = auVar20._0_4_;
      local_e8 = "%.2f m";
      FUN_18048a250("Warning Distance",param_4 + 0x1c0,auVar20._0_8_,0x41000000);
    }
    FUN_180488f10();
    if (iVar3 == 2) {
      FUN_1805302b0("Distance is measured outside the active fire area.");
    }
    FUN_1804aeac0();
  }
  iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar3 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
  }
}



