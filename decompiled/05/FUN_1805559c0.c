// FUN_1805559c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805559c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805559c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  byte bVar11;
  char *pcVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auStack_188 [32];
  undefined *local_168;
  char *local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 local_128;
  uint7 uStack_127;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  FUN_1804c2800("Material & Color");
  fVar20 = 0.5;
  auVar19 = ZEXT864(0);
  local_c0 = 0;
  local_b8 = 0;
  if (DAT_180bbecdb == '\0') {
    fVar18 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar5 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar5);
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar18 * DAT_180b0a41c + 0.5)),1);
    auVar6 = vunpcklps_avx(ZEXT416((uint)(auVar6._0_4_ + *(float *)(param_1 + 8) + auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_c0 = auVar6._0_8_;
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar18 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    auVar5 = vunpcklps_avx(ZEXT416((uint)((auVar6._0_4_ + *(float *)(param_1 + 8)) - auVar5._0_4_)),
                           ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 0xc))));
    local_b8 = auVar5._0_8_;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##options";
  uVar14 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar10 = '#';
  uVar15 = uVar14;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar10 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar15 = uVar14;
    }
    else {
      uVar15 = crc32(uVar15,cVar10);
    }
    cVar10 = *pcVar12;
  } while (cVar10 != '\0');
  uVar15 = ~uVar15;
  if (*(uint *)(*plVar3 + 0x1534) == uVar15) {
    FUN_1804cf810(uVar15,0xb,"##options");
  }
  local_168 = (undefined *)CONCAT71(local_168._1_7_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(&local_c8,uVar15,&local_c0,&local_b8);
  lVar9 = DAT_180bb8ae8;
  uVar1 = *puVar13;
  cVar10 = *(char *)(puVar13 + 1);
  fVar18 = (local_b8._4_4_ + local_c0._4_4_) * fVar20;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(lVar9 + 0x14d0) + 0x2c8);
  if ((char)uVar1 != '\0') {
    local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(uVar4,&local_c0,&local_b8,DAT_180b0a538);
  }
  fVar17 = 17.0;
  local_c8 = DAT_180b0a41c * 17.0 + (float)local_c0;
  local_168._0_4_ = 0x41300000;
  local_c4 = fVar18;
  FUN_180463dc0(uVar4,&local_c8,DAT_180b0a438,&DAT_18082a240);
  uVar8 = DAT_180b0a410;
  local_c8 = DAT_180b0a41c * 32.0 + (float)local_c0;
  fVar16 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_c4 = fVar18 - fVar16 * fVar20;
  local_158 = 0;
  local_160 = "Material & Color";
  local_168._0_4_ = uVar8;
  FUN_180463450(uVar4,DAT_180c62ca8,0x4157851f,&local_c8);
  fVar20 = (float)local_b8 - DAT_180b0a41c * fVar17;
  local_94 = DAT_180b0a41c * 4.4 + fVar18;
  local_98 = fVar20 - DAT_180b0a41c * 2.3;
  local_158 = CONCAT44(local_158._4_4_,0x7f7fffff);
  local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
  local_168 = (undefined *)CONCAT44(local_168._4_4_,DAT_180b0a41c * 1.6);
  local_a8 = (undefined **)CONCAT44(fVar18 - DAT_180b0a41c * 4.4,local_98);
  local_a0 = CONCAT44(fVar18,fVar20 + DAT_180b0a41c * 2.3);
  FUN_1804d9a00(uVar4,&local_a8,3,DAT_180b0a518);
  if (cVar10 != '\0') {
    FUN_180488320("##settings");
  }
  cVar10 = FUN_180488630("##settings","Material & Color",param_5);
  if (cVar10 != '\0') {
    FUN_180488c60();
    bVar11 = *(byte *)(param_4 + 0xe0);
    local_c8 = 1.5399894e-36;
    local_c4 = 1.6373235e-33;
    if (10 < bVar11) {
      if (bVar11 < 0x13) {
        bVar11 = *(byte *)((longlong)&local_c8 + (ulonglong)(bVar11 - 0xb));
      }
      else {
        bVar11 = 2;
      }
    }
    local_c8 = (float)(uint)bVar11;
    auStack_138 = ZEXT816(0);
    local_148 = 0;
    uStack_140 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    auVar5 = vunpcklps_avx(auVar19._0_16_,auVar19._0_16_);
    local_a8 = &PTR_s_Liquid_1806ff330;
    local_160 = (char *)&local_108;
    local_128 = 0;
    uStack_120 = 0;
    local_e8 = (ulonglong)uStack_127 << 8;
    local_d8 = auVar5._0_8_;
    local_168 = &DAT_18082a240;
    uStack_e0 = 0;
    local_a0 = 0xb;
    cVar10 = FUN_18048d220("Material",&local_c8,&local_a8,1);
    if (cVar10 != '\0') {
      *(undefined1 *)(param_4 + 0xe0) = local_c8._0_1_;
    }
    local_168 = (undefined *)CONCAT71(local_168._1_7_,1);
    FUN_1805367d0("Material Color",param_4 + 0xd0,&DAT_18082a268,1);
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



