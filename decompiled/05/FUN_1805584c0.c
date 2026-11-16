// FUN_1805584c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805584c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805584c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined4 uVar10;
  char cVar11;
  char *pcVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_d8 [32];
  float local_b8;
  char *local_b0;
  undefined8 local_a8;
  float local_98;
  float local_94;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  FUN_1804c2800("Path Colors");
  fVar19 = 0.5;
  local_88 = 0;
  local_80 = 0;
  if (DAT_180bbecdb == '\0') {
    fVar18 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar6 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar6);
    auVar7 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    auVar8 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar18 * DAT_180b0a41c + 0.5)),1);
    auVar7 = vunpcklps_avx(ZEXT416((uint)(auVar7._0_4_ + *(float *)(param_1 + 8) + auVar6._0_4_)),
                           ZEXT416((uint)(auVar8._0_4_ + *(float *)(param_1 + 0xc))));
    local_88 = auVar7._0_8_;
    auVar7 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    auVar8 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar18 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    auVar6 = vunpcklps_avx(ZEXT416((uint)((auVar7._0_4_ + *(float *)(param_1 + 8)) - auVar6._0_4_)),
                           ZEXT416((uint)(auVar8._0_4_ + *(float *)(param_1 + 0xc))));
    local_80 = auVar6._0_8_;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##options";
  uVar14 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
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
  if (*(uint *)(*plVar3 + 0x1534) == uVar15) {
    FUN_1804cf810(uVar15,0xb,"##options");
  }
  local_b8 = (float)CONCAT31(local_b8._1_3_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(local_90,uVar15,&local_88,&local_80);
  lVar5 = DAT_180bb8ae8;
  uVar1 = *puVar13;
  cVar11 = *(char *)(puVar13 + 1);
  fVar18 = (local_80._4_4_ + local_88._4_4_) * fVar19;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8);
  if ((char)uVar1 != '\0') {
    local_b8 = DAT_180b0a41c * 5.0;
    local_b0 = (char *)((ulonglong)local_b0 & 0xffffffff00000000);
    FUN_1804df870(uVar4,&local_88,&local_80,DAT_180b0a538);
  }
  fVar17 = 17.0;
  local_98 = DAT_180b0a41c * 17.0 + (float)local_88;
  local_b8 = 11.0;
  local_94 = fVar18;
  FUN_180463dc0(uVar4,&local_98,DAT_180b0a438,&DAT_180859278);
  uVar10 = DAT_180b0a410;
  local_98 = DAT_180b0a41c * 32.0 + (float)local_88;
  fVar16 = (float)FUN_180463350(DAT_180c62ca8,0x4157851f);
  local_94 = fVar18 - fVar16 * fVar19;
  local_a8 = 0;
  local_b0 = "Path Colors";
  local_b8 = (float)uVar10;
  FUN_180463450(uVar4,DAT_180c62ca8,0x4157851f,&local_98);
  local_78 = (float)local_80 - DAT_180b0a41c * fVar17;
  local_74 = fVar18 - DAT_180b0a41c * 4.4;
  local_64 = DAT_180b0a41c * 4.4 + fVar18;
  local_70 = local_78 + DAT_180b0a41c * 2.3;
  local_78 = local_78 - DAT_180b0a41c * 2.3;
  local_a8 = CONCAT44(local_a8._4_4_,0x7f7fffff);
  local_b8 = DAT_180b0a41c * 1.6;
  local_b0 = (char *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_6c = fVar18;
  local_68 = local_78;
  FUN_1804d9a00(uVar4,&local_78,3,DAT_180b0a518);
  if (cVar11 != '\0') {
    FUN_180488320("##settings");
  }
  cVar11 = FUN_180488630("##settings","Path Colors",param_5);
  if (cVar11 != '\0') {
    if ((*(int *)(param_4[1] + 0x7e0) == 0) || (DAT_180c5a50c == 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    lVar5 = *param_4;
    FUN_1805302b0("Path colors");
    FUN_180488c60();
    local_b8._0_1_ = 1;
    FUN_1805367d0("Held Grenade Path",lVar5 + 0x138,&DAT_180829dc8,1);
    local_b8 = (float)CONCAT31(local_b8._1_3_,1);
    FUN_1805367d0("Thrown Grenade Path",lVar5 + 0x13c,&DAT_180859278,1);
    FUN_180488f10();
    if (bVar9) {
      FUN_1805302b0("When the predicted explosion deals damage");
      FUN_180488c60();
      local_b8._0_1_ = 1;
      FUN_1805367d0("Held Damage Path",lVar5 + 0x140,&DAT_18082a25c,1);
      local_b8 = (float)CONCAT31(local_b8._1_3_,1);
      FUN_1805367d0("Thrown Damage Path",lVar5 + 0x144,&DAT_18082a25c,1);
      FUN_180488f10();
    }
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



